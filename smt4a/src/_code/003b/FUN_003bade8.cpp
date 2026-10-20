/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bade8` (_code @ 0x3bade8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e71ac(unsigned int, unsigned int);

extern int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned char *DAT_0059dc18; /* 0x59dc18 */
extern unsigned int DAT_0059e69c; /* 0x59e69c */
extern unsigned char DAT_0059e9a8; /* 0x59e9a8 */
extern int DAT_0059e9b4; /* 0x59e9b4 */

/* Supplied declaration required: FUN_002e71ac. */
extern unsigned int FUN_00300778(unsigned int, int);
extern unsigned int FUN_0037658c(unsigned int, unsigned int);


unsigned int FUN_003bade8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00300778(DAT_0059dbf4,DAT_0059dbec + DAT_0059e9b4);
  temp_v1 = FUN_0037658c(DAT_0059dbf4,temp_v0);
  DAT_0059e69c = 0;
  FUN_002e71ac(temp_v1,temp_v0);
  DAT_0059dc18 = &DAT_0059e9a8;
  return 0;
}

} /* extern "C" */
