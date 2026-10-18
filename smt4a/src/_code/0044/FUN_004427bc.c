/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004427bc` (_code @ 0x4427bc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00270040; /* 0x270040 */
extern int DAT_005c0a98; /* 0x5c0a98 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_004427bc(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00270040;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a98;
  if (-1 < DAT_005c0a98) {
    *param_1 = *(unsigned int *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
