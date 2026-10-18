/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_BattleUI_SyncCursorPosition` (_code @ 0x327b2c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00254f58. */
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_00338060. */
/* Supplied declaration required: FUN_003af0b0. */


unsigned int scrComm_BattleUI_SyncCursorPosition(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002939f4();
  *(unsigned short *)(temp_v0 + 0x4968) = *(unsigned short *)(temp_v0 + 0x4970);
  *(unsigned short *)(temp_v0 + 0x496a) = *(unsigned short *)(temp_v0 + 0x4972);
  FUN_003af0b0(DAT_00439ca8);
  puVar2 = (unsigned int *)(temp_v0 + 0x44a0);
  if ((*puVar2 & 0x1000) != 0) {
    *puVar2 = *puVar2 & 0xffffefff;
    FUN_00254f58(temp_v0);
  }
  FUN_00338060(temp_v0,1);
  return 1;
}
