/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a210` (_code @ 0x37a210, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bae30. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c4040. */


unsigned int FUN_0037a210(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0x2c;
  FUN_002c38a4(temp_v2);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + (temp_v1 & 0xff) * 0xc;
    piVar1 = (int *)*(int *)(temp_v0 + 4);
    while (piVar2 = piVar1, piVar2 != (int *)(temp_v0 + 4)) {
      piVar1 = (int *)*piVar2;
      if (piVar2 + -1 == (int *)param_2) {
        FUN_002bae30(temp_v0,piVar2);
        *(unsigned char *)(piVar2 + 4) = 4;
        FUN_002c4040(piVar2 + 2);
        FUN_002c3820(temp_v2);
        return 1;
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 3) {
      FUN_002c3820(temp_v2);
      return 0;
    }
  } while( 1 );
}
