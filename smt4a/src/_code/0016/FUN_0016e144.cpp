/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e144` (_code @ 0x16e144, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);

extern unsigned char LAB_00101570; /* 0x101570 */
extern unsigned char LAB_0016e1a4; /* 0x16e1a4 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


/* WARNING: Removing unreachable block (ram,0x0016e18c) */

void FUN_0016e144(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int **)(temp_v0 + 0x5c) = (unsigned int *)(temp_v0 + 0x60);
  *(unsigned char **)(temp_v0 + 100) = &LAB_00101570;
  *(unsigned char **)(temp_v0 + 0x68) = &LAB_0016e1a4;
  *(unsigned int *)(temp_v0 + 0x60) = 0;
  *(unsigned char *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  return;
}

} /* extern "C" */
