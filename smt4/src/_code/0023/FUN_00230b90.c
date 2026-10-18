/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230b90` (_code @ 0x230b90, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002ae3c0(unsigned int);
extern unsigned short *FUN_002b63ac(void);


unsigned int FUN_00230b90(unsigned int param_1,unsigned int param_2)

{
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned short *)FUN_002b63ac();
  temp_v0 = FUN_002ae3c0(param_2);
  switch(temp_v0) {
  case 2:
    temp_v1 = (unsigned int)*puVar1;
    break;
  case 3:
    temp_v1 = (unsigned int)puVar1[1];
    break;
  case 4:
    temp_v1 = (unsigned int)puVar1[3];
    break;
  case 5:
    temp_v1 = (unsigned int)puVar1[4];
    break;
  case 6:
    temp_v1 = (unsigned int)puVar1[5];
    break;
  case 7:
    temp_v1 = (unsigned int)puVar1[6];
    break;
  case 8:
    temp_v1 = (unsigned int)puVar1[2];
    break;
  default:
    temp_v0 = 0;
    return temp_v0;
  }
  if (param_2 == temp_v1) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
