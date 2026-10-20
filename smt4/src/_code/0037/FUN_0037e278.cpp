/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e278` (_code @ 0x37e278, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002358b4(int, int);
int FUN_002a1f84(unsigned int, int);
int FUN_002ac444(unsigned char [8], unsigned int);
int FUN_00379c18(int, int);
int FUN_00379c90(int, int);
int FUN_0037b174(unsigned char [8], unsigned int);
int FUN_0037fad8(int, int, unsigned char *, int);
int FUN_0037fddc(int, unsigned char [4], unsigned int, unsigned int);
int nw_snd_internal_CurveAdshr_SetHold(int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
} param_1_stack;

extern unsigned char LAB_0037e5a0; /* 0x37e5a0 */

/* Supplied declaration required: FUN_002358b4. */
/* Supplied declaration required: FUN_002a1f84. */
/* Supplied declaration required: FUN_002ac444. */
/* Supplied declaration required: FUN_00379c18. */
/* Supplied declaration required: FUN_00379c90. */
/* Supplied declaration required: FUN_0037b174. */
/* Supplied declaration required: FUN_0037fad8. */
/* Supplied declaration required: FUN_0037fddc. */
extern unsigned int ll_sdiv(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_CurveAdshr_SetHold. */
extern int nw_snd_internal_WaveFileReader_ReadWaveInfo(unsigned char *, unsigned char *, unsigned int);
extern int nw_snd_internal_WaveSoundFileReader_ReadWaveSoundInfo(unsigned char *, int, unsigned int);


unsigned int FUN_0037e278(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  long long temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [4];
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [8];
  
  temp_v0 = *(unsigned char *)(param_1 + 0x5e);
  FUN_0037b174(temp_v9,*(unsigned int *)(param_1 + 0x68));
  temp_v2 = nw_snd_internal_WaveFileReader_ReadWaveInfo(temp_v9,temp_v5,0);
  if (temp_v2 == 0) {
    return 0;
  }
  temp_v4 = 0;
  if (*(char *)(param_1 + 0x70) == '\0') {
    temp_v4 = *(unsigned int *)(param_1 + 0x74);
  }
  else if (*(char *)(param_1 + 0x70) == '\x01') {
    temp_v1 = (long long)*(int *)(param_1 + 0x74) * (long long)temp_v7;
    temp_v4 = ll_sdiv((int)temp_v1,(int)((unsigned long long)temp_v1 >> 0x20),1000,0);
  }
  if (temp_v4 <= temp_v8) {
    temp_v2 = temp_v6;
    if (temp_v6 >= 3) {
      temp_v2 = 2;
    }
    FUN_0037fad8(temp_v2,temp_v0 + 0x40,&LAB_0037e5a0,param_1);
    if (temp_v2 != 0) {
      FUN_002ac444(temp_v9,*(unsigned int *)(param_1 + 100));
      temp_v3 = nw_snd_internal_WaveSoundFileReader_ReadWaveSoundInfo
                        (temp_v9,param_1 + 0x88,*(unsigned int *)(param_1 + 0x6c));
      if (temp_v3 == 0) {
        return 0;
      }
      FUN_00379c90(temp_v2 + 0x90,*(unsigned char *)(param_1 + 0x8c));
      nw_snd_internal_CurveAdshr_SetHold(temp_v2 + 0x90,*(unsigned char *)(param_1 + 0x8f));
      FUN_00379c18(temp_v2 + 0x90,*(unsigned char *)(param_1 + 0x8d));
      *(unsigned char *)(temp_v2 + 0xa8) = *(unsigned char *)(param_1 + 0x8e);
      FUN_002358b4(temp_v2 + 0x90,*(unsigned char *)(param_1 + 0x90));
      *(unsigned char *)(temp_v2 + 0xc9) = *(unsigned char *)(param_1 + 0x5d);
      FUN_002a1f84(*(unsigned int *)(temp_v2 + 0x134),(int)*(char *)(param_1 + 0x2e));
      FUN_0037fddc(temp_v2,temp_v5,0xffffffff,temp_v4);
      *(int *)(param_1 + 0x98) = temp_v2;
      *(unsigned char *)(param_1 + 0x5c) = 1;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
