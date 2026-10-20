/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359768` (_code @ 0x359768, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00151340(void);
int FUN_0015e2bc(unsigned int, unsigned int, int, int);
int nw_snd_SoundArchive_GetSoundType(unsigned char *, int);
int asd3dSoundActorIsPlaying(void);
int VectorUnsignedToFloat(int, int);

extern unsigned char g_asdSoundSystem; /* 0x63e1e8 */
extern unsigned int DAT_0063f4bc; /* 0x63f4bc */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */
extern int DAT_0063f500; /* 0x63f500 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00151340. */
/* Supplied declaration required: FUN_0015e2bc. */
extern int nw_snd_SoundArchive_IsAvailable(unsigned char *);
/* Supplied declaration required: nw_snd_SoundArchive_GetSoundType. */
/* Supplied declaration required: asd3dSoundActorIsPlaying. */


unsigned char FUN_00359768(int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char *puVar4;
  unsigned int in_fpscr;
  float temp_v3;
  
  temp_v2 = 0;
  temp_v0 = DAT_0063f500;
  if (DAT_0063f4c4 != '\0') {
    temp_v0 = *(int *)(DAT_0063f500 + 0x10);
  }
  if ((DAT_0063f4c4 != '\0' && temp_v0 != 0) && (param_2 < 0x10)) {
    puVar4 = &g_asdSoundSystem;
    temp_v0 = nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem);
    if ((temp_v0 != 0) &&
       (((nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem,param_1), puVar4 != (unsigned char *)0x0 &&
         (temp_v1 = param_2, asd3dSoundActorIsPlaying(), temp_v1 == 0)) &&
        (temp_v0 = param_1, FUN_00151340(), temp_v0 != 0)))) {
      temp_v1 = param_2 * 0x88 + 0x63ea78;
      FUN_0015e2bc(temp_v1,param_2 * 4 + 0x63f2f8,param_1,0);
      temp_v2 = (temp_v1 & 0xff) == 0;
      if (param_3 == 0) {
        temp_v3 = 0.0f;
      }
      else {
        temp_v3 = (float)VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = (temp_v3 - 64.0f) * 0.015748031f + 1.0f;
      }
      *(float *)(param_2 * 0x88 + 0x63eac0) = temp_v3;
      if ((temp_v1 & 0xff) == 0) {
        DAT_0063f4bc = DAT_0063f4bc | (1 << (param_2 & 0xff));
      }
    }
  }
  return temp_v2;
}

} /* extern "C" */
