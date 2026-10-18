/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e644` (_code @ 0x37e644, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002a215c. */
extern unsigned int FUN_002a2174(void);
/* Supplied declaration required: FUN_002c4038. */
/* Supplied declaration required: FUN_0037e3d0. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_FreeChannel. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Release. */


void FUN_0037e644(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v0 = FUN_002a2174();
    FUN_002a215c(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x98) + 0xc6) != '\0') {
      FUN_0037e3d0(param_1);
      nw_snd_internal_driver_Channel_Release(*(unsigned int *)(param_1 + 0x98));
      if (*(int *)(param_1 + 0x98) == 0) {
        *(unsigned int *)(param_1 + 0x98) = 0;
        FUN_002c4038(param_1);
        return;
      }
    }
    nw_snd_internal_driver_Channel_FreeChannel(*(unsigned int *)(param_1 + 0x98));
  }
  *(unsigned int *)(param_1 + 0x98) = 0;
  FUN_002c4038(param_1);
  return;
}
