//
// Created by globus on 23.12.2020.
//

#ifndef DRINKS__LEMONADE_H_
#define DRINKS__LEMONADE_H_

#include "Soft_Drinks.h"

class Lemonade : public Soft_Drinks{
 public:
  std::string GetTaste() const;

  Lemonade(const std::string& drink_name, double container_volume, double sugar_content, const std::string& taste);
  ~Lemonade() = default;
 private:
  std::string taste_;
};

#endif //DRINKS__LEMONADE_H_
