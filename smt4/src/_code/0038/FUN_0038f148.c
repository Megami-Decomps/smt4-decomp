/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038f148` (_code @ 0x38f148, 0x2bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00126fb8. */
/* Supplied declaration required: FUN_0023392c. */
/* Supplied declaration required: FUN_00233d78. */
/* Supplied declaration required: FUN_00233db8. */
/* Supplied declaration required: FUN_002340e4. */
extern int FUN_0026b564(void);
/* Supplied declaration required: FUN_0027e990. */
extern int FUN_0027ea14(unsigned int *);
/* Supplied declaration required: FUN_0027eb30. */
/* Supplied declaration required: FUN_002a126c. */
extern int FUN_002a1520(unsigned int *);
extern int FUN_002ad1e0(int);
/* Supplied declaration required: FUN_002b8244. */
/* Supplied declaration required: FUN_002ba9ac. */
/* Supplied declaration required: FUN_00387af0. */
/* Supplied declaration required: FUN_003887cc. */


void FUN_0038f148(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  int temp_v4;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  FUN_002340e4(&temp_v3);
  temp_v0 = *(unsigned int *)(DAT_00432fc8 + 0x754);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v0 & 0xffffff8f;
  if ((temp_v0 & 0x10) != 0) {
    FUN_0023392c(param_1,0xffffffff,0);
    FUN_0027eb30(param_1 + 0x46c);
    FUN_00233d78(param_1);
    param_1[1] = 0x12;
    param_1[2] = 0;
    if ((int *)param_1[0x82] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
      param_1[0x82] = 0;
    }
    FUN_00126fb8(DAT_00432fc8 + 0x80);
    FUN_0027e990(DAT_00433158);
    FUN_002ba9ac(DAT_00433158);
    temp_v1 = FUN_002ad1e0(DAT_00432fc8 + 0x98);
    if (temp_v1 != 0) {
      *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
    }
  }
  else {
    temp_v2 = param_1[2];
    if (temp_v2 != 2) {
      if ((int)temp_v2 < 2) {
        if (temp_v2 != 0) {
          if (temp_v2 != 1) {
            return;
          }
          temp_v1 = FUN_0026b564();
          if (temp_v1 == 0) {
            return;
          }
          FUN_00233db8(param_1,1);
          FUN_00387af0(DAT_00433158);
          temp_v0 = 2;
        }
        else {
          FUN_002b8244(0);
          FUN_0023392c(param_1,0xffffffff,0);
          temp_v0 = 1;
        }
        param_1[2] = temp_v0;
        return;
      }
      if (temp_v2 != 3) {
        if ((temp_v2 == 9999 && (temp_v0 & 4) == 0) && ((temp_v0 & 8) == 0)) {
          FUN_0027e990(DAT_00433158);
          FUN_002ba9ac(DAT_00433158);
          temp_v1 = FUN_002ad1e0(DAT_00432fc8 + 0x98);
          if (temp_v1 != 0) {
            *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
          }
          piVar3 = (int *)param_1[0x82];
          param_1[1] = 3;
          param_1[2] = 0;
          if (piVar3 != (int *)0x0) {
            (**(romwright_code **)(*piVar3 + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
      else {
        temp_v1 = FUN_0026b564();
        if (temp_v1 != 0) {
          FUN_0027e990(DAT_00433158);
          FUN_002a126c(&temp_v4,DAT_00433158);
          param_1[1] = 5;
          param_1[2] = 0;
          piVar3 = (int *)param_1[0x82];
          if (piVar3 == (int *)0x0) {
            return;
          }
          (**(romwright_code **)(*piVar3 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if ((*param_1 & 0x200) != 0) {
      FUN_003887cc(&temp_v4,DAT_00433158);
      temp_v3 = temp_v4;
      uStack_3c = uStack_28;
      uStack_38 = uStack_24;
      uStack_34 = uStack_20;
      uStack_30 = uStack_1c;
      temp_v1 = FUN_0027ea14((unsigned int *)&temp_v3);
      if (temp_v1 != 0) {
        param_1[2] = 3;
      }
      else {
        temp_v1 = FUN_002a1520((unsigned int *)&temp_v3);
        if (temp_v1 != 0) {
          param_1[2] = 9999;
          temp_v1 = FUN_002ad1e0(DAT_00432fc8 + 0x98);
          if (temp_v1 != 0) {
            *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
          }
          FUN_00233d78(param_1);
          return;
        }
      }
    }
  }
  return;
}
