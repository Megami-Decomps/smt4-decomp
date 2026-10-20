#include "romwright_types.h"

extern "C" {

int FUN_001f5180(int, int, int, float, float);

/* Supplied declaration required: FUN_001f5180. */


void FUN_004f2518(int param_1,float f0,float f1,float f2)

{
/* irregular: irregular input(s): in_s2; 2 native warning(s); review required */
  
  FUN_001f5180(param_1 + 0x58,(int)(short)(int)f2,0,f0,f1);
  *(unsigned int *)(param_1 + 0x64c) = *(unsigned int *)(param_1 + 0x64c) | 0x400000;
  return;
}

} /* extern "C" */
