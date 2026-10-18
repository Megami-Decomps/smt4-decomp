/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032473c` (_code @ 0x32473c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044dc20; /* 0x44dc20 */

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);
extern int FUN_002a89e4(int);


unsigned int FUN_0032473c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00296f60();
  if (DAT_0044dc20 != 0) {
    temp_v2 = DAT_0044dc20 + *(int *)(DAT_0044dc20 + 0xcf78) * 0x620;
    if (temp_v1 != 0) {
      temp_v0 = *(unsigned short *)(temp_v2 + 0x369e);
    }
    else {
      temp_v1 = FUN_002a89e4((int)*(char *)(temp_v2 + 0x3654));
      temp_v0 = *(unsigned short *)(temp_v1 + 0x46);
    }
    FUN_0028df54(temp_v0);
  }
  else {
    FUN_0028df54(0);
  }
  return 1;
}
