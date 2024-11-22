#include "pharmacy.h"
#include <algorithm>
#include <sstream>

using namespace Pharmacy;

Order::Order(const std::string& name) : name(name) {}

std::shared_ptr<Order> Order::create_order(const std::string& name) {
	return std::make_shared<Order>(Order{name});
}
void Order::add_drug(std::shared_ptr<Drug> drug) {
	this->drugs.push_back(drug.get());
}
void Order::remove_drug(std::shared_ptr<Drug> drug) {
	this->drugs.erase(std::remove(this->drugs.begin(), this->drugs.end(), drug.get()));
}
std::size_t Order::drug_count() const noexcept {
	return this->drugs.size();
}
std::string Order::to_string() const {
	std::stringstream ss;
	ss << this->name << ": ";
	for (const auto e: drugs) {
		ss << e->to_string() << " ";
	}
	return ss.str();
}

