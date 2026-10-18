/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd258` (_code @ 0x2bd258, 0x4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001250ec; /* 0x1250ec */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002b48dc. */
/* Supplied declaration required: FUN_002c0e4c. */
/* Supplied declaration required: FUN_002c0e9c. */
extern unsigned int FUN_002c0ec4(unsigned int);


void FUN_002bd258(unsigned short param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned short temp_v1 [20];
  
  if (*(int *)(DAT_00433158 + 0x368) != 0) {
    puVar1 = temp_v1;
    temp_v1[0] = param_1;
    FUN_002b48dc(puVar1,*(unsigned int *)(DAT_00433158 + 0x378),*(unsigned int *)(DAT_00433158 + 0x374),
                 0x28,&LAB_001250ec);
    if (puVar1 != (unsigned short *)0x0) {
      return;
    }
  }
  temp_v0 = FUN_002c0ec4(1);
  FUN_002c0e9c();
  FUN_002c0e4c(temp_v0);
  return;
}
