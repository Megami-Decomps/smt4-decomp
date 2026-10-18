/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275ca0` (_code @ 0x275ca0, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_004474d8; /* 0x4474d8 */

/* Supplied declaration required: FUN_0028c8d0. */
/* Supplied declaration required: FUN_0029bdb4. */


void FUN_00275ca0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = *(unsigned int **)(DAT_004474d8 + 0xc);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v1 = *puVar1;
    if (*(char *)(DAT_004474d8 + 10) != '\0') {
      if ((temp_v1 & 2) != 0) {
        *puVar1 = temp_v1 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
        FUN_0029bdb4(*(unsigned int *)(*(int *)(DAT_004474d8 + 0xc) + 8));
        temp_v0 = *(unsigned int *)(*(int *)(DAT_004474d8 + 0xc) + 8);
        FUN_0028c8d0(temp_v0);
      }
    }
    else if ((temp_v1 & 2) == 0) {
      *puVar1 = temp_v1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      FUN_0029bdb4(*(unsigned int *)(*(int *)(DAT_004474d8 + 0xc) + 8));
      temp_v0 = *(unsigned int *)(*(int *)(DAT_004474d8 + 0xc) + 8);
      FUN_0028c8d0(temp_v0);
    }
  }
  puVar1 = *(unsigned int **)(DAT_004474d8 + 0x10);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v1 = *puVar1;
    if (*(char *)(DAT_004474d8 + 10) != '\0') {
      if ((temp_v1 & 2) != 0) {
        *puVar1 = temp_v1 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
        FUN_0029bdb4(*(unsigned int *)(*(int *)(DAT_004474d8 + 0x10) + 8));
        FUN_0028c8d0(*(unsigned int *)(*(int *)(DAT_004474d8 + 0x10) + 8));
        return;
      }
    }
    else if ((temp_v1 & 2) == 0) {
      *puVar1 = temp_v1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      FUN_0029bdb4(*(unsigned int *)(*(int *)(DAT_004474d8 + 0x10) + 8));
      FUN_0028c8d0(*(unsigned int *)(*(int *)(DAT_004474d8 + 0x10) + 8));
      return;
    }
  }
  return;
}
