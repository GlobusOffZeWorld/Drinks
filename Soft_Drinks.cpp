//
// Created by globus on 12.12.2020.
//

#include "Soft_Drinks.h"

Soft_Drinks::Soft_Drinks(const std::string& drink_name, double container_volume, double sugar_content)
    : Bottled_Drinks(drink_name, container_volume) {
  if (sugar_content > 100) {
    std::cerr << "sugar content cant be greater than 100%\n";
    sugar_content = 100;
  }
  sugar_content_ = sugar_content;
}

double Soft_Drinks::GetSugarContent() const {
  return sugar_content_;
}
