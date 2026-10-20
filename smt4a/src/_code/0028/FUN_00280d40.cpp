/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280d40` (_code @ 0x280d40, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018cfe4(unsigned int, unsigned int);
int FUN_0018e9d8(unsigned int, int);
int FUN_0034103c(unsigned int);

typedef struct fn_00280d40_arg0 fn_00280d40_arg0;
struct fn_00280d40_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    undefined4 *field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
};

extern unsigned int g_effAsdLightHandle; /* 0x5b3c80 */
extern unsigned int DAT_005b3c84; /* 0x5b3c84 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */
extern unsigned int DAT_005b3c8c; /* 0x5b3c8c */
extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern int DAT_005b3c94; /* 0x5b3c94 */
extern int DAT_005b3c98; /* 0x5b3c98 */
extern int DAT_005b3c9c; /* 0x5b3c9c */
extern int DAT_00636e00; /* 0x636e00 */
extern unsigned char DAT_00636e04; /* 0x636e04 */
extern unsigned char DAT_00636e05; /* 0x636e05 */
extern int DAT_00636e18; /* 0x636e18 */

/* Supplied declaration required: FUN_0018cfe4. */
/* Supplied declaration required: FUN_0018e9d8. */
/* Supplied declaration required: FUN_0034103c. */


void FUN_00280d40(fn_00280d40_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int *piVar7;
  void *pvVar8;
  int temp_v4;
  int *piVar10;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  piVar1 = (int *)param_1->field_0x14;
  if (piVar1 == (int *)0x0) {
    temp_v3 = param_1->field_0xc;
    piVar1 = (int *)&DAT_005b3c90;
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        temp_v0 = 0;
        temp_v5 = DAT_005b3c98;
        FUN_0034103c(temp_v0);
      }
      else {
        temp_v5 = DAT_005b3c94;
        if (temp_v3 != 4) {
          if (temp_v3 != 5) {
            return;
          }
          temp_v0 = 1;
          temp_v5 = DAT_005b3c9c;
          FUN_0034103c(temp_v0);
        }
      }
    }
    else {
      temp_v5 = *piVar1;
    }
  }
  else {
    temp_v5 = *piVar1;
  }
  if (temp_v5 == 0) {
    return;
  }
  temp_v3 = -1;
  temp_v5 = *(int *)(*param_1->field_0x24 + 0xc);
  if (DAT_005b3c98 == temp_v5) {
    temp_v3 = 0;
  }
  else if (DAT_005b3c9c == temp_v5) {
    temp_v3 = 1;
  }
  temp_v7 = 0;
  if (temp_v7 < param_1->field_0x28) {
    do {
      temp_v4 = param_1->field_0x24[temp_v7];
      temp_v1 = *(int *)(temp_v4 + 0xc);
      if (temp_v1 != 0) {
        piVar1 = *(int **)(temp_v1 + 0x18);
        piVar10 = *(int **)(temp_v1 + 0x1c);
        temp_v2 = temp_v1;
        while( 1 ) {
          if (piVar1 != piVar10) {
            temp_v2 = *piVar1;
          }
          if (piVar1 == piVar10 || temp_v2 == temp_v4) break;
          piVar1 = piVar1 + 1;
        }
        if (piVar1 != piVar10) {
          piVar6 = piVar1 + 1;
          temp_v2 = (int)piVar10 - (int)piVar6;
          if (0 < temp_v2 >> 2) {
            piVar10 = piVar1;
            if (temp_v2 * 0x20000000 < 0) {
              temp_v6 = *piVar6;
              piVar6 = piVar1 + 2;
              if (temp_v6 != temp_v4) {
                piVar10 = piVar1 + 1;
                *piVar1 = temp_v6;
              }
            }
            piVar1 = piVar10;
            for (temp_v2 = temp_v2 >> 3; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
              piVar10 = piVar1;
              if (*piVar6 != temp_v4) {
                piVar10 = piVar1 + 1;
                *piVar1 = *piVar6;
              }
              piVar7 = piVar6 + 1;
              piVar6 = piVar6 + 2;
              piVar1 = piVar10;
              if (*piVar7 != temp_v4) {
                piVar1 = piVar10 + 1;
                *piVar10 = *piVar7;
              }
            }
          }
        }
        piVar10 = *(int **)(temp_v1 + 0x1c);
        *(int **)(temp_v1 + 0x1c) = piVar1;
        if (piVar10 != piVar1) {
          *(unsigned int *)(temp_v4 + 0xc) = 0;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < param_1->field_0x28);
  }
  if ((-1 < temp_v3) && (*(int *)(temp_v5 + 0x18) == *(int *)(temp_v5 + 0x1c))) {
    (&DAT_00636e04)[temp_v3 * 0x18] = 0;
    (&DAT_00636e05)[temp_v3 * 0x18] = 0;
    FUN_0018e9d8((&DAT_005b3c88)[temp_v3],(&DAT_005b3c98)[temp_v3]);
    FUN_0018cfe4((&g_effAsdLightHandle)[temp_v3],(&DAT_005b3c88)[temp_v3]);
  }
  if (param_1->field_0x14 != (void *)0x0) {
    if (*(int *)((int)param_1->field_0x14 + 8) == 0) {
      FUN_0018cfe4(g_effAsdLightHandle,DAT_005b3c88);
      DAT_00636e00 = DAT_00636e00 - 1;
    }
    else {
      FUN_0018cfe4(DAT_005b3c84,DAT_005b3c8c);
      DAT_00636e18 = DAT_00636e18 - 1;
    }
  }
  else if (param_1->field_0xc < 3) {
    FUN_0018cfe4(g_effAsdLightHandle,DAT_005b3c88);
    DAT_00636e00 = DAT_00636e00 - 1;
  }
  else {
    FUN_0018cfe4(DAT_005b3c84,DAT_005b3c8c);
    DAT_00636e18 = DAT_00636e18 - 1;
  }
  pvVar8 = param_1->field_0x14;
  if (pvVar8 != (void *)0x0) {
    param_1->field_0x10 = 0xffffffff;
    param_1->field_0x14 = (void *)0x0;
    param_1->field_0xc = -1;
    param_1->field_0x18 = (int)pvVar8;
    return;
  }
  temp_v3 = param_1->field_0xc;
  param_1->field_0x18 = 0;
  param_1->field_0xc = -1;
  param_1->field_0x10 = temp_v3;
  return;
}

} /* extern "C" */
