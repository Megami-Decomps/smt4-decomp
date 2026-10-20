/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004426c8` (_code @ 0x4426c8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned int DAT_00100040; /* 0x100040 */
extern unsigned int DAT_005c0a98; /* 0x5c0a98 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_004426c8(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int **)(temp_v3 + 0x80) = &DAT_00100040;
  *(int *)(temp_v3 + 0x84) = param_2;
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  temp_v4 = *(unsigned int *)(temp_v2 + 0x180);
  temp_v5 = *(unsigned int *)(temp_v2 + 0x184);
  *(unsigned int *)(temp_v2 + 0x180) = (param_2 << 0xe) | 2;
  *(unsigned int *)(temp_v2 + 0x184) = param_1;
  temp_v0 = DAT_005c0a98;
  software_interrupt(0x32);
  temp_v1 = DAT_005c0a98 & 0x80000000;
  *(unsigned int *)(temp_v2 + 0x180) = temp_v4;
  *(unsigned int *)(temp_v2 + 0x184) = temp_v5;
  if (temp_v1 == 0) {
    temp_v0 = *(unsigned int *)(temp_v3 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
