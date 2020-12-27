//
// Created by globus on 12.12.2020.
//

#include "Bottled_Drinks.h"

Bottled_Drinks::Bottled_Drinks(const std::string& drink_name, double container_volume) {
  drink_name_ = drink_name;
  container_volume_ = container_volume;
}

std::string Bottled_Drinks::GetDrinkName() const {
  return drink_name_;
}

double Bottled_Drinks::GetContainerVolume() const {
  return container_volume_;
}