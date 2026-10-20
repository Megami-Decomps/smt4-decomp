/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c89e8` (_code @ 0x4c89e8, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int dialogClose(int);

extern int *g_btlHelp; /* 0x5738e8 */

extern int FUN_001632fc(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: dialogClose. */


void FUN_004c89e8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *g_btlHelp;
  while (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x874);
    if ((((-1 < *(short *)(temp_v0 + 0x872)) && (*(short *)(temp_v0 + 2) == 1)) &&
        ((*(unsigned short *)(temp_v0 + 6) & 1) == 0)) && (temp_v1 = FUN_001632fc(), temp_v1 != 0)) {
      dialogClose(1);
    }
    piVar2 = g_btlHelp;
    if (*(int *)(temp_v0 + 0x878) == 0) {
      *g_btlHelp = *(int *)(temp_v0 + 0x874);
    }
    else {
      *(unsigned int *)(*(int *)(temp_v0 + 0x878) + 0x874) = *(unsigned int *)(temp_v0 + 0x874);
    }
    if (*(int *)(temp_v0 + 0x874) == 0) {
      piVar2[1] = *(int *)(temp_v0 + 0x878);
    }
    else {
      *(unsigned int *)(*(int *)(temp_v0 + 0x874) + 0x878) = *(unsigned int *)(temp_v0 + 0x878);
    }
    piVar2[2] = piVar2[2] - 1;
    asdMemFree();
    temp_v0 = temp_v2;
  }
  return;
}

} /* extern "C" */
