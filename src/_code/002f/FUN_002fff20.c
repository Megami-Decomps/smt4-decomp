/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fff20` (_code @ 0x2fff20, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_00294568. */
extern int FUN_002b6d94(int, unsigned short);
extern int FUN_002b6e60(void);
/* Supplied declaration required: FUN_00336cb8. */
/* Supplied declaration required: FUN_003ae840. */


unsigned int FUN_002fff20(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00293c98();
  FUN_00336cb8();
  temp_v2 = FUN_002b6e60();
  temp_v0 = *(unsigned short *)(temp_v2 + 0x606);
  temp_v2 = FUN_002b6e60();
  temp_v2 = FUN_002b6d94((int)*(short *)(temp_v2 + 0x604),temp_v0);
  FUN_00294568((int)(short)(*(short *)(temp_v2 + 0x5a) + 1),0);
  *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x2000000;
  FUN_003ae840(DAT_00439ca8);
  return 1;
}
