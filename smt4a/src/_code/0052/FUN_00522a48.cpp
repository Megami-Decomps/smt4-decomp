/* NON_MATCHING: BLOCKED: this is std::vector<Obj55aff4, AsdAllocator<Obj55aff4> >::push_back(const Obj55aff4 &) (fast path plus inlined _C_insert_aux) emitted out of line; armcc emits no body for an explicit instantiation of an inline member, so the unit cannot be produced from the instantiation alone, and its calls go to the ARM entry stubs FUN_002e9518/FUN_002e9590 (retail names) rather than the Thumb C1ERKS_/aSERKS_ symbols. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_002e9518(...);
int _ZN9Obj55aff4C1ERKS_(int, int);
int FUN_002e9590(int, unsigned int);
int _ZN9Obj55aff4aSERKS_(int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int rt_malloc(int);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002e9518. */
/* Supplied declaration required: _ZN9Obj55aff4C1ERKS_. */
/* Supplied declaration required: FUN_002e9590. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */


void FUN_00522a48(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  
  temp_v1 = param_1[1];
  if (temp_v1 != param_1[2]) {
    param_1[1] = temp_v1 + 8;
    if (temp_v1 != 0) {
      FUN_002e9518();
      return;
    }
  }
  else {
    temp_v0 = (temp_v1 - *param_1) >> 3;
    if (temp_v0 < (unsigned int)((param_1[2] - *param_1) >> 3)) {
      param_1[1] = temp_v1 + 8;
      if (temp_v1 != 0) {
        FUN_002e9518(temp_v1,temp_v1 - 8);
      }
      temp_v3 = temp_v1 - 8;
      temp_v4 = temp_v1;
      while (temp_v1 != temp_v3) {
        temp_v4 = temp_v4 - 8;
        temp_v3 = temp_v3 - 8;
        _ZN9Obj55aff4aSERKS_(temp_v4,temp_v3);
      }
      FUN_002e9590(temp_v1,param_2);
      return;
    }
    temp_v5 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
    if (temp_v5 < temp_v0 + 0x20) {
      temp_v5 = temp_v0 + 0x20;
    }
    temp_v2 = rt_malloc(temp_v5 << 3);
    temp_v3 = temp_v2;
    for (temp_v4 = *param_1; temp_v4 != temp_v1; temp_v4 = temp_v4 + 8) {
      if (temp_v3 != 0) {
        FUN_002e9518(temp_v3,temp_v4);
      }
      temp_v3 = temp_v3 + 8;
    }
    temp_v4 = ((temp_v1 - *param_1) & 0xfffffff8U) + temp_v2;
    if (temp_v4 != 0) {
      FUN_002e9518(temp_v4,param_2);
    }
    temp_v3 = param_1[1];
    temp_v4 = ((temp_v1 - *param_1) & 0xfffffff8U) + temp_v2;
    for (; temp_v1 != temp_v3; temp_v1 = temp_v1 + 8) {
      temp_v4 = temp_v4 + 8;
      if (temp_v4 != 0) {
        _ZN9Obj55aff4C1ERKS_(temp_v4,temp_v1);
      }
    }
    puVar5 = (unsigned int *)*param_1;
    puVar7 = (unsigned int *)param_1[1];
    temp_v1 = (int)puVar7 - (int)puVar5;
    for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
      (**(romwright_code **)*puVar5)(puVar5);
    }
    asdOperatorDeleteArray(*param_1);
    *param_1 = temp_v2;
    param_1[1] = temp_v2 + (temp_v1 >> 3) * 8 + 8;
    param_1[2] = temp_v2 + temp_v5 * 8;
  }
  return;
}

} /* extern "C" */
