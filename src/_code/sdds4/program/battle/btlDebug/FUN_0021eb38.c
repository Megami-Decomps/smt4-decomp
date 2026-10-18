/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021eb38` (_code @ 0x21eb38, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short DAT_0043438a; /* 0x43438a */
extern int DAT_00434390; /* 0x434390 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0024f1a4. */
/* Supplied declaration required: FUN_0025c508. */
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0021eb38(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  if (DAT_00439ca8 != 0) {
    FUN_0025c508(DAT_00439ca8,0);
  }
  temp_v2 = DAT_00434390;
  if (DAT_00434390 != 0) {
    DAT_0043438a = 0;
    temp_v1 = FUN_002bf41c(*(unsigned int *)(DAT_00434390 + 0x10));
    if (temp_v1 != 0) {
      FUN_0024f1a4(*(unsigned int *)(temp_v2 + 0x10));
      FUN_002c45b8(*(unsigned int *)(temp_v2 + 0x10),0);
    }
    FUN_002c4360(DAT_00434390);
    DAT_00434390 = 0;
  }
  temp_v2 = FUN_002bf41c(*(unsigned int *)(temp_v0 + 0x5c));
  if (temp_v2 != 0) {
    FUN_002c45b8(*(unsigned int *)(temp_v0 + 0x5c),0);
  }
  *(unsigned int *)(temp_v0 + 0x44a8) = *(unsigned int *)(temp_v0 + 0x44a8) & 0xfffffffe;
  return;
}
