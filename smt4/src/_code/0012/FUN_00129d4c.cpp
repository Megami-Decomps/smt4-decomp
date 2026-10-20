/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129d4c` (_code @ 0x129d4c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471a70; /* 0x471a70 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00129d4c(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00471a70 + 0x1c));
  temp_v1 = 0;
  if (param_2 < 7) {
    nn_os_CriticalSection_Enter((*(int *)((unsigned char *)&DAT_00471a70 + 0x1c)));
    temp_v2 = temp_v0 + param_2 * 4;
    temp_v1 = *(unsigned int *)(temp_v2 + 0x10);
    *(unsigned int *)(temp_v2 + 0x10) = param_1;
    nn_os_CriticalSection_Leave(temp_v0);
  }
  return temp_v1;
}

} /* extern "C" */
