/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ebc08` (_code @ 0x3ebc08, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004a9a50(int, int, int);
int FUN_004aaa80(int, int, int);

extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_004a9a50. */
/* Supplied declaration required: FUN_004aaa80. */


void FUN_003ebc08(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  short temp_v2;
  short temp_v3;
  
  temp_v3 = *(short *)(param_1 + 0x4c70);
  temp_v2 = *(short *)(param_1 + 0x4c72) - temp_v3;
  if (0 < temp_v2) {
    temp_v3 = temp_v3 + temp_v2;
  }
  temp_v0 = (char)temp_v3 - (char)*(unsigned short *)(g_btlUiBlock + 0x2450);
  temp_v1 = (char)temp_v2 - (char)*(unsigned short *)(g_btlUiBlock + 0x2452);
  if (param_2 != 0) {
    if (param_2 == 1) {
      FUN_004aaa80(g_btlUiBlock,(int)temp_v0,(int)temp_v1);
    }
  }
  else {
    FUN_004a9a50(g_btlUiBlock,(int)temp_v0,(int)temp_v1);
  }
  *(unsigned short *)(param_1 + 0x4c74) = *(unsigned short *)(param_1 + 0x4c70);
  *(unsigned short *)(param_1 + 0x4c76) = *(unsigned short *)(param_1 + 0x4c72);
  return;
}

} /* extern "C" */
