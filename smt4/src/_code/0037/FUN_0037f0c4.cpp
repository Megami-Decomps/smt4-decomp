/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f0c4` (_code @ 0x37f0c4, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4038(int);
int nw_snd_internal_driver_StreamBufferPool_Free(unsigned int);
int nw_snd_internal_driver_Voice_Free(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002c4038. */
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */


void FUN_0037f0c4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(unsigned char *)(param_1 + 0x52) = 1;
    temp_v0 = 0;
    if (*(int *)(param_1 + 0xd0) != 0) {
      do {
        temp_v1 = param_1 + temp_v0 * 0x340;
        if (*(int *)(temp_v1 + 0xd8) != 0) {
          nw_snd_internal_driver_StreamBufferPool_Free(*(unsigned int *)(param_1 + 100));
          *(unsigned int *)(temp_v1 + 0xd8) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(unsigned int *)(param_1 + 0xd0));
    }
    temp_v0 = 0;
    if (*(int *)(param_1 + 0xd0) != 0) {
      do {
        temp_v1 = param_1 + temp_v0 * 0x340;
        if (*(int *)(temp_v1 + 0x108) != 0) {
          nw_snd_internal_driver_Voice_Free();
          *(unsigned int *)(temp_v1 + 0x108) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(unsigned int *)(param_1 + 0xd0));
    }
    *(unsigned int *)(param_1 + 100) = 0;
    *(unsigned char *)(param_1 + 0xc) = 0;
    *(unsigned char *)(param_1 + 0x50) = 0;
    FUN_002c4038(param_1);
    return;
  }
  return;
}

} /* extern "C" */
