#include "romwright_types.h"

extern "C" {


unsigned char FUN_002eb6ae(int param_1,unsigned short param_2)

{
  return (*(unsigned short *)(param_1 + 0x3c) & param_2) != 0;
}

} /* extern "C" */
