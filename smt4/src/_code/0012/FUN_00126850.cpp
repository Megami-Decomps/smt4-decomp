/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126850` (_code @ 0x126850, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001388dc(void);
int FUN_00141fd0(unsigned char *, int);
int VectorUnsignedToFloat(unsigned int, int);
int nw_snd_SoundStartable_StartSound(unsigned char *, int, int, int);
int nw_snd_internal_BasicSound_SetVolume(...);

extern unsigned char g_asdSound; /* 0x4e1f68 */
extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern int DAT_004e3180; /* 0x4e3180 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001388dc. */
/* Supplied declaration required: FUN_00141fd0. */
extern int FUN_002bf684(unsigned char *);
/* Supplied declaration required: nw_snd_SoundStartable_StartSound. */
/* Supplied declaration required: nw_snd_internal_BasicSound_SetVolume. */


int FUN_00126850(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int in_fpscr;
  
  temp_v2 = DAT_004e3180;
  puVar4 = &g_asdSound;
  if (DAT_004e3180 == 0) {
    return -1;
  }
  if (*(int *)(DAT_004e3180 + 0x20) == 0) {
    temp_v1 = 0;
  }
  else if (*(int *)(DAT_004e3180 + 0x24) == 0) {
    temp_v1 = 1;
  }
  else if (*(int *)(DAT_004e3180 + 0x28) == 0) {
    temp_v1 = 2;
  }
  else {
    if (*(int *)(DAT_004e3180 + 0x2c) != 0) {
      return -1;
    }
    temp_v1 = 3;
  }
  puVar5 = &g_asdSound;
  temp_v0 = FUN_002bf684(&g_asdSound);
  if (temp_v0 == 0) {
    return temp_v1;
  }
  FUN_00141fd0(&g_asdSound,param_1);
  if (puVar5 == (unsigned char *)0x0) {
    return temp_v1;
  }
  FUN_00141fd0(&g_asdSound,param_1);
  if (*(char *)(temp_v2 + 0x3b) != '\0') {
    if (puVar4 == (unsigned char *)0x3) {
      temp_v0 = param_1;
      FUN_001388dc();
      if (temp_v0 == 0) {
        return temp_v1;
      }
    }
    else if (puVar4 != (unsigned char *)0x2) {
      return temp_v1;
    }
  }
  else {
    if (puVar4 == (unsigned char *)0x3) {
      return temp_v1;
    }
    if (puVar4 != (unsigned char *)0x2) {
      return temp_v1;
    }
  }
  temp_v2 = temp_v2 + temp_v1 * 4;
  puVar4 = &DAT_004e20ec;
  nw_snd_SoundStartable_StartSound(&DAT_004e20ec,temp_v2 + 0x20,param_1,0);
  if (param_2 >= 0x80) {
    param_2 = 0x7f;
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else if (param_2 != 0) {
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if (*(int *)(temp_v2 + 0x20) != 0) {
    nw_snd_internal_BasicSound_SetVolume(*(int *)(temp_v2 + 0x20),0);
  }
  if (*(int *)(temp_v2 + 0x20) != 0) {
    nw_snd_internal_BasicSound_SetVolume(*(int *)(temp_v2 + 0x20),param_3);
  }
  if (((unsigned int)puVar4 & 0xff) != 0) {
    temp_v1 = -1;
  }
  return temp_v1;
}

} /* extern "C" */
