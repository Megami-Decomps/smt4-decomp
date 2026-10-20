/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0780` (_code @ 0x2f0780, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(void);


unsigned int FUN_002f0780(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_0027e928(DAT_0043427c);
  FUN_0028dcb0(*(unsigned short *)(*(int *)(temp_v1 + 0x28) + temp_v0 * 2 + 0x126) >> 10 == 2);
  return 1;
}

} /* extern "C" */
