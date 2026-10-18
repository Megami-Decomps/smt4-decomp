/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00355fa0` (_code @ 0x355fa0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned int FUN_00239dec(void);
/* Supplied declaration required: nn_fs_ipc_FileSystem_CreateFile. */


void FUN_00355fa0(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v2 = param_2[2];
  if (temp_v2 < 0x201) {
    temp_v3 = *param_2;
    temp_v4 = param_2[1];
    temp_v0 = *(unsigned int *)(param_1 + 8);
    temp_v1 = *(unsigned int *)(param_1 + 0xc);
    temp_v5 = FUN_00239dec();
    nn_fs_ipc_FileSystem_CreateFile(&temp_v5,0,temp_v0,temp_v1,temp_v3,temp_v4,temp_v2,0,param_3,param_4);
  }
  return;
}
