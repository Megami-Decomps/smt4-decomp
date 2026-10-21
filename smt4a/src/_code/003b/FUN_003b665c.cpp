/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b665c` (_code @ 0x3b665c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00375ec8(int);
int FUN_003762a8(int, int);
int engineFreeCallback(int);

extern int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern int DAT_0059dc24; /* 0x59dc24 */
extern int DAT_0059e9b4; /* 0x59e9b4 */

extern int linkedFindItemByIndex(unsigned int, int);
/* Supplied declaration required: FUN_00375ec8. */
/* Supplied declaration required: FUN_003762a8. */
/* Supplied declaration required: engineFreeCallback. */


unsigned int FUN_003b665c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_00375ec8(DAT_0059dc24);
  temp_v0 = linkedFindItemByIndex(DAT_0059dbf4,DAT_0059dbec + DAT_0059e9b4);
  FUN_003762a8(DAT_0059dc24,temp_v0 + 0x9c);
  if (!(*(int *)(DAT_0059dc24 + 8) == 2 || *(int *)(DAT_0059dc24 + 8) == 1)) {
    temp_v1 = 0x200001;
  }
  else {
    engineFreeCallback(DAT_0059dc24);
    temp_v1 = 0;
    DAT_0059dc24 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
