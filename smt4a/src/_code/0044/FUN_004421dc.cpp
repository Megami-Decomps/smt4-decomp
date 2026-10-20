/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004421dc` (_code @ 0x4421dc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned char FUN_004421dc(void)

{
  unsigned char temp_v0;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  temp_v0 = DAT_00589384 != 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  return temp_v0;
}

} /* extern "C" */
