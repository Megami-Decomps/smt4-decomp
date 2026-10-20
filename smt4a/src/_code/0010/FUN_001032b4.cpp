#include "romwright_types.h"

extern "C" {


unsigned int FUN_001032b4(int param_1)

{
  return *(unsigned int *)(param_1 + 0xc) & 0x80;
}

} /* extern "C" */
