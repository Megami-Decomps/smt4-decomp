/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ba54` (_code @ 0x11ba54, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */

/* Supplied declaration required: FUN_001272d4. */


unsigned int FUN_0011ba54(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_1;
  DAT_0044e660 = param_1;
  FUN_001272d4(temp_v0,0x40201c8);
  return 0;
}
