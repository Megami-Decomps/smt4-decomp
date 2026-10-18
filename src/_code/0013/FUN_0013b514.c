/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b514` (_code @ 0x13b514, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char LAB_00160042; /* 0x160042 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0013b514(unsigned int *param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00160042;
  *(unsigned char *)(temp_v1 + 0x84) = param_3;
  *(unsigned int *)(temp_v1 + 0x8c) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = 0;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
