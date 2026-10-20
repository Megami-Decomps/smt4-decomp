#include "romwright_types.h"

extern "C" {


unsigned int FUN_002a2df8(int param_1)

{
  return (*(unsigned char *)(param_1 + 0x10) & 2) >> 1;
}

} /* extern "C" */
