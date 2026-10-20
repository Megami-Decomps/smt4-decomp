/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038097c` (_code @ 0x38097c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int scrSetResult(int);
int FUN_003f0e20(int, int);
int btlUnitGet(unsigned int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int btlGetMainState(void);
extern unsigned int FUN_001ab854(int);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003f0e20. */
extern unsigned int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: btlUnitGet. */


unsigned int FUN_0038097c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  btlUnitGet(g_btlScriptUnit);
  if (temp_v0 < 0x6d) {
    temp_v2 = btlGetMainState();
    FUN_003f0e20(temp_v2,temp_v0);
    if (temp_v2 == 0) {
      scrSetResult(0);
      return 1;
    }
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x274) & (1 << (temp_v1 & 0xff));
  }
  else {
    temp_v3 = FUN_001ab854(temp_v0 - 0x6d);
    temp_v1 = FUN_004bd340(temp_v3,temp_v1 & 0xffff);
  }
  scrSetResult(temp_v1 != 0);
  return 1;
}

} /* extern "C" */
