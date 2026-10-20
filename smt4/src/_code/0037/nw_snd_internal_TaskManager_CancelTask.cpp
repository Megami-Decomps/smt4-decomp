#include "romwright_types.h"

extern "C" {

int FUN_002c3424(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002c3424. */
extern int nw_snd_internal_TaskManager_RemoveTask(void);


void nw_snd_internal_TaskManager_CancelTask(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = nw_snd_internal_TaskManager_RemoveTask();
  if (temp_v0 == 0) {
    FUN_002c3424(param_2 + 0xc);
    return;
  }
  return;
}

} /* extern "C" */
