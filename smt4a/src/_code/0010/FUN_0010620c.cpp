/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010620c` (_code @ 0x10620c, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefInitEmpty(int);
int FUN_002ecf40(void);
int FUN_002ed20e(unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_00558914; /* 0x558914 */

/* Supplied declaration required: sharedRefInitEmpty. */
/* Supplied declaration required: FUN_002ecf40. */
/* Supplied declaration required: FUN_002ed20e. */
extern int FUN_002ed250(unsigned int *);


void FUN_0010620c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558914;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[9] + 4))();
  }
  FUN_002ecf40();
  param_1 = param_1 + 10;
  FUN_002ed20e(param_1);
  temp_v0 = FUN_002ed250(param_1 + -6);
  sharedRefInitEmpty(temp_v0 - 0x10);
  return;
}

} /* extern "C" */
