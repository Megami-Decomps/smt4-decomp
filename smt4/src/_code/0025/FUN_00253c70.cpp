/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253c70` (_code @ 0x253c70, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


void FUN_00253c70(int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *pbVar5;
  
  temp_v1 = FUN_002c2950();
  temp_v2 = 0;
  while( 1 ) {
    temp_v3 = temp_v1 + temp_v2 * 0x14;
    pbVar5 = (unsigned char *)(temp_v3 + 0xf20);
    temp_v0 = *pbVar5;
    if (((temp_v0 & 1) != 0 && (temp_v0 & 4) != 0) &&
       (*(short *)(temp_v3 + 0xf26) == *(short *)(param_1 + 0x13a))) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x10) {
      return;
    }
  }
  *pbVar5 = *(unsigned char *)(temp_v1 + temp_v2 * 0x14 + 0xf20) | 0x10;
  return;
}

} /* extern "C" */
