//
// Created by globus on 23.12.2020.
//

#ifndef DRINKS__MILK_H_
#define DRINKS__MILK_H_

#include "Soft_Drinks.h"

class Milk : public Soft_Drinks{
 public:
  double GetFatContent() const;

  Milk(const std::string& drink_name, double container_volume, double sugar_content, double fat_content);

  virtual ~Milk() = default;

 private:
  double fat_content_;
};

#endif //DRINKS__MILK_H_
