//
// Created by globus on 23.12.2020.
//

#ifndef DRINKS__COGNAC_H_
#define DRINKS__COGNAC_H_

#include "Alcoholic_Drinks.h"

enum classification {very_special, superior, very_superior_old_pale, very_very_superior_old_pale, extra_old };

class Cognac : public Alcoholic_Drinks {
 public:
  std::string GetClassification() const;

  Cognac(const std::string& drink_name, double container_volume, double alcohol_value, classification classification);
  ~Cognac() = default;

 private:
  classification classification_;
};

#endif //DRINKS__COGNAC_H_
