/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3654` (_code @ 0x3f3654, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
extern int FUN_004d0bf0(void);


unsigned char FUN_003f3654(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x62);
  FUN_00184310();
  temp_v2 = 1;
  if (((*(short *)(temp_v0 + 0x32) != 0) && (temp_v1 = FUN_004d0bf0(), temp_v1 == 0)) &&
     (temp_v2 = 0, *(unsigned short *)(param_1 + 100) < *(unsigned short *)(temp_v0 + 0x30))) {
    temp_v2 = 2;
  }
  return temp_v2;
}
