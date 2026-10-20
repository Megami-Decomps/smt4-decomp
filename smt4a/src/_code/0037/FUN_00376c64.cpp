/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376c64` (_code @ 0x376c64, 0x2cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002d1e44(int *);
int FUN_00303460(int);
int FUN_00330108(float *, float *, float *);
int FUN_0033a374(void);
int FUN_00352bc4(void);

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581288; /* 0x581288 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002d1e44. */
extern int FUN_003033d4(void);
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00330108. */
/* Supplied declaration required: FUN_0033a374. */
/* Supplied declaration required: FUN_00352bc4. */


void FUN_00376c64(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  int temp_v11;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int temp_v12;
  unsigned int uStack_a0;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float fStack_88;
  float temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  temp_v7 = 0;
  temp_v0 = FUN_003033d4();
  temp_v1 = DAT_005806a4;
  if (*(int *)(DAT_005806a4 + 4) != 0) {
    if ((*(int *)(DAT_005806a4 + 4) == 1) &&
       (temp_v0 = DAT_005806a4, FUN_0033a374(), temp_v1 = DAT_005806a4, temp_v0 != 0)) {
      puVar5 = (unsigned int *)(DAT_005806a4 + 0x50);
      *(unsigned int *)(DAT_005806a4 + 0x218) = temp_v7;
      *(unsigned int *)(temp_v1 + 0x21c) = temp_v7;
      *(unsigned int *)(temp_v1 + 0x18) = *(unsigned int *)(temp_v1 + 0x294);
      *(unsigned int *)(temp_v1 + 0x210) = temp_v7;
      *(unsigned int *)(temp_v1 + 0x214) = temp_v7;
      temp_v7 = *(unsigned int *)(temp_v1 + 0x24c);
      temp_v3 = *(unsigned int *)(temp_v1 + 0x250);
      *puVar5 = *(unsigned int *)(temp_v1 + 0x248);
      *(unsigned int *)(temp_v1 + 0x54) = temp_v7;
      *(unsigned int *)(temp_v1 + 0x58) = temp_v3;
      *(unsigned int *)(temp_v1 + 100) = *(unsigned int *)(temp_v1 + 0x244);
      *(unsigned int *)(temp_v1 + 0x5c) = *(unsigned int *)(temp_v1 + 0x23c);
      *(unsigned int *)(temp_v1 + 0x60) = *(unsigned int *)(temp_v1 + 0x240);
      FUN_00303460(0);
      temp_v1 = DAT_005806a4;
      *(int *)(DAT_005806a4 + 4) = *(int *)(DAT_005806a4 + 4) + 1;
      *(unsigned int *)(temp_v1 + 8) = 0;
    }
    return;
  }
  temp_v6 = *(float *)(DAT_005806a4 + 0x5c) - *(float *)(DAT_005806a4 + 0x50);
  temp_v5 = *(float *)(DAT_005806a4 + 0x60) - *(float *)(DAT_005806a4 + 0x54);
  temp_v4 = *(float *)(DAT_005806a4 + 100) - *(float *)(DAT_005806a4 + 0x58);
  if ((int)romwright_sqrt_4(temp_v6 * temp_v6 + temp_v5 * temp_v5 + temp_v4 * temp_v4) < 0x43480000) {
    FUN_00303460(0);
    return;
  }
  puVar5 = (unsigned int *)(DAT_005806a4 + 0x5c);
  *(unsigned int *)(DAT_005806a4 + 0xc) = 0;
  temp_v11 = *puVar5;
  uStack_ac = *(unsigned int *)(temp_v1 + 0x60);
  uStack_a8 = *(unsigned int *)(temp_v1 + 100);
  temp_v13 = *(unsigned int *)(temp_v1 + 0x58);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x50);
  uStack_a0 = *(unsigned int *)(temp_v1 + 0x54);
  temp_v3 = *(unsigned int *)(DAT_00581288 + 0x1c);
  FUN_00352bc4();
  temp_v1 = DAT_005806a4;
  temp_v10 = 90.0f;
  temp_v5 = 0.017453292f;
  temp_v2 = DAT_005806a4 + temp_v0 * 4;
  *(unsigned int *)(DAT_005806a4 + 0x18) = temp_v3;
  temp_v6 = *(float *)(DAT_00581288 + 0x28);
  temp_v8 = *(float *)(DAT_00581288 + 0x30);
  temp_v9 = *(float *)(DAT_00581288 + 0x2c) + *(float *)(temp_v2 + 0xcc);
  temp_v4 = (*(float *)(temp_v1 + 0x18) - 90.0f) * 0.017453292f;
  temp_v22 = temp_v3;
  FUN_001bc124();
  temp_v6 = temp_v6 + temp_v4 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  temp_v4 = (*(float *)(DAT_005806a4 + 0x18) - temp_v10) * temp_v5;
  FUN_001bbf0c();
  temp_v16 = temp_v8 + temp_v4 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  temp_v4 = *(float *)(DAT_005806a4 + 0x18) * temp_v5;
  temp_v14 = temp_v6;
  temp_v15 = temp_v9;
  FUN_001bc124();
  temp_v8 = *(float *)(DAT_00581288 + 0x28) - temp_v4 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x18c);
  temp_v4 = *(float *)(DAT_005806a4 + 0x18) * temp_v5;
  FUN_001bbf0c();
  temp_v1 = DAT_005806a4 + temp_v0 * 4;
  temp_v6 = *(float *)(DAT_00581288 + 0x30) - temp_v4 * *(float *)(temp_v1 + 0x18c);
  temp_v9 = *(float *)(DAT_00581288 + 0x2c) + *(float *)(temp_v1 + 0x10c) +
           *(float *)(DAT_005806a4 + 0x1c);
  temp_v4 = (*(float *)(DAT_005806a4 + 0x18) - temp_v10) * temp_v5;
  FUN_001bc124();
  temp_v8 = temp_v8 + temp_v4 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  temp_v5 = (*(float *)(DAT_005806a4 + 0x18) - temp_v10) * temp_v5;
  FUN_001bbf0c();
  temp_v18 = temp_v6 + temp_v5 * *(float *)(DAT_005806a4 + temp_v0 * 4 + 0x14c);
  temp_v17 = temp_v8;
  fStack_88 = temp_v9;
  FUN_00330108(&temp_v17,&temp_v14,&temp_v23);
  temp_v20 = 0x14;
  temp_v19 = 0;
  temp_v17 = temp_v23;
  fStack_88 = (float)uStack_38;
  temp_v18 = (float)uStack_34;
  temp_v21 = temp_v7;
  FUN_002d1e44(&temp_v11);
  temp_v1 = DAT_005806a4;
  piVar4 = (int *)(DAT_005806a4 + 4);
  *(unsigned char *)(DAT_005806a4 + 0x220) = 1;
  *piVar4 = *(int *)(temp_v1 + 4) + 1;
  *(unsigned int *)(temp_v1 + 8) = 0;
  *(unsigned int *)(temp_v1 + 0xc) = 0;
  return;
}

} /* extern "C" */
