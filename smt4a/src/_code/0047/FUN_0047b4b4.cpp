/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047b4b4` (_code @ 0x47b4b4, 0x2c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00473980(int *, int);
int FUN_00474734(int, int);
int FUN_00476e58(int, int, int);
int FUN_0047bc90(int, unsigned int *);
int timeInitializeActiveState(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int g_aocMain; /* 0x570260 */

extern int byteIsAtLeast100(unsigned int *);
extern int legacyResourceIdRemap(unsigned int *);
/* Supplied declaration required: FUN_00473980. */
/* Supplied declaration required: FUN_00474734. */
/* Supplied declaration required: FUN_00476e58. */
/* Supplied declaration required: FUN_0047bc90. */
extern int isEmptyString(unsigned int *);
/* Supplied declaration required: timeInitializeActiveState. */
extern int flaggedValueHolderGetTotal(int);


void FUN_0047b4b4(int param_1)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int uStack_3c;
  int temp_v7;
  unsigned int uStack_34;
  unsigned int temp_v8;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  timeInitializeActiveState(&temp_v4);
  temp_v2 = g_aocMain;
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 3) {
    if (temp_v0 < 3) {
      if (temp_v0 == 0) {
        temp_v2 = param_1 + 0x20c;
        FUN_00474734(temp_v2,0);
        *(unsigned int *)(param_1 + 8) = 1;
        *(int *)(param_1 + 0x208) = temp_v2;
        return;
      }
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          if (*(int **)(param_1 + 0x208) != (int *)0x0) {
            (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
          }
          temp_v0 = param_1 + 0x20c;
          FUN_00474734(temp_v0,2);
          *(int *)(param_1 + 0x208) = temp_v0;
          temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x240);
          *(unsigned int *)(temp_v0 + 0x14) =
               (unsigned int)*(unsigned short *)(*(int *)(temp_v2 + 0x678) + temp_v1 * 0x9c8 + 0x9aa);
          *(unsigned int *)(param_1 + 8) = 3;
        }
      }
      else {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 0xc))(&temp_v5);
        temp_v4 = temp_v5;
        uStack_54 = temp_v6;
        uStack_50 = uStack_3c;
        uStack_4c = temp_v7;
        uStack_48 = uStack_34;
        temp_v2 = isEmptyString(&temp_v4);
        if (temp_v2 != 0) {
          temp_v3 = 2;
          *(unsigned int *)(param_1 + 8) = temp_v3;
          return;
        }
        temp_v2 = byteIsAtLeast100(&temp_v4);
        if (temp_v2 != 0) {
          if ((temp_v4 & 0xff) == 0x66) goto LAB_0047b624;
          if ((temp_v4 & 0xff) != 0x67) goto LAB_0047b644;
          *(unsigned int *)(param_1 + 8) = 5;
          *(unsigned int *)(param_1 + 0xc) = 3;
          return;
        }
      }
    }
    else {
      if (temp_v0 == 4) {
        FUN_00473980(&temp_v7,g_aocMain);
        temp_v6 = temp_v7;
        uStack_3c = uStack_34;
        temp_v2 = legacyResourceIdRemap((unsigned int *)&temp_v6);
        if (temp_v2 < 0) {
          *(unsigned int *)(param_1 + 8) = 9999;
          *(unsigned char *)(param_1 + 0x210) = 100;
          *(unsigned int *)(param_1 + 0x214) = temp_v6;
          *(unsigned int *)(param_1 + 0x218) = uStack_3c;
          return;
        }
        *(unsigned int *)(param_1 + 8) = 5;
        *(unsigned int *)(param_1 + 0xc) = 3;
        return;
      }
      if (temp_v0 != 5) {
        if (temp_v0 == 9999) {
          FUN_00476e58(param_1,5,3);
          return;
        }
      }
      else {
        temp_v2 = *(int *)(param_1 + 0xc) - 1;
        *(int *)(param_1 + 0xc) = temp_v2;
        if (temp_v2 < 1) {
          piVar5 = *(int **)(param_1 + 0x208);
          *(unsigned int *)(param_1 + 4) = 6;
          *(unsigned int *)(param_1 + 8) = 0;
          if (piVar5 != (int *)0x0) {
            (**(romwright_code **)(*piVar5 + 4))();
            *(unsigned int *)(param_1 + 0x208) = 0;
            return;
          }
        }
      }
    }
  }
  else {
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 0xc))(&temp_v5);
    temp_v4 = temp_v5;
    uStack_54 = temp_v6;
    uStack_50 = uStack_3c;
    uStack_4c = temp_v7;
    uStack_48 = uStack_34;
    temp_v2 = isEmptyString(&temp_v4);
    if (temp_v2 != 0) {
      piVar5 = *(int **)(param_1 + 0x208);
      *(unsigned int *)(param_1 + 4) = 10;
      *(unsigned int *)(param_1 + 8) = 0;
      if (piVar5 == (int *)0x0) {
        return;
      }
      (**(romwright_code **)(*piVar5 + 4))();
      *(unsigned int *)(param_1 + 0x208) = 0;
      return;
    }
    temp_v2 = byteIsAtLeast100(&temp_v4);
    if (temp_v2 != 0) {
      if ((temp_v4 & 0xff) == 0x66) {
LAB_0047b624:
        temp_v8 = temp_v4;
        uStack_2c = uStack_54;
        uStack_28 = uStack_50;
        uStack_24 = uStack_4c;
        uStack_20 = uStack_48;
        FUN_0047bc90(param_1,&temp_v8);
        return;
      }
      if ((temp_v4 & 0xff) != 0x67) {
LAB_0047b644:
        *(unsigned int *)(param_1 + 8) = 9999;
        *(unsigned int *)(param_1 + 0x210) = temp_v4;
        *(unsigned int *)(param_1 + 0x214) = uStack_54;
        *(unsigned int *)(param_1 + 0x218) = uStack_50;
        *(unsigned int *)(param_1 + 0x21c) = uStack_4c;
        *(unsigned int *)(param_1 + 0x220) = uStack_48;
        return;
      }
      temp_v3 = 4;
      *(unsigned int *)(param_1 + 8) = temp_v3;
      return;
    }
  }
  return;
}

} /* extern "C" */
