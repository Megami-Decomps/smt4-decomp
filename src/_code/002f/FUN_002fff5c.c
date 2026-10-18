/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fff5c` (_code @ 0x2fff5c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_002942c4. */
extern int FUN_002b6a54(int, unsigned short);
extern int FUN_002b6b20(void);
/* Supplied declaration required: FUN_00336a84. */
/* Supplied declaration required: FUN_003ae620. */


unsigned int FUN_002fff5c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002939f4();
  FUN_00336a84();
  temp_v2 = FUN_002b6b20();
  temp_v0 = *(unsigned short *)(temp_v2 + 0x606);
  temp_v2 = FUN_002b6b20();
  temp_v2 = FUN_002b6a54((int)*(short *)(temp_v2 + 0x604),temp_v0);
  FUN_002942c4((int)(short)(*(short *)(temp_v2 + 0x5a) + 1),0);
  *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x2000000;
  FUN_003ae620(DAT_00439ca8);
  return 1;
}
