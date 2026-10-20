/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f50c` (_code @ 0x10f50c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00465600; /* 0x465600 */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned char FUN_0010f50c(void)

{
  unsigned char temp_v0;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004c6410);
  temp_v0 = DAT_00465600 != 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004c6410);
  return temp_v0;
}

} /* extern "C" */
