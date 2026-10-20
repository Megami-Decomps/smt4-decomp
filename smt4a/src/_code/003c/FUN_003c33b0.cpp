/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c33b0` (_code @ 0x3c33b0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0047dcd4(int, int, unsigned int);

extern int g_aocMain; /* 0x570260 */

extern short scrGetArg(void);
extern unsigned int scrGetArgString(unsigned int);
/* Supplied declaration required: FUN_0047dcd4. */


unsigned int FUN_003c33b0(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArgString(1);
  FUN_0047dcd4(g_aocMain + 0xa8,(int)temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
