#include "romwright_types.h"

extern "C" {


unsigned char FUN_002f03f4(unsigned int param_1,unsigned int param_2)

{
  return ((param_1 >> 8) & param_2) != 0;
}

} /* extern "C" */
