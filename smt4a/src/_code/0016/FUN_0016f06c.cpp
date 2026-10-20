/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f06c` (_code @ 0x16f06c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern int _ZTV9Obj5c14bc; /* 0x5c14bc */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0016f06c(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                unsigned int *param_5,unsigned int *param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0xa0000;
  software_interrupt(0x32);
  temp_v0 = _ZTV9Obj5c14bc;
  if (-1 < _ZTV9Obj5c14bc) {
    *param_1 = *(unsigned int *)(temp_v1 + 0x8c);
    *param_2 = *(unsigned int *)(temp_v1 + 0x90);
    *param_3 = *(unsigned int *)(temp_v1 + 0x94);
    *param_4 = *(unsigned int *)(temp_v1 + 0x98);
    *param_5 = *(unsigned int *)(temp_v1 + 0x9c);
    *param_6 = *(unsigned int *)(temp_v1 + 0xa0);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
