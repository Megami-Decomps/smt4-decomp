/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030262c` (_code @ 0x30262c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055937c; /* 0x55937c */
extern unsigned int DAT_00594abc; /* 0x594abc */

/* Supplied declaration required: FUN_001055f4. */
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002e9318(unsigned int *);
/* Supplied declaration required: FUN_002f9f12. */
/* Supplied declaration required: FUN_002fb1c4. */
/* Supplied declaration required: FUN_002fb1d4. */
/* Supplied declaration required: FUN_002fb244. */
/* Supplied declaration required: FUN_002fb25c. */


int FUN_0030262c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  *param_1 = (unsigned int)&DAT_0055937c;
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_002fb25c(DAT_00594abc,param_1[4],param_3,param_4,param_4);
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    temp_v0 = *piVar2;
    if (temp_v0 != 0) {
      if ((char)piVar2[3] == '\0') {
        FUN_002fb1d4();
        FUN_002fb244(*piVar2);
        FUN_001055f4(temp_v0);
      }
      FUN_002fb1c4(*piVar2);
      *piVar2 = 0;
    }
    if (piVar2[1] != 0) {
      FUN_002f9f12();
      piVar2[1] = 0;
    }
    FUN_002e6e14(piVar2);
  }
  param_1[3] = 0;
  temp_v0 = FUN_002e9318(param_1 + 1);
  return temp_v0 - 4;
}
