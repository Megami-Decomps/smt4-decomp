/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1398` (_code @ 0x2c1398, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00471b90; /* 0x471b90 */
extern unsigned int DAT_004e9ba8; /* 0x4e9ba8 */

extern unsigned int FUN_0011ce28(char *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_002c1398(void)

{
  unsigned int temp_v0;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004e9ba8);
  if (0 < DAT_00471b90) {
    DAT_00471b90 = DAT_00471b90 + 1;
    nn_os_CriticalSection_Leave((unsigned int)&DAT_004e9ba8);
    return 0x82067f9;
  }
  temp_v0 = FUN_0011ce28("srv:");
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e9ba8);
  return temp_v0;
}
