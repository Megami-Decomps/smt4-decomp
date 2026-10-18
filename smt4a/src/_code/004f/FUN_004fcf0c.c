/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fcf0c` (_code @ 0x4fcf0c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_004102d8. */


unsigned int
FUN_004fcf0c(short param_1,unsigned int param_2,unsigned short param_3,unsigned short param_4,
            unsigned short param_5,unsigned short param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0014aa78();
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x2d;
  *(unsigned short *)(temp_v0 + 0x24) = param_3;
  *(unsigned short *)(temp_v0 + 0x26) = param_4;
  *(unsigned short *)(temp_v0 + 0x48) = param_5;
  *(unsigned short *)(temp_v0 + 0x4a) = param_6;
  return 1;
}
