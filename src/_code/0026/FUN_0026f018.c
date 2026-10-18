/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f018` (_code @ 0x26f018, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0020fe84. */
/* Supplied declaration required: FUN_002d91a0. */


void FUN_0026f018(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[6] = 0x3c449ba6;
  param_1[4] = 0x43af0000;
  *param_1 = 0x3f99999a;
  param_1[1] = 0x40a9999a;
  param_1[2] = 0x3f000000;
  param_1[10] = 0;
  if (param_1[9] != 0) {
    param_1[9] = 0;
    FUN_0020fe84(param_1[7]);
  }
  FUN_002d91a0();
  return;
}
