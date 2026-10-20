/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecf40` (_code @ 0x2ecf40, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d35c(void);
int FUN_002e7232(void);
int FUN_002ea4bc(void);
int FUN_003104fc(unsigned char *);
int FUN_00310506(unsigned char *);

extern unsigned char DAT_0059495b; /* 0x59495b */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_0010d35c. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002ea4bc. */
/* Supplied declaration required: FUN_003104fc. */
/* Supplied declaration required: FUN_00310506. */


void FUN_002ecf40(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_00310506(&DAT_0062e6a0);
  FUN_002ea4bc();
  FUN_002e7232();
  FUN_0010d35c();
  temp_v0 = FUN_002ea4bc();
  if (temp_v0 == 0) {
    DAT_0059495b = 0;
  }
  FUN_003104fc(&DAT_0062e6a0);
  return;
}

} /* extern "C" */
