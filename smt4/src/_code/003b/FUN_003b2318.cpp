/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b2318` (_code @ 0x3b2318, 0xd14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b92c(...);
int FUN_0022bc54(...);
int FUN_0022bcc4(...);
int FUN_0022be6c(...);
int FUN_0022c0a4(...);
int FUN_003fb694(...);

typedef int romwright_code(...);
/* stack frame of param_4: 22 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned char sp84; /* 0x84: local_84 */
    unsigned char sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned char sp9C; /* 0x9c: local_9c */
} param_4_stack;

extern unsigned char LAB_003b2774; /* 0x3b2774 */
extern unsigned char LAB_003b27b8; /* 0x3b27b8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0022b92c. */
/* Supplied declaration required: FUN_0022bc54. */
/* Supplied declaration required: FUN_0022bcc4. */
/* Supplied declaration required: FUN_0022be6c. */
/* Supplied declaration required: FUN_0022c0a4. */
extern int FUN_003af8d0(int);
/* Supplied declaration required: FUN_003fb694. */
extern int FUN_003fbfd0(int);


unsigned int FUN_003b2318(long long *param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char *puVar7;
  int temp_v5;
  unsigned char *puVar9;
  int temp_v6;
  int temp_v7;
  unsigned char *puVar12;
  long long *plVar13;
  unsigned char *puVar14;
  int temp_v8;
  unsigned int *puVar16;
  unsigned int temp_v9;
  unsigned char *puVar18;
  long long temp_v10;
  unsigned char temp_v11 [4];
  unsigned int *temp_v12;
  int temp_v13;
  long long *temp_v14;
  int temp_v15;
  unsigned char temp_v16 [4];
  unsigned char temp_v17 [4];
  int temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  unsigned char temp_v24 [4];
  unsigned char *temp_v25;
  unsigned char *temp_v26;
  int temp_v27;
  unsigned char temp_v28 [4];
  int temp_v29;
  int temp_v30;
  int temp_v31 [2];
  int temp_v32;
  long long *plStack_34;
  int iStack_30;
  unsigned int *puStack_2c;
  unsigned int temp_v33;
  
  temp_v4 = *param_3;
  temp_v25 = (unsigned char *)((int)param_1 + 0x1487);
  temp_v26 = (unsigned char *)((int)param_1 + 0x1489);
  plVar13 = param_1 + 0x28f;
  puVar16 = (unsigned int *)((int)param_1 + 0x147c);
  if (temp_v4 == param_4) {
    return 0x101;
  }
  if (param_4 < temp_v4) {
    *(unsigned int *)param_1 = 0;
    *(unsigned int *)((int)param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 1) = 0;
    *(unsigned int *)((int)param_1 + 0xc) = 0;
    *(unsigned int *)plVar13 = 0x40;
    *puVar16 = 0x10000;
    *temp_v25 = 0;
    *temp_v26 = 0;
    return 0x43;
  }
  if (*(char *)(param_2 + temp_v4) == '\0') {
    *param_3 = temp_v4 + 1;
    if (*(char *)((int)param_1 + 0x1485) != '\0') {
      return 0x101;
    }
    *param_3 = *(unsigned int *)((int)param_1 + 0x1474);
    return 0x101;
  }
  temp_v23 = temp_v4 + param_2;
  temp_v6 = 1;
  temp_v22 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  plStack_34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  temp_v33 = param_4;
  while (temp_v10 = FUN_0022be6c(&temp_v20,1), temp_v10 == 0) {
    temp_v6 = temp_v6 + 1;
  }
  temp_v4 = FUN_0022be6c(&temp_v20,temp_v6);
  temp_v18 = (int)param_1[0x285];
  temp_v6 = *(int *)((int)param_1[0x285] + 4);
  while (temp_v6 != 0) {
    if (*(unsigned int *)(temp_v6 + 0x10) >= temp_v4) {
      temp_v18 = temp_v6;
      temp_v6 = *(int *)(temp_v6 + 8);
    }
    else {
      temp_v6 = *(int *)(temp_v6 + 0xc);
    }
  }
  temp_v19 = (int)param_1[0x285];
  temp_v6 = *(int *)((int)param_1[0x285] + 4);
  while (temp_v6 != 0) {
    if (temp_v4 < *(unsigned int *)(temp_v6 + 0x10)) {
      temp_v19 = temp_v6;
      temp_v6 = *(int *)(temp_v6 + 8);
    }
    else {
      temp_v6 = *(int *)(temp_v6 + 0xc);
    }
  }
  temp_v14 = param_1 + 0x290;
  if (temp_v18 == (int)param_1[0x285]) {
    if (*(romwright_code **)temp_v14 != (romwright_code *)0x0) {
      (**(romwright_code **)temp_v14)(&LAB_003b2774,temp_v4);
    }
    *(unsigned int *)param_1 = 0;
    *(unsigned int *)((int)param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 1) = 0;
    *(unsigned int *)((int)param_1 + 0xc) = 0;
    *(unsigned int *)plVar13 = 0x40;
    *puVar16 = 0x10000;
    *temp_v25 = 0;
    *temp_v26 = 0;
    return 0x47;
  }
  temp_v5 = 0;
  temp_v6 = temp_v18;
  if (temp_v18 != temp_v19) {
    do {
      if (*(char *)(*(int *)(*(int *)(temp_v6 + 0x18) + 0x10) + 0x70) != '\0') {
        temp_v5 = *(int *)(temp_v6 + 0x18);
      }
      temp_v1 = *(int *)(temp_v6 + 0xc);
      if (*(int *)(temp_v6 + 0xc) != 0) {
        do {
          temp_v6 = temp_v1;
          temp_v1 = *(int *)(temp_v6 + 8);
        } while (*(int *)(temp_v6 + 8) != 0);
      }
      else {
        temp_v1 = *(int *)(temp_v6 + 4);
        if (temp_v6 == *(int *)(temp_v1 + 0xc)) {
          do {
            temp_v6 = temp_v1;
            temp_v1 = *(int *)(temp_v6 + 4);
          } while (temp_v6 == *(int *)(temp_v1 + 0xc));
        }
        if (*(int *)(temp_v6 + 0xc) != temp_v1) {
          temp_v6 = temp_v1;
        }
      }
    } while (temp_v6 != temp_v19);
    if (temp_v5 != 0) {
      temp_v5 = *(int *)(temp_v5 + 0x10);
      temp_v27 = FUN_0022be6c(&temp_v20,1);
      temp_v6 = FUN_003af8d0(temp_v5);
      if (temp_v6 != 0) {
        if (temp_v27 != 0) {
          temp_v12 = (unsigned int *)&temp_v20;
          temp_v6 = 1;
          while (temp_v10 = FUN_0022be6c(temp_v12,1), temp_v10 == 0) {
            temp_v6 = temp_v6 + 1;
          }
          temp_v13 = FUN_0022be6c(temp_v12,temp_v6);
          temp_v15 = FUN_0022be6c(&temp_v20,1);
          temp_v12 = (unsigned int *)&temp_v20;
          temp_v6 = 0x1c;
          while (temp_v10 = FUN_0022be6c(temp_v12,1), temp_v10 == 0) {
            temp_v6 = temp_v6 + 2;
          }
          temp_v10 = FUN_0022be6c(temp_v12,temp_v6);
          if (temp_v15 != 0) {
            temp_v10 = romwright_piece_4_4(-((int)((unsigned long long)temp_v10 >> 0x20) + (unsigned int)((int)temp_v10 != 0)),
                              -(int)temp_v10);
          }
          *(unsigned int *)(*(int *)(temp_v5 + 0x50) + 0x10) = temp_v13;
          **(long long **)(temp_v5 + 0x50) = temp_v10 + *param_1;
        }
        temp_v6 = FUN_0022be6c(&temp_v20,0xd);
        temp_v6 = temp_v6 + 1;
        *param_3 = temp_v23 - param_2;
        if (temp_v33 < (unsigned int)((temp_v23 - param_2) + temp_v6)) {
          if (*(romwright_code **)temp_v14 != (romwright_code *)0x0) {
            (**(romwright_code **)temp_v14)(0x3b2798);
          }
          *(unsigned int *)param_1 = 0;
          *(unsigned int *)((int)param_1 + 4) = 0;
          *(unsigned int *)(param_1 + 1) = 0;
          *(unsigned int *)((int)param_1 + 0xc) = 0;
          *(unsigned int *)plVar13 = 0x40;
          *puVar16 = 0x10000;
          *temp_v25 = 0;
          *temp_v26 = 0;
          return 0x43;
        }
        temp_v11[0] = 0;
        if (((*(unsigned int *)(temp_v5 + 0x18) < *(unsigned int *)(temp_v5 + 0x14)) ||
            (temp_v4 = *(unsigned int *)(temp_v5 + 0x10), (temp_v4 & 3) == 0)) ||
           (temp_v1 = FUN_0022bcc4(temp_v5 + 4,(temp_v4 + 4) - (temp_v4 & 3),temp_v11), temp_v1 != 0)) {
          temp_v1 = temp_v5 + 4;
          FUN_0022bc54(temp_v28,temp_v1);
          puVar14 = (unsigned char *)(*param_3 + param_2 + temp_v6);
          puVar12 = (unsigned char *)(param_2 + *param_3);
          if (*(int *)(temp_v5 + 0x1c) != 0) {
            temp_v9 = (int)puVar14 - (int)puVar12;
            temp_v4 = *(int *)(temp_v5 + 0x1c) + temp_v9;
            *(unsigned int *)(temp_v5 + 0x1c) = temp_v4;
            if (*(unsigned int *)(temp_v5 + 0x10) >= temp_v4) {
              temp_v8 = *(int *)(temp_v5 + 0x14);
              FUN_0022bc54(temp_v31,temp_v1);
              if (temp_v32 - temp_v30 >= temp_v30 - temp_v8) {
                temp_v4 = *(unsigned int *)(temp_v5 + 0x14);
                temp_v30 = temp_v30 - temp_v4;
                if (temp_v4 >= temp_v9) {
                  temp_v1 = -temp_v9;
                }
                else {
                  temp_v1 = *(int *)(temp_v5 + 0x10) - temp_v9;
                }
                temp_v3 = temp_v4 + temp_v1;
                *(unsigned int *)(temp_v5 + 0x14) = temp_v3;
                while (temp_v30 != 0) {
                  temp_v30 = temp_v30 - 1;
                  *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v3) =
                       *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v4);
                  if (temp_v4 == *(unsigned int *)(temp_v5 + 0x10)) {
                    temp_v4 = 0;
                  }
                  if (temp_v3 == *(unsigned int *)(temp_v5 + 0x10)) {
                    temp_v3 = 0;
                  }
                }
                if (0 < (int)temp_v9) {
                  do {
                    temp_v4 = temp_v3 + 1;
                    *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v3) = *puVar12;
                    if (temp_v4 == *(unsigned int *)(temp_v5 + 0x10)) {
                      temp_v4 = 0;
                    }
                    temp_v9 = temp_v9 - 1;
                    temp_v3 = temp_v4;
                    puVar12 = puVar12 + 1;
                  } while (temp_v9 != 0);
                }
              }
              else {
                FUN_0022bc54(&temp_v13,temp_v1);
                temp_v8 = *(int *)(temp_v5 + 0x18);
                temp_v4 = *(unsigned int *)(temp_v5 + 0x10);
                temp_v30 = temp_v15 - temp_v30;
                temp_v1 = temp_v8;
                if (temp_v8 == 0) {
                  temp_v1 = *(int *)(temp_v5 + 0x10);
                }
                temp_v3 = temp_v8 + temp_v9;
                *(unsigned int *)(temp_v5 + 0x18) = temp_v3;
                if (temp_v4 < temp_v3) {
                  temp_v3 = temp_v3 - temp_v4;
                  *(unsigned int *)(temp_v5 + 0x18) = temp_v3;
                }
                if (temp_v3 != 0) {
                  temp_v4 = temp_v3;
                }
                while (temp_v8 = temp_v1 - 1, temp_v30 != 0) {
                  temp_v4 = temp_v4 - 1;
                  temp_v30 = temp_v30 - 1;
                  *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v4) =
                       *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v8);
                  if (temp_v8 == 0) {
                    temp_v8 = *(int *)(temp_v5 + 0x10);
                  }
                  temp_v1 = temp_v8;
                  if (temp_v4 == 0) {
                    temp_v4 = *(unsigned int *)(temp_v5 + 0x10);
                  }
                }
                if (*(int *)(temp_v5 + 0x10) == temp_v1) {
                  temp_v1 = 0;
                }
                if (0 < (int)temp_v9) {
                  do {
                    temp_v8 = temp_v1 + 1;
                    *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v1) = *puVar12;
                    if (temp_v8 == *(int *)(temp_v5 + 0x10)) {
                      temp_v8 = 0;
                    }
                    temp_v9 = temp_v9 - 1;
                    temp_v1 = temp_v8;
                    puVar12 = puVar12 + 1;
                  } while (temp_v9 != 0);
                }
              }
            }
            else {
              temp_v31[0] = temp_v30 - *(int *)(temp_v5 + 0x14);
              if (*(unsigned int *)(temp_v5 + 0x18) <= *(unsigned int *)(temp_v5 + 0x14)) {
                temp_v16[0] = *puVar12;
                temp_v7 = *(int *)(temp_v5 + 0x10);
                temp_v8 = FUN_0022bcc4(temp_v1,(*(int *)(temp_v5 + 0x1c) - temp_v9) +
                                            *(unsigned int *)(temp_v5 + 0x14),temp_v16);
                if (temp_v8 == 0) {
                  return 0x44;
                }
                temp_v4 = *(unsigned int *)(temp_v5 + 0x18);
                if (temp_v4 != 0) {
                  puVar9 = *(unsigned char **)(temp_v5 + 8);
                  puVar18 = puVar9 + temp_v7;
                  if (0 < (int)temp_v4) {
                    puVar3 = puVar9 + -1;
                    puVar7 = puVar18 + -1;
                    if ((temp_v4 & 1) != 0) {
                      *puVar18 = *puVar9;
                      puVar3 = puVar9;
                      puVar7 = puVar18;
                    }
                    for (temp_v8 = (int)temp_v4 >> 1; temp_v8 != 0; temp_v8 = temp_v8 - 1) {
                      puVar7[1] = puVar3[1];
                      puVar3 = puVar3 + 2;
                      puVar7 = puVar7 + 2;
                      *puVar7 = *puVar3;
                    }
                  }
                }
                *(int *)(temp_v5 + 0x18) = *(int *)(temp_v5 + 0x18) + temp_v7;
              }
              temp_v8 = *(int *)(temp_v5 + 0x14) + temp_v31[0];
              if (puVar14 != puVar12) {
                FUN_0022b92c(temp_v1,temp_v8,temp_v9);
                temp_v4 = temp_v9;
                if (temp_v1 == 0) {
                  return 0x44;
                }
                do {
                  puVar14 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v8);
                  if (puVar14 != (unsigned char *)0x0) {
                    *puVar14 = *puVar12;
                  }
                  temp_v8 = temp_v8 + 1;
                  puVar12 = puVar12 + 1;
                  temp_v4 = temp_v4 - 1;
                } while (temp_v4 != 0);
              }
              temp_v9 = *(int *)(temp_v5 + 0x18) + temp_v9;
              *(unsigned int *)(temp_v5 + 0x18) = temp_v9;
              if (*(unsigned int *)(temp_v5 + 0x10) < temp_v9) {
                *(unsigned int *)(temp_v5 + 0x18) = temp_v9 - *(unsigned int *)(temp_v5 + 0x10);
              }
            }
          }
          else {
            temp_v7 = (int)puVar14 - (int)puVar12;
            temp_v8 = FUN_003fbfd0(temp_v1);
            if (temp_v8 == 0) {
              return 0x44;
            }
            temp_v24[0] = 0;
            temp_v8 = FUN_0022bcc4(temp_v1,0,temp_v24);
            if (temp_v8 == 0) {
              return 0x44;
            }
            for (; puVar12 != puVar14; puVar12 = puVar12 + 1) {
              temp_v2 = *(int *)(temp_v5 + 0x10);
              temp_v8 = temp_v1;
              FUN_0022b92c(temp_v1,temp_v2,1);
              temp_v0 = 0;
              if (temp_v8 == 0) goto LAB_003b2a4c;
              puVar9 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v2);
              if (puVar9 != (unsigned char *)0x0) {
                *puVar9 = *puVar12;
              }
            }
            *(int *)(temp_v5 + 0x1c) = temp_v7;
            *(unsigned int *)(temp_v5 + 0x14) = 0;
            *(int *)(temp_v5 + 0x18) = temp_v7;
            temp_v0 = 1;
LAB_003b2a4c:
            if (!temp_v0) {
              return 0x44;
            }
          }
          *(int *)(*(int *)(temp_v5 + 0x50) + 8) = *(int *)(*(int *)(temp_v5 + 0x50) + 8) + temp_v6;
          *(int *)(*(int *)(temp_v5 + 0x50) + 0xc) = *(int *)(*(int *)(temp_v5 + 0x50) + 0xc) + temp_v6;
          *param_3 = *param_3 + temp_v6;
          if (temp_v27 != 0) {
            temp_v4 = *(unsigned int *)(*(int *)(temp_v5 + 0x50) + 0xc);
            if ((temp_v4 & 3) != 0) {
              temp_v1 = 4 - (temp_v4 & 3);
              temp_v6 = temp_v5 + 4;
              FUN_0022bc54(&temp_v27,temp_v6);
              puVar12 = temp_v17;
              puVar14 = puVar12 + temp_v1;
              if (*(int *)(temp_v5 + 0x1c) != 0) {
                temp_v9 = (int)puVar14 - (int)puVar12;
                temp_v4 = *(int *)(temp_v5 + 0x1c) + temp_v9;
                *(unsigned int *)(temp_v5 + 0x1c) = temp_v4;
                if (*(unsigned int *)(temp_v5 + 0x10) >= temp_v4) {
                  temp_v8 = *(int *)(temp_v5 + 0x14);
                  FUN_0022bc54(temp_v24,temp_v6);
                  if ((int)temp_v26 - temp_v29 >= temp_v29 - temp_v8) {
                    temp_v4 = *(unsigned int *)(temp_v5 + 0x14);
                    temp_v29 = temp_v29 - temp_v4;
                    if (temp_v4 >= temp_v9) {
                      temp_v6 = -temp_v9;
                    }
                    else {
                      temp_v6 = *(int *)(temp_v5 + 0x10) - temp_v9;
                    }
                    temp_v3 = temp_v4 + temp_v6;
                    *(unsigned int *)(temp_v5 + 0x14) = temp_v3;
                    while (temp_v29 != 0) {
                      temp_v29 = temp_v29 - 1;
                      *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v3) =
                           *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v4);
                      if (temp_v4 == *(unsigned int *)(temp_v5 + 0x10)) {
                        temp_v4 = 0;
                      }
                      if (temp_v3 == *(unsigned int *)(temp_v5 + 0x10)) {
                        temp_v3 = 0;
                      }
                    }
                    if (0 < (int)temp_v9) {
                      do {
                        temp_v4 = temp_v3 + 1;
                        *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v3) = *puVar12;
                        if (temp_v4 == *(unsigned int *)(temp_v5 + 0x10)) {
                          temp_v4 = 0;
                        }
                        temp_v9 = temp_v9 - 1;
                        temp_v3 = temp_v4;
                        puVar12 = puVar12 + 1;
                      } while (temp_v9 != 0);
                    }
                  }
                  else {
                    FUN_0022bc54(temp_v24,temp_v6);
                    temp_v8 = *(int *)(temp_v5 + 0x18);
                    temp_v4 = *(unsigned int *)(temp_v5 + 0x10);
                    temp_v29 = (int)temp_v26 - temp_v29;
                    temp_v6 = temp_v8;
                    if (temp_v8 == 0) {
                      temp_v6 = *(int *)(temp_v5 + 0x10);
                    }
                    temp_v3 = temp_v8 + temp_v9;
                    *(unsigned int *)(temp_v5 + 0x18) = temp_v3;
                    if (temp_v4 < temp_v3) {
                      temp_v3 = temp_v3 - temp_v4;
                      *(unsigned int *)(temp_v5 + 0x18) = temp_v3;
                    }
                    if (temp_v3 != 0) {
                      temp_v4 = temp_v3;
                    }
                    while (temp_v8 = temp_v6 - 1, temp_v29 != 0) {
                      temp_v4 = temp_v4 - 1;
                      temp_v29 = temp_v29 - 1;
                      *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v4) =
                           *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v8);
                      if (temp_v8 == 0) {
                        temp_v8 = *(int *)(temp_v5 + 0x10);
                      }
                      temp_v6 = temp_v8;
                      if (temp_v4 == 0) {
                        temp_v4 = *(unsigned int *)(temp_v5 + 0x10);
                      }
                    }
                    if (*(int *)(temp_v5 + 0x10) == temp_v6) {
                      temp_v6 = 0;
                    }
                    if (0 < (int)temp_v9) {
                      do {
                        temp_v8 = temp_v6 + 1;
                        *(unsigned char *)(*(int *)(temp_v5 + 8) + temp_v6) = *puVar12;
                        if (temp_v8 == *(int *)(temp_v5 + 0x10)) {
                          temp_v8 = 0;
                        }
                        temp_v9 = temp_v9 - 1;
                        temp_v6 = temp_v8;
                        puVar12 = puVar12 + 1;
                      } while (temp_v9 != 0);
                    }
                  }
                }
                else {
                  temp_v31[0] = temp_v29 - *(int *)(temp_v5 + 0x14);
                  if (*(unsigned int *)(temp_v5 + 0x18) <= *(unsigned int *)(temp_v5 + 0x14)) {
                    temp_v25 = (unsigned char *)romwright_piece_3_1((((unsigned int)(temp_v25) >> 8) & 0xffffffU),temp_v17[0]);
                    temp_v7 = *(int *)(temp_v5 + 0x10);
                    temp_v8 = FUN_0022bcc4(temp_v6,(*(int *)(temp_v5 + 0x1c) - temp_v9) +
                                                 *(unsigned int *)(temp_v5 + 0x14),&temp_v25);
                    if (temp_v8 == 0) {
                      return 0x44;
                    }
                    temp_v4 = *(unsigned int *)(temp_v5 + 0x18);
                    if (temp_v4 != 0) {
                      puVar18 = *(unsigned char **)(temp_v5 + 8);
                      puVar9 = puVar18 + temp_v7;
                      if (0 < (int)temp_v4) {
                        puVar3 = puVar18 + -1;
                        puVar7 = puVar9 + -1;
                        if ((temp_v4 & 1) != 0) {
                          *puVar9 = *puVar18;
                          puVar3 = puVar18;
                          puVar7 = puVar9;
                        }
                        for (temp_v8 = (int)temp_v4 >> 1; temp_v8 != 0; temp_v8 = temp_v8 - 1) {
                          puVar7[1] = puVar3[1];
                          puVar3 = puVar3 + 2;
                          puVar7 = puVar7 + 2;
                          *puVar7 = *puVar3;
                        }
                      }
                    }
                    *(int *)(temp_v5 + 0x18) = *(int *)(temp_v5 + 0x18) + temp_v7;
                  }
                  temp_v8 = temp_v31[0] + *(int *)(temp_v5 + 0x14);
                  if (puVar14 != puVar12) {
                    FUN_0022b92c(temp_v6,temp_v8,temp_v9);
                    temp_v4 = temp_v9;
                    if (temp_v6 == 0) {
                      return 0x44;
                    }
                    do {
                      puVar14 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v8);
                      if (puVar14 != (unsigned char *)0x0) {
                        *puVar14 = *puVar12;
                      }
                      temp_v8 = temp_v8 + 1;
                      puVar12 = puVar12 + 1;
                      temp_v4 = temp_v4 - 1;
                    } while (temp_v4 != 0);
                  }
                  temp_v9 = *(int *)(temp_v5 + 0x18) + temp_v9;
                  *(unsigned int *)(temp_v5 + 0x18) = temp_v9;
                  if (*(unsigned int *)(temp_v5 + 0x10) < temp_v9) {
                    *(unsigned int *)(temp_v5 + 0x18) = temp_v9 - *(unsigned int *)(temp_v5 + 0x10);
                  }
                }
              }
              else {
                temp_v7 = (int)puVar14 - (int)puVar12;
                temp_v8 = FUN_003fbfd0(temp_v6);
                if (temp_v8 == 0) {
                  return 0x44;
                }
                temp_v24[0] = 0;
                temp_v8 = FUN_0022bcc4(temp_v6,0,temp_v24);
                if (temp_v8 == 0) {
                  return 0x44;
                }
                for (; puVar12 != puVar14; puVar12 = puVar12 + 1) {
                  temp_v2 = *(int *)(temp_v5 + 0x10);
                  temp_v8 = temp_v6;
                  FUN_0022b92c(temp_v6,temp_v2,1);
                  temp_v0 = 0;
                  if (temp_v8 == 0) goto LAB_003b2e3c;
                  puVar9 = (unsigned char *)(*(int *)(temp_v5 + 8) + temp_v2);
                  if (puVar9 != (unsigned char *)0x0) {
                    *puVar9 = *puVar12;
                  }
                }
                *(int *)(temp_v5 + 0x1c) = temp_v7;
                *(unsigned int *)(temp_v5 + 0x14) = 0;
                *(int *)(temp_v5 + 0x18) = temp_v7;
                temp_v0 = 1;
LAB_003b2e3c:
                if (!temp_v0) {
                  return 0x44;
                }
              }
              *(int *)(*(int *)(temp_v5 + 0x50) + 0xc) =
                   *(int *)(*(int *)(temp_v5 + 0x50) + 0xc) + temp_v1;
            }
            temp_v6 = temp_v5 + 0x30;
            FUN_003fb694(temp_v6,temp_v5 + 0x4c);
            if (temp_v6 == 0) {
              return 0x44;
            }
            temp_v6 = temp_v5 + 0x4c;
            FUN_0022c0a4(temp_v6);
            *(unsigned int *)(temp_v5 + 0x50) = 0;
            *(int *)(temp_v5 + 0x58) = temp_v6;
            *(int *)(temp_v5 + 0x54) = temp_v6;
          }
          if (*param_3 < temp_v33) {
            return 0;
          }
          return 0x101;
        }
      }
      return 0x44;
    }
  }
  if (*(romwright_code **)temp_v14 != (romwright_code *)0x0) {
    (**(romwright_code **)temp_v14)(&LAB_003b27b8,temp_v4);
  }
  *(unsigned int *)param_1 = 0;
  *(unsigned int *)((int)param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 1) = 0;
  *(unsigned int *)((int)param_1 + 0xc) = 0;
  *(unsigned int *)plVar13 = 0x40;
  *puVar16 = 0x10000;
  *temp_v25 = 0;
  *temp_v26 = 0;
  return 0x48;
}

} /* extern "C" */
