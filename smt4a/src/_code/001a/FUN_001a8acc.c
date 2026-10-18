/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8acc` (_code @ 0x1a8acc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: nw_snd_internal_Util_BitFlag_GetValue. */


void FUN_001a8acc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  nw_snd_internal_Util_BitFlag_GetValue(param_1 + 4,&temp_v0,9);
  return;
}
