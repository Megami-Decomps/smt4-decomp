/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c36e4` (_code @ 0x3c36e4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned char *DAT_0059dc18; /* 0x59dc18 */
extern unsigned int DAT_0059e6d4; /* 0x59e6d4 */
extern unsigned char DAT_0059e9a8; /* 0x59e9a8 */
extern int DAT_0059e9b4; /* 0x59e9b4 */

extern unsigned int FUN_00300778(unsigned int, int);
/* Supplied declaration required: FUN_00363590. */


void FUN_003c36e4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00300778(DAT_0059dbf4,DAT_0059dbec + DAT_0059e9b4);
  FUN_00363590(DAT_0059dbf4,temp_v0);
  DAT_0059e6d4 = 0;
  DAT_0059dbec = 0;
  DAT_0059e9b4 = 0;
  DAT_0059dc18 = &DAT_0059e9a8;
  return;
}
