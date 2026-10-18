/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a708` (_code @ 0x12a708, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001a0000; /* 0x1a0000 */
extern signed char DAT_0044e361; /* 0x44e361 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_002ad254(void);
extern unsigned int *FUN_002ad264(int);


unsigned int FUN_0012a708(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  if (DAT_0044e361 == '\0') {
    return 0;
  }
  DAT_0044e361 = 0;
  temp_v0 = FUN_002ad254();
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_002ad264(temp_v0);
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
