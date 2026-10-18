/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4b94` (_code @ 0x2b4b94, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002b4b94_arg0 fn_002b4b94_arg0;
struct fn_002b4b94_arg0 {
    unsigned char pad_0x0[0xb4];
    void *field_0xb4; /* +0xb4 */
    unsigned char pad_0xb8[0x4];
    undefined4 field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0xb8];
    int field_0x178; /* +0x178 */
    unsigned char pad_0x17c[0x8];
    int field_0x184; /* +0x184 */
    int field_0x188; /* +0x188 */
    undefined1 field_0x18c; /* +0x18c */
};

/* Supplied declaration required: nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Dequeue. */


void FUN_002b4b94(fn_002b4b94_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  void **ppvVar1;
  void **ppvVar2;
  int temp_v0;
  void **ppvVar4;
  
  do {
    ppvVar1 = &param_1->field_0xb4;
    nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Dequeue();
    param_1->field_0x178 = (int)ppvVar1[2];
    ppvVar4 = ppvVar1;
    if (ppvVar1 != (void **)0x0) {
      do {
        ppvVar2 = ppvVar4;
        ppvVar4 = *ppvVar2;
      } while (ppvVar4 != (void **)0x0);
      temp_v0 = (int)ppvVar2[3];
      param_1->field_0x188 = temp_v0;
      param_1->field_0x18c = 0;
      if (param_1->field_0x184 == temp_v0) {
        param_1->field_0x188 = 0;
        param_1->field_0x184 = 0;
      }
    }
  } while (ppvVar1[2] != (void *)param_2);
  return;
}
