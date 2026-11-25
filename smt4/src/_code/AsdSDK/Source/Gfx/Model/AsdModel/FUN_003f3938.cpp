/* NON_MATCHING: a file initializer (its start moved 0xc back in wave 93: it loads 0x4720a0 and -1 itself before the push);
 * the array-constructor callback 0x0017f6c0 has no function symbol; retail also retains unreferenced pool word 0x004720a0. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);

extern unsigned char LAB_0017f6c0; /* 0x17f6c0 */
extern unsigned int DAT_004720a0[6]; /* 0x4720a0 */
extern unsigned int DAT_004720bc; /* 0x4720bc */
extern unsigned int DAT_004720c4; /* 0x4720c4 */
extern unsigned int DAT_004720cc; /* 0x4720cc */
extern unsigned char DAT_004e9dc8; /* 0x4e9dc8 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_003f3938(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_004720a0[2] = 0xffffffff;
  DAT_004720a0[3] = 0xffffffff;
  DAT_004720a0[4] = 0;
  DAT_004720a0[5] = 0;
  DAT_004720a0[0] = 0xbf0000;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_004e9dc8,&LAB_0017f6c0,4,0x18);
  DAT_004720bc = 0xf0111;
  DAT_004720c4 = 0xf0110;
  DAT_004720cc = 0x803f0112;
  return;
}

} /* extern "C" */
