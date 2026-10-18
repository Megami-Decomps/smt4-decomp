/* NON_MATCHING: romwright 0.5.0 decompilation of `QcUtility_GetQuestTableChunkCount` (_code @ 0x3ea304, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002c0c74. */
/* Supplied declaration required: FUN_002c0cec. */


void QcUtility_GetQuestTableChunkCount(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c0cec(0x26,param_2 * 2 + 1);
  FUN_002c0c74();
  return;
}
