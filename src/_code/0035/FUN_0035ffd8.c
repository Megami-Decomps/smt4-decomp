/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ffd8` (_code @ 0x35ffd8, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_004719e8; /* 0x4719e8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_002c3290(void);


unsigned int FUN_0035ffd8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_002c3290();
    temp_v1 = temp_v1 + 1;
  }
  temp_v2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int *)(temp_v2 + 0x80) = 0x40042;
  *(int *)(temp_v2 + 0x84) = temp_v1;
  *(int *)(temp_v2 + 0x8c) = param_1;
  *(unsigned int *)(temp_v2 + 0x88) = (temp_v1 << 0xe) | 2;
  software_interrupt(0x32);
  temp_v0 = DAT_004719e8;
  if ((DAT_004719e8 & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v2 + 0x84);
  }
  return temp_v0;
}
