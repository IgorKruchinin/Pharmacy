#pragma once
#include "drug.h"
#include <memory>
#include <vector>
namespace Pharmacy {
class Order final : public std::enable_shared_from_this<Order> {
	std::string name;
	std::vector<Drug*> drugs;
public:
	Order(const std::string& name);
	static std::shared_ptr<Order> create_order(const std::string& name);
	void add_drug(std::shared_ptr<Drug> drug);
	void remove_drug(std::shared_ptr<Drug> drug);
	std::size_t drug_count() const noexcept;
	std::string to_string() const;
};
}
