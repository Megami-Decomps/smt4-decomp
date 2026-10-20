/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00188cb4` (_code @ 0x188cb4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);

typedef int romwright_code(...);
extern unsigned short DAT_005c0ad6; /* 0x5c0ad6 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


void FUN_00188cb4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    pcVar2 = *(romwright_code **)(temp_v1 * 4 + 0x643328);
    if ((temp_v1 < 0x10) && (((DAT_005c0ad6 >> (temp_v1 & 0xff)) & 1) != 0 && pcVar2 != (romwright_code *)0x0)) {
      temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
      (*pcVar2)(*(unsigned int *)(temp_v0 + temp_v1 * 4));
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 0x10);
  return;
}

} /* extern "C" */
