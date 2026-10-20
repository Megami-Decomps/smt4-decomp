/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044057c` (_code @ 0x44057c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
} param_8_stack;

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0044057c(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,int *param_5
                ,unsigned int param_6,unsigned int param_7,int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0x80102;
  *(unsigned int *)(temp_v2 + 0x84) = param_3;
  *(int *)(temp_v2 + 0x88) = *param_5;
  *(unsigned int *)(temp_v2 + 0x8c) = param_6;
  *(int *)(temp_v2 + 0x90) = param_8;
  *(unsigned int *)(temp_v2 + 0x94) = 0x20;
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v0 + 0x180);
  temp_v1 = *param_5;
  temp_v3 = *puVar4;
  temp_v4 = *(unsigned int *)(temp_v0 + 0x184);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x188);
  temp_v6 = *(unsigned int *)(temp_v0 + 0x18c);
  *(unsigned int *)(temp_v0 + 0x188) = (param_8 << 0xe) | 2;
  *(unsigned int *)(temp_v0 + 0x18c) = param_7;
  *puVar4 = (temp_v1 << 0xe) | 2;
  *(unsigned int *)(temp_v0 + 0x184) = param_4;
  temp_v1 = *param_1;
  software_interrupt(0x32);
  *puVar4 = temp_v3;
  *(unsigned int *)(temp_v0 + 0x184) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x188) = temp_v5;
  *(unsigned int *)(temp_v0 + 0x18c) = temp_v6;
  if (-1 < temp_v1) {
    *param_2 = *(unsigned int *)(temp_v2 + 0x88);
    *param_5 = *(int *)(temp_v2 + 0x8c);
    temp_v1 = *(int *)(temp_v2 + 0x84);
  }
  return temp_v1;
}

} /* extern "C" */
