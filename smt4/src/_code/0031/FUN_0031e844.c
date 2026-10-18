/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e844` (_code @ 0x31e844, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned char *DAT_0044eab8; /* 0x44eab8 */
extern unsigned int DAT_0044f54c; /* 0x44f54c */
extern unsigned char DAT_0044f858; /* 0x44f858 */
extern int DAT_0044f864; /* 0x44f864 */

extern unsigned int FUN_002468e0(unsigned int, int);
/* Supplied declaration required: FUN_002bcd60. */
extern unsigned int FUN_002f316c(unsigned int, unsigned int);


unsigned int FUN_0031e844(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002468e0(DAT_0044ea94,DAT_0044ea8c + DAT_0044f864);
  temp_v1 = FUN_002f316c(DAT_0044ea94,temp_v0);
  DAT_0044f54c = 0;
  FUN_002bcd60(temp_v1,temp_v0);
  DAT_0044eab8 = &DAT_0044f858;
  return 0;
}
