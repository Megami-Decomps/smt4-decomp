/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001448a8` (_code @ 0x1448a8, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152464(void);
int FUN_0015e2bc(unsigned char *, int, int, int);
int FUN_0015e874(...);
int nw_snd_SoundArchive_GetSoundType(unsigned char *, int);
int VectorUnsignedToFloat(unsigned int, int);

extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */
extern unsigned char DAT_0063e37c; /* 0x63e37c */
extern int DAT_0063f50c; /* 0x63f50c */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00152464. */
/* Supplied declaration required: FUN_0015e2bc. */
/* Supplied declaration required: FUN_0015e874. */
extern int nw_snd_SoundArchive_IsAvailable(unsigned char *);
/* Supplied declaration required: nw_snd_SoundArchive_GetSoundType. */


int FUN_001448a8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int in_fpscr;
  
  temp_v2 = DAT_0063f50c;
  puVar4 = &DAT_0063e1e8;
  if (DAT_0063f50c == 0) {
    return -1;
  }
  if (*(int *)(DAT_0063f50c + 0x20) == 0) {
    temp_v1 = 0;
  }
  else if (*(int *)(DAT_0063f50c + 0x24) == 0) {
    temp_v1 = 1;
  }
  else if (*(int *)(DAT_0063f50c + 0x28) == 0) {
    temp_v1 = 2;
  }
  else {
    if (*(int *)(DAT_0063f50c + 0x2c) != 0) {
      return -1;
    }
    temp_v1 = 3;
  }
  puVar5 = &DAT_0063e1e8;
  temp_v0 = nw_snd_SoundArchive_IsAvailable(&DAT_0063e1e8);
  if (temp_v0 == 0) {
    return temp_v1;
  }
  nw_snd_SoundArchive_GetSoundType(&DAT_0063e1e8,param_1);
  if (puVar5 == (unsigned char *)0x0) {
    return temp_v1;
  }
  nw_snd_SoundArchive_GetSoundType(&DAT_0063e1e8,param_1);
  if (*(char *)(temp_v2 + 0x3b) != '\0') {
    if (puVar4 == (unsigned char *)0x3) {
      temp_v0 = param_1;
      FUN_00152464();
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
  puVar4 = &DAT_0063e37c;
  FUN_0015e2bc(&DAT_0063e37c,temp_v2 + 0x20,param_1,0);
  if (param_2 >= 0x80) {
    param_2 = 0x7f;
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else if (param_2 != 0) {
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if (*(int *)(temp_v2 + 0x20) != 0) {
    FUN_0015e874(*(int *)(temp_v2 + 0x20),0);
  }
  if (*(int *)(temp_v2 + 0x20) != 0) {
    FUN_0015e874(*(int *)(temp_v2 + 0x20),param_3);
  }
  if (((unsigned int)puVar4 & 0xff) != 0) {
    temp_v1 = -1;
  }
  return temp_v1;
}

} /* extern "C" */
