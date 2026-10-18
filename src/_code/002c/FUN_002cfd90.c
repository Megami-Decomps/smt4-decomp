/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfd90` (_code @ 0x2cfd90, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(void);
extern int FUN_002a8740(int);


unsigned int FUN_002cfd90(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 < 0x6d) {
    temp_v1 = FUN_002939f4();
    FUN_00282924(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x27c);
  }
  else {
    temp_v0 = FUN_002a8740(temp_v0 - 0x6d);
  }
  FUN_0028dcb0(*(unsigned short *)(temp_v0 + 0x46));
  return 1;
}
