/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3944` (_code @ 0x3f3944, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);

extern unsigned char LAB_0017f6c0; /* 0x17f6c0 */
extern unsigned int DAT_004720bc; /* 0x4720bc */
extern unsigned int DAT_004720c4; /* 0x4720c4 */
extern unsigned int DAT_004720cc; /* 0x4720cc */
extern unsigned char DAT_004e9dc8; /* 0x4e9dc8 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_003f3944(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  param_3[2] = param_1;
  param_3[3] = param_2;
  param_3[4] = 0;
  param_3[5] = 0;
  *param_3 = 0xbf0000;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_004e9dc8,&LAB_0017f6c0,4,0x18);
  DAT_004720bc = 0xf0111;
  DAT_004720c4 = 0xf0110;
  DAT_004720cc = 0x803f0112;
  return;
}

} /* extern "C" */
