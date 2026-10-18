/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8684` (_code @ 0x3b8684, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00571100; /* 0x571100 */
extern unsigned int DAT_00571104; /* 0x571104 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b8684(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v3 = -1;
  temp_v2 = 0;
  while( 1 ) {
    temp_v1 = FUN_0014aa78();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v2 * 0x408);
    if (((DAT_00571100 & *puVar3) != 0 || (puVar3[1] & DAT_00571104) != 0) &&
       (*(unsigned short *)((int)puVar3 + 0x166) == temp_v0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      FUN_003283ac(temp_v3);
      return 1;
    }
  }
  temp_v3 = (int)(short)puVar3[2];
  FUN_003283ac(temp_v3);
  return 1;
}
