/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_BattleUI_RefreshLabel` (_code @ 0x2fff5c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002942c4(int, int);
int FUN_00336a84(void);
int FUN_003ae620(unsigned int);

extern unsigned int g_btlUiBlock; /* 0x439ca8 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_002942c4. */
extern int FUN_002b6a54(int, unsigned short);
extern int gameGetOptions(void);
/* Supplied declaration required: FUN_00336a84. */
/* Supplied declaration required: FUN_003ae620. */


unsigned int scrComm_BattleUI_RefreshLabel(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = btlGetMainState();
  FUN_00336a84();
  temp_v2 = gameGetOptions();
  temp_v0 = *(unsigned short *)(temp_v2 + 0x606);
  temp_v2 = gameGetOptions();
  temp_v2 = FUN_002b6a54((int)*(short *)(temp_v2 + 0x604),temp_v0);
  FUN_002942c4((int)(short)(*(short *)(temp_v2 + 0x5a) + 1),0);
  *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x2000000;
  FUN_003ae620(g_btlUiBlock);
  return 1;
}

} /* extern "C" */
