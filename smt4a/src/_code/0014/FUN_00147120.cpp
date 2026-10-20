/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147120` (_code @ 0x147120, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001590c0(...);
int FUN_00159e18(...);
int FUN_00159e24(...);
int FUN_0016f374(...);
int FUN_001bd5f8(...);

extern unsigned char LAB_0016f3a8; /* 0x16f3a8 */
extern int FUN_0016f3e4(...); /* 0x16f3e4 */
extern int FUN_0016f7ec(...); /* 0x16f7ec */
extern signed char DAT_005894e4; /* 0x5894e4 */
extern signed char DAT_005894e7; /* 0x5894e7 */
extern unsigned char DAT_00643380; /* 0x643380 */
extern unsigned char g_dspsndState; /* 0x6433d0 */
extern unsigned char DAT_006449d0; /* 0x6449d0 */

/* Supplied declaration required: FUN_001590c0. */
/* Supplied declaration required: FUN_00159e18. */
/* Supplied declaration required: FUN_00159e24. */
/* Supplied declaration required: FUN_0016f374. */
/* Supplied declaration required: FUN_001bd5f8. */
extern void nn_snd_CTR_Dspsnd_Finalize(unsigned int, unsigned char);


unsigned char FUN_00147120(void)

{
/* irregular: 7 native warning(s); review required */
  if (DAT_005894e4 != '\0') {
    DAT_005894e4 = '\0';
    FUN_001590c0(FUN_0016f3e4,FUN_0016f7ec,&LAB_0016f3a8);
    FUN_001bd5f8();
    FUN_0016f374();
    FUN_00159e24(&DAT_00643380);
    FUN_00159e18(&DAT_006449d0);
    if (DAT_005894e7 == '\0') {
      nn_snd_CTR_Dspsnd_Finalize((unsigned int)&g_dspsndState,0);
    }
  }
  return 0;
}

} /* extern "C" */
