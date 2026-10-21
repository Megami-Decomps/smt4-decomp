/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d15c` (_code @ 0x37d15c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275b10(int);
int eventTexSetJobParam(void);
int scrSetResult(unsigned int);
int FUN_00389f60(unsigned int);
int FUN_003affe8(unsigned int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00275b10. */
/* Supplied declaration required: eventTexSetJobParam. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_00389f60. */
extern int eventTexHasMissingValue(void);
/* Supplied declaration required: FUN_003affe8. */


unsigned int FUN_0037d15c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  FUN_00275b10(1);
  FUN_00275b10(2);
  temp_v1 = eventTexHasMissingValue();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    FUN_003affe8(temp_v0);
    eventTexSetJobParam();
    FUN_00389f60(temp_v0);
    temp_v2 = temp_v0;
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
