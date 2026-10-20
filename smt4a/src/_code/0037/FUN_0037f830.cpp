/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f830` (_code @ 0x37f830, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned short FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_003e4d98(void);
extern int FUN_003e4fdc(unsigned short);


unsigned int FUN_0037f830(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_003e4fdc(temp_v0);
  if (temp_v1 != 0) {
    temp_v1 = FUN_003e4d98();
    FUN_003283ac(temp_v1 != 0);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
