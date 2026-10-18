/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045bb44` (_code @ 0x45bb44, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0045b66c. */
/* Supplied declaration required: FUN_0045bb30. */
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_snd_SoundHandle_detail_AttachSoundAsTempHandle. */


void FUN_0045bb44(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0x86) == '\0') {
    temp_v1 = 0;
    temp_v2 = param_4;
    do {
      temp_v0 = param_1 + temp_v1 * 0x10;
      piVar2 = (int *)(temp_v0 + 0xc);
      piVar3 = (int *)*piVar2;
      if (piVar3 != piVar2) {
        do {
          piVar2 = piVar3 + -0x44;
          piVar3 = (int *)*piVar3;
          temp_v2 = 0;
          nw_snd_SoundHandle_detail_AttachSoundAsTempHandle(&temp_v2,piVar2);
          FUN_0045bb30(&temp_v2);
          nw_snd_SoundHandle_DetachSound(&temp_v2);
        } while (piVar3 != (int *)(temp_v0 + 0xc));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    FUN_0045b66c(param_1);
    *(unsigned char *)(param_1 + 0x86) = 1;
    *(unsigned char *)(param_1 + 0x85) = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 100) = 0;
  }
  return;
}
