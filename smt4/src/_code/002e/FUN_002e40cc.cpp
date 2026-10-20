/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e40cc` (_code @ 0x2e40cc, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlMainFindEntryByListedId(int, unsigned int);
int scrSetResult(int);

/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_002e40cc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v2 = 0;
  temp_v1 = btlGetMainState();
  btlMainFindEntryByListedId(temp_v1,temp_v0);
  if (temp_v1 != 0) {
    temp_v2 = (int)*(short *)(temp_v1 + 0x1b4);
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
