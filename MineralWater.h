//
// Created by globus on 23.12.2020.
//

#ifndef DRINKS__MINERALWATER_H_
#define DRINKS__MINERALWATER_H_

#include "Soft_Drinks.h"

class MineralWater : public Soft_Drinks {
 public:
  double GetSaltContent() const;

  MineralWater(const std::string& drink_name, double container_volume, double sugar_content, double salt_content);
  ~MineralWater() = default;

 private:
  double salt_content_;
};

#endif //DRINKS__MINERALWATER_H_
