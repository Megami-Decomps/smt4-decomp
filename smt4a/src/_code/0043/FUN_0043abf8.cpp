/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043abf8` (_code @ 0x43abf8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_001a0040; /* 0x1a0040 */
extern unsigned int DAT_005c0b4c; /* 0x5c0b4c */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0043abf8(unsigned short param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned char **)(temp_v1 + 0x80) = &LAB_001a0040;
  *(unsigned short *)(temp_v1 + 0x84) = param_1;
  software_interrupt(0x32);
  temp_v0 = DAT_005c0b4c;
  if ((DAT_005c0b4c & 0x80000000) == 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x84);
  }
  return temp_v0;
}

} /* extern "C" */
