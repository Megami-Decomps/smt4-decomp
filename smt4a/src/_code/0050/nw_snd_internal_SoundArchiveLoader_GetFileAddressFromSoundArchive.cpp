#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00508b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2);
    return;
  }
  return;
}

} /* extern "C" */
