/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fcf4` (_code @ 0x10fcf4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128d5c(int);
int FUN_002c52f8(void);
int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00472ad8; /* 0x472ad8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0011c834(void);
/* Supplied declaration required: FUN_00128d5c. */
extern int FUN_002bb638(unsigned int);
extern unsigned int FUN_002c12bc(void);
/* Supplied declaration required: FUN_002c52f8. */


unsigned int FUN_0010fcf4(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb638(param_1);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v1 = FUN_002c12bc(), temp_v1 == 0)) {
    temp_v0 = FUN_0011c834();
    if (temp_v0 < 0) {
      FUN_002c52f8();
    }
    FUN_00128d5c(0xf);
    temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(unsigned int *)(temp_v0 + 0x80) = 0x60040;
    *(unsigned int *)(temp_v0 + 0x84) = 6;
    software_interrupt(0x32);
    temp_v1 = DAT_00472ad8;
    if ((DAT_00472ad8 & 0x80000000) == 0) {
      temp_v1 = *(unsigned int *)(temp_v0 + 0x84);
    }
    return temp_v1;
  }
  return temp_v1;
}

} /* extern "C" */
