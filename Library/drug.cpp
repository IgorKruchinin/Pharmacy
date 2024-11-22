#include "drug.h"

using namespace Pharmacy;

Drug::Drug(const std::string& name, const std::string& form, std::chrono::year_month_day& expire, const std::string& annotation, double price, const std::string& manufacturer)
	: name(name), form(form), expire(expire), annotation(annotation), price(price), manufacturer(manufacturer) {}

std::string Drug::get_name() {
	return this->name;
}
std::string Drug::get_form() {
	return this->form;
}
std::chrono::year_month_day Drug::get_expire() {
	return this->expire;
}
std::string Drug::get_annotation() {
	return this->annotation;
}
double Drug::get_price() {
	return this->price;
}
std::string Drug::get_manufacturer() {
	return this->manufacturer;
}
std::shared_ptr<Drug> Drug::create_drug(const std::string& name, const std::string& form, std::chrono::year_month_day& expire, const std::string& annotation, double price, const std::string& manufacturer) {
	return std::make_shared<Drug>(Drug{name, form, expire, annotation, price, manufacturer});
}
std::string Drug::to_string() {
        return this->name;
}
