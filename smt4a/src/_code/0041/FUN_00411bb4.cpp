/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00411bb4` (_code @ 0x411bb4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057a4f8; /* 0x57a4f8 */


unsigned int FUN_00411bb4(unsigned int param_1,unsigned int param_2,int param_3)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  piVar1 = (int *)(DAT_0057a4f8 + 0xa4);
  temp_v1 = *piVar1;
  if (temp_v1 == 8) {
    param_3 = *(int *)(DAT_0057a4f8 + 0xa8);
  }
  if (temp_v1 == 8 && param_3 == 4) {
    temp_v0 = 0;
  }
  else {
    if (temp_v1 == 8) {
      param_3 = *(int *)(DAT_0057a4f8 + 0xa8);
    }
    if (temp_v1 == 8 && param_3 == 2) {
      temp_v0 = 1;
    }
    else {
      if (temp_v1 == 8) {
        piVar1 = *(int **)(DAT_0057a4f8 + 0xa8);
      }
      if (temp_v1 == 8 && piVar1 == (int *)0x3) {
        temp_v0 = 2;
      }
      else {
        temp_v0 = 0xffffffff;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
