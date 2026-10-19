/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate` (_code @ 0x197e44, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00197e44_arg0 fn_00197e44_arg0;
struct fn_00197e44_arg0 {
    unsigned char pad_0x0[0x14];
    uint field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    void *field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x4];
    int field_0x2c; /* +0x2c */
};

extern void nn_fnd_HeapBase_FillMemory32(unsigned int, unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int *
nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
          (fn_00197e44_arg0 *param_1)

{
  unsigned int *puVar1;
  
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 1));
  puVar1 = param_1->field_0x24;
  if (puVar1 != (unsigned int *)0x0) {
    param_1->field_0x24 = (void *)*puVar1;
    param_1->field_0x2c = param_1->field_0x2c + 1;
    if ((param_1->field_0x14 & 1) != 0) {
      nn_fnd_HeapBase_FillMemory32((unsigned int)puVar1,param_1->field_0x18 + (int)puVar1,0);
    }
  }
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 1));
  return puVar1;
}
