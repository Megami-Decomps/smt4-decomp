/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e130c` (_code @ 0x2e130c, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00254ac4. */
/* Supplied declaration required: FUN_002ada98. */
/* Supplied declaration required: FUN_002adb14. */
/* Supplied declaration required: FUN_002bb8e4. */
/* Supplied declaration required: FUN_002c3714. */


unsigned char * FUN_002e130c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar1;
  unsigned char temp_v1 [496];
  
  puVar1 = temp_v1;
  FUN_00254ac4(param_2,temp_v1,2);
  if (param_2 == 0) {
    FUN_002c3714();
    return (unsigned char *)0xe0e046bc;
  }
  FUN_002adb14();
  FUN_002ada98(temp_v1,temp_v0,param_3,0);
  if ((int)puVar1 < 0) {
    FUN_002c3714();
    return puVar1;
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  puVar1 = (unsigned char *)(param_1 + 8);
  *(unsigned int *)(param_1 + 0x10) = 0;
  FUN_002bb8e4(puVar1,temp_v1,2);
  if ((int)puVar1 < 0) {
    FUN_002c3714(puVar1);
    return puVar1;
  }
  FUN_002c3714();
  return (unsigned char *)0x0;
}
