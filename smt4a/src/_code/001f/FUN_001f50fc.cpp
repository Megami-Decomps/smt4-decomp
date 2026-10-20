/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f50fc` (_code @ 0x1f50fc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_001f50fc(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  piVar2 = (int *)0x0;
  temp_v0 = 0;
  while( 1 ) {
    piVar1 = (int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + temp_v0 * 0x28 + 0x29510);
    if (*piVar1 == 0 && piVar2 == (int *)0x0) {
      piVar2 = piVar1;
    }
    if (*piVar1 == param_1) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x10) {
      piVar1 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        piVar1 = piVar2;
      }
      if (*piVar1 == 0) {
        *piVar1 = param_1;
      }
      piVar1[1] = param_2;
      return;
    }
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      *piVar1 = param_1;
    }
    piVar1[1] = param_2;
    return;
  }
  piVar1 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2;
  }
  if (*piVar1 == 0) {
    *piVar1 = param_1;
  }
  piVar1[1] = param_2;
  return;
}

} /* extern "C" */
