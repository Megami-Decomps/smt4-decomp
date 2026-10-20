/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003928b4` (_code @ 0x3928b4, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00233e70(int, int, int);
int FUN_00233fcc(int, int);
int FUN_002340e4(unsigned int *);
int FUN_00234124(int, unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int g_aocMain; /* 0x432fc8 */

extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00233e70. */
/* Supplied declaration required: FUN_00233fcc. */
/* Supplied declaration required: FUN_002340e4. */
/* Supplied declaration required: FUN_00234124. */
extern int FUN_0027ea14(unsigned int *);
extern int FUN_002a1520(unsigned int *);


/* WARNING: Type propagation algorithm not settling */

void FUN_003928b4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v4;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v5;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  FUN_002340e4(&temp_v3);
  temp_v2 = g_aocMain;
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 3) {
    if (temp_v0 >= 3) {
      if (temp_v0 != 4) {
        if (temp_v0 != 9999) {
          return;
        }
        FUN_00233e70(param_1,5,3);
        return;
      }
      temp_v2 = *(int *)(param_1 + 0xc) - 1;
      *(int *)(param_1 + 0xc) = temp_v2;
      if (0 < temp_v2) {
        return;
      }
      piVar4 = *(int **)(param_1 + 0x208);
      *(unsigned int *)(param_1 + 4) = 6;
      *(unsigned int *)(param_1 + 8) = 0;
      if (piVar4 == (int *)0x0) {
        return;
      }
      (**(romwright_code **)(*piVar4 + 4))();
      *(unsigned int *)(param_1 + 0x208) = 0;
      return;
    }
    if (temp_v0 == 0) {
      temp_v2 = param_1 + 0x20c;
      FUN_00233fcc(temp_v2,0);
      *(unsigned int *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0x208) = temp_v2;
      return;
    }
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return;
      }
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
      }
      temp_v0 = param_1 + 0x20c;
      FUN_00233fcc(temp_v0,4);
      *(int *)(param_1 + 0x208) = temp_v0;
      temp_v1 = FUN_0023360c(param_1 + 0x240);
      *(unsigned int *)(temp_v0 + 0x14) = (unsigned int)*(unsigned short *)(*(int *)(temp_v2 + 0x678) + temp_v1 * 0x9c8 + 0x9aa);
      *(unsigned int *)(param_1 + 8) = 3;
      return;
    }
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 0xc))(&temp_v4);
    temp_v3 = temp_v4;
    uStack_54 = uStack_40;
    uStack_50 = uStack_3c;
    uStack_4c = uStack_38;
    uStack_48 = uStack_34;
    temp_v2 = FUN_0027ea14(&temp_v3);
    if (temp_v2 != 0) {
      *(unsigned int *)(param_1 + 8) = 2;
      return;
    }
    temp_v2 = FUN_002a1520(&temp_v3);
  }
  else {
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 0xc))(&temp_v4);
    temp_v3 = temp_v4;
    uStack_54 = uStack_40;
    uStack_50 = uStack_3c;
    uStack_4c = uStack_38;
    uStack_48 = uStack_34;
    temp_v2 = FUN_0027ea14(&temp_v3);
    if (temp_v2 != 0) {
      piVar4 = *(int **)(param_1 + 0x208);
      *(unsigned int *)(param_1 + 4) = 10;
      *(unsigned int *)(param_1 + 8) = 0;
      if (piVar4 == (int *)0x0) {
        return;
      }
      (**(romwright_code **)(*piVar4 + 4))();
      *(unsigned int *)(param_1 + 0x208) = 0;
      return;
    }
    temp_v2 = FUN_002a1520(&temp_v3);
  }
  if (temp_v2 == 0) {
    return;
  }
  if ((temp_v3 & 0xff) != 0x66) {
    if ((temp_v3 & 0xff) != 0x67) {
      *(unsigned int *)(param_1 + 8) = 9999;
      *(unsigned int *)(param_1 + 0x210) = temp_v3;
      *(unsigned int *)(param_1 + 0x214) = uStack_54;
      *(unsigned int *)(param_1 + 0x218) = uStack_50;
      *(unsigned int *)(param_1 + 0x21c) = uStack_4c;
      *(unsigned int *)(param_1 + 0x220) = uStack_48;
      return;
    }
    *(unsigned int *)(param_1 + 8) = 4;
    *(unsigned int *)(param_1 + 0xc) = 3;
    return;
  }
  temp_v5 = temp_v3;
  uStack_2c = uStack_54;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_20 = uStack_48;
  FUN_00234124(param_1,&temp_v5);
  return;
}

} /* extern "C" */
