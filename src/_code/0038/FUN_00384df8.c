/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384df8` (_code @ 0x384df8, 0x64c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_00385188; /* 0x385188 */
extern unsigned char LAB_00385444; /* 0x385444 */
extern unsigned char LAB_00385464; /* 0x385464 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00210030. */
extern int FUN_00235510(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002356ec. */
/* Supplied declaration required: FUN_00259490. */
extern int FUN_0025a274(unsigned int);
/* Supplied declaration required: FUN_00291000. */
extern unsigned int FUN_00291018(unsigned int, int);
extern unsigned int FUN_00291140(void);
extern int FUN_00291154(void);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_00297674. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002b67e0. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bd1b0. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002d5780. */
/* Supplied declaration required: FUN_002e11bc. */


void FUN_00384df8(unsigned int *param_1)

{
/* irregular: 20 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned int *puVar8;
  unsigned char temp_v6 [64];
  unsigned char temp_v7 [64];
  unsigned char temp_v8 [140];
  
  puVar8 = param_1 + 0x16e;
  puVar6 = param_1 + 0x36a;
  switch(param_1[2]) {
  case 0:
    if (param_1[0x36a] != 0) {
      temp_v4 = FUN_0025a274(*(unsigned int *)(param_1[*(int *)(param_1[0x36a] + 4) + 0x343] + 8));
      if (temp_v4 == 0) {
        return;
      }
      FUN_00210030(param_1[*(int *)(param_1[0x36a] + 4) + 0x343]);
      FUN_002d5780(param_1[*(int *)(*puVar6 + 4) + 0x343]);
      FUN_002e11bc(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
      *puVar6 = 0;
    }
    param_1[2] = param_1[2] + 1;
    puVar6 = param_1 + 0x36b;
    param_1[0x369] = 0;
    FUN_002c4b30(puVar6,0x200);
    param_1[0x368] = 0;
    temp_v2 = 0;
    if (0 < (int)param_1[0x363]) {
      do {
        temp_v4 = FUN_00235510(param_1 + 8,0);
        FUN_002bf86c(temp_v6,temp_v4 + param_1[temp_v2 * 2 + 0x357] * 0x88);
        FUN_002bd1b0(temp_v6,temp_v8);
        FUN_002b67e0(puVar6,temp_v8);
        FUN_002b67e0(puVar6,"<br>");
        param_1[param_1[0x368] + 0x364] = temp_v2;
        temp_v1 = param_1[0x368] + 1;
        param_1[0x368] = temp_v1;
        if (temp_v1 >= 4) break;
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < (int)param_1[0x363]);
      if ((int)param_1[0x368] >= 2) {
        FUN_00291000(0xa0);
        FUN_002356ec(param_1,&LAB_00385188);
        FUN_00259490();
        return;
      }
    }
    param_1[1] = 5;
    param_1[2] = 0;
    break;
  case 1:
    temp_v4 = FUN_0019dfbc(*(unsigned int *)param_1[0x171]);
    if (temp_v4 != 2) {
      temp_v4 = FUN_00291154();
      if (temp_v4 != 0) {
        temp_v2 = FUN_00291140();
        param_1[0x369] = temp_v2;
        if (temp_v2 != 0xffffffff) {
          param_1[0x3ec] = param_1[param_1[temp_v2 + 0x364] * 2 + 0x358];
          temp_v2 = 0;
          if (0 < (int)param_1[0x368]) {
            do {
              puVar6 = (unsigned int *)param_1[param_1[param_1[temp_v2 + 0x364] * 2 + 0x358] + 0x349];
              if (param_1[0x369] == temp_v2) {
                *puVar6 = *puVar6 & 0xfffffffd;
                *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 1;
              }
              else {
                *puVar6 = *puVar6 | 2;
                *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
              }
              temp_v2 = temp_v2 + 1;
            } while ((int)temp_v2 < (int)param_1[0x368]);
            return;
          }
        }
      }
    }
    else {
      temp_v4 = FUN_00297674();
      if (temp_v4 != -1) {
        temp_v2 = FUN_00297674();
        param_1[0x369] = temp_v2;
        temp_v2 = param_1[temp_v2 + 0x364];
        param_1[0x36a] = (unsigned int)(param_1 + temp_v2 * 2 + 0x357);
        FUN_002d5780(param_1[param_1[temp_v2 * 2 + 0x358] + 0x343]);
        FUN_002e11bc(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
        param_1[2] = param_1[2] + 1;
        *param_1 = *param_1 | 0x100;
        temp_v4 = 0;
        if (0 < (int)param_1[0x368]) {
          do {
            temp_v5 = temp_v4 + 1;
            puVar6 = (unsigned int *)param_1[param_1[param_1[temp_v4 + 0x364] * 2 + 0x358] + 0x349];
            *puVar6 = *puVar6 | 2;
            *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
            temp_v4 = temp_v5;
          } while (temp_v5 < (int)param_1[0x368]);
        }
        FUN_002b8b78(0xa2);
        param_1[0x3f0] = param_1[0x369];
        return;
      }
      param_1[2] = 5;
      param_1[0x3ec] = 0;
      *param_1 = *param_1 & 0xfffffeff;
      temp_v4 = 0;
      if (0 < (int)param_1[0x368]) {
        do {
          temp_v5 = temp_v4 + 1;
          puVar6 = (unsigned int *)param_1[param_1[param_1[temp_v4 + 0x364] * 2 + 0x358] + 0x349];
          *puVar6 = *puVar6 | 2;
          *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
          temp_v4 = temp_v5;
        } while (temp_v5 < (int)param_1[0x368]);
        return;
      }
    }
    break;
  case 2:
    temp_v4 = FUN_00235510(param_1 + 8,0);
    temp_v0 = *(unsigned short *)(temp_v4 + *(int *)param_1[0x36a] * 0x88 + 0x6a);
    FUN_002be7fc(temp_v6,&LAB_00385444,temp_v0,temp_v0);
    FUN_002be7fc(temp_v7,&LAB_00385464,temp_v0);
    FUN_00297704(temp_v6,puVar8,0);
    FUN_00297704(temp_v7,param_1 + 0x16f,0);
    param_1[2] = param_1[2] + 1;
    return;
  case 3:
    temp_v2 = 0;
    if (param_1[0x16e] != 0) {
      temp_v2 = param_1[0x16f];
    }
    if ((param_1[0x16e] != 0 && temp_v2 != 0) &&
       (temp_v4 = FUN_0025a274(*(unsigned int *)(param_1[*(int *)(param_1[0x36a] + 4) + 0x343] + 8)),
       temp_v4 != 0)) {
      FUN_00210030(param_1[*(int *)(param_1[0x36a] + 4) + 0x343]);
      FUN_002d5780(param_1[*(int *)(*puVar6 + 4) + 0x343]);
      FUN_002e11bc(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
      temp_v2 = param_1[0x16e];
      FUN_002972f8(temp_v2,param_1[0x16f]);
      param_1[0x170] = temp_v2;
      *(unsigned int *)(temp_v2 + 0x108) = 2;
      temp_v4 = FUN_00235510(param_1 + 8,0);
      temp_v5 = *(int *)*puVar6;
      FUN_002c583c(0);
      temp_v3 = FUN_00291018(*puVar8,temp_v4 + temp_v5 * 0x88 + 0x6c);
      FUN_002971e4(param_1[0x170],temp_v3);
      param_1[2] = param_1[2] + 1;
      return;
    }
    break;
  case 4:
    temp_v4 = FUN_0019dfbc(param_1[0x170]);
    if (temp_v4 == 2) {
      FUN_002d5780(param_1[*(int *)(param_1[0x36a] + 4) + 0x343]);
      FUN_002e11bc(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
      FUN_002c0128();
      if (param_1[0x170] != 0) {
        FUN_002a755c();
        param_1[0x170] = 0;
      }
      if (param_1[0x16e] != 0) {
        FUN_002c4360();
        *puVar8 = 0;
      }
      if (param_1[0x16f] != 0) {
        FUN_002c4360();
        param_1[0x16f] = 0;
      }
      param_1[2] = 0;
      *param_1 = *param_1 & 0xfffffeff;
      return;
    }
    break;
  case 5:
    *param_1 = *param_1 & 0xfffffeff;
    param_1[1] = 5;
    param_1[2] = 0;
    return;
  }
  return;
}
