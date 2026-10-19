/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfa0c` (_code @ 0x3dfa0c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int FUN_00239ab8(void);
extern unsigned int nn_fs_ipc_File_GetSize(unsigned int, long long *);


void FUN_003dfa0c(unsigned int param_1,long long *param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  
  temp_v0 = param_4;
  temp_v0 = FUN_00239ab8();
  nn_fs_ipc_File_GetSize((unsigned int)&temp_v0,param_2);
  return;
}
