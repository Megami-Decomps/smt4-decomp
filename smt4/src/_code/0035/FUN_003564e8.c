/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003564e8` (_code @ 0x3564e8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned long long FUN_00239dec(unsigned int *);
/* Supplied declaration required: nn_fs_ipc_FileSystem_CloseArchive. */


unsigned int *
FUN_003564e8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  
  *param_1 = (unsigned int)"挼5悼5怐5";
  temp_v0 = param_1[2];
  temp_v1 = param_1[3];
  if (temp_v0 != 0 || temp_v1 != 0) {
    temp_v3 = param_4;
    temp_v2 = FUN_00239dec(param_1);
    temp_v3 = (unsigned int)temp_v2;
    nn_fs_ipc_FileSystem_CloseArchive(&temp_v3,(int)((unsigned long long)temp_v2 >> 0x20),temp_v0,temp_v1);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return param_1;
}
