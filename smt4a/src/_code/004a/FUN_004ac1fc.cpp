/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ac1fc` (_code @ 0x4ac1fc, 0x63c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00521984(void);
int FUN_00521d14(...);
int rt_memcpy(int, int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_00521984. */
/* Supplied declaration required: FUN_00521d14. */
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_004ac1fc(int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  unsigned int *puVar7;
  int temp_v4;
  int temp_v5;
  int *piVar10;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar13;
  unsigned int temp_v8;
  unsigned int *puVar15;
  unsigned char temp_v9;
  int *temp_v10;
  unsigned int temp_v11;
  unsigned char *temp_v12;
  unsigned char *temp_v13;
  
  temp_v0 = 0;
  if (*param_3 == 0) {
    return 1;
  }
  while (param_3[temp_v0 * 5 + 1] != param_2) {
    temp_v0 = temp_v0 + 1;
    if (*param_3 <= temp_v0) {
      return 1;
    }
  }
  temp_v7 = param_3[temp_v0 * 5 + 2];
  if ((unsigned int)param_1[3] < temp_v7) {
    piVar10 = (int *)param_1[1];
    temp_v8 = 0;
    temp_v6 = 0;
    temp_v2 = temp_v8;
    if ((temp_v7 != 0) &&
       (temp_v6 = (**(romwright_code **)*piVar10)(piVar10,temp_v7), temp_v2 = temp_v7, temp_v6 == 0)) {
      (**(romwright_code **)(*piVar10 + 8))
                (piVar10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",temp_v7);
      (**(romwright_code **)(*piVar10 + 4))(piVar10,0);
    }
    else {
      temp_v5 = param_1[4];
      if (temp_v5 != 0) {
        temp_v1 = param_1[5];
        temp_v7 = param_1[3];
        temp_v3 = param_1[2] + temp_v1;
        if (temp_v7 >= (unsigned int)(temp_v1 + temp_v5)) {
          if (temp_v3 != temp_v5 + temp_v3) {
            temp_v5 = (temp_v5 + temp_v3) - temp_v3;
            temp_v1 = temp_v6;
            rt_memcpy(temp_v1,temp_v3,temp_v5);
          }
        }
        else {
          temp_v4 = temp_v7 + param_1[2];
          if (temp_v3 != temp_v4) {
            rt_memcpy(temp_v6,temp_v3,temp_v4 - temp_v3);
          }
          temp_v3 = param_1[2];
          temp_v5 = temp_v3 + (temp_v5 - (temp_v7 - temp_v1));
          if (temp_v3 != temp_v5) {
            temp_v1 = temp_v6 + (temp_v7 - temp_v1);
            temp_v5 = temp_v5 - temp_v3;
            rt_memcpy(temp_v1,temp_v3,temp_v5);
          }
        }
      }
      temp_v5 = param_1[2];
      param_1[2] = temp_v6;
      param_1[3] = temp_v2;
      (**(romwright_code **)(*piVar10 + 4))(piVar10,temp_v5);
      temp_v8 = 1;
    }
    if (temp_v8 == 0) {
      return 0;
    }
  }
  temp_v7 = param_3[temp_v0 * 5 + 3];
  if ((unsigned int)param_1[9] < temp_v7) {
    temp_v10 = (int *)param_1[7];
    temp_v11 = 0;
    temp_v12 = (unsigned char *)0x0;
    temp_v2 = temp_v11;
    puVar1 = temp_v12;
    if (temp_v7 != 0) {
      temp_v2 = (**(romwright_code **)*temp_v10)();
      puVar1 = (unsigned char *)temp_v7;
      if (temp_v2 == 0) {
        (**(romwright_code **)(*temp_v10 + 8))
                  (temp_v10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                   temp_v7 << 4);
        temp_v11 = temp_v2;
        (**(romwright_code **)(*temp_v10 + 4))(temp_v10,0);
        return 0;
      }
    }
    temp_v12 = puVar1;
    temp_v11 = temp_v2;
    puVar5 = (unsigned int *)param_1[8];
    temp_v6 = 0;
    puVar15 = puVar5 + param_1[10] * 4;
    for (; puVar5 != puVar15; puVar5 = puVar5 + 4) {
      puVar7 = (unsigned int *)(temp_v11 + temp_v6 * 0x10);
      temp_v6 = temp_v6 + 1;
      if (puVar7 != (unsigned int *)0x0) {
        *puVar7 = *puVar5;
        puVar7[1] = puVar5[1];
        temp_v5 = puVar5[3];
        puVar7[3] = temp_v5;
        *(unsigned int **)(temp_v5 + 8) = puVar7;
        puVar7[2] = (unsigned int)puVar5;
        puVar5[3] = (unsigned int)puVar7;
      }
    }
    temp_v6 = param_1[8];
    param_1[8] = temp_v11;
    temp_v5 = param_1[9];
    param_1[9] = (int)temp_v12;
    temp_v11 = temp_v6;
    temp_v12 = (unsigned char *)temp_v5;
    FUN_00521d14(&temp_v10,0,param_1[10]);
    (**(romwright_code **)(*temp_v10 + 4))(temp_v10,temp_v11);
    temp_v11 = 0;
    temp_v12 = (unsigned char *)0x0;
  }
  temp_v6 = param_3[temp_v0 * 5 + 3] - 1;
  if (temp_v6 != -1) {
    temp_v7 = temp_v11;
    do {
      temp_v11 = temp_v7;
      piVar10 = (int *)*param_1;
      temp_v11 = (**(romwright_code **)*piVar10)(piVar10,0x18);
      if (temp_v11 != 0) {
        *(unsigned int *)(temp_v11 + 8) = 0;
        *(unsigned int *)(temp_v11 + 0xc) = 0;
        *(unsigned char *)(temp_v11 + 0x11) = 0;
      }
      piVar13 = param_1 + 7;
      temp_v10 = piVar10;
      temp_v12 = (unsigned char *)&temp_v10;
      temp_v13 = (unsigned char *)&temp_v10;
      FUN_00521984();
      if (temp_v12 == (unsigned char *)0x0 || (int **)temp_v12 == &temp_v10) {
        if (temp_v11 != 0) {
          (**(romwright_code **)(*temp_v10 + 4))(temp_v10,temp_v11);
        }
      }
      else {
        *(unsigned char **)(temp_v12 + 0xc) = temp_v13;
        *(unsigned char **)(temp_v13 + 8) = temp_v12;
        temp_v12 = (unsigned char *)0x0;
        temp_v13 = (unsigned char *)0x0;
      }
      temp_v11 = 0;
      if (piVar13 != (int *)0x1) {
        return 0;
      }
      temp_v9 = temp_v6 != 0;
      temp_v6 = temp_v6 - 1;
      temp_v7 = 0;
    } while (temp_v9);
  }
  temp_v7 = param_3[temp_v0 * 5 + 4];
  piVar10 = param_1 + 0xb;
  if (temp_v7 > (unsigned int)param_1[0xd]) {
    temp_v6 = 0;
    piVar13 = (int *)*piVar10;
    temp_v9 = 0;
    temp_v5 = 0;
    temp_v11 = 0;
    temp_v2 = temp_v11;
    if (temp_v7 != 0) {
      temp_v10 = (int *)(temp_v7 << 4);
      temp_v5 = (**(romwright_code **)*piVar13)(piVar13);
      temp_v2 = temp_v7;
      if (temp_v5 != 0) goto LAB_004ac5b8;
      (**(romwright_code **)(*piVar13 + 8))
                (piVar13,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",temp_v10)
      ;
      (**(romwright_code **)(*piVar13 + 4))(piVar13,0);
    }
    else {
LAB_004ac5b8:
      temp_v11 = temp_v2;
      temp_v1 = param_1[0xe];
      if (temp_v1 != 0) {
        temp_v3 = param_1[0xf];
        temp_v7 = param_1[0xd];
        puVar5 = (unsigned int *)(param_1[0xc] + temp_v3 * 0x10);
        if (temp_v7 >= (unsigned int)(temp_v3 + temp_v1)) {
          puVar15 = puVar5 + temp_v1 * 4;
          for (; puVar5 != puVar15; puVar5 = puVar5 + 4) {
            puVar7 = (unsigned int *)(temp_v5 + temp_v6 * 0x10);
            temp_v6 = temp_v6 + 1;
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = *puVar5;
              puVar7[1] = puVar5[1];
              temp_v1 = puVar5[3];
              puVar7[3] = temp_v1;
              *(unsigned int **)(temp_v1 + 8) = puVar7;
              puVar7[2] = (unsigned int)puVar5;
              puVar5[3] = (unsigned int)puVar7;
            }
          }
          FUN_00521d14(piVar10,param_1[0xf],param_1[0xf] + param_1[0xe]);
        }
        else {
          temp_v6 = temp_v7 - temp_v3;
          puVar15 = (unsigned int *)(param_1[0xc] + temp_v7 * 0x10);
          temp_v9 = puVar5 != puVar15;
          temp_v10 = (int *)(temp_v1 - temp_v6);
          if (temp_v9) {
            temp_v3 = 0;
          }
          while (temp_v9) {
            puVar7 = (unsigned int *)(temp_v5 + temp_v3 * 0x10);
            temp_v3 = temp_v3 + 1;
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = *puVar5;
              puVar7[1] = puVar5[1];
              temp_v1 = puVar5[3];
              puVar7[3] = temp_v1;
              *(unsigned int **)(temp_v1 + 8) = puVar7;
              puVar7[2] = (unsigned int)puVar5;
              puVar5[3] = (unsigned int)puVar7;
            }
            puVar5 = puVar5 + 4;
            temp_v9 = puVar5 != puVar15;
          }
          puVar5 = (unsigned int *)param_1[0xc];
          puVar15 = puVar5 + (int)temp_v10 * 4;
          for (; puVar5 != puVar15; puVar5 = puVar5 + 4) {
            puVar7 = (unsigned int *)(temp_v5 + temp_v6 * 0x10);
            temp_v6 = temp_v6 + 1;
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = *puVar5;
              puVar7[1] = puVar5[1];
              temp_v1 = puVar5[3];
              puVar7[3] = temp_v1;
              *(unsigned int **)(temp_v1 + 8) = puVar7;
              puVar7[2] = (unsigned int)puVar5;
              puVar5[3] = (unsigned int)puVar7;
            }
          }
          FUN_00521d14(piVar10,param_1[0xf]);
          FUN_00521d14(piVar10,0,temp_v10);
        }
      }
      temp_v6 = param_1[0xc];
      param_1[0xc] = temp_v5;
      param_1[0xd] = temp_v11;
      (**(romwright_code **)(*piVar13 + 4))(piVar13,temp_v6);
      temp_v9 = 1;
    }
    if (!temp_v9) {
      return 0;
    }
  }
  temp_v0 = param_3[temp_v0 * 5 + 5];
  if (temp_v0 <= (unsigned int)param_1[0x17]) {
    return 1;
  }
  piVar10 = (int *)param_1[0x15];
  temp_v6 = 0;
  temp_v7 = 0;
  if ((temp_v0 != 0) && (temp_v6 = (**(romwright_code **)*piVar10)(piVar10,temp_v0), temp_v7 = temp_v0, temp_v6 == 0))
  {
    (**(romwright_code **)(*piVar10 + 8))
              (piVar10,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",temp_v0);
    (**(romwright_code **)(*piVar10 + 4))(piVar10,0);
    return 0;
  }
  temp_v5 = param_1[0x16];
  if (temp_v5 != temp_v5 + param_1[0x18]) {
    rt_memcpy(temp_v6,temp_v5,(temp_v5 + param_1[0x18]) - temp_v5);
  }
  temp_v5 = param_1[0x16];
  param_1[0x16] = temp_v6;
  param_1[0x17] = temp_v7;
  (**(romwright_code **)(*piVar10 + 4))(piVar10,temp_v5);
  return 1;
}

} /* extern "C" */
