/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a4cc` (_code @ 0x30a4cc, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a880c(unsigned int, int, int);
int jobGetWork(...);

extern int FUN_002893d8(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_002a880c. */
/* Supplied declaration required: jobGetWork. */


unsigned int FUN_0030a4cc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002893d8();
    if (temp_v0 == 0x14) {
      return 1;
    }
  }
  else {
    temp_v1 = scrGetArg(0);
    temp_v2 = jobGetWork();
    FUN_002a880c(temp_v2,7,0x14);
    temp_v0 = jobGetWork(temp_v1);
    *(unsigned int *)(temp_v0 + 0x78) = 2;
  }
  return 0;
}

} /* extern "C" */
