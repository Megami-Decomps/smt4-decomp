/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018cfe4` (_code @ 0x18cfe4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: nw_gfx_SceneTraverser_Begin. */


void FUN_0018cfe4(int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_gfx_SceneTraverser_Begin(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 4));
  (**(romwright_code **)(*param_2 + 0x10))(param_2,*(unsigned int *)(param_1 + 8));
  *(unsigned int *)(*(int *)(param_1 + 8) + 8) = 0;
  return;
}
