/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c14b8` (_code @ 0x2c14b8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0013b320. */
extern int FUN_002bb440(void);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c14f4. */


void FUN_002c14b8(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002bb6b8();
  temp_v0 = FUN_002bb440();
  FUN_0013b320(temp_v0,param_1);
  if (temp_v0 < 0) {
    FUN_002c14f4();
  }
  FUN_002bb648();
  return;
}
