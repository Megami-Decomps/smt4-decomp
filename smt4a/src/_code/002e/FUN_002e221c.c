/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e221c` (_code @ 0x2e221c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0031d890. */
extern int FUN_0032e48c(void);
extern int FUN_0034432c(void);
/* Supplied declaration required: FUN_0037b7e4. */
/* Supplied declaration required: FUN_003a5164. */


unsigned int FUN_002e221c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_0032e48c();
  if (temp_v0 != 0) {
    temp_v0 = FUN_0034432c();
    if (temp_v0 != 0) {
      FUN_003a5164();
      FUN_001681cc(0x10d);
      *(unsigned int *)(param_1 + 0x144) = 1;
      *(unsigned int *)(param_1 + 0x14c) = 0;
      FUN_0031d890();
      temp_v1 = 3;
    }
  }
  else {
    FUN_0037b7e4();
  }
  return temp_v1;
}
