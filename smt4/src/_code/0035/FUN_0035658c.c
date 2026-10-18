/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035658c` (_code @ 0x35658c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044e654; /* 0x44e654 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_0035658c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  (**(romwright_code **)(*param_1 + 0x34))(param_1);
  temp_v0 = DAT_0044e654;
  temp_v1 = DAT_0044e654 + 0x30;
  nn_os_CriticalSection_Enter(temp_v1);
  *param_1 = *(int *)(temp_v0 + 0x24);
  *(int **)(temp_v0 + 0x24) = param_1;
  *(int *)(temp_v0 + 0x2c) = *(int *)(temp_v0 + 0x2c) - 1;
  nn_os_CriticalSection_Leave(temp_v1);
  return;
}
