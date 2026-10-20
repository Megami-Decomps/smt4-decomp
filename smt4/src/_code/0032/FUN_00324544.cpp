/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324544` (_code @ 0x324544, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int g_result; /* 0x44dc20 */

/* Supplied declaration required: scrSetResult. */
extern int scrGetArg(void);
extern int gameGetUnitRecord(int);


unsigned int FUN_00324544(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = scrGetArg();
  if (g_result != 0) {
    temp_v2 = g_result + *(int *)(g_result + 0xcf78) * 0x620;
    if (temp_v1 != 0) {
      temp_v0 = *(unsigned short *)(temp_v2 + 0x369e);
    }
    else {
      temp_v1 = gameGetUnitRecord((int)*(char *)(temp_v2 + 0x3654));
      temp_v0 = *(unsigned short *)(temp_v1 + 0x46);
    }
    scrSetResult(temp_v0);
  }
  else {
    scrSetResult(0);
  }
  return 1;
}

} /* extern "C" */
