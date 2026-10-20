/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038dbf0` (_code @ 0x38dbf0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, unsigned int);
int FUN_004fcde0(int, unsigned int, int);

extern unsigned int DAT_00571128; /* 0x571128 */
extern unsigned int DAT_0057112c; /* 0x57112c */
extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_003f0e20. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fcde0. */


unsigned int FUN_0038dbf0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlGetMainState();
  temp_v2 = btlUnitGet(g_btlScriptUnit);
  temp_v3 = temp_v1;
  FUN_003f0e20(temp_v1,temp_v0);
  FUN_004fcde0(0,temp_v2,temp_v3);
  temp_v4 = DAT_0057112c | *(unsigned int *)(temp_v1 + 0x45a4);
  *(unsigned int *)(temp_v1 + 0x45a0) = DAT_00571128 | *(unsigned int *)(temp_v1 + 0x45a0);
  *(unsigned int *)(temp_v1 + 0x45a4) = temp_v4;
  return 1;
}

} /* extern "C" */
