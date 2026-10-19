/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2968` (_code @ 0x2c2968, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001200d8. */
/* Supplied declaration required: FUN_002abb5c. */
/* Supplied declaration required: nw_gfx_SceneTraverser_Begin. */


void FUN_002c2968(int param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  (**(romwright_code **)(*param_2 + 0x10))(param_2,*(unsigned int *)(param_1 + 0x10));
  FUN_001200d8(*(unsigned int *)(param_1 + 0x10));
  nw_gfx_SceneTraverser_Begin(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 4));
  (**(romwright_code **)(*param_2 + 0x10))(param_2,*(unsigned int *)(param_1 + 8));
  FUN_002abb5c(*(unsigned int *)(param_1 + 8));
  return;
}
