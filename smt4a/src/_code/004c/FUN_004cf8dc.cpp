/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf8dc` (_code @ 0x4cf8dc, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00163aa4(int);
extern unsigned int FUN_00167458(int, unsigned int);


unsigned int FUN_004cf8dc(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  switch(param_2) {
  case 0:
  case 6:
    temp_v0 = FUN_00167458(param_1 + param_2 * 0x8c + 0x20,0);
    return temp_v0;
  case 1:
  case 2:
  case 3:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    temp_v0 = FUN_00163aa4(param_1 + param_2 * 0x8c + 0x20);
    return temp_v0;
  case 4:
    temp_v0 = FUN_00167458(param_1 + 0x250,1);
    return temp_v0;
  default:
    return 0;
  }
}

} /* extern "C" */
