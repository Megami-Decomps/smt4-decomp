/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035640c` (_code @ 0x35640c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *DAT_004d43b8; /* 0x4d43b8 */
extern int DAT_004d43c0; /* 0x4d43c0 */
extern unsigned int DAT_004d43c4; /* 0x4d43c4 */

extern unsigned int nn_fs_ipc_Directory_Close(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0035640c(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1[1];
  temp_v0 = param_4;
  if (temp_v1 != 0) {
    nn_fs_ipc_Directory_Close((unsigned int)&temp_v1);
    temp_v0 = temp_v1;
  }
  temp_v1 = temp_v0;
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004d43c4);
  *param_1 = (int)DAT_004d43b8;
  DAT_004d43c0 = DAT_004d43c0 - 1;
  DAT_004d43b8 = param_1;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004d43c4);
  return;
}

} /* extern "C" */
