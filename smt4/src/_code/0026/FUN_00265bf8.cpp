/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00265bf8` (_code @ 0x265bf8, 0x338 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nodeSetScale(unsigned int, int);
int FUN_0028c618(unsigned int, int);
int nodeSetTranslation(unsigned int, int, int);
int FUN_0029bb14(unsigned int);
int FUN_002a5710(...);
int FUN_002d582c(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_lmapScene; /* 0x447e88 */
extern unsigned char g_gameState; /* 0x49f91c */

/* Supplied declaration required: nodeSetScale. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_002a5710. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002d582c. */


void FUN_00265bf8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((*(signed char *)((unsigned char *)&g_gameState + 0x22)) != '\0') {
    puVar1 = *(unsigned int **)(param_1 + 0xbc);
    if ((*puVar1 & 2) == 0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      FUN_002d582c(*(unsigned int *)(param_1 + 0xbc));
    }
    puVar1 = *(unsigned int **)(param_1 + 0xd8);
    if ((*puVar1 & 2) != 0) {
      return;
    }
    *puVar1 = *puVar1 | 2;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
    FUN_002d582c(*(unsigned int *)(param_1 + 0xd8));
    return;
  }
  if (*(int *)(param_1 + 200) >= 0x3dccccce) {
    puVar1 = *(unsigned int **)(param_1 + 0xbc);
    if ((*puVar1 & 2) != 0) {
      *puVar1 = *puVar1 & 0xfffffffd;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
      FUN_002d582c(*(unsigned int *)(param_1 + 0xbc));
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0xd8);
  if ((*puVar1 & 2) != 0) {
    *puVar1 = *puVar1 & 0xfffffffd;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
    FUN_002d582c(*(unsigned int *)(param_1 + 0xd8));
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    puVar1 = *(unsigned int **)(param_1 + 0xbc);
    if ((*puVar1 & 2) == 0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      FUN_002d582c(*(unsigned int *)(param_1 + 0xbc));
    }
    puVar1 = *(unsigned int **)(param_1 + 0xd8);
    if ((*puVar1 & 2) != 0) {
      *puVar1 = *puVar1 & 0xfffffffd;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
      temp_v0 = *(unsigned int *)(param_1 + 0xd8);
      FUN_002d582c(temp_v0);
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
        FUN_002d582c(temp_v0);
      }
    }
    else if ((temp_v2 & 2) == 0) {
      *puVar1 = temp_v2 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      temp_v0 = *(unsigned int *)(param_1 + 0xbc);
      FUN_002d582c(temp_v0);
    }
    puVar1 = *(unsigned int **)(param_1 + 0xd8);
    if ((*puVar1 & 2) == 0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      temp_v0 = *(unsigned int *)(param_1 + 0xd8);
      FUN_002d582c(temp_v0);
    }
  }
  nodeSetTranslation(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8),0,g_lmapScene + 0x1c);
  nodeSetScale(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8),0);
  FUN_0029bb14(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8));
  temp_v1 = gameFlagIsSet(0x16b);
  temp_v2 = (unsigned int)(temp_v1 != 0);
  if ((temp_v1 == 0) && (temp_v1 = gameFlagIsSet(0x176), temp_v1 != 0)) {
    temp_v2 = 2;
  }
  if (*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xbc) + 8) + 0x38) != temp_v2) {
    FUN_002a5710(*(unsigned int *)(*(int *)(param_1 + 0xbc) + 8),temp_v2);
  }
  nodeSetTranslation(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),0,g_lmapScene + 0x1c);
  FUN_0028c618(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),0);
  nodeSetScale(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),0);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    FUN_002a5710(*(unsigned int *)(*(int *)(param_1 + 0xd8) + 8),(int)*(float *)(param_1 + 0xdc));
    *(unsigned char *)(param_1 + 0xe0) = 0;
  }
  return;
}

} /* extern "C" */
