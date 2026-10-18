/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323b58` (_code @ 0x323b58, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned char *DAT_0044eab8; /* 0x44eab8 */
extern unsigned int DAT_0044f584; /* 0x44f584 */
extern unsigned char DAT_0044f858; /* 0x44f858 */
extern int DAT_0044f864; /* 0x44f864 */

extern unsigned int FUN_00246a4c(unsigned int, int);
/* Supplied declaration required: FUN_002e7e94. */


void FUN_00323b58(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00246a4c(DAT_0044ea94,DAT_0044ea8c + DAT_0044f864);
  FUN_002e7e94(DAT_0044ea94,temp_v0);
  DAT_0044f584 = 0;
  DAT_0044ea8c = 0;
  DAT_0044f864 = 0;
  DAT_0044eab8 = &DAT_0044f858;
  return;
}
