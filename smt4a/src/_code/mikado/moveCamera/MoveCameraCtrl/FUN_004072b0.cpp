/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004072b0` (_code @ 0x4072b0, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(...);
int FUN_003fe86c(...);
int FUN_0040aa6c(...);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int FUN_0040ace8(...);
int FUN_0045b538(...);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0045b538. */


void FUN_004072b0(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp",0x1a3
              );
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0040ac08();
  }
  param_1 = param_1 + param_3 * 4;
  *(unsigned int *)(param_1 + 0x24) = temp_v1;
  FUN_0040aa6c();
  FUN_0040ab7c(*(unsigned int *)(param_1 + 0x24),0);
  FUN_0040aad4(*(unsigned int *)(param_1 + 0x24),0);
  FUN_0045b538(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + 0xc);
  temp_v0 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  FUN_0040ace8(g_handleRegistry,temp_v0);
  FUN_003fe86c(temp_v0,0,2);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
  return;
}

} /* extern "C" */
