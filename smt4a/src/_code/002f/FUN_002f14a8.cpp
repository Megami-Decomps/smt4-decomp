#include "romwright_types.h"

extern "C" {


unsigned char FUN_002f14a8(int param_1,unsigned char param_2)

{
  return (*(unsigned char *)(param_1 + 0x1c) & param_2) != 0;
}

} /* extern "C" */
