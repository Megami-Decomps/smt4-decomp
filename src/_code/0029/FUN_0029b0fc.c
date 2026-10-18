/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029b0fc` (_code @ 0x29b0fc, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0029b0fc_arg0 fn_0029b0fc_arg0;
struct fn_0029b0fc_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xc];
    void *field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4c];
    void *field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0x4c];
    void *field_0xb8; /* +0xb8 */
};


void FUN_0029b0fc(fn_0029b0fc_arg0 *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = param_1->field_0x8;
  *puVar1 = *puVar1 & 0xfffffffd;
  *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
  puVar1 = param_1->field_0x18;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *puVar1 & 0xfffffffd;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
  }
  puVar1 = param_1->field_0x68;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *puVar1 & 0xfffffffd;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
  }
  puVar1 = param_1->field_0xb8;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *puVar1 & 0xfffffffd;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
  }
  return;
}
