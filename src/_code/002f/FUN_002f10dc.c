/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f10dc` (_code @ 0x2f10dc, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004398d4; /* 0x4398d4 */

/* Supplied declaration required: FUN_0027e9d0. */
extern int FUN_00289640(void);
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_003c7eac. */
/* Supplied declaration required: FUN_003c8148. */


unsigned char FUN_002f10dc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00293c98();
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  temp_v3 = FUN_00289640();
  if (temp_v3 == 0) {
    FUN_003c8148(DAT_004398d4,temp_v0);
    *(unsigned int *)(temp_v0 + 0x13c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x140) = temp_v2;
    FUN_003c7eac(DAT_004398d4,temp_v0);
    FUN_0027e9d0(DAT_004398d4);
    return 0;
  }
  return *(int *)(DAT_004398d4 + 0x80) == 4;
}
