/* Ported from Apocalypse's matching FUN_0042442c (FUN_0023a4f8 is its twin FUN_0042337c). */
#include "romwright_types.h"

extern "C" {

extern int FUN_0023a4f8(int);

unsigned char FUN_0034fe14(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023a4f8(param_1 + 0x158);
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0xc) = 7;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
