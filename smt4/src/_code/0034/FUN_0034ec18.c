/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ec18` (_code @ 0x34ec18, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_0044d110; /* 0x44d110 */
extern unsigned int DAT_0044d114; /* 0x44d114 */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void FUN_0034ec18(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  if (DAT_0044d10c <= param_1) {
    return;
  }
  nn_os_CriticalSection_Enter(&DAT_004c40f8);
  puVar4 = (unsigned int *)(DAT_0044d100 + param_1 * 0x70);
  nn_snd_CTR_Voice_SetState(*puVar4,1);
  temp_v0 = DAT_0044d114;
  if ((DAT_0044d110 >= 0x80000000) || (DAT_0044d114 >= 0x80000000)) {
    if (DAT_0044d114 < DAT_0044d110) {
      do {
        if (*(unsigned int **)((temp_v0 & 0x3f) * 0xc + 0x4c4104) == puVar4) {
          *(unsigned int *)((temp_v0 & 0x3f) * 0xc + 0x4c4104) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < DAT_0044d110);
    }
  }
  else {
    temp_v2 = 1;
    temp_v1 = DAT_0044d114;
    if ((int)((DAT_0044d110 - DAT_0044d114) + 1) >= 2) {
      do {
        if (*(unsigned int **)((temp_v1 & 0x3f) * 0xc + 0x4c4104) == puVar4) {
          *(unsigned int *)((temp_v1 & 0x3f) * 0xc + 0x4c4104) = 0;
        }
        temp_v2 = temp_v2 + 1;
        temp_v1 = temp_v1 + 1;
      } while (temp_v2 < (int)((DAT_0044d110 - temp_v0) + 1));
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
  nn_os_CriticalSection_Leave(&DAT_004c40f8);
  return;
}
