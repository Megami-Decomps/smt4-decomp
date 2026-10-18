/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4540` (_code @ 0x3e4540, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002361b8. */
/* Supplied declaration required: FUN_00236350. */
/* Supplied declaration required: FUN_00380e30. */
/* Supplied declaration required: FUN_003e46d8. */
/* Supplied declaration required: FUN_003e4c90. */


unsigned int * FUN_003e4540(int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x1c))(param_1,param_3,*(romwright_code **)(*param_1 + 0x1c),0,0);
  puVar5 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar5 = param_2;
    if (((param_1[0x19] != param_1[0x1a]) && ((char)param_1[0x16] == '\0')) && (param_1[0x15] != 0))
    {
      puVar2 = (unsigned int *)(param_1[0x19] + *(int *)(param_1[5] + param_3 * 4) * 0x40);
      temp_v3 = puVar2[1];
      temp_v4 = puVar2[2];
      temp_v5 = puVar2[3];
      temp_v6 = puVar2[4];
      temp_v7 = puVar2[5];
      temp_v8 = puVar2[6];
      temp_v9 = puVar2[7];
      *param_2 = *puVar2;
      param_2[1] = temp_v3;
      param_2[2] = temp_v4;
      param_2[3] = temp_v5;
      param_2[4] = temp_v6;
      param_2[5] = temp_v7;
      param_2[6] = temp_v8;
      param_2[7] = temp_v9;
      temp_v3 = puVar2[9];
      temp_v4 = puVar2[10];
      temp_v5 = puVar2[0xb];
      temp_v6 = puVar2[0xc];
      temp_v7 = puVar2[0xd];
      temp_v8 = puVar2[0xe];
      temp_v9 = puVar2[0xf];
      param_2[8] = puVar2[8];
      param_2[9] = temp_v3;
      param_2[10] = temp_v4;
      param_2[0xb] = temp_v5;
      param_2[0xc] = temp_v6;
      param_2[0xd] = temp_v7;
      param_2[0xe] = temp_v8;
      param_2[0xf] = temp_v9;
    }
    else {
      puVar2 = *(unsigned int **)(*(int *)(param_1[2] + 0x54) + param_3 * 4);
      if (param_1[0x15] != 0) {
        piVar3 = (int *)(param_1[0x15] + 0x1c);
        temp_v0 = *piVar3;
        temp_v2 = 0;
        if (temp_v0 != 0) {
          temp_v0 = (int)piVar3 + temp_v0;
        }
        else {
          temp_v0 = 0;
        }
        if (temp_v0 == 0) {
          temp_v0 = 0;
        }
        else {
          piVar3 = (int *)(temp_v0 + *(int *)(param_1[5] + param_3 * 4) * 0x10 + 0x28);
          temp_v0 = *piVar3;
          if (temp_v0 != 0) {
            temp_v0 = temp_v0 + (int)piVar3;
          }
          else {
            temp_v0 = 0;
          }
        }
        temp_v1 = *(int *)(temp_v0 + 8);
        if (temp_v1 != 5) {
          if (temp_v1 != 8) {
            if (temp_v1 == 9) {
              temp_v1 = *(int *)(temp_v0 + 0xc);
              if (temp_v1 != 0) {
                temp_v2 = temp_v1 + temp_v0 + 0xc;
              }
              FUN_00380e30(param_2,temp_v2);
            }
          }
          else {
            FUN_003e4c90(param_1,param_2,temp_v0,puVar2,0);
          }
        }
        else {
          FUN_003e46d8(param_1,param_2,temp_v0,puVar2,0);
        }
      }
      else {
        temp_v3 = puVar2[1];
        temp_v4 = puVar2[2];
        param_2[0xc] = *puVar2;
        param_2[0xd] = temp_v3;
        param_2[0xe] = temp_v4;
        FUN_00236350(param_2,puVar2 + 3,puVar2 + 6);
        FUN_002361b8(param_1,param_2);
      }
    }
  }
  return puVar5;
}
