/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4da0` (_code @ 0x1f4da0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f69c; /* 0x57f69c */


int FUN_001f4da0(int param_1)

{
/* irregular: 2 goto(s) */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  temp_v0 = 0;
  while( 1 ) {
    piVar1 = (int *)(DAT_0057f69c + temp_v0 * 0x28 + 0x29510);
    if (*piVar1 == 0 && piVar3 == (int *)0x0) {
      piVar3 = piVar1;
    }
    if (*piVar1 == param_1) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x10) {
LAB_001f4dfc:
      piVar1 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        piVar1 = piVar3;
      }
LAB_001f4e04:
      if (*piVar1 != 0) {
        temp_v0 = piVar1[1];
      }
      else {
        temp_v0 = 0;
      }
      return temp_v0;
    }
  }
  if (piVar1 != (int *)0x0) goto LAB_001f4e04;
  goto LAB_001f4dfc;
}

} /* extern "C" */
