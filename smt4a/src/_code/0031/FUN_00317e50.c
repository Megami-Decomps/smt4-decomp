/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317e50` (_code @ 0x317e50, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_00188444. */
/* Supplied declaration required: FUN_001886bc. */
/* Supplied declaration required: FUN_002e0e04. */
extern int FUN_002e3390(int);
/* Supplied declaration required: FUN_0042b32c. */


unsigned char * FUN_00317e50(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned char temp_v1 [496];
  
  puVar2 = temp_v1;
  puVar3 = temp_v1;
  temp_v0 = param_1;
  FUN_002e0e04(param_1,temp_v1,1);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e3390(param_1);
    if ((temp_v0 == 0) || (*(char *)((temp_v0 + param_1) - 1) != '/')) {
      FUN_001886bc();
      FUN_00188444(temp_v1);
      puVar3 = puVar2;
    }
    else {
      FUN_001886bc();
      FUN_0042b32c(temp_v1);
    }
    FUN_0013ebd8();
    return puVar3;
  }
  FUN_0013ebd8();
  return (unsigned char *)0xe0e046bc;
}
