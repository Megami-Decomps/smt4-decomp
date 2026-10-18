/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353160` (_code @ 0x353160, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_003523d8. */


void FUN_00353160(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_4;
  FUN_003523d8(temp_v0,1,param_1,param_2);
  return;
}
