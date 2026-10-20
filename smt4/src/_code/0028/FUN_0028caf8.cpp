/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028caf8` (_code @ 0x28caf8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00232b68(unsigned int, int, int, unsigned int *, unsigned int *);
int FUN_002b4670(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00232b68. */
/* Supplied declaration required: FUN_002b4670. */


void FUN_0028caf8(unsigned int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  *param_3 = 0;
  *param_4 = 0;
  FUN_002b4670();
  if (param_2 != 0) {
    FUN_00232b68(param_1,param_2,1,param_3,param_4);
  }
  return;
}

} /* extern "C" */
