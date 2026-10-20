/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281744` (_code @ 0x281744, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_0031d890(void);
int FUN_0034280c(int);
int stateAtF4Destroy(void);

/* Supplied declaration required: sysPlaySe. */
extern int FUN_002bf508(void);
extern int FUN_002e2014(void);
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_0034280c. */
/* Supplied declaration required: stateAtF4Destroy. */


unsigned int FUN_00281744(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002bf508();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e2014();
    if (temp_v0 != 0) {
      stateAtF4Destroy();
      sysPlaySe(0x10d);
      *(unsigned int *)(param_1 + 0x144) = 1;
      *(unsigned int *)(param_1 + 0x14c) = 0;
      FUN_0031d890();
      temp_v1 = 3;
    }
  }
  else {
    FUN_0034280c(0);
  }
  return temp_v1;
}

} /* extern "C" */
