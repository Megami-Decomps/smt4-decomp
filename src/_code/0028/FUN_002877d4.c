/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002877d4` (_code @ 0x2877d4, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002c564c(unsigned int);
/* Supplied declaration required: FUN_002ebdd8. */


void FUN_002877d4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    FUN_002ebdd8(param_1,0);
    return;
  }
  return;
}
