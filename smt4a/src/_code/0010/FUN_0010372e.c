/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010372e` (_code @ 0x10372e, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002e7258. */
/* Supplied declaration required: nn_fs_detail_FileBase_TrySeek. */


void FUN_0010372e(int param_1)

{
/* irregular: 2 native warning(s); review required */
  nn_fs_detail_FileBase_TrySeek(param_1 + 4);
  FUN_002e7258();
  return;
}
