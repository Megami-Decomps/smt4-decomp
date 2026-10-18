/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb2f0` (_code @ 0x2bb2f0, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0047233c; /* 0x47233c */
extern unsigned int DAT_004e9e28; /* 0x4e9e28 */
extern unsigned int DAT_004e9e2c; /* 0x4e9e2c */
extern unsigned int *DAT_004e9e30; /* 0x4e9e30 */
extern unsigned int *DAT_004e9e34; /* 0x4e9e34 */
extern unsigned char DAT_004e9e38; /* 0x4e9e38 */
extern unsigned int DAT_004e9e3c; /* 0x4e9e3c */

extern int FUN_002c00d4(unsigned int *);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bb2f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_0047233c & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_0047233c), temp_v0 != 0)) {
    DAT_004e9e28 = 0;
    DAT_004e9e2c = 0;
    DAT_004e9e30 = (unsigned int *)&DAT_004e9e30;
    DAT_004e9e34 = (unsigned int *)&DAT_004e9e30;
    DAT_004e9e38 = 0;
    DAT_004e9e3c = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
