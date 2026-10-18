/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e00c` (_code @ 0x34e00c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);
extern int aeabi_idivmod(int, unsigned int);


unsigned int FUN_0034e00c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_004ee568(DAT_0057113c);
  temp_v1 = *(int *)(temp_v1 + 0x28);
  if ((*(short *)(temp_v1 + 2) == 0x323) &&
     (temp_v2 = FUN_004ee568(DAT_0057113c), *(int *)(*(int *)(temp_v2 + 0x20) + 0x3b4) >= 5)) {
    FUN_003283ac(0);
    return 1;
  }
  temp_v1 = aeabi_idivmod(*(int *)(temp_v1 + 0xf4) * 100,*(unsigned int *)(temp_v1 + 0xf8));
  FUN_003283ac(temp_v1 <= temp_v0);
  return 1;
}
