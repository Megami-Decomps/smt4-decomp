/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003247b4` (_code @ 0x3247b4, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044dc20; /* 0x44dc20 */

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);
extern int FUN_002a89e4(int);


unsigned int FUN_003247b4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (DAT_0044dc20 != 0) {
    if (temp_v0 != 0) {
      temp_v1 = *(unsigned int *)(DAT_0044dc20 + 0xd03c);
    }
    else {
      temp_v0 = FUN_002a89e4((int)*(char *)(DAT_0044dc20 + *(int *)(DAT_0044dc20 + 0xcf78) * 0x620 +
                                         0x3654));
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + *(int *)(DAT_0044dc20 + 0xd038) * 2 + 0x34);
    }
    FUN_0028df54(temp_v1);
  }
  else {
    FUN_0028df54(0);
  }
  return 1;
}
