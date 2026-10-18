/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426820` (_code @ 0x426820, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
} param_6_stack;

extern unsigned int DAT_005c149c; /* 0x5c149c */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00426820(unsigned char param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x10040102;
  *(unsigned char *)(temp_v1 + 0x84) = param_1;
  *(int *)(temp_v1 + 0x90) = param_6;
  *(unsigned int *)(temp_v1 + 0x88) = param_3;
  *(unsigned int *)(temp_v1 + 0x8c) = param_4;
  *(unsigned int *)(temp_v1 + 0x98) = param_5;
  *(unsigned int *)(temp_v1 + 0x94) = (param_6 << 5) | 10;
  software_interrupt(0x32);
  temp_v0 = DAT_005c149c;
  if ((DAT_005c149c & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
