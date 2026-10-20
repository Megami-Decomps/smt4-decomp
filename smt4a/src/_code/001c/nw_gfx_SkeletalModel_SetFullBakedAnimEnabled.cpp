/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SkeletalModel_SetFullBakedAnimEnabled` (_code @ 0x1c3f98, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_001c3f98_arg0 fn_001c3f98_arg0;
struct fn_001c3f98_arg0 {
    unsigned char pad_0x0[0x220];
    void *field_0x220; /* +0x220 */
    unsigned char pad_0x224[0x4];
    void *field_0x228; /* +0x228 */
    unsigned char pad_0x22c[0x5];
    char field_0x231; /* +0x231 */
};

typedef int romwright_code(...);
extern unsigned int wstrlen(int);
extern int nw_ut_ResDicPatricia_Get(int *, int, unsigned int);


void nw_gfx_SkeletalModel_SetFullBakedAnimEnabled(fn_001c3f98_arg0 *param_1,int param_2)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  void *pvVar8;
  int temp_v6;
  int temp_v7;
  int iStack_28;
  
  param_1->field_0x231 = (char)param_2;
  temp_v5 = *(int *)((int)param_1->field_0x220 + 8);
  temp_v3 = *(unsigned int *)(temp_v5 + 0x28);
  if (param_2 != 0) {
    temp_v3 = temp_v3 | 1;
  }
  else {
    temp_v3 = temp_v3 & 0xfffffffe;
  }
  *(unsigned int *)(temp_v5 + 0x28) = temp_v3;
  pvVar8 = param_1->field_0x228;
  temp_v5 = 0;
  temp_v6 = *(int *)(*(int *)((int)pvVar8 + 8) + 0x10);
  if (0 < temp_v6) {
    temp_v7 = 0;
    do {
      temp_v4 = *(int *)(*(int *)((int)pvVar8 + 8) + 0x14);
      temp_v1 = temp_v7;
      if (temp_v4 != 0) {
        temp_v1 = *(int *)((int)pvVar8 + 8) + 0x14 + temp_v4;
      }
      if (temp_v1 == 0) {
        temp_v1 = 0;
      }
      else {
        piVar1 = (int *)(temp_v1 + temp_v5 * 0x10 + 0x28);
        temp_v4 = *piVar1;
        temp_v1 = temp_v7;
        if (temp_v4 != 0) {
          temp_v1 = temp_v4 + (int)piVar1;
        }
      }
      temp_v4 = *(int *)(temp_v1 + 4);
      if (temp_v4 != 0) {
        temp_v4 = temp_v4 + temp_v1 + 4;
      }
      else {
        temp_v4 = 0;
      }
      piVar1 = (int *)(*(int *)((int)param_1->field_0x220 + 8) + 0x1c);
      temp_v1 = *piVar1;
      iStack_28 = temp_v7;
      if (temp_v1 != 0) {
        iStack_28 = (int)piVar1 + temp_v1;
      }
      if (!(iStack_28 == 0 || temp_v4 == 0)) {
        temp_v0 = wstrlen(temp_v4);
        temp_v1 = nw_ut_ResDicPatricia_Get(&iStack_28,temp_v4,temp_v0);
        if (temp_v1 != 0) {
          temp_v2 = *(int *)(temp_v1 + 0xc);
          temp_v4 = temp_v7;
          if (temp_v2 != 0) {
            temp_v4 = temp_v1 + 0xc + temp_v2;
          }
        }
        else {
          temp_v4 = 0;
        }
      }
      else {
        temp_v4 = 0;
      }
      temp_v1 = *(int *)(temp_v4 + 8);
      if (param_2 != 0) {
        temp_v4 = (**(romwright_code **)(*(int *)param_1->field_0x220 + 0x1c))();
        *(int *)(*(int *)((int)pvVar8 + 0x44) + temp_v5 * 4) = *(int *)(temp_v4 + 4) + temp_v1 * 0x30;
      }
      else {
        temp_v4 = (**(romwright_code **)(*(int *)param_1->field_0x220 + 0xc))();
        *(int *)(*(int *)((int)pvVar8 + 0x44) + temp_v5 * 4) = *(int *)(temp_v4 + 4) + temp_v1 * 0x40;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v6);
  }
  *(char *)((int)param_1->field_0x228 + 100) = (char)param_2;
  return;
}

} /* extern "C" */
