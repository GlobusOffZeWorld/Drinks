//
// Created by globus on 12.12.2020.
//

#ifndef DRINKS__BEER_H_
#define DRINKS__BEER_H_

#include "Alcoholic_Drinks.h"

enum raw {barley, wheat, ginger};

class Beer : public Alcoholic_Drinks {
 public:
  std::string GetRawType() const;

  Beer(const std::string& drink_name, double container_volume, double alcohol_value, raw cereals);
  ~Beer() = default;

 private:
  raw raw_type_;
};

#endif //DRINKS__BEER_H_
