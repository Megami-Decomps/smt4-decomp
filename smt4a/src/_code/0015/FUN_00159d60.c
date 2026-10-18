/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159d60` (_code @ 0x159d60, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0016f3a8; /* 0x16f3a8 */
extern int FUN_0016f3e4(); /* 0x16f3e4 */
extern int FUN_0016f7ec(); /* 0x16f7ec */
extern signed char DAT_005894e4; /* 0x5894e4 */
extern unsigned char DAT_005894e5; /* 0x5894e5 */
extern unsigned char DAT_005894e6; /* 0x5894e6 */
extern unsigned char DAT_005894e7; /* 0x5894e7 */
extern unsigned char DAT_005894e8; /* 0x5894e8 */
extern unsigned char DAT_005894e9; /* 0x5894e9 */
extern unsigned char DAT_00643380; /* 0x643380 */
extern unsigned char DAT_006433d0; /* 0x6433d0 */
extern unsigned char DAT_006449d0; /* 0x6449d0 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Supplied declaration required: FUN_0016e700. */
/* Supplied declaration required: FUN_0016f25c. */
/* Supplied declaration required: FUN_0016f574. */
extern int FUN_0016f864(unsigned int);
/* Supplied declaration required: FUN_001a167c. */
/* Supplied declaration required: FUN_001bd5f8. */
/* Supplied declaration required: nn_snd_CTR_DspFxManager_Initialize. */
/* Supplied declaration required: nn_snd_CTR_VoiceManager_Initialize. */


void FUN_00159d60(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  if ((DAT_005894e4 == '\0') && (temp_v0 = FUN_0016f864(0), -1 < temp_v0)) {
    puVar2 = &DAT_006433d0;
    FUN_0016f574(&DAT_006433d0,0);
    if (-1 < (int)puVar2) {
      DAT_005894e8 = uRam1ff810c0;
      FUN_001a167c(&DAT_00643380);
      nn_snd_CTR_VoiceManager_Initialize(&DAT_006449d0);
      FUN_0016f25c(&DAT_00643380);
      FUN_001bd5f8();
      nn_snd_CTR_DspFxManager_Initialize();
      FUN_0016e700(FUN_0016f3e4,FUN_0016f7ec,&LAB_0016f3a8);
      DAT_005894e5 = 0;
      DAT_005894e6 = 0;
      DAT_005894e7 = 0;
      DAT_005894e9 = 1;
      DAT_005894e4 = '\x01';
    }
  }
  return;
}
