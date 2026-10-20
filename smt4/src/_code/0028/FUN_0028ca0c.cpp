/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ca0c` (_code @ 0x28ca0c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */

extern int FUN_0026aa78(void);


void FUN_0028ca0c(unsigned short param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = DAT_0043e2ac + 0x90;
  temp_v0 = FUN_0026aa78();
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

} /* extern "C" */
