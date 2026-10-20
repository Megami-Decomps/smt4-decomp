/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461508` (_code @ 0x461508, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0046177c(int *, unsigned int);
int FUN_00508384(void);
int FUN_00508460(void);
int FUN_0050847c(void);
int FUN_005084a8(void);
int FUN_005084bc(void);
int FUN_005084d4(void);

typedef int romwright_code(...);
extern int FUN_001d07e0(unsigned char);
/* Supplied declaration required: FUN_0046177c. */
/* Supplied declaration required: FUN_00508384. */
/* Supplied declaration required: FUN_00508460. */
/* Supplied declaration required: FUN_0050847c. */
/* Supplied declaration required: FUN_005084a8. */
/* Supplied declaration required: FUN_005084bc. */
/* Supplied declaration required: FUN_005084d4. */
extern int isValidFileHeader(int *, unsigned char *);
extern int FUN_00508e00(int *, unsigned char *);
extern int nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(int);


unsigned int FUN_00461508(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned char *param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  unsigned char temp_v2 [80];
  unsigned char temp_v3 [132];
  
  (**(romwright_code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
  temp_v0 = (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,temp_v3,0x60);
  if (temp_v0 == 0x60) {
    puVar2 = temp_v3;
    temp_v0 = isValidFileHeader(param_2,puVar2);
    if (temp_v0 != 0) {
      puVar4 = puVar2;
      FUN_005084a8();
      FUN_0050847c();
      puVar4 = puVar4 + (int)puVar2;
      if (puVar4 <= param_4) {
        (**(romwright_code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
        puVar2 = (unsigned char *)
                 (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,param_3,puVar4);
        if (puVar2 == puVar4) {
          FUN_0046177c(param_2,param_3);
          temp_v0 = *param_2;
          if ((temp_v0 != 0) && (FUN_00508460(), temp_v0 != 0)) {
            temp_v0 = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(param_2[1]);
            temp_v0 = *(int *)(temp_v0 + 0x40);
            temp_v1 = *param_2;
            FUN_005084d4();
            temp_v0 = temp_v1 + 8 + temp_v0;
          }
          else {
            temp_v0 = 0;
          }
          param_1[2] = temp_v0;
          temp_v0 = nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(param_2[1]);
          *(unsigned short *)(param_1 + 3) = *(unsigned short *)(temp_v0 + 0x38);
          temp_v0 = FUN_00508e00(param_2,temp_v2);
          if (temp_v0 != 0) {
            temp_v0 = FUN_001d07e0(temp_v2[0]);
            if (temp_v0 == 3) {
              temp_v0 = *param_2;
              if ((temp_v0 != 0) && (FUN_00508384(), temp_v0 != 0)) {
                temp_v0 = *param_2;
                FUN_005084bc();
              }
              else {
                temp_v0 = 0;
              }
              param_1[1] = temp_v0;
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
