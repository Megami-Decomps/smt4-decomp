/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013d2dc` (_code @ 0x13d2dc, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014aa9c. */
extern int FUN_001546e8(unsigned int);
extern int FUN_00164a9c(void);


unsigned char FUN_0013d2dc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  if ((((*(char *)(temp_v0 + 0x1040) != '\0') && (*(char *)(temp_v0 + 0x1043) != '\0')) &&
      (temp_v1 = FUN_001546e8(0), temp_v1 == 0)) && (*(char *)(temp_v0 + 0x1c) != '\0')) {
    FUN_0014aa9c(0);
  }
  return 0;
}
