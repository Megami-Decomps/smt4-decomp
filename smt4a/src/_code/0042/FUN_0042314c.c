/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042314c` (_code @ 0x42314c, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_005880e8; /* 0x5880e8 */
extern unsigned int DAT_005880ec; /* 0x5880ec */
extern unsigned int DAT_00618518; /* 0x618518 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_0042314c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  if (DAT_005880e4 <= param_1) {
    return;
  }
  nn_os_CriticalSection_Enter(&DAT_00618518);
  puVar4 = (unsigned int *)(DAT_005880d8 + param_1 * 0x70);
  nn_snd_CTR_Voice_SetState(*puVar4,1);
  temp_v0 = DAT_005880ec;
  if ((DAT_005880e8 >= 0x80000000) || (DAT_005880ec >= 0x80000000)) {
    if (DAT_005880ec < DAT_005880e8) {
      do {
        if (*(unsigned int **)((temp_v0 & 0x3f) * 0xc + 0x618524) == puVar4) {
          *(unsigned int *)((temp_v0 & 0x3f) * 0xc + 0x618524) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < DAT_005880e8);
    }
  }
  else {
    temp_v2 = 1;
    temp_v1 = DAT_005880ec;
    if ((int)((DAT_005880e8 - DAT_005880ec) + 1) >= 2) {
      do {
        if (*(unsigned int **)((temp_v1 & 0x3f) * 0xc + 0x618524) == puVar4) {
          *(unsigned int *)((temp_v1 & 0x3f) * 0xc + 0x618524) = 0;
        }
        temp_v2 = temp_v2 + 1;
        temp_v1 = temp_v1 + 1;
      } while (temp_v2 < (int)((DAT_005880e8 - temp_v0) + 1));
    }
  }
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  nn_os_CriticalSection_Leave(&DAT_00618518);
  return;
}
