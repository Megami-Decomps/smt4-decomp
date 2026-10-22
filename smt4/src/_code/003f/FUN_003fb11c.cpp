/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fb11c` (_code @ 0x3fb11c, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003faab4(...);
int ownedTreeRecycleSubtree(...);

typedef struct fn_003fb11c_arg1 fn_003fb11c_arg1;
struct fn_003fb11c_arg1 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    void *field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
};

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_003faab4. */
/* Supplied declaration required: ownedTreeRecycleSubtree. */


void FUN_003fb11c(unsigned int *param_1,fn_003fb11c_arg1 *param_2,int *param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  void *pvVar1;
  unsigned int *puVar2;
  int *piVar3;
  void *pvVar4;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  
  *param_1 = (unsigned int)param_2->field_0x14;
  pvVar1 = param_2->field_0x14;
  pvVar4 = *(void **)((int)pvVar1 + 8);
  temp_v2 = (void *)*param_3 != pvVar4;
  if (!temp_v2) {
    pvVar4 = (void *)*param_4;
  }
  if ((!(temp_v2 || pvVar4 != pvVar1)) && (param_2->field_0x18 != 0)) {
    temp_v0 = *(int *)((int)pvVar1 + 4);
    while (temp_v0 != 0) {
      ownedTreeRecycleSubtree(param_2,*(unsigned int *)(temp_v0 + 0xc));
      temp_v1 = *(int *)(temp_v0 + 8);
      *(int *)(temp_v0 + 0xc) = param_2->field_0x8;
      puVar2 = *(unsigned int **)(temp_v0 + 0x1c);
      if (puVar2 == (unsigned int *)0x0 || puVar2 == (unsigned int *)(temp_v0 + 0x14)) {
        if (*(unsigned int **)(temp_v0 + 0x18) != (unsigned int *)0x0) {
          (**(romwright_code **)**(unsigned int **)(temp_v0 + 0x18))();
          piVar3 = *(int **)(temp_v0 + 0x14);
          (**(romwright_code **)(*piVar3 + 4))(piVar3,*(unsigned int *)(temp_v0 + 0x18));
        }
      }
      else {
        puVar2[3] = *(unsigned int *)(temp_v0 + 0x20);
        *(unsigned int *)(*(int *)(temp_v0 + 0x20) + 8) = *(unsigned int *)(temp_v0 + 0x1c);
        *(unsigned int *)(temp_v0 + 0x1c) = 0;
        *(unsigned int *)(temp_v0 + 0x20) = 0;
      }
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      param_2->field_0x8 = temp_v0;
      temp_v0 = temp_v1;
    }
    *(void **)((int)param_2->field_0x14 + 8) = param_2->field_0x14;
    *(unsigned int *)((int)param_2->field_0x14 + 4) = 0;
    *(void **)((int)param_2->field_0x14 + 0xc) = param_2->field_0x14;
    param_2->field_0x18 = 0;
    *param_1 = (unsigned int)param_2->field_0x14;
  }
  else {
    while (temp_v4 = *param_3, temp_v4 != *param_4) {
      temp_v0 = *(int *)(temp_v4 + 0xc);
      if (temp_v0 != 0) {
        *param_3 = temp_v0;
        while (temp_v0 = *(int *)(temp_v0 + 8), temp_v0 != 0) {
          *param_3 = temp_v0;
        }
      }
      else {
        temp_v1 = *(int *)(temp_v4 + 4);
        temp_v0 = temp_v1;
        if (temp_v4 == *(int *)(temp_v1 + 0xc)) {
          do {
            *param_3 = temp_v0;
            temp_v1 = *(int *)(temp_v0 + 4);
            temp_v2 = temp_v0 == *(int *)(temp_v1 + 0xc);
            temp_v0 = temp_v1;
          } while (temp_v2);
        }
        if (*(int *)(*param_3 + 0xc) != temp_v1) {
          *param_3 = temp_v1;
        }
      }
      FUN_003faab4(&temp_v3,param_2,&temp_v4);
      *param_1 = temp_v3;
    }
  }
  return;
}

} /* extern "C" */
