/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df7c4` (_code @ 0x3df7c4, 0x30c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int FUN_0034cb50(unsigned short *, int *, int);
int FUN_0048026c(unsigned int, int *);
int FUN_004cc6a4(int, unsigned short *, int *);
int FUN_004cceb8(int *, int);

/* stack frame of param_1: 10 slot(s), 28 byte(s) */
typedef struct {
    unsigned short sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned short sp52; /* 0x52: local_52 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
} param_1_stack;

extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_0034cb50. */
extern short FUN_003da998(unsigned int, unsigned int *);
extern short FUN_003daaf4(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_0048026c. */
/* Supplied declaration required: FUN_004cc6a4. */
/* Supplied declaration required: FUN_004cceb8. */


void FUN_003df7c4(unsigned short *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  short temp_v5;
  unsigned short temp_v6;
  int temp_v7;
  unsigned int unaff_r6;
  short temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int uStack_4c;
  int temp_v13;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned short temp_v16;
  
  if (param_1 == (unsigned short *)0x0) {
    param_1 = (unsigned short *)gameGetPlayerData();
  }
  temp_v5 = 0;
  temp_v1 = 0;
  temp_v8 = 0;
  temp_v7 = 0;
  *(unsigned int *)(param_1 + 0xe) = *(unsigned int *)(param_1 + 7);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 9);
  *(unsigned int *)(param_1 + 0x12) = *(unsigned int *)(param_1 + 0xb);
  param_1[0x14] = param_1[0xd];
  do {
    switch(temp_v7) {
    case 0:
      unaff_r6 = (unsigned int)*param_1;
      break;
    case 1:
      unaff_r6 = (unsigned int)param_1[1];
      break;
    case 2:
      unaff_r6 = (unsigned int)param_1[2];
      break;
    case 3:
      unaff_r6 = (unsigned int)param_1[3];
      break;
    case 4:
      unaff_r6 = (unsigned int)param_1[4];
      break;
    case 5:
      unaff_r6 = (unsigned int)param_1[5];
      break;
    case 6:
      unaff_r6 = (unsigned int)param_1[6];
    }
    if ((unaff_r6 != 0) && (temp_v4 = unaff_r6, FUN_00192608(), temp_v4 != 0)) {
      param_1[0x10] = param_1[0x10] + (short)*(char *)(temp_v4 + 0x31);
      param_1[0x11] = param_1[0x11] + (short)*(char *)(temp_v4 + 0x32);
      param_1[0x12] = param_1[0x12] + (short)*(char *)(temp_v4 + 0x33);
      param_1[0x13] = param_1[0x13] + (short)*(char *)(temp_v4 + 0x34);
      param_1[0x14] = param_1[0x14] + (short)*(char *)(temp_v4 + 0x35);
      temp_v8 = *(short *)(temp_v4 + 0x36);
      temp_v2 = *(short *)(temp_v4 + 0x38);
      FUN_0048026c(unaff_r6,&temp_v9);
      param_1[0x10] = (short)temp_v10 + param_1[0x10];
      param_1[0x11] = (*(unsigned short *)((unsigned char *)&temp_v10 + 2)) + param_1[0x11];
      param_1[0x12] = (short)temp_v11 + param_1[0x12];
      param_1[0x13] = (*(unsigned short *)((unsigned char *)&temp_v11 + 2)) + param_1[0x13];
      param_1[0x14] = (short)temp_v12 + param_1[0x14];
      temp_v5 = (short)temp_v9 + temp_v5 + temp_v8;
      temp_v8 = (*(unsigned short *)((unsigned char *)&temp_v9 + 2)) + temp_v1 + temp_v2;
      temp_v1 = temp_v8;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 7);
  temp_v0 = 999;
  temp_v3 = param_1[0x10];
  temp_v6 = temp_v0;
  if (((short)temp_v3 < 1000) && (temp_v6 = temp_v3, (short)temp_v3 < 1)) {
    temp_v6 = 1;
  }
  param_1[0x10] = temp_v6;
  temp_v3 = param_1[0x12];
  temp_v6 = temp_v0;
  if (((short)temp_v3 < 1000) && (temp_v6 = temp_v3, (short)temp_v3 < 1)) {
    temp_v6 = 1;
  }
  param_1[0x12] = temp_v6;
  temp_v3 = param_1[0x13];
  temp_v6 = temp_v0;
  if (((short)temp_v3 < 1000) && (temp_v6 = temp_v3, (short)temp_v3 < 1)) {
    temp_v6 = 1;
  }
  param_1[0x13] = temp_v6;
  temp_v3 = param_1[0x14];
  temp_v6 = temp_v0;
  if (((short)temp_v3 < 1000) && (temp_v6 = temp_v3, (short)temp_v3 < 1)) {
    temp_v6 = 1;
  }
  param_1[0x14] = temp_v6;
  temp_v3 = param_1[0x11];
  if (((short)temp_v3 < 1000) && (temp_v0 = temp_v3, (short)temp_v3 < 1)) {
    temp_v0 = 1;
  }
  param_1[0x11] = temp_v0;
  FUN_004cceb8(&temp_v9,0);
  temp_v13 = temp_v9;
  uStack_44 = temp_v10;
  uStack_40 = temp_v11;
  uStack_3c = temp_v12;
  uStack_38 = uStack_4c;
  FUN_004cc6a4(param_1[0x31],param_1 + 0xe,&temp_v13);
  temp_v1 = FUN_003da998(1,(unsigned int *)&temp_v13);
  temp_v3 = param_1[7];
  temp_v2 = FUN_003daaf4(1,(unsigned int *)&temp_v13);
  temp_v15 = *(unsigned int *)(param_1 + 0x1c);
  uStack_2c = *(unsigned int *)(param_1 + 0x1e);
  uStack_28 = *(unsigned int *)(param_1 + 0x20);
  temp_v14 = *(unsigned int *)(param_1 + 0x1a);
  param_1[0xe] = param_1[0xe] + (temp_v3 - temp_v1) + temp_v5;
  param_1[0xf] = (param_1[8] - temp_v2) + temp_v8 + param_1[0xf];
  temp_v4 = (unsigned int)param_1[6];
  FUN_00192608();
  temp_v16 = 0;
  if (temp_v4 != 0) {
    temp_v16 = *(unsigned short *)(temp_v4 + 0x3a);
  }
  FUN_0034cb50(param_1 + 0xe,&temp_v14,9);
  temp_v3 = param_1[0x15];
  if ((short)param_1[0xe] < (short)param_1[0x15]) {
    temp_v3 = param_1[0xe];
  }
  param_1[0x15] = temp_v3;
  temp_v3 = param_1[0xf];
  if ((short)param_1[0x16] <= (short)param_1[0xf]) {
    temp_v3 = param_1[0x16];
  }
  param_1[0x16] = temp_v3;
  return;
}

} /* extern "C" */
