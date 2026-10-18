/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c12e0` (_code @ 0x2c12e0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0013b9b0. */
extern int FUN_002bb100(void);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */


void FUN_002c12e0(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002bb378();
  temp_v0 = FUN_002bb100();
  FUN_0013b9b0(temp_v0,param_1);
  if (temp_v0 < 0) {
    FUN_002c131c();
  }
  FUN_002bb308();
  return;
}
