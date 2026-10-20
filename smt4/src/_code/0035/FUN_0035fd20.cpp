/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fd20` (_code @ 0x35fd20, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_00250000; /* 0x250000 */
extern int DAT_004719e8; /* 0x4719e8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0035fd20(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v2 + 0x80) = &LAB_00250000;
  software_interrupt(0x32);
  temp_v0 = DAT_004719e8;
  if (-1 < DAT_004719e8) {
    temp_v1 = *(unsigned int *)(temp_v2 + 0x8c);
    *param_1 = *(unsigned int *)(temp_v2 + 0x88);
    param_1[1] = temp_v1;
    temp_v0 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
