/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f0e4` (_code @ 0x16f0e4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

typedef int romwright_code(...);
extern int FUN_00110000(...); /* 0x110000 */
extern unsigned int DAT_005c14bc; /* 0x5c14bc */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0016f0e4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(romwright_code **)(temp_v1 + 0x80) = FUN_00110000;
  software_interrupt(0x32);
  temp_v0 = DAT_005c14bc;
  if ((DAT_005c14bc & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
