/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002804d0` (_code @ 0x2804d0, 0x34c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001801e4(unsigned char *, int);
int FUN_001836b0(unsigned int);
int asdMemFree(...);
int FUN_001ab878(int);
int nw_gfx_res_ResGraphicsFile_Cleanup(int *);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int DAT_005b3c2c; /* 0x5b3c2c */
extern int DAT_005b3c30; /* 0x5b3c30 */
extern int DAT_005b3c34; /* 0x5b3c34 */
extern unsigned char DAT_00636ebc; /* 0x636ebc */
extern unsigned char DAT_00636ec8; /* 0x636ec8 */

/* Supplied declaration required: FUN_001801e4. */
/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001ab878. */
extern int FUN_0037a86c(unsigned char *, unsigned int *);
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Cleanup. */


void FUN_002804d0(unsigned int *param_1,int param_2,unsigned int param_3,int param_4)

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
      FUN_001836b0(*(unsigned int *)(temp_v0 + 8));
      *(unsigned int *)(temp_v0 + 8) = 0;
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < (int)param_1[0x26]);
  }
  if (param_1[0x27] != 0) {
    asdMemFree();
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
      FUN_001836b0(*(unsigned int *)(temp_v0 + 8));
      *(unsigned int *)(temp_v0 + 8) = 0;
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < (int)*puVar4);
  }
  if (param_1[0x29] != 0) {
    asdMemFree();
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
    asdMemFree();
    param_1[0xc] = 0;
  }
  if (param_1[0x15] != 0) {
    asdMemFree();
    param_1[0x15] = 0;
  }
  if (param_1[0x19] != 0) {
    asdMemFree();
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
    DAT_005b3c34 = DAT_005b3c34 - 1;
  }
  if (temp_v0 < 1) {
    temp_v1 = *(int *)(param_1[1] + 0x18);
    if (temp_v1 != 0) {
      nw_gfx_res_ResGraphicsFile_Cleanup(&temp_v1);
    }
    puVar1 = (unsigned int *)param_1[1];
    temp_v0 = FUN_0037a86c(&DAT_00636ebc,puVar1);
    if (temp_v0 != 0) {
      *puVar1 = 0;
      if (*(char *)(puVar1 + 1) == '\0') {
        asdMemFree(puVar1[3]);
      }
      puVar1[2] = 0;
      puVar1[5] = 0;
      FUN_001801e4(&DAT_00636ebc,temp_v0);
    }
    asdMemFree(puVar1);
    DAT_005b3c2c = DAT_005b3c2c - 1;
    if (param_2 != 0) {
      FUN_001ab878(param_2);
    }
  }
  asdMemFree(param_1[9]);
  param_1[9] = 0;
  temp_v0 = FUN_0037a86c(&DAT_00636ec8,param_1);
  if (temp_v0 != 0) {
    FUN_001801e4(&DAT_00636ec8,temp_v0);
  }
  asdMemFree(param_1);
  DAT_005b3c30 = DAT_005b3c30 - 1;
  return;
}

} /* extern "C" */
