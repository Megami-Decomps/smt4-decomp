/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043cd90` (_code @ 0x43cd90, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_5: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
} param_5_stack;

extern unsigned char LAB_00310100; /* 0x310100 */
extern unsigned int DAT_005b4480; /* 0x5b4480 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0043cd90(unsigned char param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned char param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_00310100;
  *(unsigned char *)(temp_v1 + 0x84) = param_1;
  *(unsigned int *)(temp_v1 + 0x88) = param_3;
  *(unsigned int *)(temp_v1 + 0x8c) = param_4;
  *(unsigned char *)(temp_v1 + 0x90) = param_5;
  software_interrupt(0x32);
  temp_v0 = DAT_005b4480;
  if ((DAT_005b4480 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
