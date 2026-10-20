/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002950a8` (_code @ 0x2950a8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f44(void);

extern int *g_popupState; /* 0x58104c */

/* Supplied declaration required: FUN_00152f44. */
extern int FUN_0015688c(void);
extern int FUN_002d8b58(unsigned int);


void FUN_002950a8(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  FUN_00152f44();
  if ((*g_popupState == 0) && (temp_v0 = FUN_0015688c(), piVar1 = g_popupState, temp_v0 != 0)) {
    *g_popupState = 0x16;
    piVar1[6] = (unsigned int)*(unsigned short *)(temp_v0 + 300);
    temp_v0 = FUN_002d8b58(0x19);
    piVar1 = g_popupState;
    g_popupState[1] = 0;
    piVar1[5] = temp_v0;
  }
  return;
}

} /* extern "C" */
