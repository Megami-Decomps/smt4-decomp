/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b9f4` (_code @ 0x13b9f4, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0013b9f4(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,
                int param_5,unsigned int *param_6,unsigned int *param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0xd0080;
  *(unsigned int *)(temp_v2 + 0x84) = param_2;
  *(int *)(temp_v2 + 0x88) = param_5;
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v1 + 0x180);
  temp_v3 = *puVar4;
  temp_v4 = *(unsigned int *)(temp_v1 + 0x184);
  *puVar4 = (param_5 << 0xe) | 2;
  *(unsigned int *)(temp_v1 + 0x184) = param_4;
  temp_v0 = DAT_004656b0;
  software_interrupt(0x32);
  temp_v5 = -1 < DAT_004656b0;
  *puVar4 = temp_v3;
  *(unsigned int *)(temp_v1 + 0x184) = temp_v4;
  if (temp_v5) {
    *param_1 = *(unsigned int *)(temp_v2 + 0x88);
    *param_3 = *(unsigned int *)(temp_v2 + 0x8c);
    *param_6 = *(unsigned int *)(temp_v2 + 0x90);
    *param_7 = *(unsigned int *)(temp_v2 + 0x98);
    temp_v0 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
