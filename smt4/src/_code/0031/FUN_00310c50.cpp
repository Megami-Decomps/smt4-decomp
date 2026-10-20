/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310c50` (_code @ 0x310c50, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_002a880c(unsigned int, int, int);

extern int scrGetCommandFrame(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_002a880c. */
extern unsigned int jobGetWork(void);


unsigned int FUN_00310c50(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 != 0) {
    temp_v0 = scrGetCommandFrame();
    if (temp_v0 == 10) {
      return 1;
    }
  }
  else {
    scrGetArg(0);
    temp_v1 = jobGetWork();
    FUN_002a880c(temp_v1,1,10);
  }
  return 0;
}

} /* extern "C" */
