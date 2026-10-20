#include "romwright_types.h"

extern "C" {


unsigned char FUN_003bc96c(int param_1,unsigned int param_2)

{
  return ((unsigned int)*(unsigned char *)(param_1 + (param_2 >> 3) + 0x4c) & (1 << (param_2 & 7))) != 0;
}

} /* extern "C" */
