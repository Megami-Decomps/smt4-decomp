/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2d34` (_code @ 0x3d2d34, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d5520(unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_003d5520. */


void FUN_003d2d34(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    FUN_003d5520(param_1,param_2,param_3);
    return;
  }
  return;
}

} /* extern "C" */
