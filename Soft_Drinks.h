//
// Created by globus on 12.12.2020.
//

#ifndef DRINKS__SOFT_DRINKS_H_
#define DRINKS__SOFT_DRINKS_H_

#include "Bottled_Drinks.h"

class Soft_Drinks : public Bottled_Drinks {
 public:

  double GetSugarContent() const;

 protected:
  double sugar_content_;

  Soft_Drinks(const std::string& drink_name, double container_volume, double sugar_content);
  virtual ~Soft_Drinks() = default;
};

#endif //DRINKS__SOFT_DRINKS_H_
