/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4b0c` (_code @ 0x2a4b0c, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_00130082; /* 0x130082 */
extern unsigned int *DAT_0044e460; /* 0x44e460 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_002a4b0c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_0044e460;
  if (DAT_0044e460 != (unsigned int *)0x0) {
    temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(unsigned char **)(temp_v1 + 0x80) = &LAB_00130082;
    *(unsigned int *)(temp_v1 + 0x90) = 0xffff8001;
    *(unsigned int *)(temp_v1 + 0x84) = param_1;
    *(unsigned int *)(temp_v1 + 0x88) = param_2;
    *(unsigned int *)(temp_v1 + 0x8c) = 0;
    temp_v0 = *puVar1;
    software_interrupt(0x32);
    if ((temp_v0 & 0x80000000) == 0) {
      temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
    }
    return temp_v0;
  }
  return 0xc8a0a7f8;
}

} /* extern "C" */
