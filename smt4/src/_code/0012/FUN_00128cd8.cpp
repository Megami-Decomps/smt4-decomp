/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128cd8` (_code @ 0x128cd8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

typedef int romwright_code(...);
extern int _ZN9Obj4212e86createEPvP18AsdAllocatorObject(...); /* 0x120000 */
extern unsigned int DAT_00472ab0; /* 0x472ab0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00128cd8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(romwright_code **)(temp_v1 + 0x80) = _ZN9Obj4212e86createEPvP18AsdAllocatorObject;
  software_interrupt(0x32);
  temp_v0 = DAT_00472ab0;
  if ((DAT_00472ab0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
