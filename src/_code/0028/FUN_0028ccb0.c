/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ccb0` (_code @ 0x28ccb0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */

extern int FUN_0026ace0(void);


void FUN_0028ccb0(unsigned short param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = DAT_0043e2ac + 0x90;
  temp_v0 = FUN_0026ace0();
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      if (*(short *)(temp_v2 + temp_v1 * 2 + 0x78) == 0) {
        *(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x78) = param_1;
        return;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  return;
}
