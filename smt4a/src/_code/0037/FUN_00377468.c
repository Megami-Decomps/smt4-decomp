/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377468` (_code @ 0x377468, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005f163c; /* 0x5f163c */
extern int DAT_005f1640; /* 0x5f1640 */
extern unsigned char DAT_005f185d; /* 0x5f185d */
extern unsigned char DAT_005f185e; /* 0x5f185e */
extern unsigned char DAT_005f185f; /* 0x5f185f */
extern unsigned int DAT_005f1860; /* 0x5f1860 */
extern unsigned int DAT_005f1864; /* 0x5f1864 */
extern unsigned char DAT_005f187c; /* 0x5f187c */

/* Supplied declaration required: FUN_00274970. */
/* Supplied declaration required: FUN_002d23f0. */
extern int FUN_003a32a8(void);


void FUN_00377468(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_005f163c != 0) && (temp_v0 = FUN_003a32a8(), temp_v0 != -1)) {
    FUN_002d23f0();
    FUN_00274970(DAT_005f163c);
  }
  if (DAT_005f1640 != 0) {
    temp_v0 = FUN_003a32a8();
    if (temp_v0 != -1) {
      FUN_002d23f0();
      FUN_00274970(DAT_005f1640);
    }
    DAT_005f1640 = 0;
  }
  DAT_005f185d = 0;
  DAT_005f185e = 0;
  DAT_005f185f = 0;
  DAT_005f1860 = 0;
  DAT_005f1864 = 0;
  DAT_005f187c = 0;
  return;
}
