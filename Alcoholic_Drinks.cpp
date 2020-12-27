//
// Created by globus on 12.12.2020.
//

#include "Alcoholic_Drinks.h"

Alcoholic_Drinks::Alcoholic_Drinks(const std::string& drink_name, double container_volume, double alcohol_value)
    : Bottled_Drinks(drink_name, container_volume) {
  if (alcohol_value > 100) {
    std::cerr << "alcohol value cant be greater than 100%\n";
    alcohol_value = 100;
  }
  alcohol_value_ = alcohol_value;
}

double Alcoholic_Drinks::GetAlcoholValue() const {
  return alcohol_value_;
}