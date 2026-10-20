/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4064` (_code @ 0x2e4064, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00101e28(unsigned int, unsigned int);
int FUN_002e3268(void);
int FUN_002e4d84(void);

extern int DAT_005c4bf8; /* 0x5c4bf8 */
extern int DAT_005c4bfc; /* 0x5c4bfc */
extern int DAT_005c4c00; /* 0x5c4c00 */

extern unsigned int FUN_00101e20(int, int);
/* Supplied declaration required: FUN_00101e28. */
/* Supplied declaration required: FUN_002e3268. */
/* Supplied declaration required: FUN_002e4d84. */


void FUN_002e4064(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  if (DAT_005c4c00 == 0) {
    temp_v0 = 0x20;
    FUN_002e3268();
    FUN_002e4d84();
    temp_v3 = 0;
    DAT_005c4bf8 = temp_v0;
    for (temp_v2 = 0x10; (temp_v2 & 0x3ff) != 0; temp_v2 = temp_v2 << 1) {
      temp_v1 = FUN_00101e20(DAT_005c4bf8,temp_v3);
      FUN_00101e28(temp_v1,*(unsigned int *)(DAT_005c4bf8 + 0x18));
      temp_v3 = temp_v3 + 1;
    }
    temp_v0 = 0x20;
    FUN_002e3268();
    FUN_002e4d84();
    DAT_005c4bfc = temp_v0;
    *(unsigned int *)(temp_v0 + 0x10) = 0x3f0;
    DAT_005c4c00 = DAT_005c4bf8;
  }
  return;
}

} /* extern "C" */
