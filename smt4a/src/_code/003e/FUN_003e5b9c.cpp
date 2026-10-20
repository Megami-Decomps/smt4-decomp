#include "romwright_types.h"

extern "C" {

typedef struct fn_003e5b9c_arg0 fn_003e5b9c_arg0;
struct fn_003e5b9c_arg0 {
    unsigned char pad_0x0[0x24];
    void *field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x58];
    void *field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x58];
    void *field_0xdc; /* +0xdc */
};


void FUN_003e5b9c(fn_003e5b9c_arg0 *param_1)

{
  void *pvVar1;
  int temp_v0;
  
  pvVar1 = param_1->field_0x24;
  temp_v0 = 0;
  if (pvVar1 != (void *)0x0) {
    temp_v0 = *(int *)((int)pvVar1 + 4);
  }
  if (pvVar1 != (void *)0x0 && temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) & 0xfffffffe;
  }
  pvVar1 = param_1->field_0x80;
  temp_v0 = 0;
  if (pvVar1 != (void *)0x0) {
    temp_v0 = *(int *)((int)pvVar1 + 4);
  }
  if (pvVar1 != (void *)0x0 && temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) & 0xfffffffe;
  }
  pvVar1 = param_1->field_0xdc;
  temp_v0 = 0;
  if (pvVar1 != (void *)0x0) {
    temp_v0 = *(int *)((int)pvVar1 + 4);
  }
  if (pvVar1 != (void *)0x0 && temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) & 0xfffffffe;
  }
  return;
}

} /* extern "C" */
