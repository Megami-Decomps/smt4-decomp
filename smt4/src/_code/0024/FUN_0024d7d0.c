/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024d7d0` (_code @ 0x24d7d0, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00269bd0. */
/* Supplied declaration required: FUN_00269bf0. */
extern int FUN_00295c60(unsigned short, unsigned char);
extern int FUN_0029c8f4(int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0024d7d0(unsigned short *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  FUN_002c4938(param_1,0x5b0);
  temp_v0 = *(unsigned char *)(param_2 + 0x48);
  *param_1 = *(unsigned short *)(param_2 + 0x46);
  param_1[1] = (unsigned short)temp_v0;
  temp_v3 = FUN_00295c60(*(unsigned short *)(param_2 + 0x46),*(unsigned char *)(param_2 + 0x48));
  temp_v1 = *(unsigned short *)(param_2 + 0x2a);
  temp_v2 = *(unsigned short *)(param_2 + 0x2c);
  *(int *)(param_1 + 2) = temp_v3 - *(int *)(param_2 + 0x30);
  param_1[4] = temp_v1;
  param_1[5] = temp_v2;
  temp_v3 = param_2;
  FUN_00269bf0();
  temp_v1 = *(unsigned short *)(param_2 + 0x10);
  temp_v2 = *(unsigned short *)(param_2 + 0x44);
  param_1[6] = (short)temp_v3;
  param_1[7] = temp_v1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = temp_v2;
  *(unsigned int *)(param_1 + 0x2cc) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xb) = *(unsigned int *)(param_2 + 0xe);
  *(unsigned int *)(param_1 + 0xd) = *(unsigned int *)(param_2 + 0x12);
  *(unsigned int *)(param_1 + 0xf) = *(unsigned int *)(param_2 + 0x16);
  param_1[0x11] = *(unsigned short *)(param_2 + 0x1a);
  rt_memcpy_w(param_1 + 0x12,param_2,0xe);
  temp_v3 = FUN_0029c8f4(param_2);
  rt_memcpy_w(param_1 + 0x24,param_2 + 0x34,temp_v3 << 1);
  temp_v4 = (unsigned int)*(unsigned short *)(param_2 + 0x46);
  FUN_002bd06c(temp_v4);
  FUN_002bf694(param_1 + 0x2ce,temp_v4);
  if ((short)param_1[0xd] >= 1000) {
    param_1[0xd] = 999;
  }
  if ((short)param_1[0xe] >= 1000) {
    param_1[0xe] = 999;
  }
  if ((short)param_1[0xf] >= 1000) {
    param_1[0xf] = 999;
  }
  if ((short)param_1[0x10] >= 1000) {
    param_1[0x10] = 999;
  }
  temp_v4 = 0;
  if ((short)param_1[0x11] >= 1000) {
    param_1[0x11] = 999;
  }
  do {
    temp_v3 = param_2;
    FUN_00269bd0(param_2,temp_v4 & 0xff);
    temp_v5 = temp_v4 + 1;
    *(char *)((int)param_1 + temp_v4 + 0x32) = (char)temp_v3;
    temp_v4 = temp_v5;
  } while ((int)temp_v5 < 8);
  temp_v6 = *(unsigned int *)(param_2 + 0x50);
  temp_v7 = *(unsigned int *)(param_2 + 0x54);
  temp_v8 = *(unsigned int *)(param_2 + 0x58);
  temp_v9 = *(unsigned int *)(param_2 + 0x5c);
  temp_v10 = *(unsigned int *)(param_2 + 0x60);
  temp_v11 = *(unsigned int *)(param_2 + 100);
  temp_v12 = *(unsigned int *)(param_2 + 0x68);
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_2 + 0x4c);
  *(unsigned int *)(param_1 + 0x2e) = temp_v6;
  *(unsigned int *)(param_1 + 0x30) = temp_v7;
  *(unsigned int *)(param_1 + 0x32) = temp_v8;
  *(unsigned int *)(param_1 + 0x34) = temp_v9;
  *(unsigned int *)(param_1 + 0x36) = temp_v10;
  *(unsigned int *)(param_1 + 0x38) = temp_v11;
  *(unsigned int *)(param_1 + 0x3a) = temp_v12;
  temp_v6 = *(unsigned int *)(param_2 + 0x70);
  temp_v7 = *(unsigned int *)(param_2 + 0x74);
  temp_v8 = *(unsigned int *)(param_2 + 0x78);
  temp_v9 = *(unsigned int *)(param_2 + 0x7c);
  temp_v10 = *(unsigned int *)(param_2 + 0x80);
  temp_v11 = *(unsigned int *)(param_2 + 0x84);
  temp_v12 = *(unsigned int *)(param_2 + 0x88);
  *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(param_2 + 0x6c);
  *(unsigned int *)(param_1 + 0x3e) = temp_v6;
  *(unsigned int *)(param_1 + 0x40) = temp_v7;
  *(unsigned int *)(param_1 + 0x42) = temp_v8;
  *(unsigned int *)(param_1 + 0x44) = temp_v9;
  *(unsigned int *)(param_1 + 0x46) = temp_v10;
  *(unsigned int *)(param_1 + 0x48) = temp_v11;
  *(unsigned int *)(param_1 + 0x4a) = temp_v12;
  rt_memcpy_w(param_1 + 0x4c,param_2 + 0x8c,0x500);
  return;
}
