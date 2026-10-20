/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442a94` (_code @ 0x442a94, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_00589388; /* 0x589388 */
extern int DAT_005c0a98; /* 0x5c0a98 */
extern unsigned int DAT_0062d294; /* 0x62d294 */
extern unsigned int DAT_0062d2a0; /* 0x62d2a0 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_00442a94(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  temp_v1 = DAT_00589384 != 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  temp_v0 = DAT_005c0a98;
  if ((temp_v1) && (DAT_00589384 = DAT_00589384 - 1, DAT_00589384 == 0)) {
    DAT_0062d294 = 0xffffffff;
    DAT_0062d2a0 = 0xffffffff;
    DAT_00589388 = 0;
    software_interrupt(0x23);
    if (DAT_005c0a98 < 0) {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
      return temp_v0;
    }
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  return 0;
}

} /* extern "C" */
