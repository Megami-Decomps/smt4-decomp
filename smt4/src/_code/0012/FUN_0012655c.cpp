/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012655c` (_code @ 0x12655c, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00141fd0(unsigned char *, int);
int FUN_002c1d78(void);
int VectorUnsignedToFloat(int, int);
int nw_snd_SoundStartable_StartSound(unsigned char *, int, int, int);
int nw_snd_internal_BasicSound_SetVolume(...);

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern int DAT_004e316c; /* 0x4e316c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00141fd0. */
extern int FUN_002bf684(unsigned char *);
/* Supplied declaration required: FUN_002c1d78. */
/* Supplied declaration required: nw_snd_SoundStartable_StartSound. */
/* Supplied declaration required: nw_snd_internal_BasicSound_SetVolume. */


int FUN_0012655c(int param_1,int param_2,unsigned int param_3)

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
  
  temp_v1 = DAT_004e316c;
  temp_v3 = romwright_piece_4_4(in_s0,in_s1);
  if (DAT_004e316c != 0) {
    temp_v2 = 0;
    do {
      if (*(int *)(DAT_004e316c + temp_v2 * 4 + 0x20) == 0) {
        if (temp_v2 == -1) {
          return -1;
        }
        puVar4 = &DAT_004e1f68;
        temp_v0 = FUN_002bf684(&DAT_004e1f68);
        if (temp_v0 != 0) {
          FUN_00141fd0(&DAT_004e1f68,param_1);
          if (puVar4 == (unsigned char *)0x0) {
            return temp_v2;
          }
          temp_v0 = param_1;
          FUN_002c1d78();
          if (temp_v0 != 0) {
            temp_v1 = temp_v1 + temp_v2 * 4;
            puVar4 = &DAT_004e20ec;
            nw_snd_SoundStartable_StartSound(&DAT_004e20ec,temp_v1 + 0x20,param_1,0);
            temp_v5 = 0x3f800000;
            if (param_2 != 0) {
              VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            temp_v4 = 0;
            if (*(int *)(temp_v1 + 0x20) != 0) {
              nw_snd_internal_BasicSound_SetVolume(*(int *)(temp_v1 + 0x20),0);
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(temp_v1 + 0x20) + 0xb8) = temp_v5;
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(unsigned int *)(*(int *)(temp_v1 + 0x20) + 0xb4) = temp_v4;
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              nw_snd_internal_BasicSound_SetVolume(*(int *)(temp_v1 + 0x20),param_3);
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(int *)(*(int *)(temp_v1 + 0x20) + 0xb8) = (int)((unsigned long long)temp_v3 >> 0x20);
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              *(int *)(*(int *)(temp_v1 + 0x20) + 0xb4) = (int)temp_v3;
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
    } while (temp_v2 < 8);
  }
  return -1;
}

} /* extern "C" */
