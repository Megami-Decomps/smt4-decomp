/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384be8` (_code @ 0x384be8, 0x64c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00210194(unsigned int);
int FUN_00235554(unsigned int *, unsigned char *);
int FUN_00259258(void);
int FUN_00290d5c(int);
int FUN_00296f4c(...);
int FUN_00297060(unsigned int, unsigned int);
int FUN_002973d8(void);
int FUN_00297468(unsigned char [64], unsigned int *, int);
int FUN_002a7218(void);
int FUN_002b64a0(...);
int FUN_002b8838(int);
int FUN_002bcfc0(unsigned char [64], unsigned char [140]);
int FUN_002be624(...);
int FUN_002bf694(unsigned char [64], unsigned int);
int FUN_002bff50(void);
int FUN_002c415c(void);
int FUN_002c4938(unsigned int *, int);
int FUN_002c564c(int);
int FUN_002d582c(...);
int FUN_002e1230(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_00384f78; /* 0x384f78 */
extern unsigned char LAB_00385234; /* 0x385234 */
extern unsigned char LAB_00385254; /* 0x385254 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_00210194. */
extern int FUN_00235378(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00235554. */
/* Supplied declaration required: FUN_00259258. */
extern int FUN_0025a03c(unsigned int);
/* Supplied declaration required: FUN_00290d5c. */
extern unsigned int FUN_00290d74(unsigned int, int);
extern unsigned int FUN_00290e9c(void);
extern int FUN_00290eb0(void);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002973d8. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002b64a0. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002bcfc0. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002d582c. */
/* Supplied declaration required: FUN_002e1230. */


void FUN_00384be8(unsigned int *param_1)

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
      temp_v4 = FUN_0025a03c(*(unsigned int *)(param_1[*(int *)(param_1[0x36a] + 4) + 0x343] + 8));
      if (temp_v4 == 0) {
        return;
      }
      FUN_00210194(param_1[*(int *)(param_1[0x36a] + 4) + 0x343]);
      FUN_002d582c(param_1[*(int *)(*puVar6 + 4) + 0x343]);
      FUN_002e1230(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
      *puVar6 = 0;
    }
    param_1[2] = param_1[2] + 1;
    puVar6 = param_1 + 0x36b;
    param_1[0x369] = 0;
    FUN_002c4938(puVar6,0x200);
    param_1[0x368] = 0;
    temp_v2 = 0;
    if (0 < (int)param_1[0x363]) {
      do {
        temp_v4 = FUN_00235378(param_1 + 8,0);
        FUN_002bf694(temp_v6,temp_v4 + param_1[temp_v2 * 2 + 0x357] * 0x88);
        FUN_002bcfc0(temp_v6,temp_v8);
        FUN_002b64a0(puVar6,temp_v8);
        FUN_002b64a0(puVar6,"<br>");
        param_1[param_1[0x368] + 0x364] = temp_v2;
        temp_v1 = param_1[0x368] + 1;
        param_1[0x368] = temp_v1;
        if (temp_v1 >= 4) break;
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < (int)param_1[0x363]);
      if ((int)param_1[0x368] >= 2) {
        FUN_00290d5c(0xa0);
        FUN_00235554(param_1,&LAB_00384f78);
        FUN_00259258();
        return;
      }
    }
    param_1[1] = 5;
    param_1[2] = 0;
    break;
  case 1:
    temp_v4 = FUN_0019e0c0(*(unsigned int *)param_1[0x171]);
    if (temp_v4 != 2) {
      temp_v4 = FUN_00290eb0();
      if (temp_v4 != 0) {
        temp_v2 = FUN_00290e9c();
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
      temp_v4 = FUN_002973d8();
      if (temp_v4 != -1) {
        temp_v2 = FUN_002973d8();
        param_1[0x369] = temp_v2;
        temp_v2 = param_1[temp_v2 + 0x364];
        param_1[0x36a] = (unsigned int)(param_1 + temp_v2 * 2 + 0x357);
        FUN_002d582c(param_1[param_1[temp_v2 * 2 + 0x358] + 0x343]);
        FUN_002e1230(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
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
        FUN_002b8838(0xa2);
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
    temp_v4 = FUN_00235378(param_1 + 8,0);
    temp_v0 = *(unsigned short *)(temp_v4 + *(int *)param_1[0x36a] * 0x88 + 0x6a);
    FUN_002be624(temp_v6,&LAB_00385234,temp_v0,temp_v0);
    FUN_002be624(temp_v7,&LAB_00385254,temp_v0);
    FUN_00297468(temp_v6,puVar8,0);
    FUN_00297468(temp_v7,param_1 + 0x16f,0);
    param_1[2] = param_1[2] + 1;
    return;
  case 3:
    temp_v2 = 0;
    if (param_1[0x16e] != 0) {
      temp_v2 = param_1[0x16f];
    }
    if ((param_1[0x16e] != 0 && temp_v2 != 0) &&
       (temp_v4 = FUN_0025a03c(*(unsigned int *)(param_1[*(int *)(param_1[0x36a] + 4) + 0x343] + 8)),
       temp_v4 != 0)) {
      FUN_00210194(param_1[*(int *)(param_1[0x36a] + 4) + 0x343]);
      FUN_002d582c(param_1[*(int *)(*puVar6 + 4) + 0x343]);
      FUN_002e1230(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
      temp_v2 = param_1[0x16e];
      FUN_00297060(temp_v2,param_1[0x16f]);
      param_1[0x170] = temp_v2;
      *(unsigned int *)(temp_v2 + 0x108) = 2;
      temp_v4 = FUN_00235378(param_1 + 8,0);
      temp_v5 = *(int *)*puVar6;
      FUN_002c564c(0);
      temp_v3 = FUN_00290d74(*puVar8,temp_v4 + temp_v5 * 0x88 + 0x6c);
      FUN_00296f4c(param_1[0x170],temp_v3);
      param_1[2] = param_1[2] + 1;
      return;
    }
    break;
  case 4:
    temp_v4 = FUN_0019e0c0(param_1[0x170]);
    if (temp_v4 == 2) {
      FUN_002d582c(param_1[*(int *)(param_1[0x36a] + 4) + 0x343]);
      FUN_002e1230(param_1[*(int *)(*puVar6 + 4) + 0x343],0);
      FUN_002bff50();
      if (param_1[0x170] != 0) {
        FUN_002a7218();
        param_1[0x170] = 0;
      }
      if (param_1[0x16e] != 0) {
        FUN_002c415c();
        *puVar8 = 0;
      }
      if (param_1[0x16f] != 0) {
        FUN_002c415c();
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

} /* extern "C" */
