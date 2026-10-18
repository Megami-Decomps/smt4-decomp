/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa01c` (_code @ 0x2fa01c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002fa01c(int param_1)

{
  unsigned char *puVar1;
  unsigned char *puVar2;
  
  if ((param_1 != 0) && (puVar1 = *(unsigned char **)(param_1 + 0x1c), puVar1 != (unsigned char *)0x0)) {
    *(unsigned int *)(puVar1 + 0x1c) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *puVar1 = 0;
    *(unsigned int *)(puVar1 + 4) = 0;
    *(unsigned int *)(puVar1 + 0xc) = 0;
    *(unsigned int *)(puVar1 + 0x14) = 0x8000;
    *(unsigned int *)(puVar1 + 0x20) = 0;
    puVar2 = puVar1 + 0x530;
    *(unsigned int *)(puVar1 + 0x28) = 0;
    *(unsigned int *)(puVar1 + 0x2c) = 0;
    *(unsigned int *)(puVar1 + 0x30) = 0;
    *(unsigned int *)(puVar1 + 0x38) = 0;
    *(unsigned char **)(puVar1 + 0x6c) = puVar2;
    *(unsigned char **)(puVar1 + 0x50) = puVar2;
    *(unsigned char **)(puVar1 + 0x4c) = puVar2;
    *(unsigned int *)(puVar1 + 0x3c) = 0;
    *(unsigned int *)(puVar1 + 0x1bc0) = 1;
    *(unsigned int *)(puVar1 + 0x1bc4) = 0xffffffff;
    return 0;
  }
  return 0xfffffffe;
}
