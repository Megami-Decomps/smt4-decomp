/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c57c4` (_code @ 0x2c57c4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char DAT_0044e3b0; /* 0x44e3b0 */

/* Supplied declaration required: FUN_002c14b8. */
/* Supplied declaration required: FUN_002c14e4. */


void FUN_002c57c4(int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int unaff_r4;
  
  if (param_1 != 0) {
    unaff_r4 = 0;
  }
  DAT_0044e3b0 = 0;
  if (param_1 != 0) {
    FUN_002c14e4(3);
    FUN_002c14b8(unaff_r4);
    return;
  }
  *param_3 = 0xe3b0;
  return;
}
