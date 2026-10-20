/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378924` (_code @ 0x378924, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0033c9f0(char *, int);

extern int DAT_00581038; /* 0x581038 */

/* Supplied declaration required: FUN_0033c9f0. */


void FUN_00378924(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00581038 + temp_v1 * 0x54;
    pcVar2 = (char *)(temp_v0 + 0x5c);
    if (*pcVar2 != '\0') {
      FUN_0033c9f0(pcVar2,(int)*(short *)(temp_v0 + 0xac));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  return;
}

} /* extern "C" */
