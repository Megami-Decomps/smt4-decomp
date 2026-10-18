/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_detail_AllocFromHeap` (_code @ 0x146bc0, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00146bc0_arg0 fn_00146bc0_arg0;
struct fn_00146bc0_arg0 {
    unsigned char pad_0x0[0x24];
    void *field_0x24; /* +0x24 */
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0xd];
    ushort field_0x36; /* +0x36 */
    unsigned char pad_0x38[0x14];
    void *field_0x4c; /* +0x4c */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0014f704. */


int * nn_fnd_detail_AllocFromHeap(fn_00146bc0_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  void **ppvVar2;
  void *pvVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned short temp_v7;
  void **ppvVar11;
  void *pvVar12;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  ppvVar11 = (void **)0x0;
  temp_v3 = (param_2 + 3U) & 0xfffffffc;
  temp_v7 = ~param_1->field_0x36 & 1;
  if (param_3 >= 0) {
    ppvVar2 = &param_1->field_0x24;
    pvVar12 = *ppvVar2;
    pvVar3 = (void *)0x0;
    temp_v6 = 0xffffffff;
    if (pvVar12 != (void *)0x0) {
      temp_v2 = 0;
      do {
        temp_v9 = *(unsigned int *)((int)pvVar12 + 4);
        temp_v4 = (((int)pvVar12 + 0x10 + param_3) - 1U) & ~(param_3 - 1U);
        temp_v5 = (temp_v4 - ((int)pvVar12 + 0x10)) + temp_v3;
        temp_v8 = temp_v5;
        if (temp_v9 >= temp_v5) {
          temp_v8 = temp_v6;
        }
      } while ((((temp_v9 < temp_v5 || temp_v6 < temp_v9) || temp_v9 == temp_v8) ||
               ((pvVar3 = pvVar12, temp_v7 == 0 && (temp_v6 = temp_v9, temp_v2 = temp_v4, temp_v9 != temp_v3)))
               ) && (temp_v4 = temp_v2, pvVar12 = *(void **)((int)pvVar12 + 0xc), temp_v2 = temp_v4,
                    pvVar12 != (void *)0x0));
      if (pvVar3 != (void *)0x0) {
        FUN_0014f704(ppvVar2,pvVar3,temp_v4,temp_v3,0);
        ppvVar11 = ppvVar2;
      }
    }
  }
  else {
    ppvVar2 = &param_1->field_0x24;
    temp_v0 = *(int *)&param_1->field_0x28;
    temp_v1 = 0;
    temp_v6 = 0xffffffff;
    if (temp_v0 != 0) {
      temp_v2 = 0;
      do {
        temp_v4 = *(unsigned int *)(temp_v0 + 4);
        temp_v8 = ((temp_v4 + temp_v0 + 0x10) - temp_v3) & ~(0xffffffffU - param_3);
        if (((-1 < (int)(temp_v8 - (temp_v0 + 0x10))) && (temp_v4 < temp_v6)) &&
           ((temp_v1 = temp_v0, temp_v7 != 0 || (temp_v2 = temp_v8, temp_v6 = temp_v4, temp_v4 == temp_v3)))) break;
        temp_v8 = temp_v2;
        temp_v0 = *(int *)(temp_v0 + 8);
        temp_v2 = temp_v8;
      } while (temp_v0 != 0);
      if (temp_v1 != 0) {
        FUN_0014f704(ppvVar2,temp_v1,temp_v8,temp_v3,1);
        ppvVar11 = ppvVar2;
      }
    }
  }
  return (int *)ppvVar11;
}
