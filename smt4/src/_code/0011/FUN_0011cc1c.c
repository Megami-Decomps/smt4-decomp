/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cc1c` (_code @ 0x11cc1c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00128f60; /* 0x128f60 */
extern int FUN_00129084(); /* 0x129084 */
extern int FUN_00129478(); /* 0x129478 */
extern signed char DAT_0044e7c0; /* 0x44e7c0 */
extern unsigned char DAT_0044e7c1; /* 0x44e7c1 */
extern unsigned char DAT_0044e7c2; /* 0x44e7c2 */
extern unsigned char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_0044e7c4; /* 0x44e7c4 */
extern unsigned char DAT_0044e7c5; /* 0x44e7c5 */
extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */
extern unsigned char DAT_004e8568; /* 0x4e8568 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Supplied declaration required: FUN_0012852c. */
/* Supplied declaration required: FUN_00128e20. */
/* Supplied declaration required: FUN_00129214. */
/* Supplied declaration required: FUN_00146e40. */
extern unsigned int FUN_002bb470(void);
extern int FUN_002c1398(unsigned int);
extern void nn_snd_CTR_DspFxManager_Initialize(unsigned int);
extern void nn_snd_CTR_VoiceManager_Initialize(unsigned int);


void FUN_0011cc1c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  
  if ((DAT_0044e7c0 == '\0') && (temp_v0 = FUN_002c1398(0), -1 < temp_v0)) {
    puVar2 = &DAT_004e6f64;
    FUN_00129214(&DAT_004e6f64,0);
    if (-1 < (int)puVar2) {
      DAT_0044e7c4 = uRam1ff810c0;
      FUN_00146e40(&DAT_004e6f14);
      nn_snd_CTR_VoiceManager_Initialize((unsigned int)&DAT_004e8568);
      FUN_00128e20(&DAT_004e6f14);
      temp_v1 = FUN_002bb470();
      nn_snd_CTR_DspFxManager_Initialize(temp_v1);
      FUN_0012852c(FUN_00129084,FUN_00129478,&LAB_00128f60);
      DAT_0044e7c1 = 0;
      DAT_0044e7c2 = 0;
      DAT_0044e7c3 = 0;
      DAT_0044e7c5 = 1;
      DAT_0044e7c0 = '\x01';
    }
  }
  return;
}
