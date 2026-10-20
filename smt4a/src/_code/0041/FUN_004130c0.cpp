/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004130c0` (_code @ 0x4130c0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea12c(void);
int FUN_00414204(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002ea12c. */
/* Supplied declaration required: FUN_00414204. */


void FUN_004130c0(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  
code_r0x004130c0:
                    /* WARNING: Switch table taken from the stored dispatch table */
  switch(param_2) {
  case 0:
    break;
  case 4:
    FUN_00414204();
    return;
  default:
    return;
  }
  temp_v0 = param_1;
  FUN_002ea12c();
  *(int *)(param_1 + 0xf8) = temp_v0;
  if (temp_v0 == 0) {
    return;
  }
  param_2 = 4;
  goto code_r0x004130c0;
}

} /* extern "C" */
