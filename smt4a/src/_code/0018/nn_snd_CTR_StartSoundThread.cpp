#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_ThreadManager_StartSoundThread(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

extern unsigned int FUN_001afa44(void);
/* Supplied declaration required: nn_snd_CTR_ThreadManager_StartSoundThread. */


void nn_snd_CTR_StartSoundThread
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
               unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_001afa44();
  nn_snd_CTR_ThreadManager_StartSoundThread
            (temp_v0,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

} /* extern "C" */
