/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045bc3c` (_code @ 0x45bc3c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0055bd34; /* 0x55bd34 */
extern unsigned char DAT_0055bd58; /* 0x55bd58 */

/* Supplied declaration required: FUN_0045b738. */
/* Supplied declaration required: FUN_0045bb44. */


void FUN_0045bc3c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055bd34;
  param_1[0x17] = (unsigned int)&DAT_0055bd58;
  FUN_0045bb44(param_1);
  FUN_0045b738(param_1);
  return;
}
