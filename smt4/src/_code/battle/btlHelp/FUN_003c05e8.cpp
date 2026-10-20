/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c05e8` (_code @ 0x3c05e8, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295ba4(int);
int asdMemFree(void);

extern int *DAT_00435d78; /* 0x435d78 */

/* Supplied declaration required: FUN_00295ba4. */
extern int FUN_002b6b04(void);
/* Supplied declaration required: asdMemFree. */


void FUN_003c05e8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *DAT_00435d78;
  while (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x2a4);
    if ((((*(int *)(temp_v0 + 8) == param_1) && (-1 < *(short *)(temp_v0 + 0x2a2))) &&
        (*(short *)(temp_v0 + 2) == 1)) &&
       (((*(unsigned short *)(temp_v0 + 6) & 1) == 0 && (temp_v1 = FUN_002b6b04(), temp_v1 != 0)))) {
      FUN_00295ba4(1);
    }
    piVar2 = DAT_00435d78;
    if (*(int *)(temp_v0 + 0x2a8) == 0) {
      *DAT_00435d78 = *(int *)(temp_v0 + 0x2a4);
    }
    else {
      *(unsigned int *)(*(int *)(temp_v0 + 0x2a8) + 0x2a4) = *(unsigned int *)(temp_v0 + 0x2a4);
    }
    if (*(int *)(temp_v0 + 0x2a4) == 0) {
      piVar2[1] = *(int *)(temp_v0 + 0x2a8);
    }
    else {
      *(unsigned int *)(*(int *)(temp_v0 + 0x2a4) + 0x2a8) = *(unsigned int *)(temp_v0 + 0x2a8);
    }
    piVar2[2] = piVar2[2] - 1;
    asdMemFree();
    temp_v0 = temp_v2;
  }
  return;
}

} /* extern "C" */
