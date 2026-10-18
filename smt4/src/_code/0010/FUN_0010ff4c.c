/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ff4c` (_code @ 0x10ff4c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00128f60; /* 0x128f60 */
extern int FUN_00129084(); /* 0x129084 */
extern int FUN_00129478(); /* 0x129478 */
extern signed char DAT_0044e7c0; /* 0x44e7c0 */
extern signed char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */
extern unsigned char DAT_004e8568; /* 0x4e8568 */

/* Supplied declaration required: FUN_0011bf9c. */
/* Supplied declaration required: FUN_0011ccd4. */
/* Supplied declaration required: FUN_0011cce0. */
/* Supplied declaration required: FUN_00128f2c. */
/* Supplied declaration required: FUN_002bb470. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_Finalize. */


unsigned char FUN_0010ff4c(void)

{
/* irregular: 8 native warning(s); review required */
  if (DAT_0044e7c0 != '\0') {
    DAT_0044e7c0 = '\0';
    FUN_0011bf9c(FUN_00129084,FUN_00129478,&LAB_00128f60);
    FUN_002bb470();
    FUN_00128f2c();
    FUN_0011cce0(&DAT_004e6f14);
    FUN_0011ccd4(&DAT_004e8568);
    if (DAT_0044e7c3 == '\0') {
      nn_snd_CTR_Dspsnd_Finalize(&DAT_004e6f64,0);
    }
  }
  return 0;
}
