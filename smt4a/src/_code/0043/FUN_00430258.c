/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430258` (_code @ 0x430258, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_5_stack;

extern unsigned int DAT_005c1fc4; /* 0x5c1fc4 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00430258(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4,
                 int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x80102;
  *(unsigned int *)(temp_v1 + 0x84) = param_1;
  *(unsigned int *)(temp_v1 + 0x88) = param_2;
  *(unsigned char *)(temp_v1 + 0x8c) = param_3;
  *(int *)(temp_v1 + 0x90) = param_5;
  *(unsigned int *)(temp_v1 + 0x94) = (param_5 << 4) | 10;
  *(unsigned int *)(temp_v1 + 0x98) = param_4;
  software_interrupt(0x32);
  temp_v0 = DAT_005c1fc4;
  if ((DAT_005c1fc4 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
