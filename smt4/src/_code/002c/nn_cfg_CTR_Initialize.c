/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cfg_CTR_Initialize` (_code @ 0x2c5dc0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00128334(void);
/* Supplied declaration required: FUN_002bbb2c. */


void nn_cfg_CTR_Initialize(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00128334();
  if ((temp_v0 < 0) && (temp_v0 < 0)) {
    FUN_002bbb2c(temp_v0,0x2c5dd8);
    return;
  }
  return;
}
