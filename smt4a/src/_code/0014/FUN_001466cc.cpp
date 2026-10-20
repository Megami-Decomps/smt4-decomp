/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001466cc` (_code @ 0x1466cc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005c149c; /* 0x5c149c */

extern int FUN_0016f864(void);
extern int FUN_0016f988(unsigned int *, char *, unsigned int, unsigned int);
extern unsigned int wstrlen(char *);


int FUN_001466cc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005c149c == 0) {
    temp_v0 = FUN_0016f864();
    if (temp_v0 < 0) {
      return temp_v0;
    }
    temp_v1 = wstrlen("am:app");
    temp_v0 = FUN_0016f988((unsigned int *)&DAT_005c149c,"am:app",temp_v1,0);
    if (temp_v0 < 0) {
      return temp_v0;
    }
  }
  return 0;
}

} /* extern "C" */
