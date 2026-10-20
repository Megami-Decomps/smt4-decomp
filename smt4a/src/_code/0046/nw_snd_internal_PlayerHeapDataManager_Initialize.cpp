/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_PlayerHeapDataManager_Initialize` (_code @ 0x460fac, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void nw_snd_internal_PlayerHeapDataManager_Initialize(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0x260) != '\0') {
    return;
  }
  *(unsigned char *)(param_1 + 0x260) = 1;
  *(unsigned char *)(param_1 + 0x261) = 0;
  temp_v0 = 0;
  temp_v1 = 9;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(temp_v2 + 0x218) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x21c) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  *(unsigned int *)(param_1 + 0x10) = param_2;
  return;
}

} /* extern "C" */
