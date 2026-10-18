/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022643c` (_code @ 0x22643c, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_00476640; /* 0x476640 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */
extern unsigned char DAT_004efdf4; /* 0x4efdf4 */
extern unsigned int DAT_004efe24; /* 0x4efe24 */
extern unsigned int DAT_004efe28; /* 0x4efe28 */
extern unsigned int DAT_004efe2c; /* 0x4efe2c */
extern unsigned int DAT_004efe30; /* 0x4efe30 */

/* Supplied declaration required: FUN_002c00b4. */
extern int FUN_002c00d4(unsigned int *);


unsigned char * FUN_0022643c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_00476640 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00476640), temp_v0 != 0)) {
    temp_v1 = 0x3f800000;
    if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00476634), temp_v0 != 0)) {
      DAT_004efd70 = 0;
      DAT_004efd74 = 0;
      DAT_004efd78 = 0;
      DAT_004efd7c = 0;
      DAT_004efd84 = 0;
      DAT_004efd88 = 0;
      DAT_004efd8c = 0;
      DAT_004efd90 = 0;
      DAT_004efd98 = 0;
      DAT_004efd6c = temp_v1;
      DAT_004efd80 = temp_v1;
      DAT_004efd94 = temp_v1;
    }
    FUN_002c00b4(&DAT_004efdf4,&DAT_004efd6c);
    DAT_004efe30 = 0x7e1;
    DAT_004efe24 = temp_v1;
    DAT_004efe28 = temp_v1;
    DAT_004efe2c = temp_v1;
  }
  return &DAT_004efdf4;
}
