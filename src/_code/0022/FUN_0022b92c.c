/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b92c` (_code @ 0x22b92c, 0x324 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int FUN_0022c004(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_0022b92c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s) */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int temp_v3;
  unsigned char *puVar8;
  int *piVar9;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = param_2 + param_3;
  temp_v2 = param_1[3];
  temp_v4 = temp_v2 + param_3;
  if ((unsigned int)param_1[2] >= temp_v4) {
    temp_v0 = temp_v2 - param_2;
    if (temp_v0 < param_3) {
      param_3 = temp_v0;
    }
    puVar8 = (unsigned char *)((temp_v2 + param_1[1]) - param_3);
    temp_v0 = temp_v0 - param_3;
    if (param_3 != 0) {
      puVar4 = (unsigned char *)(param_1[1] + (temp_v4 - param_3));
      do {
        if (puVar4 != (unsigned char *)0x0) {
          *puVar4 = *puVar8;
        }
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    if (temp_v0 != 0) {
      if (param_2 >= temp_v5) {
        puVar4 = (unsigned char *)(param_1[1] + temp_v5);
        puVar8 = (unsigned char *)(param_1[1] + param_2);
        if (temp_v0 >= 0x80000000) {
          do {
            temp_v0 = temp_v0 - 1;
            *puVar4 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar4 = puVar4 + 1;
          } while (temp_v0 != 0);
        }
        else {
          if ((int)temp_v0 < 2) {
            temp_v0 = 1;
          }
          else if ((int)temp_v0 < 1) goto LAB_0022ba94;
          puVar5 = puVar8 + -1;
          puVar6 = puVar4 + -1;
          if ((temp_v0 & 1) != 0) {
            *puVar4 = *puVar8;
            puVar5 = puVar8;
            puVar6 = puVar4;
          }
          for (temp_v2 = (int)temp_v0 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
            puVar6[1] = puVar5[1];
            puVar5 = puVar5 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar5;
          }
        }
      }
      else {
        puVar4 = (unsigned char *)(temp_v5 + temp_v0 + param_1[1]);
        puVar8 = (unsigned char *)(param_1[1] + param_2 + temp_v0);
        if (temp_v0 >= 0x80000000) {
          do {
            puVar8 = puVar8 + -1;
            temp_v0 = temp_v0 - 1;
            puVar4 = puVar4 + -1;
            *puVar4 = *puVar8;
          } while (temp_v0 != 0);
        }
        else {
          if ((int)temp_v0 < 2) {
            temp_v0 = 1;
          }
          else if ((int)temp_v0 < 1) goto LAB_0022ba94;
          if ((temp_v0 & 1) != 0) {
            puVar8 = puVar8 + -1;
            puVar4 = puVar4 + -1;
            *puVar4 = *puVar8;
          }
          for (temp_v2 = (int)temp_v0 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
            puVar4[-1] = puVar8[-1];
            puVar8 = puVar8 + -2;
            puVar4 = puVar4 + -2;
            *puVar4 = *puVar8;
          }
        }
      }
    }
LAB_0022ba94:
    if ((unsigned int)param_1[3] <= temp_v5) {
      temp_v5 = param_1[3];
    }
    temp_v2 = (param_1[1] + temp_v5) - (param_1[1] + param_2);
    if (0 < temp_v2) {
      for (temp_v2 = temp_v2 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
      }
    }
  }
  else {
    temp_v1 = FUN_0022c004(param_1[2],temp_v4,param_3,param_4,param_4);
    piVar9 = (int *)*param_1;
    puVar8 = (unsigned char *)0x0;
    temp_v0 = 0;
    if ((temp_v1 != 0) &&
       (temp_v6 = temp_v1, puVar8 = (unsigned char *)(**(romwright_code **)*piVar9)(piVar9,temp_v1), temp_v0 = temp_v1,
       puVar8 == (unsigned char *)0x0)) {
      (**(romwright_code **)(*piVar9 + 8))
                (piVar9,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",temp_v6);
      if (temp_v4 == temp_v1) {
        (**(romwright_code **)(*piVar9 + 4))(piVar9);
        return 0;
      }
      temp_v0 = 0;
      if ((temp_v4 != 0) &&
         (puVar8 = (unsigned char *)(**(romwright_code **)*piVar9)(piVar9,temp_v4), temp_v0 = temp_v4,
         puVar8 == (unsigned char *)0x0)) {
        (**(romwright_code **)(*piVar9 + 8))
                  (piVar9,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",temp_v4);
        (**(romwright_code **)(*piVar9 + 4))(piVar9);
        return 0;
      }
    }
    puVar4 = (unsigned char *)param_1[1];
    puVar5 = puVar8;
    for (temp_v1 = param_2; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      if (puVar5 != (unsigned char *)0x0) {
        *puVar5 = *puVar4;
      }
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    temp_v2 = param_1[3] - param_2;
    puVar4 = (unsigned char *)(param_1[1] + param_2);
    if (temp_v2 != 0) {
      puVar5 = puVar8 + temp_v5;
      do {
        if (puVar5 != (unsigned char *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        temp_v2 = temp_v2 - 1;
      } while (temp_v2 != 0);
    }
    temp_v3 = param_1[1];
    param_1[1] = (unsigned int)puVar8;
    param_1[2] = temp_v0;
    if (0 < (int)param_1[3]) {
      for (temp_v2 = (int)param_1[3] >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
      }
    }
    (**(romwright_code **)(*piVar9 + 4))(piVar9,temp_v3);
  }
  param_1[3] = temp_v4;
  return 1;
}
