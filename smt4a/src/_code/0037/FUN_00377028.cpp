/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377028` (_code @ 0x377028, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003b99bc(void);

extern int *FUN_0038599c(int);
/* Supplied declaration required: FUN_003b99bc. */


int FUN_00377028(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int temp_v0;
  
  piVar1 = param_1;
  FUN_003b99bc();
  if ((param_1 != (int *)0x0) && (temp_v0 = 1, (int)piVar1 >= 2)) {
    do {
      piVar2 = (int *)FUN_0038599c(temp_v0);
      piVar3 = (int *)*piVar2;
      if (piVar3 != param_1) {
        piVar2 = (int *)piVar2[1];
      }
      if (piVar3 == param_1 || piVar2 == param_1) {
        return (int)(short)temp_v0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)piVar1);
  }
  return 0;
}

} /* extern "C" */
