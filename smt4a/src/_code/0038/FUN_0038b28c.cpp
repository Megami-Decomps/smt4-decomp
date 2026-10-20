/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b28c` (_code @ 0x38b28c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableValueOrZero(int);
int scrWorkSetValue(...);
int FUN_00418070(unsigned int, int);
int FUN_00418714(unsigned int);
int optionsClearFlag1(void);

/* Supplied declaration required: dataTableValueOrZero. */
extern int scrWorkGetValue(unsigned int);
/* Supplied declaration required: scrWorkSetValue. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_00418070. */
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(unsigned int);
/* Supplied declaration required: FUN_00418714. */
/* Supplied declaration required: optionsClearFlag1. */


unsigned int FUN_0038b28c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 == 0) {
    temp_v0 = FUN_004186a4();
    if (temp_v0 == 0) {
      return 1;
    }
    scrWorkSetValue(0);
    scrWorkSetValue(1,0);
  }
  dataTableValueOrZero(0x1e);
  temp_v0 = scrWorkGetValue(0);
  if (temp_v0 == 0) {
    temp_v1 = FUN_004186e0(0);
    FUN_00418070(temp_v1,0);
    FUN_00418714(temp_v1);
    optionsClearFlag1();
    return 1;
  }
  return 0;
}

} /* extern "C" */
