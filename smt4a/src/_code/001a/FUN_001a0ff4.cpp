/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0ff4` (_code @ 0x1a0ff4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_6: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
} param_6_stack;

extern unsigned char LAB_001100c2; /* 0x1100c2 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_001a0ff4(int *param_1,unsigned int param_2,int param_3,unsigned short param_4,unsigned short param_5,
                unsigned char *param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_001100c2;
  *(int *)(temp_v1 + 0x84) = param_3;
  *(unsigned short *)(temp_v1 + 0x88) = param_4;
  *(unsigned short *)(temp_v1 + 0x8c) = param_5;
  *(unsigned int *)(temp_v1 + 0x94) = param_2;
  *(unsigned int *)(temp_v1 + 0x90) = (param_3 << 4) | 10;
  temp_v0 = *param_1;
  software_interrupt(0x32);
  if (-1 < temp_v0) {
    *param_6 = *(unsigned char *)(temp_v1 + 0x88);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
