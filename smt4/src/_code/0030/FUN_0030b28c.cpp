/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b28c` (_code @ 0x30b28c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_00245854(unsigned int, unsigned int);
extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_0030b28c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_0027e928(DAT_0043427c);
  temp_v1 = FUN_00245854(*(unsigned int *)(temp_v1 + 0x20),temp_v0);
  if (temp_v1 != 0) {
    FUN_0028dcb0(1);
    return 1;
  }
  FUN_0028dcb0(0);
  return 1;
}

} /* extern "C" */
