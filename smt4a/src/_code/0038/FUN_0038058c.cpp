/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038058c` (_code @ 0x38058c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);
int FUN_003f0e20(int, unsigned int);

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_0038058c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0014aa78();
  FUN_003f0e20(temp_v1,temp_v0);
  if (temp_v1 != 0) {
    temp_v2 = (int)*(char *)(temp_v1 + 0x3f4);
  }
  FUN_003283ac(temp_v2);
  return 1;
}

} /* extern "C" */
