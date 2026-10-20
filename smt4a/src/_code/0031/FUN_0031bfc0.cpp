/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bfc0` (_code @ 0x31bfc0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);
int FUN_003283ac(void);
int FUN_0039b2d0(unsigned int, int, int, unsigned int);

extern char s__U_U_U_U_U_0057f4ac[21]; /* 0x57f4ac */

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_0039b2d0. */


unsigned int FUN_0031bfc0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_0039b2d0(*(unsigned int *)(s__U_U_U_U_U_0057f4ac + temp_v0 * 4),0,0,temp_v1);
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
