/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024d94c` (_code @ 0x24d94c, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00253d60(unsigned char *, unsigned short *);
int FUN_00253f94(void);
int FUN_0026242c(void);
int FUN_002b45e8(void);
int FUN_002bf694(unsigned short *, unsigned int);
int memClear(unsigned short *, int);
int rt_memcpy_w(unsigned short *, unsigned short *, int);

/* stack frame of param_2: 8 slot(s), 16 byte(s) */
typedef struct {
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_00253d60. */
/* Supplied declaration required: FUN_00253f94. */
/* Supplied declaration required: FUN_0026242c. */
extern int FUN_00295f28(unsigned char);
extern int FUN_0029aafc(void);
/* Supplied declaration required: FUN_002b45e8. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0024d94c(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char bStack_37;
  unsigned short temp_v8;
  unsigned char bStack_35;
  unsigned short temp_v9;
  unsigned char bStack_33;
  unsigned short temp_v10;
  unsigned char bStack_31;
  unsigned short temp_v11;
  unsigned char bStack_2f;
  unsigned short temp_v12;
  unsigned char bStack_2d;
  unsigned short temp_v13;
  unsigned char bStack_2b;
  unsigned short temp_v14;
  unsigned char bStack_29;
  
  memClear(param_1,0x5b0);
  temp_v1 = param_2[0x3b];
  *param_1 = 0xffff;
  param_1[1] = (unsigned short)(unsigned char)temp_v1;
  temp_v4 = FUN_00295f28((char)param_2[0x3b]);
  temp_v1 = param_2[0x15];
  temp_v0 = param_2[0x16];
  *(int *)(param_1 + 2) = temp_v4 - *(int *)(param_2 + 0x18);
  param_1[4] = temp_v1;
  param_1[5] = temp_v0;
  puVar6 = param_2;
  FUN_0026242c();
  temp_v1 = param_2[0xf];
  temp_v0 = param_2[0x39];
  param_1[6] = (short)(int)puVar6;
  param_1[7] = temp_v1;
  *(unsigned int *)(param_1 + 0x2cc) = 0xffffffff;
  param_1[10] = temp_v0;
  *(unsigned int *)(param_1 + 0xb) = *(unsigned int *)(param_2 + 0xe);
  *(unsigned int *)(param_1 + 0xd) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(param_1 + 0xf) = *(unsigned int *)(param_2 + 0x12);
  param_1[0x11] = param_2[0x14];
  *(unsigned int *)(param_1 + 0x12) = *(unsigned int *)(param_2 + 7);
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 9);
  *(unsigned int *)(param_1 + 0x16) = *(unsigned int *)(param_2 + 0xb);
  param_1[0x18] = param_2[0xd];
  *(unsigned int *)(param_1 + 0x1d) = *(unsigned int *)param_2;
  *(unsigned int *)(param_1 + 0x1f) = *(unsigned int *)(param_2 + 2);
  *(unsigned int *)(param_1 + 0x21) = *(unsigned int *)(param_2 + 4);
  param_1[0x23] = param_2[6];
  temp_v4 = FUN_0029aafc();
  rt_memcpy_w(param_1 + 0x24,param_2 + 0x1a,temp_v4 << 1);
  temp_v5 = FUN_002bd1fc();
  FUN_002bf694(param_1 + 0x2ce,temp_v5);
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
  if ((short)param_1[0x11] >= 1000) {
    param_1[0x11] = 999;
  }
  temp_v6 = (unsigned int)*param_2;
  FUN_002b45e8();
  if (temp_v6 != 0) {
    temp_v2 = FUN_00253f94();
    param_1[8] = temp_v2;
  }
  temp_v6 = (unsigned int)param_2[1];
  FUN_002b45e8();
  if (temp_v6 != 0) {
    temp_v2 = FUN_00253f94();
    param_1[9] = temp_v2;
  }
  temp_v6 = (unsigned int)param_2[2];
  FUN_002b45e8();
  if (temp_v6 != 0) {
    temp_v3 = FUN_00253f94();
    param_1[9] = temp_v3 + param_1[9];
  }
  FUN_00253d60(&temp_v7,param_2);
  *(unsigned char *)(param_1 + 0x19) = bStack_37 >> 2;
  *(unsigned char *)((int)param_1 + 0x33) = bStack_35 >> 2;
  *(unsigned char *)(param_1 + 0x1a) = bStack_33 >> 2;
  *(unsigned char *)((int)param_1 + 0x35) = bStack_31 >> 2;
  *(unsigned char *)(param_1 + 0x1b) = bStack_2f >> 2;
  *(unsigned char *)((int)param_1 + 0x37) = bStack_2d >> 2;
  *(unsigned char *)(param_1 + 0x1c) = bStack_2b >> 2;
  *(unsigned char *)((int)param_1 + 0x39) = bStack_29 >> 2;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x2e) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x32) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x36) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3a) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x3e) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x42) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x46) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4a) = 0;
  memClear(param_1 + 0x4c,0x500);
  return;
}

} /* extern "C" */
