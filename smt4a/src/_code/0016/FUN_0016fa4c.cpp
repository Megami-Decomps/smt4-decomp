/* NON_MATCHING: retail directly reads CP15 TLS and invokes SVC 0x32; required __mrc/__svc constructs are disallowed. */
#include "romwright_types.h"

extern "C" {

int wordPairCopy(int);
int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int DAT_005c0b18; /* 0x5c0b18 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: wordPairCopy. */


int FUN_0016fa4c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x50100;
  wordPairCopy(temp_v1 + 0x84);
  *(unsigned int *)(temp_v1 + 0x8c) = param_3;
  *(unsigned int *)(temp_v1 + 0x90) = param_4;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0b18;
  if (-1 < DAT_005c0b18) {
    *param_1 = *(unsigned int *)(temp_v1 + 0x8c);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
