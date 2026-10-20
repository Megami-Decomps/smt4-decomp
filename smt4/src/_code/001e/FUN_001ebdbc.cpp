/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ebdbc` (_code @ 0x1ebdbc, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019ff9c(unsigned int, int);

/* Supplied declaration required: FUN_0019ff9c. */
extern int FUN_001ed80c(void);


unsigned int FUN_001ebdbc(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = FUN_001ed80c();
  if (temp_v0 == 0) {
    FUN_0019ff9c(*(unsigned int *)(temp_v1 + 8),temp_v1 + 0x28);
  }
  return 0;
}

} /* extern "C" */
