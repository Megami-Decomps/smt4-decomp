/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe964` (_code @ 0x2fe964, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025a0e0(void);
int FUN_002757a8(void);
int FUN_00275bc8(void);
int FUN_00289880(void);
int FUN_002b8838(int);

extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_0025a0e0. */
/* Supplied declaration required: FUN_002757a8. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00289880. */
extern int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002b8838. */


unsigned int FUN_002fe964(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 != 0) {
    if (DAT_0049fb6d == '\0') {
      DAT_0049fb6d = '\x01';
      FUN_00275bc8();
      FUN_00289880();
      FUN_002b8838(0x90);
    }
  }
  else if (DAT_0049fb6d != '\0') {
    DAT_0049fb6d = '\0';
    FUN_0025a0e0();
    FUN_002757a8();
  }
  return 1;
}

} /* extern "C" */
