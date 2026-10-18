/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f2d4` (_code @ 0x37f2d4, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002a2268. */
/* Supplied declaration required: FUN_002b4ddc. */
/* Supplied declaration required: FUN_002c423c. */


void FUN_0037f2d4(int param_1)

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
          FUN_002a2268(*(unsigned int *)(param_1 + 100));
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
          FUN_002b4ddc();
          *(unsigned int *)(temp_v1 + 0x108) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(unsigned int *)(param_1 + 0xd0));
    }
    *(unsigned int *)(param_1 + 100) = 0;
    *(unsigned char *)(param_1 + 0xc) = 0;
    *(unsigned char *)(param_1 + 0x50) = 0;
    FUN_002c423c(param_1);
    return;
  }
  return;
}
