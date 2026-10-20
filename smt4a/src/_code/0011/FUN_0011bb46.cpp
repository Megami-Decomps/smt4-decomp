/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bb46` (_code @ 0x11bb46, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001226aa(int, int, unsigned int);
int onlineMutexLockIfNeeded(...);
int onlineMutexUnlockIfNeeded(int);
int FUN_002f8b88(int);
int FUN_0031156c(void);

/* Supplied declaration required: FUN_001226aa. */
/* Supplied declaration required: onlineMutexLockIfNeeded. */
/* Supplied declaration required: onlineMutexUnlockIfNeeded. */
/* Supplied declaration required: FUN_002f8b88. */
/* Supplied declaration required: FUN_0031156c. */


void FUN_0011bb46(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  
  while (*(char *)(param_1 + 4) == '\0') {
    temp_v1 = 0;
    onlineMutexLockIfNeeded(param_1 + 0x70);
    for (puVar2 = *(unsigned short **)(param_1 + 100); *(unsigned short **)(param_1 + 0x68) != puVar2;
        puVar2 = puVar2 + 4) {
      temp_v0 = *(int *)(puVar2 + 2);
      if (((temp_v0 != 0) && (*(unsigned int *)(param_1 + 0x3c) != (unsigned int)*puVar2)) &&
         (FUN_0031156c(), temp_v0 != 0)) {
        temp_v1 = temp_v1 + 1;
      }
    }
    onlineMutexUnlockIfNeeded(param_1 + 0x70);
    if (*(char *)(param_1 + 5) != '\0') {
      FUN_002f8b88(2);
    }
    if (temp_v1 == 0) {
      onlineMutexLockIfNeeded();
      FUN_001226aa(param_1 + 0xa8,param_1 + 0xe8,0xffffffff);
      onlineMutexUnlockIfNeeded(param_1 + 0xe8);
    }
  }
  return;
}

} /* extern "C" */
