/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294c28` (_code @ 0x294c28, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_0058104c; /* 0x58104c */
extern signed char DAT_005f1614; /* 0x5f1614 */

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00152f44. */
extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_0018719c(unsigned int);
extern int FUN_002d8b58(unsigned int, unsigned short);


void FUN_00294c28(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  FUN_00162e8c();
  FUN_00152f44();
  if ((((DAT_005f1614 == '\0') && (*DAT_0058104c == 0)) && (temp_v0 = FUN_0018719c(0x49a), temp_v0 != 0)
      ) && ((temp_v0 = FUN_0015688c(), temp_v0 != 0 &&
            ((temp_v1 = FUN_0018719c(0x1a2), temp_v1 == 0 ||
             (temp_v1 = FUN_0014bef4(99), temp_v1 + 1 >= 0x33)))))) {
    temp_v1 = FUN_0014bef4(99);
    if ((temp_v1 + 1 >= 0x3d) && (temp_v1 = FUN_0018719c(0x10), temp_v1 != 0)) {
      temp_v2 = 0xad;
    }
    else {
      temp_v2 = *(unsigned short *)(temp_v0 + 300);
    }
    temp_v0 = FUN_002d8b58(0,temp_v2);
    piVar1 = DAT_0058104c;
    DAT_0058104c[5] = temp_v0;
    piVar1[1] = 0;
    *piVar1 = 2;
  }
  return;
}
