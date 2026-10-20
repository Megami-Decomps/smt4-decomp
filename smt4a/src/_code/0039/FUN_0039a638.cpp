/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a638` (_code @ 0x39a638, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

extern unsigned char DAT_0057f588; /* 0x57f588 */

extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_001846d0. */


unsigned int FUN_0039a638(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  temp_v1 = FUN_0014af84();
  if (*(int *)(temp_v1 + 0x21d8c) != 0) {
    FUN_001846d0(temp_v0 + 0xb00,7);
  }
  return 1;
}

} /* extern "C" */
