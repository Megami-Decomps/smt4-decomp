/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011fad8` (_code @ 0x11fad8, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_0011fb54; /* 0x11fb54 */

/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f674e. */
extern int *FUN_003055cc(unsigned int);
/* Supplied declaration required: FUN_00310784. */


void FUN_0011fad8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [20];
  
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_002e7232();
    *(unsigned int *)(param_1 + 0x310) = 0;
  }
  if (*(char *)(param_1 + 0x90) != '\x02') {
    if (*(int *)(param_1 + 0x318) != 0) {
      FUN_002f674e();
      *(unsigned int *)(param_1 + 0x318) = 0;
    }
    FUN_002ea41e(temp_v1,param_1 + 0x80);
    FUN_00310784(param_1,temp_v1);
  }
  else {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x2c) =
         *(unsigned int *)(param_1 + 0x318);
    piVar1 = (int *)FUN_003055cc(*(unsigned int *)(param_1 + 400));
    (**(romwright_code **)(*piVar1 + 0xc))(piVar1,*(unsigned int *)(*(int *)(param_1 + 400) + 0x78));
    temp_v0 = FUN_002ea3c0(temp_v1,0x11f649,0,&LAB_0011fb54);
    FUN_002ea3d0(param_1,temp_v0);
  }
  return;
}
