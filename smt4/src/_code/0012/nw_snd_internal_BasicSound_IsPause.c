/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_BasicSound_IsPause` (_code @ 0x1221c8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char nw_snd_internal_BasicSound_IsPause(int param_1)

{
  return *(char *)(param_1 + 0x8b) == '\x01' || *(char *)(param_1 + 0x8b) == '\x02';
}
