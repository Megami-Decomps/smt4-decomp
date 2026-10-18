/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dbbb8` (_code @ 0x2dbbb8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(void);
extern int aeabi_idivmod(int, int);


unsigned int FUN_002dbbb8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_0027e928(DAT_0043427c);
  temp_v1 = aeabi_idivmod(*(short *)(*(int *)(temp_v1 + 0x28) + 0xe8) * 100,
                        (int)*(short *)(*(int *)(temp_v1 + 0x28) + 0xea));
  FUN_0028dcb0(temp_v1 <= temp_v0);
  return 1;
}
