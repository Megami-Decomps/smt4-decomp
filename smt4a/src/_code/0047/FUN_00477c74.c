/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00477c74` (_code @ 0x477c74, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00183318. */
/* Supplied declaration required: FUN_0019d36c. */
/* Supplied declaration required: FUN_001f4908. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_003423cc. */
/* Supplied declaration required: FUN_003d2d6c. */


void FUN_00477c74(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  
  if (param_1[2] != 0) {
    if ((param_1[2] == 1) && (temp_v0 = FUN_002e07f4(), temp_v0 != 0)) {
      param_1[1] = 0x10;
      param_1[2] = 0;
      if ((int *)param_1[0x82] != (int *)0x0) {
        (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
        param_1[0x82] = 0;
      }
    }
    return;
  }
  FUN_003d2d6c(0xf);
  FUN_001f4908(0,10,0xff);
  FUN_001f4908(1,10,0xff);
  param_1[2] = 1;
  FUN_003423cc(0,0xffffffff,0,param_4,unaff_r4,unaff_r5,unaff_r6);
  if ((*param_1 & 0x100000) != 0) {
    *param_1 = *param_1 & 0xffefffff;
    FUN_00183318(0);
    temp_v0 = 0;
    do {
      FUN_0019d36c();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
    return;
  }
  return;
}
