/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00441ef4` (_code @ 0x441ef4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043d624(void);

extern int *FUN_002e2a98(void);
/* Supplied declaration required: FUN_0043d624. */


unsigned int FUN_00441ef4(int param_1,char *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  
  if (param_2 != (char *)0x0 && param_3 != 0) {
    if (param_1 != 2) {
      return 0xfffffffb;
    }
    FUN_0043d624();
    if ((param_2 != (char *)0x0) &&
       (temp_v0 = *param_2, piVar2 = (int *)FUN_002e2a98(),
       (*(unsigned char *)(*piVar2 + (int)temp_v0) & 0x38) == 0)) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
