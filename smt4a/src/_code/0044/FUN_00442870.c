/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442870` (_code @ 0x442870, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002b0000; /* 0x2b0000 */
extern unsigned int DAT_005c0a98; /* 0x5c0a98 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00442870(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v3 + 0x80) = &LAB_002b0000;
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v1 + 0x180);
  temp_v4 = *puVar4;
  temp_v5 = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned int *)(temp_v1 + 0x184) = param_1;
  *puVar4 = 0x660002;
  temp_v0 = DAT_005c0a98;
  software_interrupt(0x32);
  temp_v2 = DAT_005c0a98 & 0x80000000;
  *puVar4 = temp_v4;
  *(unsigned int *)(temp_v1 + 0x184) = temp_v5;
  if (temp_v2 == 0) {
    temp_v0 = *(unsigned int *)(temp_v3 + 0x84);
  }
  return temp_v0;
}
