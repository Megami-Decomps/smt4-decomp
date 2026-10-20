/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cbb4` (_code @ 0x31cbb4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlMainFindEntryByListedId(unsigned int *, unsigned int);
int scrSetResult(int);

/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int *btlGetMainState(void);
extern unsigned int scrGetArg(void);


unsigned int FUN_0031cbb4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = scrGetArg();
  puVar2 = (unsigned int *)btlGetMainState();
  btlMainFindEntryByListedId(puVar2,temp_v0);
  if (puVar2 != (unsigned int *)0x0) {
    scrSetResult((*puVar2 & 0x10000) != 0);
  }
  else {
    scrSetResult(0);
  }
  return 1;
}

} /* extern "C" */
