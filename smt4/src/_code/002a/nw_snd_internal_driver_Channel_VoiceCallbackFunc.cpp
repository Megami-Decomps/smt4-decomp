/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Channel_VoiceCallbackFunc` (_code @ 0x2ac2c4, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00155634(int *);
int nw_snd_internal_driver_Voice_Free(void);
int nw_ut_internal_LinkListImpl_erase_2B743C(int *, int *);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00155634. */
extern int *FUN_002bafb0(void);
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void nw_snd_internal_driver_Channel_VoiceCallbackFunc(unsigned int param_1,int param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  
  temp_v0 = 2;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2 || param_2 == 3) {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 3;
      nw_snd_internal_driver_Voice_Free();
    }
  }
  else {
    nw_snd_internal_driver_Voice_Free();
  }
  if ((romwright_code *)param_3[0x4b] != (romwright_code *)0x0) {
    (*(romwright_code *)param_3[0x4b])(param_3,temp_v0,param_3[0x4c]);
  }
  param_3[0x4d] = 0;
  *(unsigned char *)((int)param_3 + 0xc5) = 0;
  *(unsigned char *)((int)param_3 + 0xc6) = 0;
  *(unsigned char *)((int)param_3 + 199) = 0;
  piVar1 = (int *)FUN_002bafb0();
  nw_ut_internal_LinkListImpl_erase_2B743C(piVar1 + 1,param_3 + 0x4f);
  if (param_3 != (int *)0x0) {
    FUN_00155634(param_3);
    *param_3 = *piVar1;
    *piVar1 = (int)param_3;
    return;
  }
  return;
}

} /* extern "C" */
