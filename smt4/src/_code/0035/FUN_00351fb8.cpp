/* NON_MATCHING: retail directly reads CP15 TLS and invokes SVC 0x32; required __mrc/__svc constructs are disallowed. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned int DAT_004655f8; /* 0x4655f8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00351fb8(unsigned int param_1)

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
  *(unsigned int *)(temp_v3 + 0x80) = 0x10000;
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v1 + 0x180);
  temp_v4 = *puVar4;
  temp_v5 = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned int *)(temp_v1 + 0x184) = param_1;
  *puVar4 = 0x800002;
  temp_v0 = DAT_004655f8;
  software_interrupt(0x32);
  temp_v2 = DAT_004655f8 & 0x80000000;
  *puVar4 = temp_v4;
  *(unsigned int *)(temp_v1 + 0x184) = temp_v5;
  if (temp_v2 == 0) {
    temp_v0 = *(unsigned int *)(temp_v3 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
