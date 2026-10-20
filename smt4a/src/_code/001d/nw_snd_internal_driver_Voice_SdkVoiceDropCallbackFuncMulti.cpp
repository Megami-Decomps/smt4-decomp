/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFuncMulti` (_code @ 0x1d1e74, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001afdc4(int);
int nw_snd_internal_driver_VoiceManager_FreeVoice(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001afdc4. */
extern unsigned int FUN_001c2484(void);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_FreeVoice. */


void nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFuncMulti(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_2 + 0x1a) != '\0') {
    *(unsigned char *)(param_2 + 0x1b) = 1;
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_2 + 8)) {
      do {
        if (*(int *)(param_2 + temp_v0 * 4) == param_1) {
          *(unsigned int *)(param_2 + temp_v0 * 4) = 0;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_2 + 8));
    }
  }
  else {
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_2 + 8)) {
      do {
        temp_v2 = *(int *)(param_2 + temp_v0 * 4);
        if (temp_v2 != 0) {
          if (temp_v2 != param_1) {
            nn_snd_CTR_Voice_SetState(temp_v2,1);
            FUN_001afdc4(temp_v2);
          }
          *(unsigned int *)(param_2 + temp_v0 * 4) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_2 + 8));
    }
  }
  *(unsigned char *)(param_2 + 0x17) = 0;
  *(unsigned char *)(param_2 + 0x15) = 0;
  *(unsigned int *)(param_2 + 8) = 0;
  temp_v1 = FUN_001c2484();
  nw_snd_internal_driver_VoiceManager_FreeVoice(temp_v1,param_2);
  *(unsigned char *)(param_2 + 0x14) = 0;
  if (*(romwright_code **)(param_2 + 0xc) == (romwright_code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001d1f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(param_2 + 0xc))(param_2,3,*(unsigned int *)(param_2 + 0x10));
  return;
}

} /* extern "C" */
