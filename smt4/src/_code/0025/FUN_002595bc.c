/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002595bc` (_code @ 0x2595bc, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */
extern int DAT_0043de68; /* 0x43de68 */
extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_00238f44. */
/* Supplied declaration required: FUN_00263308. */
extern unsigned int FUN_00357818(unsigned int);


unsigned char FUN_002595bc(void)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  unsigned int in_lr;
  unsigned char temp_v2;
  
  if (DAT_0043de68 != 0) {
    temp_v1 = FUN_00357818(0xe5c);
    temp_v0 = *(unsigned int *)(DAT_00464fac + 0x18);
    FUN_00263308(temp_v0,temp_v1,DAT_0043ddb8,temp_v1,unaff_r4,in_lr);
    temp_v2 = (temp_v0 & 0x80000000) == 0;
    if (temp_v2) {
      FUN_00238f44(*(unsigned int *)(DAT_00464fac + 0x18));
    }
    return temp_v2;
  }
  return 0;
}
