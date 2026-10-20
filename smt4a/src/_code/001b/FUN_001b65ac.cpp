/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b65ac` (_code @ 0x1b65ac, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int DAT_005b4480; /* 0x5b4480 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_001b65ac(unsigned int param_1,unsigned int *param_2,unsigned char *param_3,unsigned char *param_4,
                unsigned char *param_5,unsigned int *param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0x60040;
  *(unsigned int *)(temp_v2 + 0x84) = param_1;
  software_interrupt(0x32);
  temp_v0 = DAT_005b4480;
  if (-1 < DAT_005b4480) {
    temp_v1 = *(unsigned int *)(temp_v2 + 0x8c);
    *param_2 = *(unsigned int *)(temp_v2 + 0x88);
    param_2[1] = temp_v1;
    *param_3 = *(unsigned char *)(temp_v2 + 0x90);
    *param_4 = *(unsigned char *)(temp_v2 + 0x94);
    *param_5 = *(unsigned char *)(temp_v2 + 0x98);
    *param_6 = *(unsigned int *)(temp_v2 + 0x9c);
    temp_v0 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
