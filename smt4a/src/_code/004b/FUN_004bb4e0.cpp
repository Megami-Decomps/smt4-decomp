/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb4e0` (_code @ 0x4bb4e0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);
int FUN_00237100(void);
int FUN_002e3328(unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00237100. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_004bb4e0(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = param_2;
  FUN_0019a5a0(param_1[1]);
  FUN_0019a5a0(param_1[2]);
  FUN_00237100();
  FUN_002e3328(param_1);
  return;
}

} /* extern "C" */
