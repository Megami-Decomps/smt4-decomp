/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103650` (_code @ 0x103650, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d230(int);
int FUN_002c3a14(unsigned int);
int FUN_002c4f8c(unsigned int, unsigned int);
int FUN_002c501c(void);

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0010d230. */
/* Supplied declaration required: FUN_002c3a14. */
/* Supplied declaration required: FUN_002c4f8c. */
/* Supplied declaration required: FUN_002c501c. */
extern int FUN_002c5210(void);


unsigned int FUN_00103650(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_00446db0 == '\0') && (temp_v0 = FUN_002c5210(), temp_v0 == 1)) && (DAT_00446db1 != '\0')) {
    FUN_0010d230(0);
  }
  FUN_002c3a14(DAT_0044ea00);
  temp_v0 = FUN_002c501c();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c501c();
    FUN_002c4f8c(DAT_0044ea00,temp_v1);
  }
  return 0;
}

} /* extern "C" */
