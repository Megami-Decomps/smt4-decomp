/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128110` (_code @ 0x128110, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_movefrom_User_R_Thread_and_Process_ID(void);

extern unsigned char LAB_001005b4; /* 0x1005b4 */
extern unsigned char LAB_00128170; /* 0x128170 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */


/* WARNING: Removing unreachable block (ram,0x00128158) */

void FUN_00128110(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(unsigned int **)(temp_v0 + 0x5c) = (unsigned int *)(temp_v0 + 0x60);
  *(unsigned char **)(temp_v0 + 100) = &LAB_001005b4;
  *(unsigned char **)(temp_v0 + 0x68) = &LAB_00128170;
  *(unsigned int *)(temp_v0 + 0x60) = 0;
  *(unsigned char *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  return;
}

} /* extern "C" */
