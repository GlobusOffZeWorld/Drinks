//
// Created by globus on 23.12.2020.
//

#include "MineralWater.h"

MineralWater::MineralWater(const std::string& drink_name,
                           double container_volume,
                           double sugar_content,
                           double salt_content) : Soft_Drinks(drink_name, container_volume, sugar_content){
  salt_content_ = salt_content;
}

double MineralWater::GetSaltContent() const {
  return salt_content_;
}