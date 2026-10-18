/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012f664` (_code @ 0x12f664, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ea4b4; /* 0x4ea4b4 */

/* Supplied declaration required: nw_snd_internal_PoolImpl_DestroyImpl. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


unsigned char FUN_0012f664(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  temp_v0 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(unsigned char **)(param_1 + 0x18) = &DAT_004ea4b4;
    *(unsigned int *)(param_1 + 0x1c) = 0x20;
    *(unsigned int *)(param_1 + 0x20) = 0x3f666666;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    while (*(int *)(param_1 + 0xc) != 0) {
      nw_ut_internal_LinkListImpl_erase_2B743C(param_1 + 0xc,*(unsigned int *)(param_1 + 0x14));
    }
    nw_snd_internal_PoolImpl_DestroyImpl
              (param_1 + 8,*(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30));
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    temp_v0 = 1;
    *(unsigned char *)(param_1 + 0x38) = 0;
  }
  return temp_v0;
}
