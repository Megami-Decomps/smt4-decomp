/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8c60` (_code @ 0x3b8c60, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d88; /* 0x570d88 */
extern unsigned int DAT_00570d8c; /* 0x570d8c */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_004c571c. */


unsigned int FUN_003b8c60(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  
  temp_v0 = FUN_0014aa78();
  temp_v3 = 0;
  do {
    puVar4 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v3 * 0x408);
    if (puVar4 != (unsigned int *)0x0) {
      temp_v1 = *puVar4;
      temp_v2 = puVar4[1];
      if (((((DAT_00570d78 & temp_v1) != 0 || (DAT_00570d7c & temp_v2) != 0) &&
           ((DAT_00570d90 & temp_v1) == 0 && (DAT_00570d94 & temp_v2) == 0)) &&
          ((DAT_00570d84 & temp_v2) == 0 && (DAT_00570d80 & temp_v1) == 0)) &&
         ((temp_v1 & DAT_00570d88) == 0 && (temp_v2 & DAT_00570d8c) == 0)) {
        FUN_004c571c((int)(short)puVar4[2],0x18,1,0);
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  return 1;
}
