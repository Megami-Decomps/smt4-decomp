/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cc460` (_code @ 0x3cc460, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004c3db4(void);

extern unsigned int g_battleMaskPresets; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_004c3db4. */


unsigned int FUN_003cc460(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = btlGetMainState();
  temp_v3 = 0;
  do {
    puVar2 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v3 * 0x408);
    temp_v1 = *puVar2;
    temp_v2 = puVar2[1];
    if (((g_battleMaskPresets & temp_v1) != 0 || (DAT_00570d7c & temp_v2) != 0) &&
       ((DAT_00570d90 & temp_v1) == 0 && (DAT_00570d94 & temp_v2) == 0)) {
      if ((temp_v1 & DAT_00570d80) != 0 || (temp_v2 & DAT_00570d84) != 0) {
        FUN_004c3db4();
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  return 1;
}

} /* extern "C" */
