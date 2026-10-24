/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Fog_CreateAnimGroup` (_code @ 0x44fde8, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00458a68(unsigned int *, int);

typedef struct fn_0044fde8_arg0 fn_0044fde8_arg0;
struct fn_0044fde8_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1c];
    void *field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x138];
    void *field_0x164; /* +0x164 */
    int field_0x168; /* +0x168 */
};

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00458a68. */
extern unsigned int *_ZN9Obj55bcccC1Ejjj(int, int, fn_0044fde8_arg0 *, int *);


int nw_gfx_Fog_CreateAnimGroup(fn_0044fde8_arg0 *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  void *pvVar4;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  void *pvVar8;
  int temp_v3;
  
  temp_v2 = 0;
  pvVar8 = param_1->field_0x28;
  if (pvVar8 == (void *)0x0) {
    return 0;
  }
  piVar1 = (int *)((int)param_1->field_0x8 + 0x2c);
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    temp_v0 = (int)piVar1 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = *(int *)(temp_v0 + 0x28);
    if (temp_v3 != 0) {
      temp_v3 = temp_v3 + temp_v0 + 0x28;
    }
    else {
      temp_v3 = 0;
    }
  }
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,0x68,4);
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)_ZN9Obj55bcccC1Ejjj(temp_v0,temp_v3,param_1,param_2);
    puVar3 = puVar2;
    FUN_00458a68(puVar2,1);
    if ((int)puVar3 >= 0) {
      if (puVar2 == (unsigned int *)0x0) {
        temp_v2 = -0x80000000;
      }
    }
    else {
      if (puVar2 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar2)(puVar2);
        (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
      }
      puVar2 = (unsigned int *)0x0;
      temp_v2 = -0x80000000;
    }
  }
  else {
    puVar2 = (unsigned int *)0x0;
    temp_v2 = -0x80000000;
  }
  if (-1 < temp_v2) {
    temp_v3 = *(int *)(puVar2[2] + 0x10);
    temp_v0 = 0;
    if (temp_v0 < temp_v3) {
      do {
        temp_v1 = *(int *)(puVar2[2] + 0x14);
        if (temp_v1 != 0) {
          temp_v1 = puVar2[2] + 0x14 + temp_v1;
        }
        else {
          temp_v1 = 0;
        }
        if (temp_v1 == 0) {
          temp_v1 = 0;
        }
        else {
          piVar1 = (int *)(temp_v1 + temp_v0 * 0x10 + 0x28);
          temp_v1 = *piVar1;
          if (temp_v1 != 0) {
            temp_v1 = temp_v1 + (int)piVar1;
          }
          else {
            temp_v1 = 0;
          }
        }
        if (*(int *)(temp_v1 + 0x10) == 0x11) {
          pvVar4 = param_1->field_0x8;
          *(void **)(puVar2[0xd] + temp_v0 * 4) = pvVar4;
          *(int *)(puVar2[0x11] + temp_v0 * 4) = (int)pvVar4 + *(int *)(temp_v1 + 8);
          *(int *)(puVar2[0x15] + temp_v0 * 4) = param_1->field_0x168 + *(int *)(temp_v1 + 8);
        }
        *(unsigned int *)(puVar2[9] + temp_v0 * 4) = 0;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v3);
    }
    **(unsigned int **)((int)pvVar8 + 0xc) = (unsigned int)puVar2;
    param_1->field_0x164 = puVar2;
  }
  return temp_v2;
}

} /* extern "C" */
