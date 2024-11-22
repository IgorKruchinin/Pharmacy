#include <iostream>
#include "../Library/drug.h"
#include "../Library/pharmacy.h"

using namespace Pharmacy;

int main() {
    // Создаем заказ с именем "Order1"
    auto order = Order::create_order("Order1");

    // Создаем дату истечения срока (например, 31 декабря 2025 года)
    std::chrono::year_month_day expire_date{std::chrono::year{2025}, std::chrono::December, std::chrono::day{31}};

    // Создаем препараты
    auto drug1 = Drug::create_drug("Aspirin", "Tablet", expire_date, "Pain reliever", 5.99, "PharmaCo");
    auto drug2 = Drug::create_drug("Paracetamol", "Capsule", expire_date, "Fever reducer", 3.49, "HealthPlus");
    auto drug3 = Drug::create_drug("Ibuprofen", "Gel", expire_date, "Anti-inflammatory", 7.99, "MedCare");

    // Добавляем препараты в заказ
    order->add_drug(drug1);
    order->add_drug(drug2);
    order->add_drug(drug3);

    // Выводим информацию о заказе
    std::cout << "Order after adding drugs:\n" << order->to_string() << std::endl;

    // Удаляем один препарат
    order->remove_drug(drug2);

    // Выводим информацию о заказе после удаления препарата
    std::cout << "Order after removing Paracetamol:\n" << order->to_string() << std::endl;

    // Проверяем количество препаратов в заказе
    std::cout << "Number of drugs in the order: " << order->drug_count() << std::endl;

    return 0;
}
