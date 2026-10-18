/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFunc` (_code @ 0x1d1e24, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_001c2484(void);
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_FreeVoice. */


void nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFunc(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  *param_2 = 0;
  *(unsigned char *)((int)param_2 + 0x17) = 0;
  *(unsigned char *)((int)param_2 + 0x15) = 0;
  param_2[2] = 0;
  temp_v0 = FUN_001c2484();
  nw_snd_internal_driver_VoiceManager_FreeVoice(temp_v0,param_2);
  *(unsigned char *)(param_2 + 5) = 0;
  if ((romwright_code *)param_2[3] != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001d1e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)param_2[3])(param_2,3,param_2[4]);
    return;
  }
  return;
}
