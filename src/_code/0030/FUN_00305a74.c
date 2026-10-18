/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305a74` (_code @ 0x305a74, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0024c60c(void);
/* Supplied declaration required: FUN_0024fab8. */
/* Supplied declaration required: FUN_0024fd10. */
/* Supplied declaration required: FUN_00269404. */
/* Supplied declaration required: FUN_00269594. */


unsigned int * FUN_00305a74(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0024c60c();
  puVar2 = (unsigned int *)(temp_v0 + 0x1c);
  FUN_0024fd10();
  FUN_0024fab8();
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0xc);
  if (puVar2[0xc] != 0) {
    FUN_00269594();
  }
  FUN_00269404(temp_v1,*puVar2,temp_v0 + 0x1c);
  puVar2[0xc] = temp_v1;
  return puVar2;
}
