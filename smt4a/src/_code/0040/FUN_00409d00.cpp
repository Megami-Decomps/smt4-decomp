/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409d00` (_code @ 0x409d00, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);
extern int FUN_001bcea0(void);


void FUN_00409d00(void)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = FUN_001801a4();
  if (temp_v1 != 0) {
    temp_v0 = *(short *)(temp_v1 + 0x12);
    temp_v2 = FUN_001bcea0();
    temp_v3 = *(unsigned int *)(temp_v2 + 0x168);
    temp_v4 = (int)temp_v0;
    if ((unsigned int)(int)temp_v0 < temp_v3) {
      temp_v4 = temp_v3;
    }
    *(unsigned int *)(temp_v2 + 0x168) = temp_v4;
    temp_v0 = *(short *)(temp_v1 + 0x16);
    temp_v2 = FUN_001bcea0();
    temp_v3 = *(unsigned int *)(temp_v2 + 0x170);
    temp_v4 = (int)temp_v0;
    if ((unsigned int)(int)temp_v0 < temp_v3) {
      temp_v4 = temp_v3;
    }
    *(unsigned int *)(temp_v2 + 0x170) = temp_v4;
    temp_v0 = *(short *)(temp_v1 + 0x18);
    temp_v2 = FUN_001bcea0();
    temp_v3 = *(unsigned int *)(temp_v2 + 0x174);
    temp_v4 = (int)temp_v0;
    if ((unsigned int)(int)temp_v0 < temp_v3) {
      temp_v4 = temp_v3;
    }
    *(unsigned int *)(temp_v2 + 0x174) = temp_v4;
    temp_v0 = *(short *)(temp_v1 + 0x1a);
    temp_v2 = FUN_001bcea0();
    temp_v3 = *(unsigned int *)(temp_v2 + 0x178);
    temp_v4 = (int)temp_v0;
    if ((unsigned int)(int)temp_v0 < temp_v3) {
      temp_v4 = temp_v3;
    }
    *(unsigned int *)(temp_v2 + 0x178) = temp_v4;
    temp_v0 = *(short *)(temp_v1 + 0x14);
    temp_v1 = FUN_001bcea0();
    temp_v3 = *(unsigned int *)(temp_v1 + 0x16c);
    temp_v4 = (int)temp_v0;
    if ((unsigned int)(int)temp_v0 < temp_v3) {
      temp_v4 = temp_v3;
    }
    *(unsigned int *)(temp_v1 + 0x16c) = temp_v4;
  }
  return;
}

} /* extern "C" */
