/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f5c4` (_code @ 0x30f5c4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002eb56c. */
/* Supplied declaration required: FUN_002ecef0. */
/* Supplied declaration required: FUN_002ecf40. */
/* Supplied declaration required: FUN_0030f69c. */
/* Supplied declaration required: FUN_0030f78c. */
extern int FUN_0030f798(void);


void FUN_0030f5c4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,&DAT_0062e6a0);
  FUN_002eb56c();
  temp_v0 = FUN_0030f798();
  if ((((temp_v0 != 0) && (temp_v0 = FUN_002e6e26(), temp_v0 != 0)) &&
      (temp_v1 = FUN_0030f78c(), temp_v1 == 0)) && (temp_v1 = FUN_0030f78c(temp_v0), temp_v1 == 0)) {
    FUN_002ecef0();
    FUN_002e6e5c(&uStack_18);
    FUN_0030f69c(temp_v0,param_1,0);
    FUN_002ecf40();
    return;
  }
  FUN_002e6e5c(&uStack_18);
  return;
}
