/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bf54` (_code @ 0x31bf54, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventTexSetJobParam(void);
int scrSetResult(unsigned int);
int FUN_0036f298(unsigned int);
int FUN_003afe2c(unsigned int, int, unsigned int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: eventTexSetJobParam. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0036f298. */
extern int FUN_0039af04(void);
/* Supplied declaration required: FUN_003afe2c. */


unsigned int FUN_0031bf54(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = FUN_0039af04();
  temp_v3 = 0;
  if (temp_v2 != 0) {
    FUN_003afe2c(temp_v0,0,temp_v1);
    eventTexSetJobParam();
    FUN_0036f298(temp_v0);
    temp_v3 = temp_v0;
  }
  scrSetResult(temp_v3);
  return 1;
}

} /* extern "C" */
