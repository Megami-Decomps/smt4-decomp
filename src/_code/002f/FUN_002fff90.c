/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fff90` (_code @ 0x2fff90, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(unsigned int);
extern int FUN_002a8a08(void);
extern int FUN_002a8a1c(void);


unsigned int FUN_002fff90(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_002a8a08();
  temp_v0 = *(unsigned char *)(temp_v2 + 0x910b);
  temp_v2 = FUN_002a8a1c();
  FUN_0028df54(temp_v1 <= (int)((unsigned int)temp_v0 - temp_v2));
  return 1;
}
