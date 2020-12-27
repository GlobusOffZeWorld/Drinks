//
// Created by globus on 12.12.2020.
//

#ifndef DRINKS__BOTTLED_DRINKS_H_
#define DRINKS__BOTTLED_DRINKS_H_

#include <iostream>
#include <string>

#pragma once

class Bottled_Drinks {
 public:

  std::string GetDrinkName() const;
  double GetContainerVolume() const;

 protected:
  std::string drink_name_;
  double container_volume_;

  Bottled_Drinks(const std::string& drink_name, double container_volume);
  virtual ~Bottled_Drinks() = default;

};

#endif //DRINKS__BOTTLED_DRINKS_H_
