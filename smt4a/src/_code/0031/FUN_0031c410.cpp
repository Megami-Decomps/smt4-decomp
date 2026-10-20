/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c410` (_code @ 0x31c410, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021c118(int, int);
int FUN_002bf09c(void);

/* Supplied declaration required: FUN_0021c118. */
extern int scrGetArg(unsigned int);
extern int scrGetArgString(void);
/* Supplied declaration required: FUN_002bf09c. */


unsigned int FUN_0031c410(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArgString();
  FUN_002bf09c();
  if (-1 < temp_v0) {
    temp_v1 = scrGetArg(1);
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    FUN_0021c118(temp_v0,temp_v1);
  }
  return 1;
}

} /* extern "C" */
