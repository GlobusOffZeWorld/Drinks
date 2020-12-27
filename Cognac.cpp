//
// Created by globus on 23.12.2020.
//

#include "Cognac.h"

Cognac::Cognac(const std::string& drink_name, double container_volume, double alcohol_value,
               classification classification) : Alcoholic_Drinks(drink_name, container_volume, alcohol_value) {
  classification_ = classification;
}

std::string Cognac::GetClassification() const {
  switch (classification_) {
    case very_special:
      return "very_special";
    case superior:
      return "superior";
    case very_superior_old_pale:
      return "very_superior_old_pale";
    case very_very_superior_old_pale:
      return "very_very_superior_old_pale";
    case extra_old:
      return "extra_old";
  }
}