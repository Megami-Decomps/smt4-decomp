/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030250c` (_code @ 0x30250c, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0029406c(int *, int *, int *);
int FUN_002e34a4(unsigned int *, int *, int *, unsigned char [24]);

/* stack frame of void: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned char DAT_005806a0; /* 0x5806a0 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0029406c. */
/* Supplied declaration required: FUN_002e34a4. */
extern int FUN_003033d4(void);


void FUN_0030250c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  float temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20 [24];
  
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x218) = 0;
  puVar1 = (unsigned int *)&temp_v8;
  FUN_002e34a4(puVar1,&temp_v11,&temp_v5,temp_v20);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v2 = temp_v8;
    temp_v14 = temp_v9;
    temp_v17 = temp_v10;
    temp_v3 = temp_v11;
    temp_v15 = temp_v12;
    temp_v18 = temp_v13;
    temp_v4 = temp_v5;
    temp_v16 = temp_v6;
    temp_v19 = temp_v7;
    temp_v0 = FUN_003033d4();
    temp_v1 = *(float *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x18) * 0.017453292f;
    FUN_001bc124();
    temp_v1 = *(float *)(g_lmapScene + 0x1c) - temp_v1 * *(float *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + temp_v0 * 4 + 0x18c);
    FUN_001bbf0c();
    FUN_0029406c(&temp_v2,&temp_v14,&temp_v17);
    *(float *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x218) = temp_v1 - *(float *)(g_lmapScene + 0x20);
  }
  return;
}

} /* extern "C" */
