/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee9bc` (_code @ 0x3ee9bc, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00407f24; /* 0x407f24 */
extern unsigned int DAT_0044e368; /* 0x44e368 */
extern unsigned int DAT_0044e378; /* 0x44e378 */
extern unsigned int DAT_0044e37c; /* 0x44e37c */
extern unsigned char *DAT_004c641c; /* 0x4c641c */
extern unsigned int DAT_004c6420; /* 0x4c6420 */
extern unsigned int DAT_004c6424; /* 0x4c6424 */
extern unsigned int DAT_004c6428; /* 0x4c6428 */


void FUN_003ee9bc(unsigned int param_1,unsigned int param_2,int param_3)

{
  *(unsigned int *)(param_3 + 0x10) = param_1;
  *(unsigned int *)(param_3 + 0x14) = param_2;
  DAT_0044e378 = 0;
  DAT_0044e37c = 0;
  DAT_004c6424 = 0;
  DAT_004c6420 = 0;
  DAT_004c6428 = 0;
  DAT_004c641c = &DAT_00407f24;
  DAT_0044e368 = 0;
  return;
}
