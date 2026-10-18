/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001303bc` (_code @ 0x1303bc, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00472370; /* 0x472370 */
extern unsigned int DAT_004ea7bc; /* 0x4ea7bc */
extern unsigned char DAT_004ea7c0; /* 0x4ea7c0 */
extern unsigned int DAT_004ea7c4; /* 0x4ea7c4 */
extern unsigned int DAT_004ea7c8; /* 0x4ea7c8 */
extern unsigned int DAT_004ea7cc; /* 0x4ea7cc */
extern unsigned char DAT_004ea7d0; /* 0x4ea7d0 */
extern unsigned char DAT_004ea7d1; /* 0x4ea7d1 */

extern int FUN_002c00d4(unsigned int *);


unsigned int * FUN_001303bc(void)

{
  int temp_v0;
  
  if (((DAT_00472370 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00472370), temp_v0 != 0)) {
    DAT_004ea7bc = 0;
    DAT_004ea7c0 = 1;
    DAT_004ea7c4 = 0;
    DAT_004ea7c8 = 0;
    DAT_004ea7cc = 0xffffffff;
    DAT_004ea7d0 = 0;
    DAT_004ea7d1 = 0;
  }
  return &DAT_004ea7bc;
}
