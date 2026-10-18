/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152894` (_code @ 0x152894, 0x34c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int DAT_00464b28; /* 0x464b28 */
extern int DAT_00464b2c; /* 0x464b2c */
extern int DAT_00464b30; /* 0x464b30 */
extern unsigned char DAT_004dae3c; /* 0x4dae3c */
extern unsigned char DAT_004dae48; /* 0x4dae48 */

extern int FUN_00153228(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002a3dfc. */
/* Supplied declaration required: FUN_002b0174. */
/* Supplied declaration required: FUN_002b26d4. */
/* Supplied declaration required: FUN_002c2264. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00152894(unsigned int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int unaff_r5;
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  
  if (param_1[0x26] != 0) {
    unaff_r5 = 0;
  }
  temp_v1 = param_4;
  if (0 < (int)param_1[0x26]) {
    do {
      temp_v0 = param_1[0x27] + unaff_r5 * 0xc;
      FUN_002c2264(*(unsigned int *)(temp_v0 + 8));
      *(unsigned int *)(temp_v0 + 8) = 0;
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < (int)param_1[0x26]);
  }
  if (param_1[0x27] != 0) {
    FUN_002c415c();
    param_1[0x27] = 0;
  }
  param_1[0x26] = 0;
  puVar4 = param_1 + 0x28;
  if (*puVar4 != 0) {
    unaff_r5 = 0;
  }
  if (0 < (int)*puVar4) {
    do {
      temp_v0 = param_1[0x29] + unaff_r5 * 0xc;
      FUN_002c2264(*(unsigned int *)(temp_v0 + 8));
      *(unsigned int *)(temp_v0 + 8) = 0;
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < (int)*puVar4);
  }
  if (param_1[0x29] != 0) {
    FUN_002c415c();
    param_1[0x29] = 0;
  }
  *puVar4 = 0;
  puVar1 = (unsigned int *)param_1[0x12];
  if (puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0x12] = 0;
  }
  puVar1 = (unsigned int *)param_1[0x13];
  if (puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0x13] = 0;
  }
  puVar1 = (unsigned int *)param_1[0x14];
  if (puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0x14] = 0;
  }
  puVar1 = (unsigned int *)param_1[0x18];
  if (puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0x18] = 0;
  }
  puVar1 = (unsigned int *)param_1[0x1c];
  if (puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0x1c] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_002c415c();
    param_1[0xc] = 0;
  }
  if (param_1[0x15] != 0) {
    FUN_002c415c();
    param_1[0x15] = 0;
  }
  if (param_1[0x19] != 0) {
    FUN_002c415c();
    param_1[0x19] = 0;
  }
  temp_v0 = 0;
  if (temp_v0 < (int)param_1[10]) {
    do {
      puVar1 = (unsigned int *)(param_1[9] + temp_v0 * 4);
      puVar3 = (unsigned int *)*puVar1;
      if (puVar3 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar3)(puVar3);
        (**(romwright_code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
        *puVar1 = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)param_1[10]);
  }
  temp_v0 = *(int *)param_1[1] - 1;
  *(int *)param_1[1] = temp_v0;
  if ((*param_1 & 2) != 0) {
    DAT_00464b30 = DAT_00464b30 - 1;
  }
  if (temp_v0 < 1) {
    temp_v1 = *(int *)(param_1[1] + 0x18);
    if (temp_v1 != 0) {
      FUN_002a3dfc(&temp_v1);
    }
    puVar1 = (unsigned int *)param_1[1];
    temp_v0 = FUN_00153228(&DAT_004dae3c,puVar1);
    if (temp_v0 != 0) {
      *puVar1 = 0;
      if (*(char *)(puVar1 + 1) == '\0') {
        FUN_002c415c(puVar1[3]);
      }
      puVar1[2] = 0;
      puVar1[5] = 0;
      FUN_002b26d4(&DAT_004dae3c,temp_v0);
    }
    FUN_002c415c(puVar1);
    DAT_00464b28 = DAT_00464b28 - 1;
    if (param_2 != 0) {
      FUN_002b0174(param_2);
    }
  }
  FUN_002c415c(param_1[9]);
  param_1[9] = 0;
  temp_v0 = FUN_00153228(&DAT_004dae48,param_1);
  if (temp_v0 != 0) {
    FUN_002b26d4(&DAT_004dae48,temp_v0);
  }
  FUN_002c415c(param_1);
  DAT_00464b2c = DAT_00464b2c - 1;
  return;
}
