/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bab8` (_code @ 0x37bab8, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00150f24(unsigned char [8]);
int FUN_0037bcb4(unsigned int *, unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00150f24. */
extern int FUN_0037b160(unsigned char);
/* Supplied declaration required: FUN_0037bcb4. */
extern int FUN_003e6e9c(unsigned char *, unsigned char *);
extern int nw_snd_internal_StreamSoundFileReader_ReadStreamSoundInfo(unsigned int *, unsigned char *);
extern int nw_snd_internal_StreamSoundFile_FileHeader_GetInfoBlockOffset(unsigned char *);
extern int nw_snd_internal_StreamSoundFile_FileHeader_GetInfoBlockSize(unsigned char *);
extern unsigned int nw_snd_internal_StreamSoundFile_FileHeader_GetSeekBlockOffset(void);


unsigned int FUN_0037bab8(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [56];
  unsigned char temp_v6 [96];
  unsigned char temp_v7 [8];
  
  (**(romwright_code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
  temp_v0 = (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,temp_v6,0x40);
  if (temp_v0 == 0x40) {
    FUN_00150f24(temp_v7);
    temp_v0 = FUN_003e6e9c(temp_v7,temp_v6);
    if (temp_v0 != 0) {
      temp_v0 = nw_snd_internal_StreamSoundFile_FileHeader_GetInfoBlockOffset(temp_v6);
      temp_v1 = nw_snd_internal_StreamSoundFile_FileHeader_GetInfoBlockSize(temp_v6);
      temp_v4 = temp_v0 + temp_v1;
      if (temp_v4 <= param_3) {
        (**(romwright_code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
        temp_v2 = (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,param_2,temp_v4);
        if (temp_v2 == temp_v4) {
          FUN_0037bcb4(param_1 + 1,param_2);
          temp_v0 = nw_snd_internal_StreamSoundFileReader_ReadStreamSoundInfo(param_1 + 1,temp_v5);
          if (temp_v0 != 0) {
            temp_v0 = FUN_0037b160(temp_v5[0]);
            if (temp_v0 == 3) {
              temp_v3 = 0;
              if (param_1[1] != 0) {
                temp_v3 = nw_snd_internal_StreamSoundFile_FileHeader_GetSeekBlockOffset();
              }
              param_1[3] = temp_v3;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
