#include "romwright_types.h"

extern "C" {


void FUN_00262f68(int param_1,unsigned short param_2)

{
  *(unsigned short *)(param_1 + 0x44) = *(unsigned short *)(param_1 + 0x44) & ~param_2;
  return;
}

} /* extern "C" */
