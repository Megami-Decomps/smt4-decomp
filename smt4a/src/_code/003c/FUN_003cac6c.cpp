/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cac6c` (_code @ 0x3cac6c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003ebc08(int, int);
int FUN_003f26d4(int);
int btlUiClearSelectionSlots(unsigned int);

extern unsigned int DAT_00570db0; /* 0x570db0 */
extern unsigned int DAT_00570db4; /* 0x570db4 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_003ebc08. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: btlUiClearSelectionSlots. */


unsigned int FUN_003cac6c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = btlGetMainState();
  *(unsigned short *)(temp_v1 + 0x4c70) = *(unsigned short *)(temp_v1 + 0x4c78);
  *(unsigned short *)(temp_v1 + 0x4c72) = *(unsigned short *)(temp_v1 + 0x4c7a);
  btlUiClearSelectionSlots(g_btlUiBlock);
  temp_v2 = *(unsigned int *)(temp_v1 + 0x45a0);
  if ((temp_v2 & DAT_00570db0) != 0 || (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00570db4) != 0) {
    temp_v0 = ~DAT_00570db4;
    *(unsigned int *)(temp_v1 + 0x45a0) = temp_v2 & ~DAT_00570db0;
    *(unsigned int *)(temp_v1 + 0x45a4) = *(unsigned int *)(temp_v1 + 0x45a4) & temp_v0;
    FUN_003f26d4(temp_v1);
  }
  FUN_003ebc08(temp_v1,1);
  return 1;
}

} /* extern "C" */
