/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330ad4` (_code @ 0x330ad4, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005702f8; /* 0x5702f8 */
extern unsigned char DAT_005c6000; /* 0x5c6000 */


unsigned char * FUN_00330ad4(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  if (-1 < (DAT_005702f8 - param_1) - 1) {
    temp_v1 = 0;
    do {
      temp_v0 = temp_v1 * 0x18 + param_1 * 0x148;
      if (*(int *)(&DAT_005c6000 + temp_v0 + 0x30) == param_2) {
        return &DAT_005c6000 + temp_v1 * 0x18 + param_1 * 0x148 + 0x2c;
      }
      if (*(int *)(&DAT_005c6000 + temp_v0 + 0x48) == param_2) {
        return &DAT_005c6000 + temp_v1 * 0x18 + param_1 * 0x148 + 0x44;
      }
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < 6);
  }
  return (unsigned char *)0x0;
}

} /* extern "C" */
