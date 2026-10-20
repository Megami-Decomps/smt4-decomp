/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bf54` (_code @ 0x31bf54, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00283480(void);
int FUN_003283ac(unsigned int);
int FUN_0036f298(unsigned int);
int FUN_003afe2c(unsigned int, int, unsigned int);

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00283480. */
/* Supplied declaration required: FUN_003283ac. */
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
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0039af04();
  temp_v3 = 0;
  if (temp_v2 != 0) {
    FUN_003afe2c(temp_v0,0,temp_v1);
    FUN_00283480();
    FUN_0036f298(temp_v0);
    temp_v3 = temp_v0;
  }
  FUN_003283ac(temp_v3);
  return 1;
}

} /* extern "C" */
