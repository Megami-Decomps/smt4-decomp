/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b0f4` (_code @ 0x13b0f4, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int *FUN_002ad264(void);


unsigned int FUN_0013b0f4(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  puVar1 = (unsigned int *)FUN_002ad264();
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0x40080;
  *(unsigned int *)(temp_v2 + 0x84) = param_1;
  *(int *)(temp_v2 + 0x88) = param_3;
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (unsigned int *)(temp_v1 + 0x180);
  temp_v3 = *puVar4;
  temp_v4 = *(unsigned int *)(temp_v1 + 0x184);
  *puVar4 = (param_3 << 0xe) | 2;
  *(unsigned int *)(temp_v1 + 0x184) = param_2;
  temp_v0 = *puVar1;
  software_interrupt(0x32);
  *puVar4 = temp_v3;
  *(unsigned int *)(temp_v1 + 0x184) = temp_v4;
  if ((temp_v0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}
