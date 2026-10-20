/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5b1c` (_code @ 0x3e5b1c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003e5b1c_arg0 fn_003e5b1c_arg0;
struct fn_003e5b1c_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x18];
    void *field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x58];
    void *field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x58];
    void *field_0xdc; /* +0xdc */
};


void FUN_003e5b1c(fn_003e5b1c_arg0 *param_1)

{
  int temp_v0;
  void *pvVar2;
  
  temp_v0 = *(int *)((int)param_1->field_0x8 + 4);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
  }
  pvVar2 = param_1->field_0x24;
  temp_v0 = 0;
  if (pvVar2 != (void *)0x0) {
    temp_v0 = *(int *)((int)pvVar2 + 4);
  }
  if (pvVar2 != (void *)0x0 && temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
  }
  pvVar2 = param_1->field_0x80;
  temp_v0 = 0;
  if (pvVar2 != (void *)0x0) {
    temp_v0 = *(int *)((int)pvVar2 + 4);
  }
  if (pvVar2 != (void *)0x0 && temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
  }
  pvVar2 = param_1->field_0xdc;
  temp_v0 = 0;
  if (pvVar2 != (void *)0x0) {
    temp_v0 = *(int *)((int)pvVar2 + 4);
  }
  if (pvVar2 != (void *)0x0 && temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
  }
  return;
}

} /* extern "C" */
