/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af304` (_code @ 0x3af304, 0x5c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_003fbc38. */


unsigned int FUN_003af304(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned int *puVar6;
  romwright_code *pcVar7;
  unsigned char *puVar8;
  unsigned int temp_v2;
  int *piVar10;
  unsigned int *puVar11;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *puVar15;
  int *temp_v6;
  int temp_v7;
  unsigned char *temp_v8;
  unsigned char *temp_v9;
  
  temp_v0 = 0;
  if (temp_v0 < *param_3) {
    do {
      if (param_3[temp_v0 * 5 + 1] == param_2) {
        temp_v3 = param_3[temp_v0 * 5 + 2];
        puVar15 = (unsigned char *)0x0;
        if (temp_v3 > (unsigned int)param_1[3]) {
          piVar10 = (int *)param_1[1];
          puVar5 = (unsigned char *)0x0;
          temp_v2 = 0;
          if ((temp_v3 != 0) &&
             (puVar5 = (unsigned char *)(**(romwright_code **)*piVar10)(piVar10,temp_v3), temp_v2 = temp_v3,
             puVar5 == (unsigned char *)0x0)) {
            (**(romwright_code **)(*piVar10 + 8))
                      (piVar10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n");
            pcVar7 = *(romwright_code **)(*piVar10 + 4);
            (*pcVar7)(piVar10);
            return 0;
          }
          puVar8 = (unsigned char *)param_1[2];
          puVar1 = puVar5;
          for (temp_v4 = param_1[4]; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
            if (puVar1 != (unsigned char *)0x0) {
              *puVar1 = *puVar8;
            }
            puVar1 = puVar1 + 1;
            puVar8 = puVar8 + 1;
          }
          temp_v1 = param_1[2];
          param_1[2] = (unsigned int)puVar5;
          param_1[3] = temp_v2;
          if (0 < (int)param_1[4]) {
            for (temp_v4 = (int)param_1[4] >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
            }
          }
          (**(romwright_code **)(*piVar10 + 4))(piVar10,temp_v1);
        }
        temp_v3 = param_3[temp_v0 * 5 + 3];
        if ((unsigned int)param_1[10] < temp_v3) {
          piVar10 = (int *)param_1[8];
          puVar6 = (unsigned int *)0x0;
          temp_v2 = 0;
          if (temp_v3 != 0) {
            puVar6 = (unsigned int *)(**(romwright_code **)*piVar10)(piVar10);
            temp_v2 = temp_v3;
            if (puVar6 == (unsigned int *)0x0) {
              (**(romwright_code **)(*piVar10 + 8))
                        (piVar10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                         temp_v3 << 4);
              pcVar7 = *(romwright_code **)(*piVar10 + 4);
              (*pcVar7)(piVar10);
              return 0;
            }
          }
          puVar11 = (unsigned int *)param_1[9];
          puVar4 = puVar6;
          for (temp_v4 = param_1[0xb]; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
            if (puVar4 != (unsigned int *)0x0) {
              *puVar4 = *puVar11;
              puVar4[1] = puVar11[1];
              temp_v5 = puVar11[3];
              puVar4[3] = temp_v5;
              *(unsigned int **)(temp_v5 + 8) = puVar4;
              puVar4[2] = (unsigned int)puVar11;
              puVar11[3] = (unsigned int)puVar4;
            }
            puVar11 = puVar11 + 4;
            puVar4 = puVar4 + 4;
          }
          puVar11 = (unsigned int *)param_1[9];
          param_1[9] = (unsigned int)puVar6;
          param_1[10] = temp_v2;
          temp_v4 = param_1[0xb];
          puVar6 = puVar11;
          while (puVar6 < puVar11 + temp_v4 * 4) {
            puVar4 = (unsigned int *)puVar6[2];
            if (puVar4 == (unsigned int *)0x0 || puVar4 == puVar6) {
              if (puVar6[1] != 0) {
                (**(romwright_code **)(*(int *)*puVar6 + 4))();
              }
            }
            else {
              puVar4[3] = puVar6[3];
              *(unsigned int *)(puVar6[3] + 8) = puVar6[2];
              puVar6[2] = 0;
              puVar6[3] = 0;
            }
            puVar6[1] = 0;
            puVar6 = puVar6 + 4;
          }
          (**(romwright_code **)(*piVar10 + 4))(piVar10,puVar11);
        }
        temp_v3 = param_3[temp_v0 * 5 + 3];
        while (temp_v3 != 0) {
          temp_v3 = temp_v3 - 1;
          piVar10 = (int *)*param_1;
          temp_v7 = (**(romwright_code **)*piVar10)(piVar10,0x18);
          if (temp_v7 != 0) {
            *(unsigned int *)(temp_v7 + 8) = 0;
            *(unsigned int *)(temp_v7 + 0xc) = 0;
            *(unsigned char *)(temp_v7 + 0x14) = 0;
          }
          puVar6 = param_1 + 8;
          temp_v6 = piVar10;
          temp_v8 = (unsigned char *)&temp_v6;
          temp_v9 = (unsigned char *)&temp_v6;
          FUN_003fbc38();
          if (temp_v8 == (unsigned char *)0x0 || (int **)temp_v8 == &temp_v6) {
            if (temp_v7 != 0) {
              (**(romwright_code **)(*temp_v6 + 4))(temp_v6,temp_v7);
            }
          }
          else {
            *(unsigned char **)(temp_v8 + 0xc) = temp_v9;
            *(unsigned char **)(temp_v9 + 8) = temp_v8;
            temp_v8 = (unsigned char *)0x0;
            temp_v9 = (unsigned char *)0x0;
          }
          temp_v7 = 0;
          if (puVar6 != (unsigned int *)0x1) {
            return 0;
          }
        }
        temp_v3 = param_3[temp_v0 * 5 + 4];
        if ((unsigned int)param_1[0xe] < temp_v3) {
          piVar10 = (int *)param_1[0xc];
          puVar6 = (unsigned int *)0x0;
          temp_v2 = 0;
          if (temp_v3 != 0) {
            puVar6 = (unsigned int *)(**(romwright_code **)*piVar10)(piVar10);
            temp_v2 = temp_v3;
            if (puVar6 == (unsigned int *)0x0) {
              (**(romwright_code **)(*piVar10 + 8))
                        (piVar10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                         temp_v3 << 4);
              (**(romwright_code **)(*piVar10 + 4))(piVar10,0);
              return 0;
            }
          }
          puVar11 = (unsigned int *)param_1[0xd];
          puVar4 = puVar6;
          for (temp_v4 = param_1[0xf]; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
            if (puVar4 != (unsigned int *)0x0) {
              *puVar4 = *puVar11;
              puVar4[1] = puVar11[1];
              temp_v5 = puVar11[3];
              puVar4[3] = temp_v5;
              *(unsigned int **)(temp_v5 + 8) = puVar4;
              puVar4[2] = (unsigned int)puVar11;
              puVar11[3] = (unsigned int)puVar4;
            }
            puVar11 = puVar11 + 4;
            puVar4 = puVar4 + 4;
          }
          puVar11 = (unsigned int *)param_1[0xd];
          param_1[0xd] = (unsigned int)puVar6;
          param_1[0xe] = temp_v2;
          temp_v4 = param_1[0xf];
          puVar6 = puVar11;
          while (puVar6 < puVar11 + temp_v4 * 4) {
            puVar4 = (unsigned int *)puVar6[2];
            if (puVar4 == (unsigned int *)0x0 || puVar4 == puVar6) {
              if (puVar6[1] != 0) {
                (**(romwright_code **)(*(int *)*puVar6 + 4))();
              }
            }
            else {
              puVar4[3] = puVar6[3];
              *(unsigned int *)(puVar6[3] + 8) = puVar6[2];
              puVar6[2] = 0;
              puVar6[3] = 0;
            }
            puVar6[1] = 0;
            puVar6 = puVar6 + 4;
          }
          (**(romwright_code **)(*piVar10 + 4))(piVar10,puVar11);
        }
        temp_v0 = param_3[temp_v0 * 5 + 5];
        if (temp_v0 <= (unsigned int)param_1[0x19]) {
          return 1;
        }
        piVar10 = (int *)param_1[0x17];
        temp_v3 = 0;
        if ((temp_v0 != 0) &&
           (puVar15 = (unsigned char *)(**(romwright_code **)*piVar10)(piVar10,temp_v0), temp_v3 = temp_v0,
           puVar15 == (unsigned char *)0x0)) {
          (**(romwright_code **)(*piVar10 + 8))
                    (piVar10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",temp_v0
                    );
          (**(romwright_code **)(*piVar10 + 4))(piVar10);
          return 0;
        }
        puVar5 = (unsigned char *)param_1[0x18];
        puVar8 = puVar15;
        for (temp_v4 = param_1[0x1a]; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
          if (puVar8 != (unsigned char *)0x0) {
            *puVar8 = *puVar5;
          }
          puVar8 = puVar8 + 1;
          puVar5 = puVar5 + 1;
        }
        temp_v1 = param_1[0x18];
        param_1[0x18] = (unsigned int)puVar15;
        param_1[0x19] = temp_v3;
        if (0 < (int)param_1[0x1a]) {
          for (temp_v4 = (int)param_1[0x1a] >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
          }
        }
        (**(romwright_code **)(*piVar10 + 4))(piVar10,temp_v1);
        return 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *param_3);
  }
  return 1;
}
