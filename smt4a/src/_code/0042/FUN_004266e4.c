/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004266e4` (_code @ 0x4266e4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned char sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_002d0082; /* 0x2d0082 */
extern unsigned int DAT_005b4438; /* 0x5b4438 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_004266e4(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v3 + 0x80) = &LAB_002d0082;
  *(unsigned char *)(temp_v3 + 0x84) = param_3;
  *(unsigned char *)(temp_v3 + 0x88) = param_4;
  *(unsigned int *)(temp_v3 + 0x90) = param_1;
  *(unsigned int *)(temp_v3 + 0x8c) = 0x800002;
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  temp_v4 = *(unsigned int *)(temp_v0 + 0x180);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned int *)(temp_v0 + 0x180) = 0x800002;
  *(unsigned int *)(temp_v0 + 0x184) = param_2;
  temp_v1 = DAT_005b4438;
  software_interrupt(0x32);
  temp_v2 = DAT_005b4438 & 0x80000000;
  *(unsigned int *)(temp_v0 + 0x180) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x184) = temp_v5;
  if (temp_v2 == 0) {
    temp_v1 = *(unsigned int *)(temp_v3 + 0x84);
  }
  return temp_v1;
}
