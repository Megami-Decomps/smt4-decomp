/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050f808` (_code @ 0x50f808, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00536c7c; /* 0x536c7c */
extern unsigned int DAT_005891bc; /* 0x5891bc */
extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */
extern unsigned int DAT_005891d0; /* 0x5891d0 */
extern unsigned int DAT_005891d4; /* 0x5891d4 */


void FUN_0050f808(unsigned int *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_00536c7c;
  param_1[3] = 0;
  DAT_005891bc = 0;
  DAT_005891c8 = 0xffffffff;
  DAT_005891cc = 0xffffffff;
  DAT_005891d0 = 0;
  DAT_005891d4 = 0;
  return;
}
