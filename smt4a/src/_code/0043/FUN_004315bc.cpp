#include "romwright_types.h"

extern "C" {


unsigned int FUN_004315bc(int param_1,int param_2)

{
  if (param_1 != 10) {
    if (param_1 != 0xd) {
      return 0;
    }
    if (param_2 == 10) {
      return 2;
    }
  }
  return 1;
}

} /* extern "C" */
