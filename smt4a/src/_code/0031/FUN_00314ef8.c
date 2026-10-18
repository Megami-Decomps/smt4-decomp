/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314ef8` (_code @ 0x314ef8, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short DAT_005715fa; /* 0x5715fa */
extern int DAT_00571600; /* 0x571600 */
extern unsigned int DAT_00571638; /* 0x571638 */
extern unsigned int DAT_0057163c; /* 0x57163c */
extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_003592dc. */
/* Supplied declaration required: FUN_004aa780. */


void FUN_00314ef8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00164a9c();
  if (DAT_0057a9c8 != 0) {
    FUN_004aa780(DAT_0057a9c8,0);
  }
  temp_v2 = DAT_00571600;
  if (DAT_00571600 != 0) {
    DAT_005715fa = 0;
    temp_v1 = FUN_00163e40(*(unsigned int *)(DAT_00571600 + 0x10));
    if (temp_v1 != 0) {
      FUN_003592dc(*(unsigned int *)(temp_v2 + 0x10));
      FUN_001631d0(*(unsigned int *)(temp_v2 + 0x10),0);
    }
    FUN_0019a5a0(DAT_00571600);
    DAT_00571600 = 0;
  }
  temp_v2 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x80));
  if (temp_v2 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x80),0);
  }
  temp_v3 = ~DAT_00571638;
  *(unsigned int *)(temp_v0 + 0x45ac) = *(unsigned int *)(temp_v0 + 0x45ac) & ~DAT_0057163c;
  *(unsigned int *)(temp_v0 + 0x45a8) = *(unsigned int *)(temp_v0 + 0x45a8) & temp_v3;
  return;
}
