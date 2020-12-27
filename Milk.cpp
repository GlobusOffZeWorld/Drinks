//
// Created by globus on 23.12.2020.
//

#include "Milk.h"

Milk::Milk(const std::string& drink_name, double container_volume, double sugar_content, double fat_content) : Soft_Drinks(drink_name, container_volume, sugar_content){
  fat_content_ = fat_content;
}

double Milk::GetFatContent() const {
  return fat_content_;
}