/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312aa0` (_code @ 0x312aa0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f44(void);

extern int *DAT_0058104c; /* 0x58104c */

/* Supplied declaration required: FUN_00152f44. */
extern int FUN_002d8b58(unsigned int, int);


void FUN_00312aa0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  FUN_00152f44();
  piVar1 = DAT_0058104c;
  if (*DAT_0058104c == 0) {
    piVar2 = DAT_0058104c + 1;
    *DAT_0058104c = 3;
    *piVar2 = 0;
    piVar1[6] = param_1;
    temp_v0 = FUN_002d8b58(0xb,param_1);
    DAT_0058104c[5] = temp_v0;
  }
  return;
}

} /* extern "C" */
