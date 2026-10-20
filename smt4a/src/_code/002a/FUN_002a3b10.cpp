/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3b10` (_code @ 0x2a3b10, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int eventTexSetCurrent(void);
int FUN_0036f298(int);
int FUN_003b6820(int, int, unsigned int);

extern int jobIsValid(void);
extern int jobGetWork(unsigned int);
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: scrGetArg. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: eventTexSetCurrent. */
/* Supplied declaration required: FUN_0036f298. */
extern int FUN_0039af04(void);
extern unsigned int FUN_003b6808(void);
/* Supplied declaration required: FUN_003b6820. */


unsigned int FUN_002a3b10(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetCommandFrame();
  if (temp_v2 != 0) {
    temp_v1 = FUN_003b6808();
    temp_v2 = jobIsValid();
    if (temp_v2 != 0) {
      temp_v2 = jobGetWork(temp_v1);
      temp_v2 = asdTMTexTableNodeIsLoaded(*(unsigned int *)(temp_v2 + 0x40),*(unsigned int *)(temp_v2 + 0x44));
      if (temp_v2 == 0) {
        return 0;
      }
    }
  }
  else {
    temp_v2 = FUN_0039af04();
    if ((temp_v2 != 0) && (FUN_003b6820(temp_v0,1,temp_v1), temp_v0 != 0)) {
      eventTexSetCurrent();
      FUN_0036f298(temp_v0);
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
