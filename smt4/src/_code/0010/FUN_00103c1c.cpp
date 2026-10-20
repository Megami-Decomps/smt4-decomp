/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103c1c` (_code @ 0x103c1c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bdb44(void);
int FUN_002c3530(int, int);
int FUN_002c35b0(int);
int FUN_002c39a4(int);
int FUN_002c3a14(int);

extern unsigned char DAT_00446db0; /* 0x446db0 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bdb44. */
/* Supplied declaration required: FUN_002c3530. */
/* Supplied declaration required: FUN_002c35b0. */
/* Supplied declaration required: FUN_002c39a4. */
/* Supplied declaration required: FUN_002c3a14. */
extern int FUN_002c5210(void);


unsigned int FUN_00103c1c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c5210();
  if ((temp_v0 == 1) && ((*(signed char *)((unsigned char *)&DAT_00446db0 + 0x1)) != '\0')) {
    FUN_002c35b0(1);
    *(unsigned int *)(DAT_0044ea00 + 0x528) = 1;
    FUN_002bdb44();
    FUN_002c3530(1,0);
    FUN_002c3a14(DAT_0044ea00);
    FUN_002c39a4(DAT_0044ea00);
  }
  return 0;
}

} /* extern "C" */
