/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002af370` (_code @ 0x2af370, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

/* Supplied declaration required: FUN_002af370. */


void FUN_002af370(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  if ((temp_v0 != 0) && (temp_v0 != param_2)) {
    FUN_002af370(temp_v0);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}
