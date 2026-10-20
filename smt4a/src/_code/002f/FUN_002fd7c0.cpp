/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd7c0` (_code @ 0x2fd7c0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00321a98(unsigned int *, unsigned int *);
int FUN_0039a598(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_0019c6bc(unsigned int);
/* Supplied declaration required: FUN_00321a98. */
/* Supplied declaration required: FUN_0039a598. */


void FUN_002fd7c0(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0019c6bc(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = 99;
  }
  else {
    temp_v0 = FUN_0039a598(*param_1);
  }
  temp_v1 = FUN_0019c6bc(*param_2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
  }
  else {
    temp_v1 = FUN_0039a598();
  }
  if (temp_v0 != temp_v1) {
    return;
  }
  FUN_00321a98(param_1,param_2);
  return;
}

} /* extern "C" */
