/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00391000` (_code @ 0x391000, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int uiAnimationAdvanceChannel(unsigned int *, unsigned int);
extern unsigned int FUN_002aa024(unsigned int, unsigned int);
extern int FUN_002b8ee0(unsigned int *, unsigned int);
extern unsigned int *jobGetWork(void);


unsigned int FUN_00391000(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  
  puVar1 = (unsigned int *)jobGetWork();
  puVar4 = puVar1 + 0x5e9;
  temp_v0 = *puVar4;
  if (temp_v0 != 0) {
    if (temp_v0 == 1) {
      return 0;
    }
    if (temp_v0 == 2) {
      temp_v1 = uiAnimationAdvanceChannel(puVar1 + 0x5ec,1);
      if (temp_v1 == 0) {
        return 0;
      }
      *puVar4 = 3;
      return 0;
    }
    if (temp_v0 != 3) {
      return 0;
    }
    temp_v0 = *puVar1 & 0xffffcfff;
  }
  else {
    temp_v1 = FUN_002b8ee0(puVar1 + 0x5f4,0);
    if (temp_v1 == 0) {
      return 0;
    }
    *puVar4 = 1;
    *puVar1 = *puVar1 | 0x2000;
    temp_v0 = FUN_002aa024(0x3a,0x45);
    puVar1 = puVar1 + 0x5eb;
  }
  *puVar1 = temp_v0;
  return 0;
}

} /* extern "C" */
