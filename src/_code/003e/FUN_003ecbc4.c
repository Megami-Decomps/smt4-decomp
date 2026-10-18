/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ecbc4` (_code @ 0x3ecbc4, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0014144c; /* 0x14144c */
extern unsigned int DAT_0044ea20; /* 0x44ea20 */
extern unsigned int DAT_0044ea24; /* 0x44ea24 */
extern unsigned int DAT_004d469c; /* 0x4d469c */
extern unsigned int DAT_004d46a0; /* 0x4d46a0 */
extern unsigned int DAT_004d46a4; /* 0x4d46a4 */
extern unsigned int DAT_004d46a8; /* 0x4d46a8 */
extern unsigned int DAT_004d46ac; /* 0x4d46ac */
extern unsigned int DAT_004d4914; /* 0x4d4914 */
extern unsigned int DAT_004d4918; /* 0x4d4918 */
extern unsigned int DAT_004d491c; /* 0x4d491c */
extern unsigned int DAT_004d4920; /* 0x4d4920 */

/* Supplied declaration required: FUN_002c5f58. */
extern unsigned int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_003ecbc4(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  *param_3 = param_1;
  param_3[1] = param_2;
  DAT_0044ea20 = 0;
  DAT_0044ea24 = 0;
  DAT_004d469c = 0x3f800000;
  DAT_004d46a0 = 0x3f800000;
  DAT_004d46a4 = 0x3f800000;
  DAT_004d46a8 = 0x3f800000;
  FUN_002c5f58(&DAT_004d46ac,&LAB_0014144c,0x10,4);
  DAT_004d4914 = FUN_002c5fa4(6,7,0);
  DAT_004d4918 = FUN_002c5fa4(6,1,0);
  DAT_004d491c = FUN_002c5fa4(6,1,2);
  DAT_004d4920 = FUN_002c5fa4(5,0,1);
  return;
}
