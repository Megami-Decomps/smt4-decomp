/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376d74` (_code @ 0x376d74, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00421918; /* 0x421918 */
extern unsigned char DAT_0042193c; /* 0x42193c */

/* Supplied declaration required: FUN_00376880. */
/* Supplied declaration required: FUN_00376c7c. */


void FUN_00376d74(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421918;
  param_1[0x16] = (unsigned int)&DAT_0042193c;
  FUN_00376c7c(param_1);
  FUN_00376880(param_1);
  return;
}
