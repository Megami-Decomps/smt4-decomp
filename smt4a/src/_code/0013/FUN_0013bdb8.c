/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013bdb8` (_code @ 0x13bdb8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014af84(void);


int FUN_0013bdb8(short param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar4;
  unsigned char temp_v3;
  unsigned short temp_v4;
  
  temp_v1 = FUN_0014af84();
  temp_v4 = *(short *)(temp_v1 + 0x2158a) + param_1;
  temp_v2 = temp_v1;
  if (temp_v4 < 900) {
    temp_v2 = 0;
  }
  *(unsigned short *)(temp_v1 + 0x2158a) = temp_v4;
  if (temp_v4 >= 900) {
    *(unsigned short *)(temp_v1 + 0x2158a) = temp_v4 - 900;
    pbVar4 = (unsigned char *)(temp_v2 + 0x21589);
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
