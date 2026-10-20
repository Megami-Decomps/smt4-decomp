/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8614` (_code @ 0x2d8614, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d4ed8(int);

extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_003d4ed8. */


void FUN_002d8614(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  if ((*(char *)(DAT_0058103c + 0x34) != param_1) &&
     (*(char *)(DAT_0058103c + 0x34) = (char)param_1, param_1 != 0)) {
    FUN_003d4ed8(0x10002ab);
    *(unsigned int *)(temp_v0 + 0x78) = 0;
    *(unsigned int *)(temp_v0 + 0xa4) = 0;
    *(unsigned int *)(temp_v0 + 0xa8) = 0x41a00000;
    *(unsigned int *)(temp_v0 + 0xac) = 0;
    *(unsigned int *)(temp_v0 + 0xb0) = *(unsigned int *)(temp_v0 + 0xa4);
    *(unsigned int *)(temp_v0 + 0xb4) = 0x41a00000;
    *(unsigned int *)(temp_v0 + 0xb8) = 0;
    *(unsigned int *)(temp_v0 + 0xbc) = 0;
    *(unsigned int *)(temp_v0 + 0x38) = 0;
  }
  return;
}

} /* extern "C" */
