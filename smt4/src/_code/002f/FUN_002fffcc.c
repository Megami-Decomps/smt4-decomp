/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fffcc` (_code @ 0x2fffcc, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(unsigned int);
extern int FUN_002a8764(void);
extern int FUN_002a8778(void);


unsigned int FUN_002fffcc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_002a8764();
  temp_v0 = *(unsigned char *)(temp_v2 + 0x910b);
  temp_v2 = FUN_002a8778();
  FUN_0028dcb0(temp_v1 <= (int)((unsigned int)temp_v0 - temp_v2));
  return 1;
}
