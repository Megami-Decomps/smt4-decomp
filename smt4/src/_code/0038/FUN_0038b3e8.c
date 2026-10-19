/* Ported from Apocalypse's matching FUN_00473d28 (FUN_002348a8 is its twin FUN_0047d754). */
#include "romwright_types.h"

extern int FUN_002348a8(int);

unsigned char FUN_0038b3e8(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002348a8(param_1 + 0x88);
  return temp_v0 != 0;
}
