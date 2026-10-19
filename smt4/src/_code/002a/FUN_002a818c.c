/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a818c` (_code @ 0x2a818c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00465644; /* 0x465644 */

extern void nn_os_LightEvent_ClearSignal(unsigned int);


void FUN_002a818c(void)

{
  nn_os_LightEvent_ClearSignal((unsigned int)&DAT_00465644);
  return;
}
