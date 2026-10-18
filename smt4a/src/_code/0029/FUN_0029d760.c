/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d760` (_code @ 0x29d760, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */
extern int DAT_005f15fc; /* 0x5f15fc */
extern signed char DAT_005f161f; /* 0x5f161f */

/* Supplied declaration required: FUN_002342d0. */
/* Supplied declaration required: FUN_002b6cb0. */
/* Supplied declaration required: FUN_002b968c. */
/* Supplied declaration required: FUN_002cf8e4. */
/* Supplied declaration required: FUN_00385264. */


unsigned int FUN_0029d760(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = DAT_0058103c;
  if (DAT_005f161f == '\0') {
    FUN_002b968c(&DAT_0058103c);
    if (DAT_005f15fc < 100) {
      FUN_002b6cb0();
      FUN_002cf8e4();
    }
    if (*(char *)(temp_v0 + 0xcd08) != '\0') {
      piVar2 = (int *)(temp_v0 + 0xcd0c);
      FUN_00385264(*piVar2);
      *piVar2 = *piVar2 + 1;
    }
    FUN_002342d0((int)*(float *)(temp_v0 + 0xcd20),(int)*(float *)(temp_v0 + 0xcd24));
  }
  return 0;
}
