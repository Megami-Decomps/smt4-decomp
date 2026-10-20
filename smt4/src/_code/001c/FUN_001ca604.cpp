/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca604` (_code @ 0x1ca604, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_001ca604(unsigned int *param_1,int param_2)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  do {
    temp_v4 = temp_v3 + 1;
    temp_v2 = param_2 + temp_v3 * 0x44;
    param_1[temp_v3 * 0x11 + 4] = *(unsigned int *)(temp_v2 + 0x10);
    param_1[temp_v3 * 0x11 + 5] = *(unsigned int *)(temp_v2 + 0x14);
    param_1[temp_v3 * 0x11 + 6] = *(unsigned int *)(temp_v2 + 0x18);
    param_1[temp_v3 * 0x11 + 8] = *(unsigned int *)(temp_v2 + 0x20);
    param_1[temp_v3 * 0x11 + 9] = *(unsigned int *)(temp_v2 + 0x24);
    param_1[temp_v3 * 0x11 + 7] = *(unsigned int *)(temp_v2 + 0x1c);
    param_1[temp_v3 * 0x11 + 10] = *(unsigned int *)(temp_v2 + 0x28);
    param_1[temp_v3 * 0x11 + 0xb] = *(unsigned int *)(temp_v2 + 0x2c);
    param_1[temp_v3 * 0x11 + 0xc] = *(unsigned int *)(temp_v2 + 0x30);
    *(unsigned char *)(param_1 + temp_v3 * 0x11 + 0xd) = *(unsigned char *)(temp_v2 + 0x34);
    *(unsigned char *)((int)param_1 + temp_v3 * 0x44 + 0x35) = *(unsigned char *)(temp_v2 + 0x35);
    *(unsigned char *)((int)param_1 + temp_v3 * 0x44 + 0x36) = *(unsigned char *)(temp_v2 + 0x36);
    *(unsigned char *)((int)param_1 + temp_v3 * 0x44 + 0x37) = *(unsigned char *)(temp_v2 + 0x37);
    param_1[temp_v3 * 0x11 + 0xe] = *(unsigned int *)(temp_v2 + 0x38);
    param_1[temp_v3 * 0x11 + 0x10] = *(unsigned int *)(temp_v2 + 0x40);
    param_1[temp_v3 * 0x11 + 0x11] = *(unsigned int *)(temp_v2 + 0x44);
    *(unsigned short *)(param_1 + temp_v3 * 0x11 + 0xf) = *(unsigned short *)(temp_v2 + 0x3c);
    *(unsigned short *)(param_1 + temp_v3 * 0x11 + 0x12) = *(unsigned short *)(temp_v2 + 0x48);
    *(unsigned short *)((int)param_1 + temp_v3 * 0x44 + 0x4a) = *(unsigned short *)(temp_v2 + 0x4a);
    *(unsigned short *)(param_1 + temp_v3 * 0x11 + 0x13) = *(unsigned short *)(temp_v2 + 0x4c);
    param_1[temp_v3 * 0x11 + 0x14] = *(unsigned int *)(temp_v2 + 0x50);
    temp_v3 = temp_v4;
  } while (temp_v4 < 4);
  temp_v0 = *(unsigned char *)(param_1 + 0x4c);
  temp_v1 = *(unsigned char *)(param_2 + 0x130) & 1;
  *(unsigned char *)(param_1 + 0x4c) = (temp_v0 & 0xfe) | temp_v1;
  *(unsigned char *)(param_1 + 0x4c) = (temp_v0 & 0xf8) | temp_v1 | (*(unsigned char *)(param_2 + 0x130) & 6);
  param_1[1] = *(unsigned int *)(param_2 + 4);
  param_1[2] = *(unsigned int *)(param_2 + 8);
  param_1[3] = *(unsigned int *)(param_2 + 0xc);
  *param_1 = param_1[0x37];
  return;
}

} /* extern "C" */
