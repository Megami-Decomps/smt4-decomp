/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0990` (_code @ 0x1d0990, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001afdc4(void);
int UnsignedDoesSaturate(unsigned int, int);
int UnsignedSaturate(unsigned int, int);

typedef int romwright_code(...);
extern int nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFunc(...); /* 0x1d1e24 */
extern int nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFuncMulti(...); /* 0x1d1e74 */

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
extern int FUN_001af874(unsigned int, romwright_code *, int *);
/* Supplied declaration required: FUN_001afdc4. */
extern unsigned int FUN_001c2484(void);
extern int nw_snd_internal_driver_VoiceManager_DropLowestPriorityVoice(unsigned int, unsigned int);


unsigned int FUN_001d0990(int *param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int unaff_r7;
  unsigned long long temp_v5;
  
  if (param_2 >= 3) {
    unaff_r7 = 2;
  }
  temp_v5 = (unsigned long long)param_5;
  if ((param_2 < 3) && (unaff_r7 = param_2, param_2 < 1)) {
    unaff_r7 = 1;
  }
  *(unsigned char *)((int)param_1 + 0x1a) = 1;
  temp_v0 = UnsignedSaturate(param_3,0xf);
  UnsignedDoesSaturate(param_3,0xf);
  param_1[2] = 0;
  *(unsigned char *)((int)param_1 + 0x1b) = 0;
  if (unaff_r7 != 1) {
    temp_v4 = 0;
    if (0 < unaff_r7) {
LAB_001d09e8:
      do {
        temp_v1 = FUN_001af874(temp_v0,nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFuncMulti,
                             param_1);
        if (temp_v1 == 0) {
          temp_v2 = FUN_001c2484();
          temp_v3 = nw_snd_internal_driver_VoiceManager_DropLowestPriorityVoice(temp_v2,temp_v0);
          if (temp_v3 != 0) goto LAB_001d09e8;
          *(unsigned char *)((int)param_1 + 0x1b) = 1;
        }
        param_5 = (unsigned int)temp_v5;
        param_1[temp_v4] = temp_v1;
        temp_v4 = temp_v4 + 1;
        param_1[2] = param_1[2] + 1;
      } while (temp_v4 < unaff_r7);
    }
    if (*(char *)((int)param_1 + 0x1b) == '\0') {
LAB_001d0ab0:
      *(unsigned char *)((int)param_1 + 0x1a) = 0;
      *(unsigned short *)(param_1 + 8) = 0;
      *(unsigned char *)((int)param_1 + 0x17) = 0;
      *(unsigned char *)(param_1 + 6) = 0;
      *(unsigned char *)((int)param_1 + 0x16) = 0;
      param_1[7] = 0;
      param_1[9] = 0x3f800000;
      param_1[0xe] = 0x3f800000;
      *(unsigned char *)((int)param_1 + 0x22) = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0x11] = 0x3f800000;
      param_1[3] = param_4;
      param_1[4] = param_5;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[10] = 0x3f800000;
      *(unsigned char *)(param_1 + 0xb) = 0;
      *(unsigned char *)((int)param_1 + 0x2d) = 0;
      *(unsigned char *)(param_1 + 5) = 1;
      return 1;
    }
    temp_v4 = 0;
    if (temp_v4 < param_1[2]) {
      do {
        if (param_1[temp_v4] != 0) {
          FUN_001afdc4();
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < param_1[2]);
    }
  }
  else {
    temp_v4 = FUN_001af874(temp_v0,nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFunc,param_1);
    if (temp_v4 != 0) {
      *param_1 = temp_v4;
      param_1[2] = 1;
      goto LAB_001d0ab0;
    }
  }
  return 0;
}

} /* extern "C" */
