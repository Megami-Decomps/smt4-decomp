/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e06bc` (_code @ 0x2e06bc, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bf9f0. */
extern int *FUN_002c0ac8(void);
/* Supplied declaration required: FUN_003428a4. */


unsigned int FUN_002e06bc(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  float temp_v2;
  
  piVar2 = (int *)FUN_002c0ac8();
  FUN_002bf9f0(piVar2 + 0xb);
  temp_v1 = piVar2[0xc];
  *(unsigned int *)(*piVar2 + 0x120) = (unsigned int)(temp_v1 != 0x71);
  *(unsigned int *)(piVar2[1] + 0x54) = (unsigned int)(temp_v1 != 0x71);
  temp_v0 = (char)piVar2[2];
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        temp_v1 = piVar2[1];
        temp_v2 = *(float *)(temp_v1 + 0x58) + 1.0f;
        *(float *)(temp_v1 + 0x58) = temp_v2;
        if ((int)temp_v2 >= 0x41f00000) {
          *(float *)(temp_v1 + 0x58) = temp_v2 - 30.0f;
        }
        temp_v2 = *(float *)(temp_v1 + 0x5c) + 12.0f;
        *(float *)(temp_v1 + 0x5c) = temp_v2;
        if ((int)temp_v2 >= 0x43b40001) {
          *(float *)(temp_v1 + 0x5c) = temp_v2 - 360.0f;
        }
      }
    }
    else {
      FUN_003428a4(*piVar2);
    }
  }
  return 0;
}
