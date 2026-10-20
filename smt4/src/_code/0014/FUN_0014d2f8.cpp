/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d2f8` (_code @ 0x14d2f8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_Util_BitFlag_GetValue(int, unsigned int [2], int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: nw_snd_internal_Util_BitFlag_GetValue. */


void FUN_0014d2f8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_4;
  nw_snd_internal_Util_BitFlag_GetValue(param_1 + 4,temp_v0,1);
  return;
}

} /* extern "C" */
