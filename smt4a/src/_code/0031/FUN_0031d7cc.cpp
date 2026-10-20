/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d7cc` (_code @ 0x31d7cc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004bdce0(int, unsigned int, unsigned int);
int FUN_004bee88(int, unsigned int, unsigned int);

extern int DAT_0057f260; /* 0x57f260 */

extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_004bdce0. */
/* Supplied declaration required: FUN_004bee88. */


unsigned int FUN_0031d7cc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f260;
  if (DAT_0057f260 != 0) {
    temp_v1 = FUN_001654d8(DAT_0057f260 + 0x30);
    temp_v2 = FUN_001654e4(temp_v0 + 0x30);
    temp_v3 = *(int *)(temp_v0 + 0x344);
    if ((temp_v3 == 1) || ((temp_v3 != 2 && (temp_v3 == 3)))) {
      FUN_004bee88(temp_v0,temp_v1,temp_v2);
      FUN_004bdce0(temp_v0,temp_v1,temp_v2);
    }
  }
  return 0;
}

} /* extern "C" */
