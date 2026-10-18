/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd970` (_code @ 0x2cd970, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433278; /* 0x433278 */
extern unsigned char DAT_00478000; /* 0x478000 */


unsigned char * FUN_002cd970(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  if (-1 < (DAT_00433278 - param_1) - 1) {
    temp_v1 = 0;
    do {
      temp_v0 = temp_v1 * 0x18 + param_1 * 0x148;
      if (*(int *)(&DAT_00478000 + temp_v0 + 0x30) == param_2) {
        return &DAT_00478000 + temp_v1 * 0x18 + param_1 * 0x148 + 0x2c;
      }
      if (*(int *)(&DAT_00478000 + temp_v0 + 0x48) == param_2) {
        return &DAT_00478000 + temp_v1 * 0x18 + param_1 * 0x148 + 0x44;
      }
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < 6);
  }
  return (unsigned char *)0x0;
}
