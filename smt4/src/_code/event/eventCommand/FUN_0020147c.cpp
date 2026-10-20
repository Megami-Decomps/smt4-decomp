/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020147c` (_code @ 0x20147c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00259324(unsigned int, int, int);

extern int g_eventCommand; /* 0x43e088 */

/* Supplied declaration required: FUN_00259324. */
extern int FUN_002893d8(void);
extern int scrGetArg(unsigned int);


unsigned char FUN_0020147c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    temp_v0 = scrGetArg(0);
    if (temp_v0 == 0) {
      temp_v1 = 0xff;
    }
    else {
      temp_v1 = 0xffffffff;
    }
    FUN_00259324(temp_v1,10,1);
    return 0;
  }
  return *(int *)(g_eventCommand + 0x10) == *(int *)(g_eventCommand + 0x14);
}

} /* extern "C" */
