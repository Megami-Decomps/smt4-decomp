/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive` (_code @ 0x508b50, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00508b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  return;
}
