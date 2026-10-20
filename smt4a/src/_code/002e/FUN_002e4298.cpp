/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4298` (_code @ 0x2e4298, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c57ac(void);
int FUN_001c58e8(unsigned int, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001c57ac. */
/* Supplied declaration required: FUN_001c58e8. */


void FUN_002e4298(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    FUN_001c58e8(*param_1,param_1[1],param_1[2]);
    FUN_001c57ac();
  }
  return;
}

} /* extern "C" */
