/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_ThreadManager_StartSoundThread` (_code @ 0x1a168c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_8_stack;

/* Supplied declaration required: FUN_001a172c. */
/* Supplied declaration required: FUN_001afaec. */
/* Supplied declaration required: FUN_001afc38. */


int nn_snd_CTR_ThreadManager_StartSoundThread
              (int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
              unsigned int *param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_001afaec(param_1,param_6,param_7,*param_2,param_2[1],param_2[2],param_8);
  if (-1 < temp_v0) {
    *(unsigned int *)(param_1 + 0x20) = param_3;
    *(unsigned int *)(param_1 + 0x24) = param_4;
    if ((param_5 == (unsigned int *)0x0) ||
       (temp_v0 = param_1, FUN_001afc38(param_1,*param_5,param_5[1],param_5[2]), -1 < temp_v0)) {
      return 0;
    }
    FUN_001a172c(param_1);
  }
  return temp_v0;
}
