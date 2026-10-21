/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b892c` (_code @ 0x3b892c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_battleMaskPresets; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b892c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlGetMainState();
  temp_v4 = 4;
  while( 1 ) {
    puVar6 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
    temp_v2 = *puVar6;
    temp_v3 = puVar6[1];
    if (((((temp_v3 & DAT_00570d7c) != 0 || (temp_v2 & g_battleMaskPresets) != 0) &&
         ((DAT_00570d90 & temp_v2) == 0 && (DAT_00570d94 & temp_v3) == 0)) &&
        ((temp_v2 & DAT_00570d80) != 0 || (temp_v3 & DAT_00570d84) != 0)) &&
       ((*(char *)((int)puVar6 + 0x23a) != '\0' && (*(unsigned short *)((int)puVar6 + 0x166) == temp_v0))))
    break;
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x36) {
      scrSetResult(1);
      return 1;
    }
  }
  if (*(unsigned short *)(*(int *)(temp_v1 + 0x1ed4) + temp_v4 * 0x1d0 + 0x1c8) >= 3) {
    scrSetResult(0);
    return 0;
  }
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
