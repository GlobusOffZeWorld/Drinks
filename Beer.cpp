//
// Created by globus on 12.12.2020.
//

#include "Beer.h"

Beer::Beer(const std::string& drink_name, double container_volume, double alcohol_value, raw cereals)
    : Alcoholic_Drinks(drink_name, container_volume, alcohol_value) {
  raw_type_ = cereals;
}

std::string Beer::GetRawType() const {
  switch (raw_type_) {
    case barley:
      return "barley";
    case wheat:
      return "wheat";
    case ginger:
      return "ginger";
  }
}