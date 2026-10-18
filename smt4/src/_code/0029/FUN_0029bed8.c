/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bed8` (_code @ 0x29bed8, 0x1e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
} param_1_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_0029bed8(unsigned int param_1)

{
/* irregular: 1 goto(s) */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14;
  int temp_v15;
  unsigned int *puVar17;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  
  temp_v14 = 0;
  if (*(char *)(DAT_0043e2ac + 0x9197) != '\0') {
    do {
      temp_v15 = (int)*(char *)(DAT_0043e2ac + 0x8c + temp_v14 + 0x90f0);
      if ((-1 < temp_v15) &&
         (temp_v15 = DAT_0043e2ac + 0x8c + temp_v15 * 0x604, puVar17 = (unsigned int *)(temp_v15 + 0x90),
         *(unsigned short *)(temp_v15 + 0xd6) == param_1)) goto LAB_0029bf50;
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < *(unsigned char *)(DAT_0043e2ac + 0x9197));
  }
  puVar17 = (unsigned int *)0x0;
LAB_0029bf50:
  if (param_1 < 0x501) {
    temp_v15 = DAT_0043e2ac + param_1 * 0x34;
    temp_v0 = *(unsigned char *)(puVar17 + 0x12);
    temp_v11 = *puVar17;
    temp_v1 = *(unsigned short *)(puVar17 + 1);
    temp_v2 = *(unsigned short *)((int)puVar17 + 6);
    temp_v16 = puVar17[0xc];
    temp_v17 = puVar17[0xd];
    temp_v18 = puVar17[0xe];
    temp_v19 = puVar17[0xf];
    temp_v20 = puVar17[0x10];
    temp_v12 = puVar17[8];
    temp_v3 = *(unsigned short *)(puVar17 + 2);
    temp_v4 = *(unsigned short *)((int)puVar17 + 10);
    temp_v13 = puVar17[9];
    temp_v5 = *(unsigned short *)(puVar17 + 3);
    temp_v6 = *(unsigned short *)((int)puVar17 + 0x592);
    temp_v7 = *(unsigned short *)(puVar17 + 0x165);
    temp_v8 = *(unsigned short *)((int)puVar17 + 0x596);
    temp_v9 = *(unsigned short *)(puVar17 + 0x166);
    temp_v10 = *(unsigned short *)(puVar17 + 0x164);
    *(unsigned int *)(temp_v15 + 0xc20c) =
         (*(unsigned int *)(temp_v15 + 0xc20c) & 0xff000000) | (unsigned int)*(unsigned short *)(puVar17 + 10) |
         ((((*(unsigned int *)(temp_v15 + 0xc20c) & 0xc30000) >> 0x10) |
          ((*(unsigned char *)((int)puVar17 + 0x601) & 0xf) << 2)) << 0x10);
    *(unsigned int *)(temp_v15 + 0xc1f8) = (unsigned int)temp_v0 | (((unsigned int)temp_v10 + (unsigned int)temp_v1) * 0x10000);
    *(unsigned int *)(temp_v15 + 0xc1fc) =
         (((unsigned int)temp_v2 + (unsigned int)temp_v6) & 0xffff) | (((unsigned int)temp_v3 + (unsigned int)temp_v7) * 0x10000);
    *(unsigned int *)(temp_v15 + 0xc200) =
         (((unsigned int)temp_v4 + (unsigned int)temp_v8) & 0xffff) | (((unsigned int)temp_v5 + (unsigned int)temp_v9) * 0x10000);
    *(unsigned char *)(temp_v15 + 0xc20e) = *(unsigned char *)(temp_v15 + 0xc20e) | 1;
    *(unsigned int *)(temp_v15 + 0xc204) = temp_v12;
    *(unsigned int *)(temp_v15 + 0xc208) = temp_v13;
    *(unsigned int *)(temp_v15 + 0xc210) = temp_v11;
    *(unsigned int *)(temp_v15 + 0xc228) = temp_v16;
    *(unsigned int *)(temp_v15 + 0xc214) = temp_v17;
    *(unsigned int *)(temp_v15 + 0xc218) = temp_v18;
    *(unsigned int *)(temp_v15 + 0xc21c) = temp_v19;
    *(unsigned int *)(temp_v15 + 0xc220) = temp_v20;
    *(unsigned int *)(temp_v15 + 0xc224) = *(unsigned int *)(temp_v15 + 0xc224);
  }
  return;
}
