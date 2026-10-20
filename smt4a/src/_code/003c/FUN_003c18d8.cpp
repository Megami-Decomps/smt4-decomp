/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c18d8` (_code @ 0x3c18d8, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);
int FUN_003eaf20(void);

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003c18d8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 8;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 3) {
    temp_v1 = 0xb;
  }
  temp_v0 = FUN_0014aa78();
  FUN_003eaf20();
  if (temp_v0 != 0) {
    FUN_003283ac(0x7fffffff < *(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x74));
  }
  else {
    FUN_003283ac(0);
  }
  return 1;
}

} /* extern "C" */
