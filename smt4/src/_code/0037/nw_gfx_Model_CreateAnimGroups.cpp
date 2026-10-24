/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Model_CreateAnimGroups` (_code @ 0x37122c, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002367c0(...);
int FUN_00370fa8(...);
int nw_gfx_Model_BindVisibilityAnim(...);

typedef struct fn_0037122c_arg0 fn_0037122c_arg0;
struct fn_0037122c_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1c];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x11c];
    void *field_0x148; /* +0x148 */
    int field_0x14c; /* +0x14c */
    void *field_0x150; /* +0x150 */
    int field_0x154; /* +0x154 */
    unsigned char pad_0x158[0x9f];
    byte field_0x1f7; /* +0x1f7 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_002367c0. */
extern unsigned int *_ZN9Obj4218b0C1Ejjj(int, int, fn_0037122c_arg0 *, int *);
/* Supplied declaration required: FUN_00370fa8. */
/* Supplied declaration required: nw_gfx_Model_BindVisibilityAnim. */


int nw_gfx_Model_CreateAnimGroups(fn_0037122c_arg0 *param_1,int *param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  void *pvVar10;
  int temp_v6;
  
  temp_v5 = 0;
  temp_v0 = param_1->field_0x28;
  if (temp_v0 != 0) {
    pvVar10 = param_1->field_0x8;
    temp_v4 = 0;
    temp_v6 = *(int *)((int)pvVar10 + 0x28);
    if (0 < temp_v6) {
      do {
        if (*(int *)((int)pvVar10 + 0x2c) != 0) {
          temp_v1 = (int)pvVar10 + *(int *)((int)pvVar10 + 0x2c) + 0x2c;
        }
        else {
          temp_v1 = 0;
        }
        temp_v3 = 0;
        if (temp_v1 != 0) {
          piVar3 = (int *)(temp_v1 + temp_v4 * 0x10 + 0x28);
          temp_v3 = *piVar3;
          if (temp_v3 == 0) {
            temp_v3 = 0;
          }
          else {
            temp_v3 = (int)piVar3 + temp_v3;
          }
        }
        temp_v1 = *(int *)(temp_v3 + 0xc);
        if (temp_v1 != 2) {
          if (temp_v1 == 3) {
LAB_003712bc:
            temp_v2 = (**(romwright_code **)(*param_2 + 8))(param_2,0x68,4);
            if (temp_v2 != 0) {
              puVar5 = (unsigned int *)_ZN9Obj4218b0C1Ejjj(temp_v2,temp_v3,param_1,param_2);
              puVar6 = puVar5;
              FUN_002367c0(puVar5,1);
              if ((int)puVar6 >= 0) {
                if (puVar5 == (unsigned int *)0x0) {
                  temp_v5 = -0x80000000;
                }
              }
              else {
                if (puVar5 != (unsigned int *)0x0) {
                  (**(romwright_code **)*puVar5)(puVar5);
                  (**(romwright_code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
                  puVar5 = (unsigned int *)0x0;
                }
                temp_v5 = -0x80000000;
              }
            }
            else {
              puVar5 = (unsigned int *)0x0;
              temp_v5 = -0x80000000;
            }
            if (temp_v5 < 0) {
              return temp_v5;
            }
            if (temp_v1 != 2) {
              if (temp_v1 == 3) {
                nw_gfx_Model_BindVisibilityAnim(param_1,puVar5);
                *(unsigned int **)(*(int *)(temp_v0 + 0xc) + temp_v4 * 4) = puVar5;
                param_1->field_0x154 = temp_v4;
                param_1->field_0x150 = puVar5;
              }
            }
            else {
              FUN_00370fa8(param_1,puVar5);
              *(unsigned int **)(*(int *)(temp_v0 + 0xc) + temp_v4 * 4) = puVar5;
              param_1->field_0x14c = temp_v4;
              param_1->field_0x148 = puVar5;
            }
          }
        }
        else if ((~param_1->field_0x1f7 & 1) != 0) goto LAB_003712bc;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v6);
    }
  }
  return temp_v5;
}

} /* extern "C" */
