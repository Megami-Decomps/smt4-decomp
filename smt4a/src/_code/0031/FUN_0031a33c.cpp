/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a33c` (_code @ 0x31a33c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_002e5864(void);
int FUN_0036f8bc(void);

/* Supplied declaration required: scrGetArg. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_002e5864. */
extern int FUN_002e589c(void);
extern int eventEffectIsStateThree(void);
/* Supplied declaration required: FUN_0036f8bc. */


unsigned char FUN_0031a33c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e589c();
    if (temp_v0 == 0) {
      temp_v0 = eventEffectIsStateThree();
      return temp_v0 != 0;
    }
    scrGetArg(1);
    FUN_002e5864();
  }
  else {
    scrGetArg(0);
    FUN_0036f8bc();
  }
  return 0;
}

} /* extern "C" */
