#include "romwright_types.h"

extern "C" {


unsigned int FUN_003b5e80(unsigned int param_1,int param_2,int param_3)

{
  return param_1 | (param_2 << 4) | (param_3 << 8);
}

} /* extern "C" */
