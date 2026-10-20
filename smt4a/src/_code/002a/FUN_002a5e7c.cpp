/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5e7c` (_code @ 0x2a5e7c, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00409cd8(int, unsigned int);
int rt_memcpy_w(...);

/* stack frame of param_1: 17 slot(s), 39 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned char sp52; /* 0x52: local_52 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned short sp5A; /* 0x5a: local_5a */
    unsigned short sp5C; /* 0x5c: local_5c */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned short sp68; /* 0x68: local_68 */
} param_1_stack;

extern int DAT_0057f69c; /* 0x57f69c */

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00409cd8. */
extern unsigned int __aeabi_idivmod(int, int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002a5e7c(unsigned int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  short temp_v6;
  short temp_v7;
  short temp_v8;
  short temp_v9;
  short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned char temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned int temp_v19;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v20;
  unsigned int uStack_38;
  unsigned int temp_v21;
  unsigned char temp_v22 [20];
  
  temp_v1 = 0;
  if (*(char *)(DAT_0057f69c + 0x1d2f) != '\0') {
    do {
      temp_v2 = (int)*(char *)(DAT_0057f69c + 0x8c + temp_v1 + 0x1c88);
      if ((-1 < temp_v2) &&
         (temp_v2 = DAT_0057f69c + 0x8c + temp_v2 * 300, puVar5 = (unsigned short *)(temp_v2 + 0x68),
         *(unsigned short *)(temp_v2 + 0xca) == param_1)) goto LAB_002a5f00;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(unsigned char *)(DAT_0057f69c + 0x1d2f));
  }
  puVar5 = (unsigned short *)0x0;
LAB_002a5f00:
  if (param_1 < 0x501) {
    temp_v2 = DAT_0057f69c + param_1 * 0x50;
    rt_memcpy_w(&temp_v5,temp_v2 + 0x5f0c,0x50);
    temp_v5 = puVar5[0x32];
    temp_v21 = *(unsigned int *)(puVar5 + 0x18);
    temp_v17 = *puVar5;
    temp_v18 = puVar5[1];
    temp_v6 = puVar5[2] + puVar5[0x56];
    temp_v11 = puVar5[0x10];
    temp_v7 = puVar5[3] + puVar5[0x57];
    temp_v12 = puVar5[0x11];
    temp_v8 = puVar5[4] + puVar5[0x58];
    temp_v13 = puVar5[0x12];
    temp_v9 = puVar5[5] + puVar5[0x59];
    temp_v14 = puVar5[0x13];
    temp_v10 = puVar5[6] + puVar5[0x5a];
    temp_v15 = puVar5[0x14];
    temp_v19 = *(unsigned int *)(puVar5 + 0x1a);
    uStack_48 = *(unsigned int *)(puVar5 + 0x1c);
    uStack_44 = *(unsigned int *)(puVar5 + 0x1e);
    uStack_40 = *(unsigned int *)(puVar5 + 0x20);
    temp_v20 = *(unsigned int *)(puVar5 + 0x22);
    uStack_38 = *(unsigned int *)(puVar5 + 0x24);
    rt_memcpy_w(temp_v22,puVar5 + 0x26,0x12);
    temp_v16 = (temp_v16 & 0xc3) | ((*(unsigned char *)((int)puVar5 + 299) & 0xf) << 2);
    rt_memcpy_w(temp_v2 + 0x5f0c,&temp_v5,0x50);
    temp_v4 = 0;
    *(unsigned char *)(temp_v2 + 0x5f22) = *(unsigned char *)(temp_v2 + 0x5f22) | 1;
    temp_v3 = 0;
    temp_v2 = 0;
    do {
      puVar1 = (unsigned short *)((temp_v2 + 1U) & 0xffff);
      FUN_00184310();
      if ((puVar1 != (unsigned short *)0x0) && ((puVar1[5] & 1) != 0)) {
        temp_v3 = temp_v3 + 1;
        if ((*puVar1 < 0x501) &&
           ((*(unsigned short *)(DAT_0057f69c + (unsigned int)*puVar1 * 0x50 + 0x5f42) & 2) != 0)) {
          temp_v4 = temp_v4 + 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x4ff);
    temp_v0 = __aeabi_idivmod(temp_v4 * 100,temp_v3);
    FUN_00409cd8(5,temp_v0);
  }
  return;
}

} /* extern "C" */
