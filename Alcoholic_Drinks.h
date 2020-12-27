//
// Created by globus on 12.12.2020.
//

#ifndef DRINKS__ALCOHOLIC_DRINKS_H_
#define DRINKS__ALCOHOLIC_DRINKS_H_

#include "Bottled_Drinks.h"

class Alcoholic_Drinks : public Bottled_Drinks {
 public:
  double GetAlcoholValue() const;

 protected:
  double alcohol_value_;

  Alcoholic_Drinks(const std::string& drink_name, double container_volume, double alcohol_value);
  virtual ~Alcoholic_Drinks() = default;

};

#endif //DRINKS__ALCOHOLIC_DRINKS_H_
