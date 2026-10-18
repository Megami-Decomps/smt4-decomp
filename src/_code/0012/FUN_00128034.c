/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128034` (_code @ 0x128034, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001005b4; /* 0x1005b4 */
extern unsigned char LAB_00128094; /* 0x128094 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


/* WARNING: Removing unreachable block (ram,0x0012807c) */

void FUN_00128034(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int **)(temp_v0 + 0x5c) = (unsigned int *)(temp_v0 + 0x60);
  *(unsigned char **)(temp_v0 + 100) = &LAB_001005b4;
  *(unsigned char **)(temp_v0 + 0x68) = &LAB_00128094;
  *(unsigned int *)(temp_v0 + 0x60) = 0;
  *(unsigned char *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  return;
}
