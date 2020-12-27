//
// Created by globus on 23.12.2020.
//

#include "Wine.h"

Wine::Wine(const std::string& drink_name, double container_volume, double alcohol_value, wine_types wine_type)
    : Alcoholic_Drinks(drink_name, container_volume, alcohol_value) {
  wine_type_ = wine_type;
}

std::string Wine::GetWineType() const {
  switch (wine_type_) {
    case dry:
      return "dry";
    case semi_dry:
      return "semi_dry";
    case semi_sweet:
      return "semi_sweet";
    case natural:
      return "natural";
  }
}