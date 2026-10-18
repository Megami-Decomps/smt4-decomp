/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041a408` (_code @ 0x41a408, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00557d60; /* 0x557d60 */

/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_0041a080. */


void FUN_0041a408(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557d60;
  FUN_0041a080(param_1 + 5);
  FUN_0041a080(param_1 + 7);
  FUN_0041a080(param_1 + 7);
  FUN_0041a080(param_1 + 5);
  FUN_002e3328(param_1);
  return;
}
