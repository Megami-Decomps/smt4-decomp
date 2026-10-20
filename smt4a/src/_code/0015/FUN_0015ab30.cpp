/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ab30` (_code @ 0x15ab30, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_5: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_005b4480; /* 0x5b4480 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int FUN_0015ab30(unsigned char param_1,unsigned char *param_2,unsigned int *param_3,unsigned int *param_4,
                unsigned int *param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v1 + 0x80) = 0x50040;
  *(unsigned char *)(temp_v1 + 0x84) = param_1;
  software_interrupt(0x32);
  temp_v0 = DAT_005b4480;
  if (-1 < DAT_005b4480) {
    *param_2 = *(unsigned char *)(temp_v1 + 0x88);
    *param_3 = *(unsigned int *)(temp_v1 + 0x8c);
    *param_4 = *(unsigned int *)(temp_v1 + 0x90);
    *param_5 = *(unsigned int *)(temp_v1 + 0x94);
    temp_v0 = *(int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
