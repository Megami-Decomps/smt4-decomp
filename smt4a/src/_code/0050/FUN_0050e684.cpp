/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050e684` (_code @ 0x50e68c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(...);
int __aeabi_vec_ctor_nocookie_nodtor(...);

extern int FUN_0042d1cc(...); /* 0x42d1cc */
extern unsigned char LAB_0043a2e8; /* 0x43a2e8 */
extern unsigned int DAT_005c0b2c; /* 0x5c0b2c */
extern unsigned int DAT_005c0b38; /* 0x5c0b38 */
extern unsigned int DAT_005c0b3c; /* 0x5c0b3c */
extern unsigned int DAT_006463c4; /* 0x6463c4 */
extern unsigned char DAT_006463d0; /* 0x6463d0 */
extern unsigned int DAT_00646490; /* 0x646490 */
extern unsigned int DAT_00646494; /* 0x646494 */
extern unsigned int DAT_00646498; /* 0x646498 */
extern unsigned int DAT_0064649c; /* 0x64649c */
extern unsigned char DAT_006464a0; /* 0x6464a0 */
extern unsigned int DAT_006464a4; /* 0x6464a4 */
extern unsigned char DAT_006464a8; /* 0x6464a8 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_0050e684(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 3 native warning(s); review required */
  *param_3 = param_1;
  param_3[1] = 2;
  param_3[-6] = 0;
  DAT_005c0b2c = 0;
  DAT_006463c4 = 0;
  nn_os_CriticalSection_Initialize(&DAT_006463c4,FUN_0042d1cc,0x100000);
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_006463d0,&LAB_0043a2e8,0xc,0x10);
  DAT_00646490 = 0;
  DAT_00646494 = 0;
  DAT_00646498 = 0;
  DAT_0064649c = 0;
  DAT_006464a0 = 0;
  DAT_006464a4 = 0;
  DAT_006464a8 = 0;
  DAT_005c0b38 = 0xffffffff;
  DAT_005c0b3c = 0xffffffff;
  return;
}

} /* extern "C" */
