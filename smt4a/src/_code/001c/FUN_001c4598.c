/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c4598` (_code @ 0x1c4598, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001f0082; /* 0x1f0082 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int *FUN_001a2a5c(void);


unsigned int FUN_001c4598(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_001a2a5c();
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_001f0082;
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
