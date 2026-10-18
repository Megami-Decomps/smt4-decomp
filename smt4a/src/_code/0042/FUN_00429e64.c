/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429e64` (_code @ 0x429e64, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_005893a8; /* 0x5893a8 */

/* Supplied declaration required: FUN_00514964. */
/* Supplied declaration required: nn_fs_ipc_FileSystem_ControlArchive. */


void FUN_00429e64(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  unsigned char temp_v2 [4];
  
  FUN_00514964();
  if (param_1 != 0) {
    temp_v0 = DAT_005893a8;
    nn_fs_ipc_FileSystem_ControlArchive
              (&temp_v0,temp_v2,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),0,
               temp_v1,1,temp_v2,1);
  }
  return;
}
