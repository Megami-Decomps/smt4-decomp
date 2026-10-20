/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f780` (_code @ 0x36f780, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf42c(void);
int FUN_003283ac(int);
int FUN_0039c840(int, int);

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_002bf42c. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_0039c840. */


unsigned int FUN_0036f780(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 >= 0x1ac) {
    temp_v0 = 0;
  }
  FUN_0039c840(temp_v0,0);
  if (temp_v0 != 0) {
    FUN_002bf42c();
  }
  FUN_003283ac(temp_v0);
  return 1;
}

} /* extern "C" */
