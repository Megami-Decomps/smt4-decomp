/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109240` (_code @ 0x109240, 0x37e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001077d6(...);
int wordRefMax(...);
int FUN_002eac34(int);
int FUN_002eb108(int, int, int, int);
int onlineTimeGetNow(unsigned char [12]);
int FUN_002eb5c0(int);
int FUN_002f13c2(int, unsigned int, unsigned int);
int FUN_002f1798(int, int);
int FUN_002f17e4(int, int);
int FUN_002f1840(int *, int *, int);
int FUN_002f1950(unsigned char *);
int FUN_002f27c0(unsigned char *);

typedef struct fn_00109240_arg0 fn_00109240_arg0;
struct fn_00109240_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8c];
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    undefined4 field_0x9c; /* +0x9c */
    undefined4 field_0xa0; /* +0xa0 */
    undefined4 field_0xa4; /* +0xa4 */
    unsigned char pad_0xa8[0x30];
    undefined4 field_0xd8; /* +0xd8 */
    undefined4 field_0xdc; /* +0xdc */
    undefined4 field_0xe0; /* +0xe0 */
    undefined4 field_0xe4; /* +0xe4 */
    unsigned char pad_0xe8[0x7c];
    undefined4 *field_0x164; /* +0x164 */
    undefined4 field_0x168; /* +0x168 */
    undefined4 field_0x16c; /* +0x16c */
    undefined4 field_0x170; /* +0x170 */
    undefined4 field_0x174; /* +0x174 */
    unsigned char pad_0x178[0x70];
    undefined4 field_0x1e8; /* +0x1e8 */
    undefined4 field_0x1ec; /* +0x1ec */
    undefined4 field_0x1f0; /* +0x1f0 */
    undefined4 field_0x1f4; /* +0x1f4 */
};

/* stack frame of param_5: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

extern unsigned char LAB_001095c4; /* 0x1095c4 */
extern unsigned char LAB_001095c8; /* 0x1095c8 */
extern unsigned char DAT_00558b3c; /* 0x558b3c */
extern unsigned char DAT_005592d4; /* 0x5592d4 */
extern int DAT_00594ab8; /* 0x594ab8 */
extern unsigned char DAT_00630324; /* 0x630324 */
extern unsigned char DAT_00630334; /* 0x630334 */

extern int FUN_00105696(int);
extern int FUN_00105f86(int);
/* Supplied declaration required: FUN_001077d6. */
extern int FUN_0012094c(unsigned int *, unsigned int);
/* Supplied declaration required: wordRefMax. */
extern unsigned int *rt_malloc(int);
extern int operatorNew(unsigned int);
/* Supplied declaration required: FUN_002eac34. */
extern unsigned int FUN_002eac54(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002eb108. */
extern int FUN_002eb530(int);
/* Supplied declaration required: onlineTimeGetNow. */
/* Supplied declaration required: FUN_002eb5c0. */
extern int constructObj00559344(unsigned char *, unsigned int);
extern int FUN_002eb5f4(void);
extern int *arrayElementAddress_002eee88(int, unsigned int);
extern int FUN_002ef01c(unsigned int);
extern unsigned int *arrayElementAddress_002efa50(int, unsigned int);
extern unsigned int FUN_002f1378(void);
/* Supplied declaration required: FUN_002f13c2. */
extern unsigned int *arrayElementAddress_002f14a0(int, unsigned int);
extern unsigned int *FUN_002f1744(fn_00109240_arg0 *, unsigned int);
extern unsigned int vectorGrowCapacity_002f1774(unsigned int, int *);
extern int vectorGrowCapacity_002f1786(unsigned int, int *);
/* Supplied declaration required: FUN_002f1798. */
/* Supplied declaration required: FUN_002f17e4. */
extern int FUN_002f182e(int *, unsigned int);
/* Supplied declaration required: FUN_002f1840. */
extern int FUN_002f1858(int, unsigned char *, unsigned int, unsigned char *);
extern int FUN_002f18f8(int);
/* Supplied declaration required: FUN_002f1950. */
/* Supplied declaration required: FUN_002f27c0. */


int FUN_00109240(fn_00109240_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned char param_5)

{
/* irregular: 12 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v3;
  unsigned int *puVar7;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar12;
  int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned char temp_v14 [8];
  int temp_v15;
  int temp_v16 [2];
  unsigned char temp_v17 [12];
  fn_00109240_arg0 *pfStack_24;
  unsigned int temp_v18;
  unsigned int uStack_1c;
  unsigned int temp_v19;
  
  pfStack_24 = param_1;
  temp_v18 = param_2;
  uStack_1c = param_3;
  temp_v19 = param_4;
  puVar4 = (unsigned int *)FUN_002f1744(param_1,param_2);
  *puVar4 = (unsigned int)&DAT_00558b3c;
  piVar12 = (int *)(puVar4 + 0x24);
  *(unsigned short *)((int)puVar4 + 0x8e) = 0;
  *piVar12 = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  temp_v16[0] = 1;
  temp_v12 = vectorGrowCapacity_002f1774(0,piVar12);
  piVar5 = (int *)wordRefMax(temp_v16,&temp_v12);
  temp_v3 = *piVar5;
  puVar7 = (unsigned int *)rt_malloc(temp_v3 * 4);
  *piVar12 = (int)puVar7;
  for (temp_v4 = temp_v16[0]; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
    if (puVar7 != (unsigned int *)0x0) {
      *puVar7 = 0;
    }
    puVar7 = puVar7 + 1;
  }
  puVar4[0x26] = *piVar12 + temp_v3 * 4;
  puVar4[0x25] = *piVar12 + temp_v16[0] * 4;
  piVar12 = (int *)(puVar4 + 0x27);
  *piVar12 = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  temp_v15 = 1;
  temp_v16[0] = vectorGrowCapacity_002f1786(0,piVar12);
  piVar5 = (int *)wordRefMax(&temp_v15,temp_v16);
  temp_v3 = *piVar5;
  puVar7 = (unsigned int *)rt_malloc(temp_v3 * 4);
  *piVar12 = (int)puVar7;
  for (temp_v4 = temp_v15; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
    if (puVar7 != (unsigned int *)0x0) {
      *puVar7 = 0;
    }
    puVar7 = puVar7 + 1;
  }
  puVar4[0x29] = *piVar12 + temp_v3 * 4;
  puVar4[0x28] = *piVar12 + temp_v15 * 4;
  temp_v4 = FUN_002ef01c(temp_v18);
  temp_v4 = FUN_0012094c(puVar4 + 0x31,*(unsigned int *)(temp_v4 + 0x8c));
  *(unsigned int *)(temp_v4 + 0x14) = 0;
  *(unsigned int *)(temp_v4 + 0x18) = 0;
  *(unsigned int *)(temp_v4 + 0x1c) = 0;
  *(unsigned int *)(temp_v4 + 0x20) = 0;
  temp_v4 = FUN_002eb530(temp_v4 + 0x24);
  temp_v4 = FUN_002eb530(temp_v4 + 8);
  temp_v4 = FUN_002eb530(temp_v4 + 0xc);
  *(unsigned int *)(temp_v4 + 0x1c) = 0;
  *(unsigned int *)(temp_v4 + 0x30) = 0;
  temp_v4 = temp_v4 + 0x34;
  FUN_002f1798(temp_v4,1);
  temp_v4 = temp_v4 + 0xc;
  FUN_002f17e4(temp_v4,1);
  *(unsigned char *)(temp_v4 + 0x24) = 0;
  piVar5 = (int *)(temp_v4 + 0x28);
  *piVar5 = 0;
  *(unsigned int *)(temp_v4 + 0x2c) = 0;
  *(unsigned int *)(temp_v4 + 0x30) = 0;
  *(unsigned int *)(temp_v4 + 0x38) = 0;
  *(unsigned int *)(temp_v4 + 0x34) = 0;
  temp_v3 = FUN_002f182e(piVar5,1);
  *(unsigned int *)(temp_v4 + 0x2c) = 0;
  *(int *)(temp_v4 + 0x38) = temp_v3 + 4;
  *piVar5 = temp_v3;
  FUN_002f1840(&temp_v10,piVar5,1);
  *(unsigned int *)(temp_v4 + 0x34) = temp_v11;
  *(unsigned int *)(temp_v4 + 0x30) = temp_v10;
  puVar4 = (unsigned int *)*piVar5;
  temp_v3 = 1;
  while (temp_v9 = temp_v3 != 0, temp_v3 = temp_v3 - 1, temp_v9) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  temp_v4 = FUN_002f1858(temp_v4 + 0x3c,&LAB_001095c8,1000,&LAB_001095c4);
  *(unsigned char **)(temp_v4 + 0x70) = &DAT_005592d4;
  *(unsigned int *)(temp_v4 + 0x80) = 0;
  *(unsigned int *)(temp_v4 + 0x78) = 0;
  *(unsigned int *)(temp_v4 + 0x74) = 0;
  *(unsigned int *)(temp_v4 + 0x7c) = 0;
  temp_v4 = FUN_00105f86(temp_v4 + 0x88);
  temp_v4 = FUN_00105696(temp_v4 + 0x70);
  temp_v4 = FUN_002f18f8(temp_v4 + 0xd0);
  temp_v8 = temp_v4 - 0x340;
  temp_v15 = temp_v4 - 0x2a0;
  *(unsigned char *)(temp_v4 - 0x284) = 0;
  *(unsigned char *)(temp_v4 - 0x283) = 0;
  *(unsigned char *)(temp_v4 - 0xd4) = 0;
  temp_v3 = operatorNew(0x28);
  if (temp_v3 != 0) {
    temp_v5 = FUN_002f1378();
  }
  else {
    temp_v5 = 0;
  }
  puVar4 = (unsigned int *)arrayElementAddress_002efa50(temp_v4 - 0x2b0,0);
  *puVar4 = temp_v5;
  temp_v3 = operatorNew(0x74);
  if (temp_v3 != 0) {
    temp_v6 = FUN_002ef01c(*(unsigned int *)(temp_v4 - 0x33c));
    temp_v5 = *(unsigned int *)(temp_v6 + 0x7c);
    temp_v6 = FUN_002ef01c(*(unsigned int *)(temp_v4 - 0x33c));
    FUN_002f13c2(temp_v3,*(unsigned int *)(temp_v6 + 0x78) & 0xffff,temp_v5);
  }
  else {
    temp_v3 = 0;
  }
  piVar5 = (int *)arrayElementAddress_002eee88(temp_v4 - 0x2a4,0);
  *piVar5 = temp_v3;
  temp_v3 = constructObj00559344(temp_v14,0);
  temp_v1 = *(unsigned short *)(temp_v3 + 4);
  *(unsigned short *)(temp_v4 - 0x254) = temp_v1;
  *(unsigned short *)(temp_v4 - 0x24c) = temp_v1;
  temp_v3 = constructObj00559344(temp_v14,0);
  *(unsigned short *)(temp_v4 - 0x240) = *(unsigned short *)(temp_v3 + 4);
  *(unsigned int *)(temp_v4 - 0x248) = temp_v19;
  *(unsigned int *)(temp_v4 - 0x298) = 0;
  *(unsigned int *)(temp_v4 - 0x280) = 0;
  *(unsigned char *)(temp_v4 - 500) = param_5;
  *(unsigned int *)(temp_v4 - 0x1f0) = 0;
  temp_v7 = FUN_002f1950(&DAT_00630334);
  temp_v7 = temp_v7 | (DAT_00594ab8 << 8);
  *(unsigned int *)(temp_v4 - 0x1f0) = temp_v7;
  temp_v0 = *(char *)(*(int *)(temp_v4 - 0x33c) + 4);
  if ((temp_v0 == '\n') || (temp_v0 == '\x02')) {
    temp_v3 = FUN_002eac34(temp_v0);
    if (*(char *)(temp_v3 + 0xa1) != '\x02') {
      temp_v7 = *(unsigned int *)(temp_v4 - 0x1f0);
      temp_v5 = FUN_002eac54(temp_v7,1);
      *(unsigned int *)(temp_v4 - 0x1f0) = temp_v5;
    }
  }
  else {
    temp_v5 = FUN_002eac54(temp_v7,1);
    *(unsigned int *)(temp_v4 - 0x1f0) = temp_v5;
  }
  temp_v3 = FUN_002eac34(*(unsigned char *)(*(int *)(temp_v4 - 0x33c) + 4));
  temp_v13 = temp_v4 - 0x240;
  *(unsigned short *)(temp_v4 - 0x23c) = (unsigned short)*(unsigned char *)(temp_v3 + 0xa0);
  temp_v3 = operatorNew(0x150);
  if (temp_v3 != 0) {
    temp_v10 = 0;
    FUN_002eb108(temp_v3,temp_v8,0,0x40);
  }
  *(int *)(temp_v4 - 0x294) = temp_v3;
  *(unsigned char *)(temp_v3 + 0x24) = param_5;
  *(unsigned int *)(*(int *)(temp_v4 - 0x294) + 0x8c) = *(unsigned int *)(temp_v4 - 0x1f0);
  *(char *)(*(int *)(temp_v4 - 0x294) + 0x67) = (char)*(unsigned short *)(temp_v13 + 4);
  puVar4 = (unsigned int *)arrayElementAddress_002f14a0(temp_v4 - 0x210,0);
  *puVar4 = 0;
  **(unsigned char **)(temp_v4 - 0x204) = 1;
  temp_v3 = FUN_002f1950(&DAT_00630324);
  if (temp_v3 != 0) {
    FUN_002f1950(&DAT_00630324);
  }
  else {
    onlineTimeGetNow(temp_v17);
    FUN_002eb5c0(0xff);
  }
  FUN_002f27c0(&DAT_00630324);
  temp_v3 = FUN_002f1950(&DAT_00630324);
  if (temp_v3 == 0) {
    FUN_002f1950(&DAT_00630324);
    FUN_002f27c0(&DAT_00630324);
  }
  temp_v2 = FUN_002f1950(&DAT_00630324);
  *(unsigned char *)(temp_v4 - 0x1f7) = temp_v2;
  *(unsigned char *)(temp_v4 - 0x1f8) = 0;
  *(unsigned char *)(temp_v4 - 0x1f6) = 0;
  *(unsigned char *)(temp_v4 - 0x1f5) = 0;
  *(unsigned int *)(temp_v4 - 0x1e8) = 0;
  *(unsigned int *)(temp_v4 - 0x1e4) = 0;
  *(unsigned char *)(temp_v15 + 0x10) = 0;
  temp_v3 = FUN_002ef01c(*(unsigned int *)(temp_v4 - 0x33c));
  *(unsigned int *)(temp_v4 - 0x28c) = *(unsigned int *)(temp_v3 + 0x74);
  temp_v3 = FUN_002ef01c(*(unsigned int *)(temp_v4 - 0x33c));
  *(unsigned int *)(temp_v4 - 0x288) = *(unsigned int *)(temp_v3 + 0x6c);
  temp_v3 = FUN_002eb5f4();
  *(int *)(temp_v4 - 0x144) = temp_v3 + 0xd4;
  FUN_001077d6(temp_v8);
  return temp_v8;
}

} /* extern "C" */
