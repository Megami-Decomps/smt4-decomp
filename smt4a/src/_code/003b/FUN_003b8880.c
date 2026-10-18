/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8880` (_code @ 0x3b8880, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_00571100; /* 0x571100 */
extern unsigned int DAT_00571104; /* 0x571104 */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b8880(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = -1;
  temp_v3 = 0;
  do {
    temp_v0 = FUN_0014aa78();
    puVar4 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v3 * 0x408);
    temp_v1 = *puVar4;
    temp_v2 = puVar4[1];
    if ((((DAT_005710e8 & temp_v1) != 0 || (DAT_005710ec & temp_v2) != 0) &&
        ((DAT_0057110c & temp_v2) == 0 && (DAT_00571108 & temp_v1) == 0)) && (-1 < (short)puVar4[2])) {
      if ((temp_v1 & DAT_00571100) != 0 || (temp_v2 & DAT_00571104) != 0) {
        temp_v4 = (int)(short)puVar4[2];
        break;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  FUN_003283ac(temp_v4);
  return 1;
}
