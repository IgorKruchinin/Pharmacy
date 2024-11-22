#pragma once
#include <string>
#include <chrono>
namespace Pharmacy {
class Drug : public std::enable_shared_from_this<Drug> {
	std::string name;
	std::string form;
	std::chrono::year_month_day expire;
	std::string annotation;
	double price;
	std::string manufacturer;
	
public:
	Drug(const std::string& name, const std::string& form, std::chrono::year_month_day& expire, const std::string& annotation, double price, const std::string& manufacturer);
	static std::shared_ptr<Drug> create_drug(const std::string& name, const std::string& form, std::chrono::year_month_day& expire, const std::string& annotation, double price, const std::string& manufacturer);
	std::string get_name();
	std::string get_form();
	std::chrono::year_month_day get_expire();
	std::string get_annotation();
	double get_price();
	std::string get_manufacturer();
	std::string to_string();
};
}
