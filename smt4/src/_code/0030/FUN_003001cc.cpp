/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003001cc` (_code @ 0x3001cc, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlMainFindEntryByListedId(unsigned int, unsigned int);
int scrSetResult(void);
int scrGetArg(int);

/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_003001cc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  temp_v1 = btlGetMainState();
  btlMainFindEntryByListedId(temp_v1,temp_v0);
  scrSetResult();
  return 1;
}

} /* extern "C" */
