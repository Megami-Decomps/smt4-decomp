/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundStartable_StartSound` (_code @ 0x2bcc14, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014bfe0(void);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0014bfe0. */


char nw_snd_SoundStartable_StartSound
               (int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,param_2,param_3,0,param_4);
  if (temp_v0 == '\0') {
    if (*param_2 != 0) {
      FUN_0014bfe0();
    }
    temp_v0 = '\0';
  }
  return temp_v0;
}

} /* extern "C" */
