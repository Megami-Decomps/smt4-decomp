/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d580` (_code @ 0x35d580, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_00237c2c. */
/* Supplied declaration required: FUN_00237e94. */
/* Supplied declaration required: FUN_00237f10. */
/* Supplied declaration required: FUN_00238be8. */
/* Supplied declaration required: FUN_00238c44. */
/* Supplied declaration required: FUN_003f7514. */


unsigned int FUN_0035d580(int *param_1,int *param_2,int *param_3)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int temp_v1;
  int temp_v2;
  int *temp_v3;
  int temp_v4;
  int temp_v5;
  int *piStack_30;
  int *temp_v6;
  int *piStack_28;
  
  piStack_30 = param_1;
  temp_v6 = param_2;
  piStack_28 = param_3;
  FUN_00237e94(&temp_v2,param_1);
  if (temp_v2 != 0) {
    temp_v0 = (unsigned int)*(unsigned short *)(*param_1 + 10);
    FUN_00238be8();
    FUN_00237c2c(&temp_v3,*param_3 + 8);
    if (temp_v3 != (int *)0x0) {
      temp_v4 = temp_v2;
      FUN_003f7514(temp_v3 + 2,&temp_v4,*(unsigned short *)(*param_1 + 10));
      if (temp_v0 != 0) {
        piVar5 = (int *)0x0;
        do {
          temp_v1 = temp_v0 + (int)piVar5 * 2;
          if (*(short *)(temp_v1 + 2) == 0) break;
          piVar4 = (int *)(*param_3 + 8);
          piVar3 = *(int **)(*param_3 + 0x10);
          FUN_00238c44(piVar3,2);
          piVar1 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (piVar3 != (int *)0xfffffff8) {
              FUN_00237f10();
            }
            *piVar3 = *piVar4;
            piVar3[1] = (int)piVar4;
            *piVar4 = (int)piVar3;
            *(int **)(*piVar3 + 4) = piVar3;
            piVar1 = piVar3;
          }
          if (piVar1 == (int *)0x0) {
            return 2;
          }
          temp_v5 = temp_v2;
          temp_v3 = piVar1;
          FUN_003f7514(piVar1 + 2,&temp_v5,*(unsigned short *)(temp_v1 + 2));
          piVar5 = (int *)((int)piVar5 + 1);
        } while ((int)piVar5 < 3);
      }
      *temp_v6 = temp_v2;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}
