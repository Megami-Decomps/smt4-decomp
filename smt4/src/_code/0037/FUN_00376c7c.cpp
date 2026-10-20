/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376c7c` (_code @ 0x376c7c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00376c68(int *);
int nw_snd_SoundActor_Finalize(int);
int nw_snd_SoundHandle_DetachSound(int *);
int nw_snd_SoundHandle_detail_AttachSoundAsTempHandle(int *, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00376c68. */
/* Supplied declaration required: nw_snd_SoundActor_Finalize. */
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_snd_SoundHandle_detail_AttachSoundAsTempHandle. */


void FUN_00376c7c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0x82) == '\0') {
    temp_v1 = 0;
    temp_v2 = param_4;
    do {
      temp_v0 = param_1 + temp_v1 * 0x10;
      piVar2 = (int *)(temp_v0 + 0xc);
      piVar3 = (int *)*piVar2;
      if (piVar3 != piVar2) {
        do {
          piVar2 = piVar3 + -0x3b;
          piVar3 = (int *)*piVar3;
          temp_v2 = 0;
          nw_snd_SoundHandle_detail_AttachSoundAsTempHandle(&temp_v2,piVar2);
          FUN_00376c68(&temp_v2);
          nw_snd_SoundHandle_DetachSound(&temp_v2);
        } while (piVar3 != (int *)(temp_v0 + 0xc));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    nw_snd_SoundActor_Finalize(param_1);
    *(unsigned char *)(param_1 + 0x82) = 1;
    *(unsigned char *)(param_1 + 0x81) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  return;
}

} /* extern "C" */
