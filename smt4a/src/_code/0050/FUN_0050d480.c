/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d480` (_code @ 0x50d480, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(int, unsigned int);


void FUN_0050d480(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = *(int **)(param_1 + 0x210);
  if (((piVar1 == (int *)0x0) || (temp_v0 = (**(romwright_code **)(*piVar1 + 8))(piVar1,param_2), temp_v0 == 0))
     && (temp_v0 = nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(param_1,param_2),
        temp_v0 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0050d4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*(int *)(param_1 - 0xc) + 0x10))((int *)(param_1 - 0xc),param_2);
    return;
  }
  return;
}
