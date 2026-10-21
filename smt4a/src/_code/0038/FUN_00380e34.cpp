/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380e34` (_code @ 0x380e34, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);

extern unsigned int g_battleMaskPresets; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_00380e34(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  temp_v6 = 4;
  while( 1 ) {
    puVar8 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v6 * 0x408);
    temp_v4 = *puVar8;
    temp_v5 = puVar8[1];
    if (((((temp_v5 & DAT_00570d7c) != 0 || (temp_v4 & g_battleMaskPresets) != 0) &&
         ((DAT_00570d90 & temp_v4) == 0 && (DAT_00570d94 & temp_v5) == 0)) &&
        ((temp_v4 & DAT_00570d80) != 0 || (temp_v5 & DAT_00570d84) != 0)) &&
       ((*(char *)((int)puVar8 + 0x23a) != '\0' && (*(unsigned short *)((int)puVar8 + 0x166) == temp_v0))))
    break;
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 0x36) {
      return 1;
    }
  }
  temp_v2 = *(int *)(temp_v2 + 0x1ed4) + temp_v6 * 0x1d0;
  temp_v3 = *(unsigned short *)(temp_v2 + 0x60);
  if (temp_v1 == 0) {
    temp_v3 = temp_v3 & 0xdfff;
  }
  else {
    temp_v3 = temp_v3 | 0x2000;
  }
  *(unsigned short *)(temp_v2 + 0x60) = temp_v3;
  return 1;
}

} /* extern "C" */
