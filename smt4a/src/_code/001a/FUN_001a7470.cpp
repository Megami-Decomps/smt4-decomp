#include "romwright_types.h"

extern "C" {


unsigned char FUN_001a7470(int param_1)

{
  return *(unsigned char *)(param_1 + 0x10) & 1;
}

} /* extern "C" */
