/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00174ae0` (_code @ 0x174ae0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005c0f94; /* 0x5c0f94 */
extern unsigned int DAT_0064717c; /* 0x64717c */
extern unsigned char DAT_00647180; /* 0x647180 */
extern unsigned int DAT_00647184; /* 0x647184 */
extern unsigned int DAT_00647188; /* 0x647188 */
extern unsigned int DAT_0064718c; /* 0x64718c */
extern unsigned char DAT_00647190; /* 0x647190 */
extern unsigned char DAT_00647191; /* 0x647191 */

extern int FUN_002eba64(unsigned int *);


unsigned int * FUN_00174ae0(void)

{
  int temp_v0;
  
  if (((DAT_005c0f94 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c0f94), temp_v0 != 0)) {
    DAT_0064717c = 0;
    DAT_00647180 = 1;
    DAT_00647184 = 0;
    DAT_00647188 = 0;
    DAT_0064718c = 0xffffffff;
    DAT_00647190 = 0;
    DAT_00647191 = 0;
  }
  return &DAT_0064717c;
}
