/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233a24` (_code @ 0x233a24, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_00289924(void);
/* Supplied declaration required: FUN_00289f00. */
/* Supplied declaration required: FUN_00291000. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002a8a8c. */


void FUN_00233a24(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  
  if (param_1[2] != 0) {
    if ((param_1[2] == 1) && (temp_v0 = FUN_00289924(), temp_v0 != 0)) {
      param_1[1] = 0x10;
      param_1[2] = 0;
      if ((int *)param_1[0x82] != (int *)0x0) {
        (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
        param_1[0x82] = 0;
      }
    }
    return;
  }
  FUN_0029c650(0xf);
  FUN_0029c660(0,10,0xff);
  FUN_0029c660(1,10,0xff);
  param_1[2] = 1;
  FUN_00291000(0,0xffffffff,0,param_4,unaff_r4,unaff_r5,unaff_r6);
  if ((*param_1 & 0x100000) != 0) {
    *param_1 = *param_1 & 0xffefffff;
    FUN_00289f00(0);
    temp_v0 = 0;
    do {
      FUN_002a8a8c();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
    return;
  }
  return;
}
