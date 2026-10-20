/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442994` (_code @ 0x442994, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_5: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
} param_5_stack;

extern unsigned char LAB_00280244; /* 0x280244 */
extern unsigned int DAT_005c0a98; /* 0x5c0a98 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_00442994(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned char param_4,
                 unsigned char param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00280244;
  *(unsigned int *)(temp_v1 + 0x84) = param_2;
  *(unsigned int *)(temp_v1 + 0x88) = *param_3;
  *(unsigned int *)(temp_v1 + 0x8c) = param_3[1];
  *(unsigned int *)(temp_v1 + 0x90) = param_3[2];
  *(unsigned int *)(temp_v1 + 0x94) = param_3[3];
  *(unsigned int *)(temp_v1 + 0x98) = param_3[4];
  *(unsigned short *)(temp_v1 + 0x9c) = *(unsigned short *)(param_3 + 5);
  *(unsigned char *)(temp_v1 + 0xa0) = param_4;
  *(unsigned char *)(temp_v1 + 0xa4) = param_5;
  *(unsigned int *)(temp_v1 + 0xb4) = param_1;
  *(unsigned int *)(temp_v1 + 0xa8) = 0x20;
  *(unsigned int *)(temp_v1 + 0xb0) = 0;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a98;
  if ((DAT_005c0a98 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
