/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003609e0` (_code @ 0x3609e0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_002c0000(); /* 0x2c0000 */
extern unsigned int DAT_00471bac; /* 0x471bac */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_003609e0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(romwright_code **)(temp_v1 + 0x80) = FUN_002c0000;
  software_interrupt(0x32);
  temp_v0 = DAT_00471bac;
  if ((DAT_00471bac & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
