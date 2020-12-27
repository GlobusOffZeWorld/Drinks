//
// Created by globus on 23.12.2020.
//

#include "Lemonade.h"

Lemonade::Lemonade(const std::string& drink_name,
                   double container_volume,
                   double sugar_content,
                   const std::string& taste) : Soft_Drinks(drink_name, container_volume, sugar_content) {

  taste_ = taste;
}

std::string Lemonade::GetTaste() const {
  return taste_;
}


