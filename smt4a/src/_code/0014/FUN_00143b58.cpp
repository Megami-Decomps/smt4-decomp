/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00143b58` (_code @ 0x143b58, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00151340(void);
int FUN_0015e2bc(unsigned char *, int, int, int);
int FUN_0015e874(...);
int nw_snd_SoundArchive_GetSoundType(unsigned char *, int);
int VectorUnsignedToFloat(int, int);

extern unsigned char g_asdSoundSystem; /* 0x63e1e8 */
extern unsigned char DAT_0063e37c; /* 0x63e37c */
extern int DAT_0063f500; /* 0x63f500 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00151340. */
/* Supplied declaration required: FUN_0015e2bc. */
/* Supplied declaration required: FUN_0015e874. */
extern int nw_snd_SoundArchive_IsAvailable(unsigned char *);
/* Supplied declaration required: nw_snd_SoundArchive_GetSoundType. */


int FUN_00143b58(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned int in_fpscr;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned long long temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = DAT_0063f500;
  temp_v3 = romwright_piece_4_4(in_s0,in_s1);
  if (DAT_0063f500 != 0) {
    temp_v2 = 0;
    do {
      if (*(int *)(DAT_0063f500 + temp_v2 * 4 + 0x20) == 0) {
        if (temp_v2 == -1) {
          return -1;
        }
        puVar4 = &g_asdSoundSystem;
        temp_v0 = nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem);
        if (temp_v0 != 0) {
          nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem,param_1);
          if (puVar4 == (unsigned char *)0x0) {
            return temp_v2;
          }
          temp_v0 = param_1;
          FUN_00151340();
          if (temp_v0 != 0) {
            temp_v1 = temp_v1 + temp_v2 * 4;
            puVar4 = &DAT_0063e37c;
            FUN_0015e2bc(&DAT_0063e37c,temp_v1 + 0x20,param_1,0);
            temp_v5 = 0x3f800000;
            if (param_2 != 0) {
              VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            temp_v4 = 0;
            if (*(int *)(temp_v1 + 0x20) != 0) {
              FUN_0015e874(*(int *)(temp_v1 + 0x20),0);
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(temp_v1 + 0x20) + 0xd0) = temp_v5;
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(temp_v1 + 0x20) + 0xcc) = temp_v4;
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              FUN_0015e874(*(int *)(temp_v1 + 0x20),param_3);
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(int *)(*(int *)(temp_v1 + 0x20) + 0xd0) = (int)((unsigned long long)temp_v3 >> 0x20);
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(int *)(*(int *)(temp_v1 + 0x20) + 0xcc) = (int)temp_v3;
            }
            if (((unsigned int)puVar4 & 0xff) == 0) {
              return temp_v2;
            }
          }
          return -1;
        }
        return temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x10);
  }
  return -1;
}

} /* extern "C" */
