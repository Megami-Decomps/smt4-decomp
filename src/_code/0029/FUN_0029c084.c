/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c084` (_code @ 0x29c084, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_0029c084(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *pbVar4;
  unsigned char temp_v3;
  
  temp_v0 = DAT_0043e2ac;
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 2;
    temp_v3 = *(short *)(temp_v1 + 0x34) != 0;
    if (temp_v3) {
      temp_v1 = (unsigned int)*(short *)(temp_v1 + 0x34);
    }
    if ((temp_v3 && temp_v1 != 0) && (temp_v1 < 0x1f5)) {
      pbVar4 = (unsigned char *)(temp_v0 + ((int)(temp_v1 + ((unsigned int)((int)temp_v1 >> 0x1f) >> 0x1d)) >> 3) + 0x24bc4
                       );
      *pbVar4 = *pbVar4 | (unsigned char)(1 << (((int)temp_v1 % 8) & 0xffU));
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  return;
}
