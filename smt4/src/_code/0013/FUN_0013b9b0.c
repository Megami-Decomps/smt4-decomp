/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b9b0` (_code @ 0x13b9b0, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
} param_2_stack;

extern unsigned char LAB_003e0080; /* 0x3e0080 */
extern unsigned int DAT_004656b0; /* 0x4656b0 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0013b9b0(unsigned int param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_003e0080;
  *(unsigned int *)(temp_v1 + 0x84) = param_1;
  *(unsigned char *)(temp_v1 + 0x88) = param_2;
  software_interrupt(0x32);
  temp_v0 = DAT_004656b0;
  if ((DAT_004656b0 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}
