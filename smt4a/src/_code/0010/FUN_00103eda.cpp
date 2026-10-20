#include "romwright_types.h"

extern "C" {


unsigned int FUN_00103eda(int param_1,int param_2)

{
  if (param_1 == 0) {
    if (param_2 == 1) {
      return 1;
    }
  }
  else if (param_1 == 1) {
    if (param_2 == 2) {
      return 1;
    }
    if (param_2 == 3) {
      return 1;
    }
    if (param_2 == 4) {
      return 1;
    }
  }
  else if ((param_1 == 2 || param_1 == 3 || param_1 == 4) && param_2 == 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
