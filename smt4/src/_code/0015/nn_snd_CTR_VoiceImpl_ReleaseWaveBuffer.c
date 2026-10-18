/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_VoiceImpl_ReleaseWaveBuffer` (_code @ 0x15a414, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0015a414_arg0 fn_0015a414_arg0;
struct fn_0015a414_arg0 {
    unsigned char pad_0x0[0x4];
    ushort field_0x4; /* +0x4 */
    unsigned char pad_0x6[0x2a];
    void *field_0x30; /* +0x30 */
    undefined2 field_0x34; /* +0x34 */
    undefined2 field_0x36; /* +0x36 */
    unsigned char pad_0x38[0x34];
    ushort field_0x6c; /* +0x6c */
};

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void nn_snd_CTR_VoiceImpl_ReleaseWaveBuffer(fn_0015a414_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  void *pvVar1;
  
  nn_os_CriticalSection_Enter();
  pvVar1 = param_1->field_0x30;
  while (pvVar1 != (void *)0x0) {
    *(unsigned char *)((int)pvVar1 + 0x11) = 3;
    pvVar1 = *(void **)((int)pvVar1 + 0x14);
  }
  param_1->field_0x30 = (void *)0x0;
  param_1->field_0x34 = 0;
  param_1->field_0x36 = 0;
  nn_os_CriticalSection_Leave(param_1 + 1);
  param_1->field_0x6c = param_1->field_0x6c | 0x8000;
  param_1->field_0x4 = param_1->field_0x4 + 1;
  return;
}
