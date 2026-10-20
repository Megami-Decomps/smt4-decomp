/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec998` (_code @ 0x3ec998, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_00141adc; /* 0x141adc */
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

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
extern unsigned int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_003ec998(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

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
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_004d46ac,&LAB_00141adc,0x10,4);
  DAT_004d4914 = packNibblesAndByte(6,7,0);
  DAT_004d4918 = packNibblesAndByte(6,1,0);
  DAT_004d491c = packNibblesAndByte(6,1,2);
  DAT_004d4920 = packNibblesAndByte(5,0,1);
  return;
}

} /* extern "C" */
