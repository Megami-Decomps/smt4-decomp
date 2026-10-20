#include "romwright_types.h"

extern "C" {

int FUN_002c38fc(char *);

/* Supplied declaration required: FUN_002c38fc. */


void nn_snd_CTR_MasterManagerImpl_Initialize(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 == '\0') {
    FUN_002c38fc(param_1 + 0x34);
    *param_1 = '\x01';
  }
  return;
}

} /* extern "C" */
