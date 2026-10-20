/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e51c4` (_code @ 0x2e51c4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadSprites(int);
int FUN_0014afd0(int, int);

extern signed char DAT_0057f234; /* 0x57f234 */

/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_002e51c4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0057f234 < '\x01') {
    asdTMTexTableLoadSprites(0xb);
    temp_v0 = 0;
    while( 1 ) {
      FUN_0014afd0(0xb,temp_v0);
      temp_v0 = temp_v0 + 1;
      if (temp_v0 >= 9) break;
      while (temp_v0 == 6) {
        temp_v0 = 7;
      }
    }
  }
  DAT_0057f234 = DAT_0057f234 + '\x01';
  return;
}

} /* extern "C" */
