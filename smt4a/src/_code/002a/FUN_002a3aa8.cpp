/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3aa8` (_code @ 0x2a3aa8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventTexSetJobParam(void);
int scrSetResult(unsigned int);
int FUN_0036f298(unsigned int);
int FUN_00389fe0(unsigned int, unsigned int, unsigned int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: eventTexSetJobParam. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0036f298. */
/* Supplied declaration required: FUN_00389fe0. */
extern int FUN_0039af04(void);


unsigned int FUN_002a3aa8(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  temp_v3 = FUN_0039af04();
  temp_v4 = 0;
  if (temp_v3 != 0) {
    FUN_00389fe0(temp_v0,temp_v1,temp_v2);
    eventTexSetJobParam();
    FUN_0036f298(temp_v0);
    temp_v4 = temp_v0;
  }
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
