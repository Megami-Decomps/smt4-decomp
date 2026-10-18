/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002334d8` (_code @ 0x2334d8, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002b9220(int, unsigned int);
extern unsigned int FUN_002bf9f0(int);


unsigned int FUN_002334d8(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + param_2 * 0x8c;
  switch(param_2) {
  case 0:
  case 6:
    temp_v0 = FUN_002b9220(temp_v1 + 0x20,0);
    return temp_v0;
  case 1:
  case 2:
  case 3:
  case 5:
  case 7:
    temp_v0 = FUN_002bf9f0(temp_v1 + 0x20);
    return temp_v0;
  case 4:
    temp_v0 = FUN_002b9220(param_1 + 0x250,1);
    return temp_v0;
  default:
    return 0;
  }
}
