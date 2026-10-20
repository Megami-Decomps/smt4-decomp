/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047cc5c` (_code @ 0x47cc5c, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(...);
int rt_memcpy_w(unsigned int, unsigned char *, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0047cc5c(int param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned char *pbVar6;
  unsigned char *temp_v3;
  unsigned int *puVar7;
  unsigned char *pbVar8;
  int temp_v4;
  unsigned int *puVar10;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar7 = (unsigned int *)*param_2;
    temp_v1 = 0x100;
    FUN_00163060(0x100,0x100,0,8,1);
    *(unsigned int *)(param_1 + 4) = temp_v1;
    puVar3 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x40,1);
    temp_v4 = 0;
    **(int **)(param_1 + 4) = (int)puVar3;
    temp_v1 = puVar7[1];
    temp_v7 = puVar7[2];
    temp_v8 = puVar7[3];
    temp_v9 = puVar7[4];
    temp_v10 = puVar7[5];
    temp_v11 = puVar7[6];
    temp_v12 = puVar7[7];
    *puVar3 = *puVar7;
    puVar3[1] = temp_v1;
    puVar3[2] = temp_v7;
    puVar3[3] = temp_v8;
    puVar3[4] = temp_v9;
    puVar3[5] = temp_v10;
    puVar3[6] = temp_v11;
    puVar3[7] = temp_v12;
    temp_v1 = puVar7[9];
    temp_v7 = puVar7[10];
    temp_v8 = puVar7[0xb];
    temp_v9 = puVar7[0xc];
    temp_v10 = puVar7[0xd];
    temp_v11 = puVar7[0xe];
    temp_v12 = puVar7[0xf];
    puVar3[8] = puVar7[8];
    puVar3[9] = temp_v1;
    puVar3[10] = temp_v7;
    puVar3[0xb] = temp_v8;
    puVar3[0xc] = temp_v9;
    puVar3[0xd] = temp_v10;
    puVar3[0xe] = temp_v11;
    puVar3[0xf] = temp_v12;
    temp_v5 = **(int **)(param_1 + 4);
    pbVar8 = (unsigned char *)(*param_2 + 0x40);
    puVar10 = (unsigned int *)0x0;
    if (0 < *(int *)(temp_v5 + 0x20)) {
      do {
        puVar4 = (unsigned int *)0x100;
        FUN_00163060(0x100,0x100,0,0x14,1);
        *puVar4 = (unsigned int)*pbVar8;
        temp_v0 = pbVar8[4];
        puVar4[1] = (unsigned int)temp_v0;
        *(unsigned char *)(puVar4 + 2) = pbVar8[8];
        if (temp_v0 == 0) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = 0x100;
          FUN_00163060(0x100,0x100,0,puVar4[1] * 0x14,1);
        }
        puVar4[3] = temp_v2;
        pbVar6 = pbVar8 + 0xc;
        if (0 < (int)puVar4[1]) {
          rt_memcpy_w(puVar4[3],pbVar6,puVar4[1] * 0x14);
          pbVar6 = temp_v3;
        }
        temp_v2 = puVar4[1];
        temp_v6 = puVar10 == (unsigned int *)0x0;
        if (temp_v6) {
          pbVar6 = *(unsigned char **)(param_1 + 4);
        }
        temp_v4 = temp_v4 + 1;
        if (temp_v6) {
          *(unsigned int **)(pbVar6 + 4) = puVar4;
        }
        pbVar8 = pbVar8 + temp_v2 * 0x14 + 0xc;
        if (!temp_v6) {
          puVar10[4] = (unsigned int)puVar4;
        }
        puVar10 = puVar4;
      } while (temp_v4 < *(int *)(temp_v5 + 0x20));
    }
  }
  return;
}

} /* extern "C" */
