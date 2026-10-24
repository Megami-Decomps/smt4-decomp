/* NON_MATCHING: issues SVC 0x24 with a 64-bit timeout; no permitted syscall wrapper is named in the project. */
/* romwright 0.5.0 decompilation of nn_os_Thread_FinalizeImpl for reference (not compiled; its own view of the boundaries):

void nn_os_Thread_FinalizeImpl(int *param_1)

{
  if ((char)param_1[1] == '\0') {
    software_interrupt(0x24);
    if (*param_1 < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 1) = 1;
  }
  return;
}
*/
#include "common.h"
