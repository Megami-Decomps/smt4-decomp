/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001074dc` (_code @ 0x1074dc, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0b94(void);


int FUN_001074dc(short param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar4;
  unsigned char temp_v3;
  unsigned short temp_v4;
  
  temp_v1 = FUN_002c0b94();
  temp_v4 = *(short *)(temp_v1 + 0x1ec52) + param_1;
  temp_v2 = temp_v1;
  if (temp_v4 < 900) {
    temp_v2 = 0;
  }
  *(unsigned short *)(temp_v1 + 0x1ec52) = temp_v4;
  if (temp_v4 >= 900) {
    pbVar4 = (unsigned char *)(temp_v2 + 0x1ec51);
    *(unsigned short *)(temp_v1 + 0x1ec52) = temp_v4 - 900;
    temp_v0 = *pbVar4;
    temp_v3 = temp_v0 + 1;
    *pbVar4 = temp_v3;
    if (temp_v3 >= 0x18) {
      *pbVar4 = temp_v0 - 0x17;
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
