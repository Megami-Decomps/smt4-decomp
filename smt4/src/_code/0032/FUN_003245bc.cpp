/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003245bc` (_code @ 0x3245bc, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(...);

extern int g_result; /* 0x44dc20 */

/* Supplied declaration required: scrSetResult. */
extern int scrGetArg(void);
extern int gameGetUnitRecord(int);


unsigned int FUN_003245bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  if (g_result != 0) {
    if (temp_v0 != 0) {
      temp_v1 = *(unsigned int *)(g_result + 0xd03c);
    }
    else {
      temp_v0 = gameGetUnitRecord((int)*(char *)(g_result + *(int *)(g_result + 0xcf78) * 0x620 +
                                         0x3654));
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + *(int *)(g_result + 0xd038) * 2 + 0x34);
    }
    scrSetResult(temp_v1);
  }
  else {
    scrSetResult(0);
  }
  return 1;
}

} /* extern "C" */
