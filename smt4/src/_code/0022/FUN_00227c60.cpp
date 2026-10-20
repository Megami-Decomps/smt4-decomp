/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227c60` (_code @ 0x227c60, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00250680(unsigned int, int, int, int);
int FUN_0027da30(int, int);
int FUN_00282924(unsigned int *, int);
int FUN_00336b98(int, int);
int FUN_003be7d0(unsigned int *);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_00250680. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_00282924. */
extern int FUN_00293230(int);
/* Supplied declaration required: FUN_00336b98. */
/* Supplied declaration required: FUN_003be7d0. */


void FUN_00227c60(int *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)*param_1;
  FUN_00282924(puVar1,param_3);
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40) == 0)) {
    temp_v1 = (unsigned int)*(unsigned short *)(param_2 + param_3 * 10 + 0x9d2);
    if ((*puVar1 & 0x10) != 0) {
      temp_v0 = *param_1;
      FUN_0027da30(temp_v0,param_3);
      if (temp_v0 != 0) {
        FUN_003be7d0(puVar1);
        FUN_00336b98(*param_1,(int)*(short *)(temp_v0 + 2));
      }
    }
    temp_v0 = FUN_00293230(*param_1);
    if (temp_v0 != 0) {
      temp_v1 = param_5 + 0xf;
    }
    FUN_00250680(temp_v1,param_2,*(int *)(*param_1 + 0x1e98) + param_3 * 0x114,0);
    return;
  }
  return;
}

} /* extern "C" */
