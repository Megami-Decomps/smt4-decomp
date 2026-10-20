#include "romwright_types.h"

extern "C" {


unsigned char FUN_002ccd58(int param_1,unsigned int param_2)

{
  return *(unsigned char *)(param_1 + 0x3894) == param_2;
}

} /* extern "C" */
