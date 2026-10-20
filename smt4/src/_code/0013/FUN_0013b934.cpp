/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b934` (_code @ 0x13b934, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int DAT_004656b0; /* 0x4656b0 */
extern unsigned char DAT_004b00c2; /* 0x4b00c2 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0013b934(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,
                unsigned int *param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v2 + 0x80) = &DAT_004b00c2;
  *(unsigned int *)(temp_v2 + 0x84) = param_1;
  *(int *)(temp_v2 + 0x88) = param_3;
  *(int *)(temp_v2 + 0x8c) = param_5;
  *(unsigned int *)(temp_v2 + 0x90) = (param_3 << 0xe) | 0x402;
  *(unsigned int *)(temp_v2 + 0x94) = param_2;
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v0 + 0x180);
  temp_v3 = *puVar4;
  temp_v4 = *(unsigned int *)(temp_v0 + 0x184);
  *puVar4 = (param_5 << 0xe) | 2;
  *(unsigned int *)(temp_v0 + 0x184) = param_4;
  temp_v1 = DAT_004656b0;
  software_interrupt(0x32);
  *puVar4 = temp_v3;
  *(unsigned int *)(temp_v0 + 0x184) = temp_v4;
  if (-1 < temp_v1) {
    *param_6 = *(unsigned int *)(temp_v2 + 0x88);
    temp_v1 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v1;
}

} /* extern "C" */
