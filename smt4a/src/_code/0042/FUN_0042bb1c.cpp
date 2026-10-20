/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042bb1c` (_code @ 0x42bb1c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0058939c; /* 0x58939c */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0042bb1c(int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  (**(romwright_code **)(*param_1 + 0x34))(param_1);
  temp_v0 = DAT_0058939c;
  temp_v1 = DAT_0058939c + 0x30;
  nn_os_CriticalSection_Enter(temp_v1);
  *param_1 = *(int *)(temp_v0 + 0x24);
  *(int **)(temp_v0 + 0x24) = param_1;
  *(int *)(temp_v0 + 0x2c) = *(int *)(temp_v0 + 0x2c) - 1;
  nn_os_CriticalSection_Leave(temp_v1);
  return;
}

} /* extern "C" */
