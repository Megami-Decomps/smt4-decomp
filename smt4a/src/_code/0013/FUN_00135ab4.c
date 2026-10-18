/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135ab4` (_code @ 0x135ab4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0012e338. */


void FUN_00135ab4(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_c;
  
  temp_v0 = param_3;
  uStack_c = param_4;
  FUN_0012e338(&temp_v0);
  *param_1 = temp_v0;
  return;
}
