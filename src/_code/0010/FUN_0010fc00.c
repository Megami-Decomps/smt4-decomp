/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fc00` (_code @ 0x10fc00, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00472ad8; /* 0x472ad8 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0011c754(void);
/* Supplied declaration required: FUN_00128c80. */
extern int FUN_002bb978(unsigned int);
/* Supplied declaration required: FUN_002bce48. */
extern unsigned int FUN_002c1494(void);


unsigned int FUN_0010fc00(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb978(param_1);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v1 = FUN_002c1494(), temp_v1 == 0)) {
    temp_v0 = FUN_0011c754();
    if (temp_v0 < 0) {
      FUN_002bce48();
    }
    FUN_00128c80(0xf);
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
