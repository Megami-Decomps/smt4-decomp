/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7cc4` (_code @ 0x2f7cc4, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlUnitGet(unsigned int);
int FUN_00282924(int, int);
int scrSetResult(int);
int scrGetArg(int);

extern unsigned int g_btlScriptUnit; /* 0x43427c */

/* Supplied declaration required: btlUnitGet. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
extern unsigned int flagWordTestBit(unsigned int, unsigned int);
extern unsigned int FUN_002a8740(int);


unsigned int FUN_002f7cc4(void)

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
    FUN_00282924(temp_v2,temp_v0);
    if (temp_v2 == 0) {
      scrSetResult(0);
      return 1;
    }
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x1c6) & (1 << (temp_v1 & 0xff));
  }
  else {
    temp_v3 = FUN_002a8740(temp_v0 - 0x6d);
    temp_v1 = flagWordTestBit(temp_v3,temp_v1 & 0xffff);
  }
  scrSetResult(temp_v1 != 0);
  return 1;
}

} /* extern "C" */
