/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7f04` (_code @ 0x2a7f04, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern unsigned int DAT_004efdb4; /* 0x4efdb4 */
extern unsigned int DAT_004efdb8; /* 0x4efdb8 */
extern unsigned int DAT_004efdbc; /* 0x4efdbc */
extern unsigned int DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern unsigned int DAT_004efdc8; /* 0x4efdc8 */
extern unsigned int DAT_004efdcc; /* 0x4efdcc */
extern unsigned int DAT_004efdd0; /* 0x4efdd0 */
extern unsigned int DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

extern int FUN_002c00d4(unsigned int *);


unsigned int * FUN_002a7f04(void)

{
  int temp_v0;
  
  if (((DAT_00476638 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00476638), temp_v0 != 0)) {
    DAT_004efd9c = 0x3f800000;
    DAT_004efda0 = 0;
    DAT_004efda4 = 0;
    DAT_004efda8 = 0;
    DAT_004efdac = 0;
    DAT_004efdb0 = 0x3f800000;
    DAT_004efdb4 = 0;
    DAT_004efdb8 = 0;
    DAT_004efdbc = 0;
    DAT_004efdc0 = 0;
    DAT_004efdc4 = 0x3f800000;
    DAT_004efdc8 = 0;
    DAT_004efdcc = 0;
    DAT_004efdd0 = 0;
    DAT_004efdd4 = 0;
    DAT_004efdd8 = 0x3f800000;
  }
  return &DAT_004efd9c;
}
