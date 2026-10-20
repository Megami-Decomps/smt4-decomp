/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9170` (_code @ 0x3a9170, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003e8460(void);


unsigned char FUN_003a9170(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_0014aa78();
  temp_v0 = FUN_003e8460();
  return temp_v0 != 0;
}

} /* extern "C" */
