/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003054ce` (_code @ 0x3054ce, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ee50c(int, unsigned int);

/* Supplied declaration required: FUN_002ee50c. */
extern unsigned long long FUN_003054c0(unsigned int, unsigned int);


int FUN_003054ce(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned long long temp_v1;
  
  temp_v1 = FUN_003054c0(param_1,param_1);
  if ((int)temp_v1 != 0) {
    temp_v0 = *(int *)((int)temp_v1 + 0x18);
    if (temp_v0 != 0) {
      FUN_002ee50c(temp_v0,*(unsigned int *)((int)((unsigned long long)temp_v1 >> 0x20) + 0x78));
    }
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
