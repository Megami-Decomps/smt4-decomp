#include "romwright_types.h"

extern "C" {


unsigned char nw_snd_internal_BasicSound_IsPause(int param_1)

{
  return *(char *)(param_1 + 0x8b) == '\x01' || *(char *)(param_1 + 0x8b) == '\x02';
}

} /* extern "C" */
