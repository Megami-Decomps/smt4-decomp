/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b870` (_code @ 0x13b870, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00465644; /* 0x465644 */

extern unsigned char nn_os_LightEvent_TryWait(unsigned int);


unsigned char FUN_0013b870(void)

{
  unsigned char temp_v0;
  
  temp_v0 = nn_os_LightEvent_TryWait((unsigned int)&DAT_00465644);
  return temp_v0;
}

} /* extern "C" */
