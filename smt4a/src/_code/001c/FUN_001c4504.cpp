/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c4504` (_code @ 0x1c4504, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c4598(unsigned int, unsigned int);
int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_001f0082; /* 0x1f0082 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int *nn_gxlow_CTR_GetGpu(void);
/* Supplied declaration required: FUN_001c4598. */


unsigned int FUN_001c4504(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  if (temp_v3 < *(int *)(param_1 + 0x34)) {
    do {
      temp_v0 = param_1 + temp_v3 * 0x1c;
      if (*(char *)(temp_v0 + 0x41) != '\0') {
        FUN_001c4598(*(unsigned int *)(temp_v0 + (unsigned int)(*(char *)(param_1 + 0x30) != '\0') * 4 + 0x44),
                     *(int *)(param_1 + 0x2c) * (unsigned int)*(unsigned char *)(temp_v0 + 0x40) * 4);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(param_1 + 0x34));
  }
  temp_v3 = *(int *)(param_1 + 0x2c);
  temp_v1 = *(unsigned int *)(param_1 + (unsigned int)(*(char *)(param_1 + 0x30) != '\0') * 4 + 0x1f8);
  puVar3 = (unsigned int *)nn_gxlow_CTR_GetGpu();
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v0 + 0x80) = &LAB_001f0082;
  *(unsigned int *)(temp_v0 + 0x90) = 0xffff8001;
  *(unsigned int *)(temp_v0 + 0x84) = temp_v1;
  *(int *)(temp_v0 + 0x88) = temp_v3 << 1;
  *(unsigned int *)(temp_v0 + 0x8c) = 0;
  temp_v2 = *puVar3;
  software_interrupt(0x32);
  if ((temp_v2 & 0x80000000) == 0) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x84);
  }
  return temp_v2;
}

} /* extern "C" */
