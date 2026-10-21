/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004af3b4` (_code @ 0x4af3b4, 0x82c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ac83c(int);
int FUN_004acc1c(...);
int FUN_005211a4(...);
int rt_memcpy(...);

typedef int romwright_code(...);
/* stack frame of param_4: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_4_stack;

extern unsigned char LAB_004af858; /* 0x4af858 */
extern unsigned char LAB_004af89c; /* 0x4af89c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_004ac83c. */
/* Supplied declaration required: FUN_004acc1c. */
extern int containerGrowCapacity(unsigned int, unsigned int);
/* Supplied declaration required: FUN_005211a4. */
extern int moLiveRingBufferReallocate(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_004af3b4(long long *param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 2 unstructured edge(s); 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned char *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned char *puVar8;
  int temp_v5;
  unsigned int *puVar10;
  unsigned int temp_v6;
  long long *plVar12;
  int temp_v7;
  long long temp_v8;
  unsigned char temp_v9 [12];
  int temp_v10;
  unsigned int *temp_v11 [2];
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char *temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  int aiStack_44 [2];
  long long *temp_v23;
  long long *plStack_34;
  int iStack_30;
  unsigned int *puStack_2c;
  unsigned int temp_v24;
  
  temp_v0 = *param_3;
  temp_v14 = (unsigned char *)((int)param_1 + 0x148f);
  temp_v22 = (unsigned int)((int)param_1 + 0x1491);
  plVar12 = param_1 + 0x290;
  puVar3 = (unsigned int *)((int)param_1 + 0x1484);
  if (temp_v0 == param_4) {
    return 0x101;
  }
  if (param_4 < temp_v0) {
    *(unsigned int *)param_1 = 0;
    *(unsigned int *)((int)param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 1) = 0;
    *(unsigned int *)((int)param_1 + 0xc) = 0;
    *(unsigned int *)plVar12 = 0x40;
    *puVar3 = 0x10000;
    *temp_v14 = 0;
    *(int *)temp_v22 = 0;
    return 0x43;
  }
  if (*(char *)(param_2 + temp_v0) == '\0') {
    *param_3 = temp_v0 + 1;
    if (*(char *)((int)param_1 + 0x148d) == '\0') {
      *param_3 = *(unsigned int *)((int)param_1 + 0x147c);
      return 0x101;
    }
    return 0x101;
  }
  temp_v19 = temp_v0 + param_2;
  temp_v5 = 1;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  plStack_34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  temp_v24 = param_4;
  while (temp_v8 = FUN_004acc1c(&temp_v16,1), temp_v8 == 0) {
    temp_v5 = temp_v5 + 1;
  }
  temp_v0 = FUN_004acc1c(&temp_v16,temp_v5);
  temp_v20 = (int)param_1[0x286];
  temp_v5 = *(int *)((int)param_1[0x286] + 4);
  while (temp_v5 != 0) {
    if (*(unsigned int *)(temp_v5 + 0x10) >= temp_v0) {
      temp_v20 = temp_v5;
      temp_v5 = *(int *)(temp_v5 + 8);
    }
    else {
      temp_v5 = *(int *)(temp_v5 + 0xc);
    }
  }
  temp_v21 = (int)param_1[0x286];
  temp_v5 = *(int *)((int)param_1[0x286] + 4);
  while (temp_v5 != 0) {
    if (temp_v0 < *(unsigned int *)(temp_v5 + 0x10)) {
      temp_v21 = temp_v5;
      temp_v5 = *(int *)(temp_v5 + 8);
    }
    else {
      temp_v5 = *(int *)(temp_v5 + 0xc);
    }
  }
  temp_v23 = param_1 + 0x291;
  if (temp_v20 != (int)param_1[0x286]) {
    temp_v3 = 0;
    temp_v5 = temp_v20;
    if (temp_v20 != temp_v21) {
      do {
        if (*(char *)(*(int *)(*(int *)(temp_v5 + 0x18) + 0x10) + 0x68) != '\0') {
          temp_v3 = *(int *)(temp_v5 + 0x18);
        }
        temp_v7 = *(int *)(temp_v5 + 0xc);
        if (*(int *)(temp_v5 + 0xc) != 0) {
          do {
            temp_v5 = temp_v7;
            temp_v7 = *(int *)(temp_v5 + 8);
          } while (*(int *)(temp_v5 + 8) != 0);
        }
        else {
          temp_v7 = *(int *)(temp_v5 + 4);
          if (temp_v5 == *(int *)(temp_v7 + 0xc)) {
            do {
              temp_v5 = temp_v7;
              temp_v7 = *(int *)(temp_v5 + 4);
            } while (temp_v5 == *(int *)(temp_v7 + 0xc));
          }
          if (*(int *)(temp_v5 + 0xc) != temp_v7) {
            temp_v5 = temp_v7;
          }
        }
      } while (temp_v5 != temp_v21);
      if (temp_v3 != 0) {
        temp_v5 = *(int *)(temp_v3 + 0x10);
        aiStack_44[1] = FUN_004acc1c(&temp_v16,1);
        FUN_004ac83c(temp_v5);
        if (aiStack_44[1] != 0) {
          temp_v11[0] = (unsigned int *)&temp_v16;
          temp_v3 = 1;
          while (temp_v8 = FUN_004acc1c(temp_v11[0],1), temp_v8 == 0) {
            temp_v3 = temp_v3 + 1;
          }
          temp_v12 = FUN_004acc1c(temp_v11[0],temp_v3);
          temp_v15 = FUN_004acc1c(&temp_v16,1);
          temp_v11[0] = (unsigned int *)&temp_v16;
          temp_v3 = 0x1c;
          while (temp_v8 = FUN_004acc1c(temp_v11[0],1), temp_v8 == 0) {
            temp_v3 = temp_v3 + 2;
          }
          temp_v8 = FUN_004acc1c(temp_v11[0],temp_v3);
          if (temp_v15 != 0) {
            temp_v8 = romwright_piece_4_4(-((int)((unsigned long long)temp_v8 >> 0x20) + (unsigned int)((int)temp_v8 != 0)),
                              -(int)temp_v8);
          }
          *(char *)(*(int *)(temp_v5 + 0x48) + 0x10) = (char)temp_v12;
          **(long long **)(temp_v5 + 0x48) = temp_v8 + *param_1;
        }
        temp_v3 = FUN_004acc1c(&temp_v16,0xd);
        temp_v0 = temp_v19 - param_2;
        *param_3 = temp_v0;
        temp_v3 = temp_v3 + 1;
        if (temp_v24 < temp_v0 + temp_v3) {
          if (*(romwright_code **)temp_v23 != (romwright_code *)0x0) {
            (**(romwright_code **)temp_v23)(0x4af87c);
          }
          *(unsigned int *)param_1 = 0;
          *(unsigned int *)((int)param_1 + 4) = 0;
          *(unsigned int *)(param_1 + 1) = 0;
          *(unsigned int *)((int)param_1 + 0xc) = 0;
          *(unsigned int *)plVar12 = 0x40;
          *puVar3 = 0x10000;
          *temp_v14 = 0;
          *(int *)temp_v22 = 0;
          return 0x43;
        }
        temp_v7 = temp_v0 + param_2 + temp_v3;
        param_2 = temp_v0 + param_2;
        if (param_2 != temp_v7) {
          temp_v0 = *(unsigned int *)(temp_v5 + 0xc);
          temp_v4 = temp_v7 - param_2;
          temp_v6 = *(int *)(temp_v5 + 0x10) + temp_v4;
          if (temp_v0 >= temp_v6) {
            temp_v2 = *(int *)(temp_v5 + 0x10) + *(int *)(temp_v5 + 0x14);
            if (temp_v0 <= temp_v2) {
              temp_v2 = temp_v2 - temp_v0;
            }
            if (temp_v0 >= temp_v2 + temp_v4) {
              temp_v1 = *(int *)(temp_v5 + 8) + temp_v2;
              temp_v7 = param_2;
              rt_memcpy(temp_v1,temp_v7,temp_v4);
            }
            else {
              temp_v7 = param_2 + (temp_v0 - temp_v2);
              if (param_2 != temp_v7) {
                rt_memcpy(*(int *)(temp_v5 + 8) + temp_v2,param_2,temp_v7 - param_2);
              }
              temp_v7 = param_2 + (temp_v0 - temp_v2);
              if (temp_v7 != param_2 + temp_v4) {
                temp_v1 = *(int *)(temp_v5 + 8);
                temp_v4 = (param_2 + temp_v4) - temp_v7;
                rt_memcpy(temp_v1,temp_v7,temp_v4);
              }
            }
          }
          else {
            temp_v2 = *(int *)(temp_v5 + 0x18) - 1;
            temp_v12 = (temp_v6 + temp_v2) & ~temp_v2;
            temp_v4 = containerGrowCapacity(temp_v0,temp_v6);
            temp_v4 = moLiveRingBufferReallocate(temp_v5 + 4,temp_v12,(temp_v4 + temp_v2) & ~temp_v2,0);
            if (temp_v4 != 0) {
              if (param_2 != temp_v7) {
                rt_memcpy(*(int *)(temp_v5 + 0x10) + *(int *)(temp_v5 + 8),param_2,temp_v7 - param_2);
              }
              *(unsigned int *)(temp_v5 + 0x14) = 0;
            }
            else {
              return 0x44;
            }
          }
          *(unsigned int *)(temp_v5 + 0x10) = temp_v6;
        }
        *(int *)(*(int *)(temp_v5 + 0x48) + 8) = *(int *)(*(int *)(temp_v5 + 0x48) + 8) + temp_v3;
        *(int *)(*(int *)(temp_v5 + 0x48) + 0xc) = *(int *)(*(int *)(temp_v5 + 0x48) + 0xc) + temp_v3;
        *param_3 = *param_3 + temp_v3;
        if (aiStack_44[1] != 0) {
          temp_v0 = *(unsigned int *)(*(int *)(temp_v5 + 0x48) + 0xc);
          if ((temp_v0 & 3) != 0) {
            temp_v3 = 4 - (temp_v0 & 3);
            puVar3 = &temp_v22;
            puVar10 = (unsigned int *)((int)puVar3 + temp_v3);
            if (puVar3 != puVar10) {
              temp_v0 = *(unsigned int *)(temp_v5 + 0xc);
              temp_v7 = (int)puVar10 - (int)puVar3;
              temp_v6 = *(int *)(temp_v5 + 0x10) + temp_v7;
              if (temp_v0 >= temp_v6) {
                temp_v2 = *(int *)(temp_v5 + 0x14) + *(int *)(temp_v5 + 0x10);
                if (temp_v0 <= temp_v2) {
                  temp_v2 = temp_v2 - temp_v0;
                }
                if (temp_v0 >= temp_v2 + temp_v7) {
                  do {
                    puVar5 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v2);
                    if (puVar5 != (unsigned char *)0x0) {
                      *puVar5 = *(unsigned char *)puVar3;
                    }
                    puVar3 = (unsigned int *)((int)puVar3 + 1);
                    temp_v2 = temp_v2 + 1;
                  } while (puVar3 != puVar10);
                }
                else {
                  temp_v4 = temp_v0 - temp_v2;
                  for (puVar10 = puVar3; puVar10 != (unsigned int *)((int)puVar3 + temp_v4);
                      puVar10 = (unsigned int *)((int)puVar10 + 1)) {
                    puVar5 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v2);
                    if (puVar5 != (unsigned char *)0x0) {
                      *puVar5 = *(unsigned char *)puVar10;
                    }
                    temp_v2 = temp_v2 + 1;
                  }
                  temp_v1 = 0;
                  for (puVar5 = (unsigned char *)((int)puVar3 + temp_v4);
                      puVar5 != (unsigned char *)(temp_v7 + (int)puVar3); puVar5 = puVar5 + 1) {
                    puVar8 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v1);
                    if (puVar8 != (unsigned char *)0x0) {
                      *puVar8 = *puVar5;
                    }
                    temp_v1 = temp_v1 + 1;
                  }
                }
              }
              else {
                temp_v2 = *(int *)(temp_v5 + 0x18) - 1;
                temp_v13 = (temp_v6 + temp_v2) & ~temp_v2;
                temp_v7 = containerGrowCapacity(temp_v0,temp_v6);
                temp_v7 = moLiveRingBufferReallocate(temp_v5 + 4,temp_v13,(temp_v7 + temp_v2) & ~temp_v2,0);
                if (temp_v7 == 0) {
                  return 0x44;
                }
                temp_v7 = *(int *)(temp_v5 + 0x10);
                do {
                  puVar5 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v7);
                  if (puVar5 != (unsigned char *)0x0) {
                    *puVar5 = *(unsigned char *)puVar3;
                  }
                  puVar3 = (unsigned int *)((int)puVar3 + 1);
                  temp_v7 = temp_v7 + 1;
                } while (puVar3 != puVar10);
                *(unsigned int *)(temp_v5 + 0x14) = 0;
              }
              *(unsigned int *)(temp_v5 + 0x10) = temp_v6;
            }
            *(int *)(*(int *)(temp_v5 + 0x48) + 0xc) = *(int *)(*(int *)(temp_v5 + 0x48) + 0xc) + temp_v3;
          }
          temp_v10 = temp_v5 + 0x44;
          temp_v11[0] = (unsigned int *)(temp_v5 + 0x54);
          temp_v3 = temp_v5 + 0x2c;
          FUN_005211a4(temp_v3,&temp_v10,temp_v11);
          if (temp_v3 == 0) {
            return 0x44;
          }
          puVar3 = *(unsigned int **)(temp_v5 + 0x4c);
          puVar10 = (unsigned int *)(temp_v5 + 0x44);
          if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar10) {
            if (*(int *)(temp_v5 + 0x48) != 0) {
              (**(romwright_code **)(*(int *)*puVar10 + 4))();
            }
          }
          else {
            puVar3[3] = *(unsigned int *)(temp_v5 + 0x50);
            *(unsigned int *)(*(int *)(temp_v5 + 0x50) + 8) = *(unsigned int *)(temp_v5 + 0x4c);
            *(unsigned int *)(temp_v5 + 0x4c) = 0;
            *(unsigned int *)(temp_v5 + 0x50) = 0;
          }
          *(unsigned int *)(temp_v5 + 0x48) = 0;
          *(unsigned int **)(temp_v5 + 0x50) = puVar10;
          *(unsigned int **)(temp_v5 + 0x4c) = puVar10;
        }
        if (temp_v24 > *param_3) {
          return 0;
        }
        return 0x101;
      }
    }
    if (*(romwright_code **)temp_v23 != (romwright_code *)0x0) {
      (**(romwright_code **)temp_v23)(&LAB_004af89c,temp_v0);
    }
    *(unsigned int *)param_1 = 0;
    *(unsigned int *)((int)param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 1) = 0;
    *(unsigned int *)((int)param_1 + 0xc) = 0;
    *(unsigned int *)plVar12 = 0x40;
    *puVar3 = 0x10000;
    *temp_v14 = 0;
    *(int *)temp_v22 = 0;
    return 0x48;
  }
  if (*(romwright_code **)temp_v23 != (romwright_code *)0x0) {
    (**(romwright_code **)temp_v23)(&LAB_004af858,temp_v0);
  }
  *(unsigned int *)param_1 = 0;
  *(unsigned int *)((int)param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 1) = 0;
  *(unsigned int *)((int)param_1 + 0xc) = 0;
  *(unsigned int *)plVar12 = 0x40;
  *puVar3 = 0x10000;
  *temp_v14 = 0;
  *(int *)temp_v22 = 0;
  return 0x47;
}

} /* extern "C" */
