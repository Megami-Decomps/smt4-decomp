/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050769c` (_code @ 0x50769c, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void FUN_0050769c(int param_1,int param_2,unsigned short *param_3)

{
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v3 = *(int *)(*(int *)(param_1 + 0x34) + param_2 * 0x2c);
  if (temp_v3 != 0) {
    *param_3 = *(unsigned short *)(temp_v3 + 4) | *param_3;
    *(unsigned int *)(param_3 + 0x1e) = *(unsigned int *)(temp_v3 + 0x58);
    *(unsigned int *)(param_3 + 0x20) = *(unsigned int *)(temp_v3 + 0x5c);
    *(unsigned int *)(param_3 + 0x22) = *(unsigned int *)(temp_v3 + 0x60);
    *(unsigned int *)(param_3 + 0x24) = *(unsigned int *)(temp_v3 + 100);
    *(unsigned int *)(param_3 + 0x26) = *(unsigned int *)(temp_v3 + 0x68);
    temp_v2 = 0;
    do {
      temp_v4 = temp_v2 + 1;
      *(unsigned int *)(param_3 + temp_v2 * 2 + 0x12) = *(unsigned int *)(temp_v3 + temp_v2 * 4 + 0x6c);
      temp_v2 = temp_v4;
    } while (temp_v4 < 6);
    *(unsigned int *)(param_3 + 0x2a) = *(unsigned int *)(temp_v3 + 0x84);
    *(unsigned char *)((int)param_3 + 3) = *(unsigned char *)(temp_v3 + 0xa4) >> 4;
    temp_v6 = *(unsigned int *)(temp_v3 + 0x10);
    temp_v7 = *(unsigned int *)(temp_v3 + 0x14);
    temp_v8 = *(unsigned int *)(temp_v3 + 0x18);
    temp_v9 = *(unsigned int *)(temp_v3 + 0x1c);
    temp_v10 = *(unsigned int *)(temp_v3 + 0x20);
    *(unsigned int *)(param_3 + 0x76) = *(unsigned int *)(temp_v3 + 0xc);
    *(unsigned int *)(param_3 + 0x78) = temp_v6;
    *(unsigned int *)(param_3 + 0x7a) = temp_v7;
    *(unsigned int *)(param_3 + 0x7c) = temp_v8;
    *(unsigned int *)(param_3 + 0x7e) = temp_v9;
    *(unsigned int *)(param_3 + 0x80) = temp_v10;
    temp_v6 = *(unsigned int *)(temp_v3 + 0x28);
    temp_v7 = *(unsigned int *)(temp_v3 + 0x2c);
    temp_v8 = *(unsigned int *)(temp_v3 + 0x30);
    temp_v9 = *(unsigned int *)(temp_v3 + 0x34);
    temp_v10 = *(unsigned int *)(temp_v3 + 0x38);
    *(unsigned int *)(param_3 + 0x82) = *(unsigned int *)(temp_v3 + 0x24);
    *(unsigned int *)(param_3 + 0x84) = temp_v6;
    *(unsigned int *)(param_3 + 0x86) = temp_v7;
    *(unsigned int *)(param_3 + 0x88) = temp_v8;
    *(unsigned int *)(param_3 + 0x8a) = temp_v9;
    *(unsigned int *)(param_3 + 0x8c) = temp_v10;
    temp_v6 = *(unsigned int *)(temp_v3 + 0x40);
    temp_v7 = *(unsigned int *)(temp_v3 + 0x44);
    temp_v8 = *(unsigned int *)(temp_v3 + 0x48);
    temp_v9 = *(unsigned int *)(temp_v3 + 0x4c);
    temp_v10 = *(unsigned int *)(temp_v3 + 0x50);
    *(unsigned int *)(param_3 + 0x8e) = *(unsigned int *)(temp_v3 + 0x3c);
    *(unsigned int *)(param_3 + 0x90) = temp_v6;
    *(unsigned int *)(param_3 + 0x92) = temp_v7;
    *(unsigned int *)(param_3 + 0x94) = temp_v8;
    *(unsigned int *)(param_3 + 0x96) = temp_v9;
    *(unsigned int *)(param_3 + 0x98) = temp_v10;
    *(unsigned int *)(param_3 + 4) = *(unsigned int *)(temp_v3 + 0xc0);
    param_3[0x10] = *(unsigned short *)(temp_v3 + 0x54);
    param_3[0x11] = *(unsigned short *)(temp_v3 + 0x56);
  }
  temp_v3 = *(int *)(param_1 + 0x34) + param_2 * 0x2c;
  *(unsigned int *)(param_3 + 0x9a) = *(unsigned int *)(*(int *)(temp_v3 + 0x18) + 0xc);
  *(unsigned int *)(param_3 + 0x9c) = *(unsigned int *)(*(int *)(temp_v3 + 0x18) + 0x1c);
  *(unsigned int *)(param_3 + 0x9e) = *(unsigned int *)(*(int *)(temp_v3 + 0x18) + 0x2c);
  temp_v3 = *(int *)(param_1 + 0x34) + param_2 * 0x2c;
  puVar3 = *(unsigned int **)(temp_v3 + 4);
  if (puVar3 != (unsigned int *)0x0) {
    temp_v0 = *(char *)(puVar3 + 6);
    temp_v6 = puVar3[1];
    *(unsigned int *)(param_3 + 0xa0) = *puVar3;
    *(unsigned int *)(param_3 + 0xa2) = temp_v6;
    if (temp_v0 == '\f') {
      temp_v1 = (unsigned char)param_3[1] | 1;
    }
    else {
      temp_v1 = (unsigned char)param_3[1] & 0xfe;
    }
    *(unsigned char *)(param_3 + 1) = temp_v1;
  }
  temp_v2 = *(int *)(temp_v3 + 8);
  if (temp_v2 != 0) {
    temp_v5 = *(char *)(temp_v2 + 0x18) == '\f';
    temp_v4 = temp_v2;
    if (temp_v5) {
      temp_v4 = 1;
    }
    temp_v6 = *(unsigned int *)(temp_v2 + 0xc);
    if (!temp_v5) {
      temp_v4 = 0;
    }
    *(unsigned int *)(param_3 + 0xa4) = *(unsigned int *)(temp_v2 + 8);
    *(unsigned int *)(param_3 + 0xa6) = temp_v6;
    if (temp_v4 != 0) {
      temp_v1 = (unsigned char)param_3[1] | 2;
    }
    else {
      temp_v1 = (unsigned char)param_3[1] & 0xfd;
    }
    *(unsigned char *)(param_3 + 1) = temp_v1;
  }
  temp_v3 = *(int *)(temp_v3 + 0xc);
  if (temp_v3 != 0) {
    temp_v5 = *(char *)(temp_v3 + 0x18) == '\f';
    temp_v2 = temp_v3;
    if (temp_v5) {
      temp_v2 = 1;
    }
    temp_v6 = *(unsigned int *)(temp_v3 + 0x10);
    if (!temp_v5) {
      temp_v2 = 0;
    }
    *(unsigned int *)(param_3 + 0xaa) = *(unsigned int *)(temp_v3 + 0x14);
    *(unsigned int *)(param_3 + 0xa8) = temp_v6;
    if (temp_v2 != 0) {
      temp_v1 = (unsigned char)param_3[1] | 4;
    }
    else {
      temp_v1 = (unsigned char)param_3[1] & 0xfb;
    }
    *(unsigned char *)(param_3 + 1) = temp_v1;
  }
  return;
}

} /* extern "C" */
