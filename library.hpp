#pragma once

#include <iostream>
#include "dcmtk/dcmdata/dctk.h"

using namespace std;

class Foo {
 public:
  Foo(int value);
  ~Foo();
  int value() const;

 private:
  int m_value;
};
