/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed418` (_code @ 0x1ed418, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventSetUnderMessageFade(unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: eventSetUnderMessageFade. */
extern int scrGetCommandFrame(void);
extern int FUN_002c1d5c(void);


unsigned int FUN_001ed418(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c1d5c();
  if (temp_v0 != 0) {
    return 1;
  }
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 != 0) {
    temp_v0 = scrGetCommandFrame();
    if (temp_v0 != 9) {
      temp_v0 = scrGetCommandFrame();
      if (temp_v0 != 0x15) {
        return 0;
      }
      return 1;
    }
    temp_v1 = 0xc;
    temp_v2 = 0;
  }
  else {
    temp_v1 = 10;
    temp_v2 = 1;
  }
  eventSetUnderMessageFade(0xffffffff,temp_v1,temp_v2);
  return 0;
}

} /* extern "C" */
