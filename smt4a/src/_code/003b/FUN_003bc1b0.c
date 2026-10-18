/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc1b0` (_code @ 0x3bc1b0, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int FUN_0014aa78(void);
extern int FUN_00221754(unsigned int *, unsigned int, unsigned int);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003bc1b0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  temp_v7 = 0;
  temp_v6 = 0;
  do {
    puVar7 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v6 * 0x408);
    if (puVar7 != (unsigned int *)0x0) {
      temp_v3 = *puVar7;
      temp_v5 = puVar7[1];
      if (((((DAT_0057028c & temp_v5) != 0 || (DAT_00570288 & temp_v3) != 0) &&
           ((DAT_005702b0 & temp_v3) == 0 && (DAT_005702b4 & temp_v5) == 0)) &&
          ((temp_v3 & DAT_005702a0) != 0 || (temp_v5 & DAT_005702a4) != 0)) &&
         (temp_v4 = FUN_00221754(puVar7,temp_v0,temp_v1), temp_v4 != 0)) {
        temp_v7 = temp_v7 + 1;
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x6d);
  FUN_003283ac(temp_v7);
  return 1;
}
