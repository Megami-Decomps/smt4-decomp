/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8684` (_code @ 0x3b8684, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int DAT_00571100; /* 0x571100 */
extern unsigned int DAT_00571104; /* 0x571104 */

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b8684(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v3 = -1;
  temp_v2 = 0;
  while( 1 ) {
    temp_v1 = btlGetMainState();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v2 * 0x408);
    if (((DAT_00571100 & *puVar3) != 0 || (puVar3[1] & DAT_00571104) != 0) &&
       (*(unsigned short *)((int)puVar3 + 0x166) == temp_v0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      scrSetResult(temp_v3);
      return 1;
    }
  }
  temp_v3 = (int)(short)puVar3[2];
  scrSetResult(temp_v3);
  return 1;
}

} /* extern "C" */
