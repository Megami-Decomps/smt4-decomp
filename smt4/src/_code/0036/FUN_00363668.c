/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363668` (_code @ 0x363668, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00363668_arg1 fn_00363668_arg1;
struct fn_00363668_arg1 {
    unsigned char pad_0x0[0x10];
    byte field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    int field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

typedef int romwright_code();
extern int nw_anim_PlayPolicy_Loop(); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */

/* Supplied declaration required: nw_gfx_AnimEvaluator_SetCacheBufferPointers. */


unsigned int FUN_00363668(int *param_1,fn_00363668_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  romwright_code *pcVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar10;
  
  param_1[0x15] = (int)param_2;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = param_2->field_0x14;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if (param_2->field_0x10 == 0) {
    pcVar5 = (romwright_code *)&LAB_00155650;
    param_1[0x13] = (int)pcVar5;
  }
  else if (param_2->field_0x10 == 1) {
    pcVar5 = nw_anim_PlayPolicy_Loop;
    param_1[0x13] = (int)pcVar5;
  }
  *(unsigned char *)(param_1 + 0x16) = 1;
  temp_v2 = param_1[2];
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  temp_v0 = (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v2);
  temp_v3 = param_2->field_0x18;
  if ((int)temp_v3 < (param_1[0x1b] - param_1[0x1a]) >> 2) {
    if ((int)temp_v3 < 0) {
      temp_v3 = 0;
    }
    param_1[0x1b] = param_1[0x1a] + temp_v3 * 4;
  }
  else {
    if ((int)(param_1[0x1c] & 0x3fffffffU) < (int)temp_v3) {
      if ((param_1[0x19] == 0) || ((param_1[0x1c] & 0xc0000000U) != 0x40000000)) {
        temp_v3 = param_1[0x1c] & 0x3fffffff;
      }
      else {
        puVar2 = (unsigned int *)
                 (**(romwright_code **)(*(int *)param_1[0x19] + 8))((int *)param_1[0x19],temp_v3 << 2,0x20);
        temp_v2 = 0;
        puVar3 = (unsigned int *)param_1[0x1a];
        puVar7 = (unsigned int *)param_1[0x1b];
        puVar6 = puVar2;
        if (puVar3 != puVar7) {
          do {
            if (puVar6 != (unsigned int *)0x0) {
              *puVar6 = *puVar3;
            }
            puVar3 = puVar3 + 1;
            puVar6 = puVar6 + 1;
          } while (puVar3 != puVar7);
          temp_v2 = (param_1[0x1b] - param_1[0x1a]) >> 2;
        }
        if (param_1[0x1a] != 0) {
          (**(romwright_code **)(*(int *)param_1[0x19] + 0xc))();
        }
        param_1[0x1b] = (int)(puVar2 + temp_v2);
        param_1[0x1a] = (int)puVar2;
        param_1[0x1c] = (param_1[0x1c] & 0xc0000000U) | temp_v3;
      }
    }
    param_1[0x1b] = param_1[0x1a] + temp_v3 * 4;
  }
  if ((*(char *)((int)param_1 + 0x59) == '\0') && (param_1[0x17] != 0)) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
    param_1[0x17] = 0;
    if (param_2->field_0x18 != 0) {
      piVar10 = (int *)param_1[1];
      temp_v1 = (**(romwright_code **)(*param_1 + 0x2c))(param_1);
      temp_v2 = (**(romwright_code **)(*piVar10 + 8))(piVar10,temp_v1,4);
      param_1[0x17] = temp_v2;
      nw_gfx_AnimEvaluator_SetCacheBufferPointers(param_1);
    }
  }
  return temp_v0;
}
