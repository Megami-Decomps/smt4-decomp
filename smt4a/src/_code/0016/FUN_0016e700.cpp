/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e700` (_code @ 0x16e700, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

extern unsigned char DAT_0061a664; /* 0x61a664 */
extern unsigned char g_callbackFuncs; /* 0x61a684 */


unsigned int FUN_0016e700(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(temp_v0 * 4 + 0x61a644) == 0) {
      *(unsigned int *)(temp_v0 * 4 + 0x61a644) = param_1;
      *(unsigned int *)(&DAT_0061a664 + temp_v0 * 4) = param_2;
      *(unsigned int *)(&g_callbackFuncs + temp_v0 * 4) = param_3;
      return 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  return 0;
}

} /* extern "C" */
