/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00265e24` (_code @ 0x265e24, 0x338 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00447e88; /* 0x447e88 */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_0025c0f0. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_002a5a54. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002d5780. */


void FUN_00265e24(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0049f93e != '\0') {
    puVar1 = *(unsigned int **)(param_1 + 0xbc);
    if ((*puVar1 & 2) == 0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      FUN_002d5780(*(unsigned int *)(param_1 + 0xbc));
    }
    puVar1 = *(unsigned int **)(param_1 + 0xd8);
    if ((*puVar1 & 2) != 0) {
      return;
    }
    *puVar1 = *puVar1 | 2;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
    FUN_002d5780(*(unsigned int *)(param_1 + 0xd8));
    return;
  }
  if (*(int *)(param_1 + 200) >= 0x3dccccce) {
    puVar1 = *(unsigned int **)(param_1 + 0xbc);
    if ((*puVar1 & 2) != 0) {
      *puVar1 = *puVar1 & 0xfffffffd;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
      FUN_002d5780(*(unsigned int *)(param_1 + 0xbc));
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0xd8);
  if ((*puVar1 & 2) != 0) {
    *puVar1 = *puVar1 & 0xfffffffd;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
    FUN_002d5780(*(unsigned int *)(param_1 + 0xd8));
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    puVar1 = *(unsigned int **)(param_1 + 0xbc);
    if ((*puVar1 & 2) == 0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      FUN_002d5780(*(unsigned int *)(param_1 + 0xbc));
    }
    puVar1 = *(unsigned int **)(param_1 + 0xd8);
    if ((*puVar1 & 2) != 0) {
      *puVar1 = *puVar1 & 0xfffffffd;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
      temp_v0 = *(unsigned int *)(param_1 + 0xd8);
      FUN_002d5780(temp_v0);
    }
  }
  else {
    puVar1 = *(unsigned int **)(param_1 + 0xbc);
    temp_v2 = *puVar1;
    if (*(int *)(param_1 + 200) >= 0x3dccccce) {
      if ((temp_v2 & 2) != 0) {
        *puVar1 = temp_v2 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
        temp_v0 = *(unsigned int *)(param_1 + 0xbc);
        FUN_002d5780(temp_v0);
      }
    }
    else if ((temp_v2 & 2) == 0) {
      *puVar1 = temp_v2 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      temp_v0 = *(unsigned int *)(param_1 + 0xbc);
      FUN_002d5780(temp_v0);
    }
    puVar1 = *(unsigned int **)(param_1 + 0xd8);
    if ((*puVar1 & 2) == 0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      temp_v0 = *(unsigned int *)(param_1 + 0xd8);
      FUN_002d5780(temp_v0);
    }
  }
  FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8),0,DAT_00447e88 + 0x1c);
  FUN_0025c0f0(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8),0);
  FUN_0029bdb4(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8));
  temp_v1 = FUN_002c0ba8(0x16b);
  temp_v2 = (unsigned int)(temp_v1 != 0);
  if ((temp_v1 == 0) && (temp_v1 = FUN_002c0ba8(0x176), temp_v1 != 0)) {
    temp_v2 = 2;
  }
  if (*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xbc) + 8) + 0x38) != temp_v2) {
    FUN_002a5a54(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8),temp_v2);
  }
  FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),0,DAT_00447e88 + 0x1c);
  FUN_0028c880(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),0);
  FUN_0025c0f0(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),0);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    FUN_002a5a54(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),(int)*(float *)(param_1 + 0xdc));
    *(unsigned char *)(param_1 + 0xe0) = 0;
  }
  return;
}
