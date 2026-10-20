/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511b34` (_code @ 0x511b34, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(unsigned char *, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char g_nnSndVoiceManager; /* 0x6449d0 */
extern unsigned int DAT_006449e0; /* 0x6449e0 */
extern unsigned int DAT_006449e4; /* 0x6449e4 */
extern unsigned int DAT_006449e8; /* 0x6449e8 */

/* Supplied declaration required: emptyStub_002f4370. */
extern unsigned int nn_snd_CTR_VoiceImpl_VoiceImpl_sub_object(int, int);
extern int nn_snd_CTR_Voice_Voice_sub_object(int, int);


void FUN_00511b34(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  DAT_006449e0 = 0;
  DAT_006449e4 = 0;
  DAT_006449e8 = 0xffffffff;
  temp_v3 = 0x6449ec;
  temp_v4 = 0x64540c;
  temp_v2 = 0;
  do {
    temp_v0 = 0;
    if (temp_v3 != 0) {
      temp_v0 = nn_snd_CTR_Voice_Voice_sub_object(temp_v3,temp_v2);
    }
    piVar6 = (int *)(temp_v2 * 4 + 0x645fac);
    *piVar6 = temp_v0;
    temp_v3 = temp_v3 + 0x6c;
    if (temp_v4 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = nn_snd_CTR_VoiceImpl_VoiceImpl_sub_object(temp_v4,temp_v2);
    }
    temp_v2 = temp_v2 + 1;
    temp_v4 = temp_v4 + 0x7c;
    *(unsigned int *)(*piVar6 + 0x68) = temp_v1;
  } while (temp_v2 < 0x18);
  emptyStub_002f4370(&g_nnSndVoiceManager,0x439cc0,0x100000);
  return;
}

} /* extern "C" */
