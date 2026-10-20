/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001713a0` (_code @ 0x1713a0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);
int software_interrupt(int);

extern unsigned char LAB_001a0000; /* 0x1a0000 */
extern signed char DAT_005891b1; /* 0x5891b1 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_001a2480(void);
extern unsigned int *FUN_001a2a5c(int);


unsigned int FUN_001713a0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  if (DAT_005891b1 == '\0') {
    return 0;
  }
  DAT_005891b1 = 0;
  temp_v0 = FUN_001a2480();
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_001a2a5c(temp_v0);
    temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(unsigned char **)(temp_v0 + 0x80) = &LAB_001a0000;
    temp_v1 = *puVar2;
    software_interrupt(0x32);
    if ((temp_v1 & 0x80000000) == 0) {
      temp_v1 = *(unsigned int *)(temp_v0 + 0x84);
    }
    return temp_v1;
  }
  return 0x202bf8;
}

} /* extern "C" */
