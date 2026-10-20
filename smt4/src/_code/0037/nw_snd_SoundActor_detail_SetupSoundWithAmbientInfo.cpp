/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundActor_detail_SetupSoundWithAmbientInfo` (_code @ 0x376778, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00377b9c(unsigned int, unsigned int, unsigned int, unsigned int, int, int, unsigned int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: FUN_00377b9c. */


unsigned int nw_snd_SoundActor_detail_SetupSoundWithAmbientInfo
               (int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
               unsigned int param_5,char *param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    temp_v0 = 0x10;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 + 4);
    FUN_00377b9c(temp_v0,param_2,param_3,param_5,param_1,(int)*param_6,param_4);
    temp_v0 = temp_v0 & 0xff;
  }
  return temp_v0;
}

} /* extern "C" */
