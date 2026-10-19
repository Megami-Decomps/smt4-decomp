/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c526c` (_code @ 0x2c526c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern signed char DAT_0044e7a8; /* 0x44e7a8 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Supplied declaration required: FUN_00128584. */
/* Supplied declaration required: FUN_002c52f8. */


void FUN_002c526c(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_lr;
  
  temp_v0 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    temp_v0 = temp_v0 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_0044e7a8 == '\0') {
    if (temp_v0 == 0xffffffff) {
      FUN_00128584(param_1,0,in_lr);
    }
    FUN_002c52f8();
    return;
  }
  if (temp_v0 != 0xfffffff9 && temp_v0 != 1) {
    FUN_00128584(param_1,0,in_lr);
    return;
  }
  return;
}
