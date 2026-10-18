/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231ad4` (_code @ 0x231ad4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2950(void);


void FUN_00231ad4(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c2950();
  temp_v1 = param_3 * 5 + param_2;
  temp_v2 = temp_v1 % 8;
  temp_v1 = (int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1d)) >> 3;
  if (param_1 != 0x65) {
    if (param_1 != 0x66) {
      if (((param_1 == 0x67) && (-1 < param_2)) &&
         ((param_2 < 5 && ((-1 < param_3 && (param_3 < 7)))))) {
        *(unsigned char *)(temp_v0 + temp_v1 + 0xd8c) =
             *(unsigned char *)(temp_v0 + temp_v1 + 0xd8c) | (unsigned char)(1 << (temp_v2 & 0xff));
      }
    }
    else if (((-1 < param_2) && (param_2 < 5)) && ((-1 < param_3 && (param_3 < 7)))) {
      *(unsigned char *)(temp_v0 + temp_v1 + 0xd84) =
           *(unsigned char *)(temp_v0 + temp_v1 + 0xd84) | (unsigned char)(1 << (temp_v2 & 0xff));
      return;
    }
  }
  else if ((((-1 < param_2) && (param_2 < 5)) && (-1 < param_3)) && (param_3 < 7)) {
    *(unsigned char *)(temp_v0 + temp_v1 + 0xd7c) =
         *(unsigned char *)(temp_v0 + temp_v1 + 0xd7c) | (unsigned char)(1 << (temp_v2 & 0xff));
    return;
  }
  return;
}
