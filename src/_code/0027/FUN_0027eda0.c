/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027eda0` (_code @ 0x27eda0, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002a7b50. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0027eda0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bf41c(param_1[1]);
  if (temp_v0 != 0) {
    if (param_1[0x107] != 0) {
      FUN_002a7b50();
      param_1[0x107] = 0;
    }
    *param_1 = *param_1 & 0xffffffcf;
    FUN_002c45b8(param_1[1],0);
    return;
  }
  return;
}
