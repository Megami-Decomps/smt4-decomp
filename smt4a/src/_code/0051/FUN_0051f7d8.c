/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051f7d8` (_code @ 0x51f7d8, 0xbe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 6 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned short sp72; /* 0x72: local_72 */
    unsigned short sp74; /* 0x74: local_74 */
    unsigned int sp9C; /* 0x9c: local_9c */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: while (COPY). */
extern long long FUN_002ffa9c(unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_0051f7d8(unsigned short *param_1,unsigned int param_2,unsigned short *param_3,unsigned int *param_4)

{
/* irregular: 11 goto(s); 1 native warning(s); review required */
  long long temp_v0;
  unsigned short temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  short temp_v5;
  unsigned short *puVar10;
  int temp_v6;
  int *piVar12;
  unsigned short *puVar13;
  unsigned short *puVar14;
  int temp_v7;
  int temp_v8;
  unsigned short *puVar17;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  long long temp_v13;
  unsigned short temp_v14 [2];
  unsigned int temp_v15;
  unsigned short temp_v16 [26];
  unsigned short *puStack_34;
  unsigned int temp_v17;
  unsigned short *puStack_2c;
  unsigned int *temp_v18;
  short temp_v19;
  
  puStack_2c = param_3;
  temp_v17 = param_2;
  puStack_34 = param_1;
  temp_v1 = *param_3;
  puVar13 = param_1;
  do {
    if (temp_v1 == 0) {
      if (param_2 != 0) {
        *puVar13 = 0;
      }
      else if (temp_v17 != 0) {
        param_1[temp_v17 - 1] = 0;
      }
      return ((int)puVar13 - (int)param_1) >> 1;
    }
    temp_v1 = *param_3;
    temp_v18 = param_4;
    if (temp_v1 == 0x25) {
      temp_v9 = 0;
      temp_v10 = 0xffffffff;
      temp_v6 = 10;
      temp_v19 = 0x57;
      temp_v5 = 0x57;
      temp_v15 = 0;
      puVar14 = param_3;
      while( 1 ) {
        while( 1 ) {
          while( 1 ) {
            puVar10 = puVar14 + 1;
            temp_v1 = *puVar10;
            if (temp_v1 != 0x20) break;
            temp_v15 = temp_v15 | 1;
            puVar14 = puVar10;
          }
          if (temp_v1 == 0x2b) break;
          if (temp_v1 == 0x2d) {
            temp_v15 = temp_v15 | 8;
            puVar14 = puVar10;
          }
          else {
            if (temp_v1 != 0x30) {
              if (temp_v1 == 0x2a) {
                puVar10 = puVar14 + 2;
                temp_v18 = param_4 + 1;
                temp_v9 = *param_4;
                if ((int)temp_v9 < 0) {
                  temp_v9 = -temp_v9;
                  temp_v15 = temp_v15 | 8;
                }
                goto LAB_0051f8d0;
              }
              goto LAB_0051f89c;
            }
            temp_v15 = temp_v15 | 0x10;
            puVar14 = puVar10;
          }
        }
        if (*puVar14 != 0x20) break;
        temp_v15 = temp_v15 | 2;
        puVar14 = puVar10;
      }
LAB_0051f89c:
      temp_v1 = *puVar10;
      while (temp_v1 - 0x30 < 10) {
        temp_v1 = *puVar10;
        puVar10 = puVar10 + 1;
        temp_v9 = (unsigned int)temp_v1 + (temp_v9 * 10 - 0x30);
        temp_v1 = *puVar10;
      }
LAB_0051f8d0:
      if (*puVar10 == 0x2e) {
        temp_v4 = (unsigned int)puVar10[1];
        temp_v10 = 0;
        puVar14 = puVar10 + 1;
        if (temp_v4 != 0x2a) {
          while (puVar10 = puVar14, temp_v4 - 0x30 < 10) {
            temp_v10 = (unsigned int)*puVar10 + (temp_v10 * 10 - 0x30);
            puVar14 = puVar10 + 1;
            temp_v4 = (unsigned int)puVar10[1];
          }
        }
        else {
          puVar10 = puVar10 + 2;
          puVar5 = temp_v18 + 1;
          temp_v10 = *temp_v18;
          temp_v18 = puVar5;
          if ((int)temp_v10 < 0) {
            temp_v10 = 0xffffffff;
          }
        }
      }
      if (*puVar10 != 0x68) {
        puVar14 = puVar10;
        if (*puVar10 == 0x6c) {
          puVar14 = puVar10 + 1;
          if (*puVar14 == 0x6c) {
            puVar14 = puVar10 + 2;
            temp_v15 = temp_v15 | 0x80;
          }
          else {
            temp_v15 = temp_v15 | 0x20;
          }
        }
      }
      else {
        puVar14 = puVar10 + 1;
        if (*puVar14 == 0x68) {
          puVar14 = puVar10 + 2;
          temp_v15 = temp_v15 | 0x100;
        }
        else {
          temp_v15 = temp_v15 | 0x40;
        }
      }
      temp_v1 = *puVar14;
      if (temp_v1 != 0x6e) {
        if (temp_v1 < 0x6e) {
          if (temp_v1 != 99) {
            if (temp_v1 < 100) {
              if (temp_v1 != 0x25) {
                if (temp_v1 == 0x58) {
                  temp_v19 = 0x37;
                  goto LAB_0051fa3c;
                }
              }
              else if (param_3 + 1 == puVar14) {
                temp_v1 = 0x25;
                param_3 = puVar14;
                goto joined_r0x00520318;
              }
            }
            else if (temp_v1 == 100 || temp_v1 == 0x69) goto LAB_0051fa4c;
          }
          else if ((int)temp_v10 < 0) {
            temp_v9 = temp_v9 - 1;
            puVar5 = temp_v18 + 1;
            temp_v10 = *temp_v18;
            temp_v18 = puVar5;
            if ((temp_v15 & 8) != 0) {
              if (param_2 != 0) {
                *puVar13 = (unsigned short)temp_v10;
                param_2 = param_2 - 1;
              }
              puVar13 = puVar13 + 1;
              if (0 < (int)temp_v9) {
                temp_v10 = param_2;
                if (temp_v9 < param_2) {
                  temp_v10 = temp_v9;
                }
                if (temp_v10 != 0) {
                  temp_v4 = temp_v10 & 1;
                  temp_v11 = (unsigned int)(temp_v4 == 1);
                  if (temp_v4 == 1) {
                    *puVar13 = 0x20;
                  }
                  for (; temp_v4 < temp_v10; temp_v4 = temp_v4 + 2) {
                    temp_v6 = temp_v11 + 1;
                    puVar13[temp_v11] = 0x20;
                    temp_v11 = temp_v11 + 2;
                    puVar13[temp_v6] = 0x20;
                  }
                }
                param_2 = param_2 - temp_v10;
                puVar13 = puVar13 + temp_v9;
              }
            }
            else {
              if ((temp_v15 & 0x10) == 0) {
                temp_v1 = 0x20;
              }
              else {
                temp_v1 = 0x30;
              }
              if (0 < (int)temp_v9) {
                temp_v4 = param_2;
                if (temp_v9 < param_2) {
                  temp_v4 = temp_v9;
                }
                if (temp_v4 != 0) {
                  temp_v11 = temp_v4 & 1;
                  temp_v3 = (unsigned int)(temp_v11 == 1);
                  if (temp_v11 == 1) {
                    *puVar13 = temp_v1;
                  }
                  for (; temp_v11 < temp_v4; temp_v11 = temp_v11 + 2) {
                    temp_v6 = temp_v3 + 1;
                    puVar13[temp_v3] = temp_v1;
                    temp_v3 = temp_v3 + 2;
                    puVar13[temp_v6] = temp_v1;
                  }
                }
                param_2 = param_2 - temp_v4;
                puVar13 = puVar13 + temp_v9;
              }
              if (param_2 != 0) {
                *puVar13 = (unsigned short)temp_v10;
                param_2 = param_2 - 1;
              }
              puVar13 = puVar13 + 1;
            }
            puVar14 = puVar14 + 1;
            temp_v1 = *puVar14;
            param_4 = temp_v18;
            param_3 = puVar14;
            continue;
          }
LAB_00520324:
          temp_v9 = ((int)puVar14 - (int)param_3) >> 1;
          if (0 < (int)temp_v9) {
            temp_v10 = param_2;
            if (temp_v9 < param_2) {
              temp_v10 = temp_v9;
            }
            if (temp_v10 != 0) {
              temp_v6 = 0;
              temp_v4 = temp_v10;
              do {
                puVar10 = puVar13 + temp_v6;
                temp_v4 = temp_v4 - 1;
                temp_v6 = temp_v6 + 1;
                *puVar10 = *param_3;
                param_3 = param_3 + 1;
              } while (temp_v4 != 0);
            }
            param_2 = param_2 - temp_v10;
            puVar13 = puVar13 + temp_v9;
          }
          temp_v1 = *puVar14;
          param_4 = temp_v18;
          param_3 = puVar14;
          continue;
        }
        if (temp_v1 != 0x73) {
          temp_v5 = temp_v19;
          if (temp_v1 < 0x73) {
            if (temp_v1 == 0x6f) {
              temp_v6 = 8;
            }
            else {
              if (temp_v1 != 0x70) goto LAB_00520324;
              temp_v10 = 8;
              temp_v15 = temp_v15 | 4;
LAB_0051fa3c:
              temp_v6 = 0x10;
              temp_v5 = temp_v19;
            }
          }
          else if (temp_v1 != 0x75) {
            if (temp_v1 != 0x78) goto LAB_00520324;
            temp_v6 = 0x10;
            temp_v5 = temp_v19;
          }
          temp_v15 = temp_v15 | 0x1000;
LAB_0051fa4c:
          temp_v8 = 0;
          if ((temp_v15 & 8) != 0) {
            temp_v15 = temp_v15 & 0xffffffef;
          }
          if ((int)temp_v10 < 0) {
            temp_v10 = 1;
          }
          else {
            temp_v15 = temp_v15 & 0xffffffef;
          }
          if ((temp_v15 & 0x1000) != 0) {
            if ((temp_v15 & 0x100) != 0) {
              temp_v4 = 0;
              temp_v11 = *temp_v18;
              temp_v18 = temp_v18 + 1;
              temp_v11 = temp_v11 & 0xff;
            }
            else if ((temp_v15 & 0x40) != 0) {
              temp_v4 = 0;
              temp_v11 = *temp_v18;
              temp_v18 = temp_v18 + 1;
              temp_v11 = temp_v11 & 0xffff;
            }
            else {
              if ((temp_v15 & 0x80) != 0) {
                puVar3 = (unsigned int *)(((int)temp_v18 + 7U) & 0xfffffff8);
                temp_v11 = *puVar3;
                puVar5 = puVar3 + 2;
                temp_v4 = puVar3[1];
              }
              else {
                puVar5 = temp_v18 + 1;
                temp_v11 = *temp_v18;
                temp_v4 = 0;
              }
              temp_v18 = puVar5;
            }
            temp_v2 = temp_v15 & 0xfffffffc;
            temp_v3 = temp_v15 & 4;
            temp_v15 = temp_v2;
            if (temp_v3 == 0) goto LAB_0051fc38;
            if (temp_v6 != 0x10) {
              if (temp_v6 != 8) goto LAB_0051fc38;
              temp_v8 = 1;
              temp_v14[0] = 0x30;
              goto LAB_0051fc58;
            }
            if (temp_v11 != 0 || temp_v4 != 0) {
              temp_v14[0] = temp_v5 + 0x21;
              temp_v8 = 2;
              temp_v14[1] = 0x30;
            }
LAB_0051fd24:
            temp_v7 = 0;
            if (temp_v11 != 0 || temp_v4 != 0) {
              do {
                temp_v3 = temp_v11 & 0xf;
                temp_v1 = (unsigned short)temp_v3;
                temp_v11 = (temp_v4 << 0x1c) | (temp_v11 >> 4);
                if (temp_v3 < 10) {
                  temp_v1 = temp_v1 + 0x30;
                }
                if (temp_v3 >= 10) {
                  temp_v1 = temp_v1 + temp_v5;
                }
                temp_v4 = temp_v4 >> 4;
                temp_v16[temp_v7] = temp_v1;
                temp_v7 = temp_v7 + 1;
              } while (temp_v11 != 0 || temp_v4 != 0);
            }
          }
          else {
            if ((temp_v15 & 0x100) != 0) {
              temp_v4 = *temp_v18;
              temp_v18 = temp_v18 + 1;
              temp_v11 = (unsigned int)(char)temp_v4;
              temp_v4 = (int)temp_v11 >> 0x1f;
            }
            else if ((temp_v15 & 0x40) != 0) {
              temp_v4 = *temp_v18;
              temp_v18 = temp_v18 + 1;
              temp_v11 = (unsigned int)(short)temp_v4;
              temp_v4 = (int)temp_v11 >> 0x1f;
            }
            else if ((temp_v15 & 0x80) != 0) {
              puVar5 = (unsigned int *)(((int)temp_v18 + 7U) & 0xfffffff8);
              temp_v11 = *puVar5;
              temp_v4 = puVar5[1];
              temp_v18 = puVar5 + 2;
            }
            else {
              temp_v11 = *temp_v18;
              temp_v18 = temp_v18 + 1;
              temp_v4 = (int)temp_v11 >> 0x1f;
            }
            if ((temp_v4 & 0x80000000) != 0) {
              temp_v3 = ~temp_v11;
              temp_v14[0] = 0x2d;
              temp_v11 = temp_v3 + 1;
              temp_v8 = 1;
              temp_v4 = ~temp_v4 + (unsigned int)(0xfffffffe < temp_v3);
            }
            else {
              temp_v12 = temp_v11 == 0 && temp_v4 == 0;
              if (temp_v11 == 0 && temp_v4 == 0) {
                temp_v12 = temp_v10 == 0;
              }
              if (!temp_v12) {
                if ((temp_v15 & 2) != 0) {
                  temp_v8 = 1;
                  temp_v14[0] = 0x2b;
                }
                else if ((temp_v15 & 1) != 0) {
                  temp_v8 = 1;
                  temp_v14[0] = 0x20;
                }
              }
            }
LAB_0051fc38:
            temp_v7 = 0;
            if (temp_v6 != 8) {
              if (temp_v6 != 10) {
                if (temp_v6 == 0x10) goto LAB_0051fd24;
              }
              else if (temp_v4 != 0) {
                temp_v0 = romwright_piece_4_4(temp_v4,temp_v11);
                if (temp_v11 != 0 || temp_v4 != 0) {
                  do {
                    temp_v13 = FUN_002ffa9c((int)temp_v0,(int)((unsigned long long)temp_v0 >> 0x20),10,0);
                    puVar10 = temp_v16 + temp_v7;
                    temp_v7 = temp_v7 + 1;
                    *puVar10 = (short)temp_v0 + (short)temp_v13 * -10 + 0x30;
                    temp_v0 = temp_v13;
                  } while (temp_v13 != 0);
                }
              }
              else {
                while (temp_v11 != 0) {
                  puVar10 = temp_v16 + temp_v7;
                  temp_v7 = temp_v7 + 1;
                  *puVar10 = (short)temp_v11 + (short)(temp_v11 / 10) * -10 + 0x30;
                  temp_v11 = temp_v11 / 10;
                }
              }
            }
            else {
LAB_0051fc58:
              temp_v7 = 0;
              if (temp_v11 != 0 || temp_v4 != 0) {
                do {
                  temp_v1 = (unsigned short)temp_v11;
                  temp_v11 = (temp_v4 << 0x1d) | (temp_v11 >> 3);
                  temp_v4 = temp_v4 >> 3;
                  temp_v16[temp_v7] = (temp_v1 & 7) + 0x30;
                  temp_v7 = temp_v7 + 1;
                } while (temp_v11 != 0 || temp_v4 != 0);
              }
            }
          }
          if ((temp_v8 != 0) && (temp_v14[0] == 0x30)) {
            puVar10 = temp_v16 + temp_v7;
            temp_v8 = 0;
            temp_v7 = temp_v7 + 1;
            *puVar10 = 0x30;
          }
          temp_v10 = temp_v10 - temp_v7;
          if (((temp_v15 & 0x10) != 0) &&
             (temp_v4 = (temp_v9 - temp_v7) - temp_v8, (int)temp_v10 < (int)temp_v4)) {
            temp_v10 = temp_v4;
          }
          if (0 < (int)temp_v10) {
            temp_v9 = temp_v9 - temp_v10;
          }
          temp_v9 = temp_v9 - (temp_v8 + temp_v7);
          if (((temp_v15 & 8) == 0) && (0 < (int)temp_v9)) {
            temp_v4 = param_2;
            if (temp_v9 < param_2) {
              temp_v4 = temp_v9;
            }
            if (temp_v4 != 0) {
              temp_v11 = temp_v4 & 1;
              temp_v3 = (unsigned int)(temp_v11 == 1);
              if (temp_v11 == 1) {
                *puVar13 = 0x20;
              }
              for (; temp_v11 < temp_v4; temp_v11 = temp_v11 + 2) {
                temp_v6 = temp_v3 + 1;
                puVar13[temp_v3] = 0x20;
                temp_v3 = temp_v3 + 2;
                puVar13[temp_v6] = 0x20;
              }
            }
            param_2 = param_2 - temp_v4;
            puVar13 = puVar13 + temp_v9;
          }
          if (temp_v8 != 0) {
            do {
              temp_v8 = temp_v8 - 1;
              temp_v12 = param_2 != 0;
              if (temp_v12) {
                param_2 = param_2 - 1;
              }
              if (temp_v12) {
                *puVar13 = temp_v14[temp_v8];
              }
              puVar13 = puVar13 + 1;
            } while (0 < temp_v8);
          }
          temp_v1 = 0x30;
          if (0 < (int)temp_v10) {
            temp_v4 = param_2;
            if (temp_v10 < param_2) {
              temp_v4 = temp_v10;
            }
            if (temp_v4 != 0) {
              temp_v11 = temp_v4 & 1;
              temp_v3 = (unsigned int)(temp_v11 == 1);
              if (temp_v11 == 1) {
                *puVar13 = 0x30;
              }
              for (; temp_v11 < temp_v4; temp_v11 = temp_v11 + 2) {
                temp_v6 = temp_v3 + 1;
                puVar13[temp_v3] = 0x30;
                temp_v3 = temp_v3 + 2;
                puVar13[temp_v6] = 0x30;
              }
            }
            param_2 = param_2 - temp_v4;
            puVar13 = puVar13 + temp_v10;
          }
          while (0 < temp_v7) {
            temp_v7 = temp_v7 - 1;
            temp_v12 = param_2 != 0;
            if (temp_v12) {
              param_2 = param_2 - 1;
            }
            if (temp_v12) {
              *puVar13 = temp_v16[temp_v7];
            }
            puVar13 = puVar13 + 1;
          }
          temp_v12 = (temp_v15 & 8) != 0;
          if (temp_v12) {
            temp_v1 = 0x20;
          }
          if (temp_v12 && 0 < (int)temp_v9) {
            temp_v10 = param_2;
            if (temp_v9 < param_2) {
              temp_v10 = temp_v9;
            }
            if (temp_v10 != 0) {
              temp_v4 = temp_v10 & 1;
              temp_v11 = (unsigned int)(temp_v4 == 1);
              if (temp_v4 == 1) {
                *puVar13 = temp_v1;
              }
              for (; temp_v4 < temp_v10; temp_v4 = temp_v4 + 2) {
                temp_v6 = temp_v11 + 1;
                puVar13[temp_v11] = temp_v1;
                temp_v11 = temp_v11 + 2;
                puVar13[temp_v6] = temp_v1;
              }
            }
            param_2 = param_2 - temp_v10;
            puVar13 = puVar13 + temp_v9;
          }
        }
        else {
          puVar5 = temp_v18 + 1;
          puVar10 = (unsigned short *)*temp_v18;
          temp_v4 = 0;
          if ((int)temp_v10 < 0) {
            temp_v1 = *puVar10;
            while (temp_v1 != 0) {
              temp_v4 = temp_v4 + 1;
              temp_v1 = puVar10[temp_v4];
            }
          }
          else {
            for (; ((int)temp_v4 < (int)temp_v10 && (puVar10[temp_v4] != 0)); temp_v4 = temp_v4 + 1) {
            }
          }
          temp_v9 = temp_v9 - temp_v4;
          temp_v18 = puVar5;
          if ((temp_v15 & 8) != 0) {
            if (0 < (int)temp_v4) {
              temp_v10 = param_2;
              if (temp_v4 < param_2) {
                temp_v10 = temp_v4;
              }
              if (temp_v10 != 0) {
                temp_v6 = 0;
                temp_v11 = temp_v10;
                do {
                  puVar17 = puVar13 + temp_v6;
                  temp_v11 = temp_v11 - 1;
                  temp_v6 = temp_v6 + 1;
                  *puVar17 = *puVar10;
                  puVar10 = puVar10 + 1;
                } while (temp_v11 != 0);
              }
              param_2 = param_2 - temp_v10;
              puVar13 = puVar13 + temp_v4;
            }
            if (0 < (int)temp_v9) {
              temp_v10 = param_2;
              if (temp_v9 < param_2) {
                temp_v10 = temp_v9;
              }
              if (temp_v10 != 0) {
                temp_v4 = temp_v10 & 1;
                temp_v11 = (unsigned int)(temp_v4 == 1);
                if (temp_v4 == 1) {
                  *puVar13 = 0x20;
                }
                for (; temp_v4 < temp_v10; temp_v4 = temp_v4 + 2) {
                  temp_v6 = temp_v11 + 1;
                  puVar13[temp_v11] = 0x20;
                  temp_v11 = temp_v11 + 2;
                  puVar13[temp_v6] = 0x20;
                }
              }
              param_2 = param_2 - temp_v10;
              puVar13 = puVar13 + temp_v9;
            }
          }
          else {
            if ((temp_v15 & 0x10) == 0) {
              temp_v1 = 0x20;
            }
            else {
              temp_v1 = 0x30;
            }
            if (0 < (int)temp_v9) {
              temp_v10 = param_2;
              if (temp_v9 < param_2) {
                temp_v10 = temp_v9;
              }
              if (temp_v10 != 0) {
                temp_v11 = temp_v10 & 1;
                temp_v3 = (unsigned int)(temp_v11 == 1);
                if (temp_v11 == 1) {
                  *puVar13 = temp_v1;
                }
                for (; temp_v11 < temp_v10; temp_v11 = temp_v11 + 2) {
                  temp_v6 = temp_v3 + 1;
                  puVar13[temp_v3] = temp_v1;
                  temp_v3 = temp_v3 + 2;
                  puVar13[temp_v6] = temp_v1;
                }
              }
              param_2 = param_2 - temp_v10;
              puVar13 = puVar13 + temp_v9;
            }
            if (0 < (int)temp_v4) {
              temp_v9 = param_2;
              if (temp_v4 < param_2) {
                temp_v9 = temp_v4;
              }
              if (temp_v9 != 0) {
                temp_v6 = 0;
                temp_v10 = temp_v9;
                do {
                  puVar17 = puVar13 + temp_v6;
                  temp_v10 = temp_v10 - 1;
                  temp_v6 = temp_v6 + 1;
                  *puVar17 = *puVar10;
                  puVar10 = puVar10 + 1;
                } while (temp_v10 != 0);
              }
              param_2 = param_2 - temp_v9;
              puVar13 = puVar13 + temp_v4;
            }
          }
        }
      }
      else {
        temp_v6 = ((int)puVar13 - (int)param_1) >> 1;
        if ((temp_v15 & 0x100) == 0) {
          if ((temp_v15 & 0x40) != 0) {
            *(short *)*temp_v18 = (short)temp_v6;
            temp_v18 = temp_v18 + 1;
          }
          else if ((temp_v15 & 0x80) != 0) {
            piVar12 = (int *)*temp_v18;
            *piVar12 = temp_v6;
            piVar12[1] = ((int)puVar13 - (int)param_1) >> 0x1f;
            temp_v18 = temp_v18 + 1;
          }
          else {
            *(int *)*temp_v18 = temp_v6;
            temp_v18 = temp_v18 + 1;
          }
        }
      }
      puVar14 = puVar14 + 1;
    }
    else {
joined_r0x00520318:
      puVar14 = param_3 + 1;
      if (param_2 != 0) {
        param_2 = param_2 - 1;
        *puVar13 = temp_v1;
      }
      puVar13 = puVar13 + 1;
    }
    temp_v1 = *puVar14;
    param_4 = temp_v18;
    param_3 = puVar14;
  } while( 1 );
}
