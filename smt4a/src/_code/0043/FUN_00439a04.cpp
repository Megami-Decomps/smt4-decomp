/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439a04` (_code @ 0x439a04, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_005c0a80; /* 0x5c0a80 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int wstrlen(void);


unsigned int FUN_00439a04(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = wstrlen();
    temp_v1 = temp_v1 + 1;
  }
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0x30042;
  *(int *)(temp_v2 + 0x84) = temp_v1;
  *(int *)(temp_v2 + 0x8c) = param_1;
  *(unsigned int *)(temp_v2 + 0x88) = (temp_v1 << 0xe) | 2;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0a80;
  if ((DAT_005c0a80 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
