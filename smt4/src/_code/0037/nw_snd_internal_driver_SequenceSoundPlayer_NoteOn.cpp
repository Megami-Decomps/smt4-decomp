#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void nw_snd_internal_driver_SequenceSoundPlayer_NoteOn
               (int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
                    /* WARNING: Could not recover jumptable at 0x0037f6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x7c) + 8))(*(int **)(param_1 + 0x7c),param_1,param_2,param_3);
  return;
}

} /* extern "C" */
