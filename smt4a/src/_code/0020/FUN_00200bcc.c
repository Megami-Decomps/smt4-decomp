/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200bcc` (_code @ 0x200bcc, 0xcc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int FUN_00163fd4(unsigned int);
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);


int * FUN_00200bcc(int *param_1)

{
/* irregular: 7 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  short temp_v0;
  int *piVar2;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *pbVar7;
  unsigned int temp_v5;
  unsigned short temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned short *puVar12;
  unsigned int *puVar13;
  romwright_code *pcVar14;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int *piVar18;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  
  if ((param_1 == (int *)0x0) || (param_1[3] < 0)) {
    return (int *)0x0;
  }
  temp_v7 = param_1[4];
  temp_v12 = 0;
  temp_v11 = param_1[5] + param_1[3] * 0x18;
  param_1[4] = temp_v7 & 0xffffffbf;
  if ((temp_v7 & 2) != 0) {
    temp_v7 = (**(romwright_code **)(temp_v11 + 8))(param_1[7]);
    if ((temp_v7 & 1) == 0) {
      param_1[4] = param_1[4] & 0xfffffffd;
    }
    temp_v12 = (temp_v7 & 2) != 0;
    piVar18 = param_1;
    if ((temp_v7 & 0x800000) != 0) {
      do {
        piVar18[4] = piVar18[4] | 1;
        piVar2 = piVar18 + 0xd;
        piVar18 = (int *)*piVar2;
      } while ((int *)*piVar2 != (int *)0x0);
    }
    else {
      if ((temp_v7 & 0x200000) != 0) {
        temp_v8 = param_1[4] | 1;
      }
      else {
        temp_v8 = param_1[4] & 0xfffffffe;
      }
      param_1[4] = temp_v8;
      if ((temp_v7 & 0x400000) == 0) {
        for (temp_v11 = param_1[0xd]; temp_v11 != 0; temp_v11 = *(int *)(temp_v11 + 0x34)) {
          *(unsigned int *)(temp_v11 + 0x10) = *(unsigned int *)(temp_v11 + 0x10) & 0xfffffffe;
        }
      }
    }
  }
  else if ((temp_v7 & 0x10) == 0) {
    if (param_1[6] >= 2) {
      param_1[4] = temp_v7 & 0xffffff9f;
      temp_v3 = FUN_00164af0(5);
      if ((temp_v3 != 0) || (temp_v3 = FUN_00164af0(0x10), temp_v3 != 0)) {
        do {
          while( 1 ) {
            do {
              if (param_1[3] != 0) {
                temp_v11 = param_1[3] - 1;
                param_1[3] = temp_v11;
              }
              else {
                temp_v11 = param_1[6] - 1;
                param_1[4] = param_1[4] | 0x20;
                param_1[3] = temp_v11;
              }
              temp_v11 = param_1[5] + temp_v11 * 0x18;
            } while (*(char *)(temp_v11 + 4) == '\x18' || *(char *)(temp_v11 + 4) == '\x19');
            temp_v3 = *(int *)(temp_v11 + 0x10);
            if (temp_v3 == -1) break;
            if (temp_v3 != -2) {
              if ((temp_v3 != -3) || (*(int *)(temp_v11 + 0xc) != -3)) goto LAB_00200e54;
            }
            else if (*(int *)(temp_v11 + 0xc) != -2) goto LAB_00200e54;
          }
        } while (*(int *)(temp_v11 + 0xc) == -1);
      }
      else {
        temp_v3 = FUN_00164af0(6);
        if ((temp_v3 != 0) || (temp_v3 = FUN_00164af0(0x1d), temp_v3 != 0)) {
          do {
            while( 1 ) {
              do {
                if (param_1[3] != param_1[6] - 1) {
                  temp_v11 = param_1[3] + 1;
                  param_1[3] = temp_v11;
                }
                else {
                  param_1[4] = param_1[4] | 0x20;
                  temp_v11 = 0;
                  param_1[3] = 0;
                }
                temp_v11 = param_1[5] + temp_v11 * 0x18;
              } while (*(char *)(temp_v11 + 4) == '\x18' || *(char *)(temp_v11 + 4) == '\x19');
              temp_v3 = *(int *)(temp_v11 + 0x10);
              if (temp_v3 == -1) break;
              if (temp_v3 != -2) {
                if ((temp_v3 != -3) || (*(int *)(temp_v11 + 0xc) != -3)) goto LAB_00200e54;
              }
              else if (*(int *)(temp_v11 + 0xc) != -2) goto LAB_00200e54;
            }
          } while (*(int *)(temp_v11 + 0xc) == -1);
        }
      }
    }
LAB_00200e54:
    temp_v3 = 0;
    temp_v17 = 0;
    temp_v4 = FUN_00164af0(3);
    temp_v18 = 50.0f;
    if ((temp_v4 != 0) || (temp_v4 = FUN_00164af0(0x1e), temp_v4 != 0)) {
      temp_v5 = (unsigned int)((unsigned long long)temp_v17 >> 0x20);
      temp_v3 = FUN_00163fd4(7);
      temp_v15 = 0.1f;
      if ((temp_v3 != 0) || (temp_v3 = FUN_00163fd4(0x18), temp_v3 != 0)) {
        temp_v17 = CONCAT44(temp_v5,*(float *)(temp_v11 + 0x14) * 5.0f);
        if (*(char *)(temp_v11 + 4) == '\a') {
          temp_v3 = (int)*(float *)(temp_v11 + 0x14) << 4;
        }
        else {
          temp_v3 = (int)*(float *)(temp_v11 + 0x14) * 10;
        }
      }
      else {
        temp_v3 = FUN_00163fd4(8);
        if ((temp_v3 != 0) || (temp_v3 = FUN_00163fd4(0x1c), temp_v3 != 0)) {
          if (*(char *)(temp_v11 + 4) != '\a') {
            temp_v3 = (int)*(float *)(temp_v11 + 0x14) * 100;
          }
          else {
            temp_v3 = (int)*(float *)(temp_v11 + 0x14) << 8;
          }
          temp_v17 = CONCAT44(temp_v5,*(float *)(temp_v11 + 0x14) * temp_v18);
        }
        else {
          temp_v3 = FUN_00163fd4(0);
          if ((temp_v3 != 0) || (temp_v3 = FUN_00163fd4(0x14), temp_v3 != 0)) {
            temp_v3 = *(int *)(temp_v11 + 0x10);
            temp_v16 = VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = romwright_piece_4_4(temp_v5,temp_v16);
          }
          else {
            temp_v3 = (int)*(float *)(temp_v11 + 0x14);
            temp_v17 = CONCAT44(temp_v5,*(float *)(temp_v11 + 0x14) * temp_v15);
          }
        }
      }
LAB_002010dc:
      if (temp_v3 == 0) goto LAB_002010e4;
LAB_002010f0:
      if (*(int *)(temp_v11 + 8) != 0) {
        switch(*(unsigned char *)(temp_v11 + 4)) {
        case 1:
          temp_v1 = **(char **)(temp_v11 + 8) + (char)temp_v3;
          **(char **)(temp_v11 + 8) = temp_v1;
          temp_v3 = *(int *)(temp_v11 + 0x10);
          temp_v4 = *(int *)(temp_v11 + 0xc);
          if (temp_v4 != temp_v3) {
            if (temp_v1 < temp_v4) {
              **(unsigned char **)(temp_v11 + 8) = (char)temp_v4;
            }
            else if (temp_v3 < temp_v1) {
              **(unsigned char **)(temp_v11 + 8) = (char)temp_v3;
            }
          }
          break;
        case 2:
        case 0x20:
        case 0x25:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2d:
        case 0x2f:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x3b:
        case 0x3c:
          temp_v4 = (unsigned int)**(unsigned char **)(temp_v11 + 8) + temp_v3;
          if (temp_v4 < 0) {
            temp_v4 = *(int *)(temp_v11 + 0xc);
          }
          **(unsigned char **)(temp_v11 + 8) = (unsigned char)temp_v4;
          temp_v7 = *(unsigned int *)(temp_v11 + 0x10);
          temp_v8 = *(unsigned int *)(temp_v11 + 0xc);
          if (temp_v8 != temp_v7) {
            pbVar7 = *(unsigned char **)(temp_v11 + 8);
            temp_v10 = (unsigned int)*pbVar7;
            if ((int)temp_v10 <= (int)(temp_v7 + temp_v3)) {
              if ((int)temp_v7 < (int)temp_v10) {
                *pbVar7 = (unsigned char)temp_v7;
                break;
              }
              if ((int)temp_v8 < (int)temp_v10) break;
            }
            *pbVar7 = (unsigned char)temp_v8;
          }
          break;
        case 3:
        case 0x2c:
          temp_v0 = **(short **)(temp_v11 + 8) + (short)temp_v3;
          **(short **)(temp_v11 + 8) = temp_v0;
          temp_v3 = *(int *)(temp_v11 + 0x10);
          temp_v4 = *(int *)(temp_v11 + 0xc);
          if (temp_v4 != temp_v3) {
            if (temp_v0 < temp_v4) {
              **(unsigned short **)(temp_v11 + 8) = (short)temp_v4;
            }
            else if (temp_v3 < temp_v0) {
              **(unsigned short **)(temp_v11 + 8) = (short)temp_v3;
            }
          }
          break;
        case 4:
        case 0x2e:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x39:
          temp_v4 = (unsigned int)**(unsigned short **)(temp_v11 + 8) + temp_v3;
          if (temp_v4 < 0) {
            temp_v4 = *(int *)(temp_v11 + 0xc);
          }
          **(unsigned short **)(temp_v11 + 8) = (unsigned short)temp_v4;
          temp_v4 = *(int *)(temp_v11 + 0x10);
          temp_v9 = *(int *)(temp_v11 + 0xc);
          if (temp_v9 != temp_v4) {
            puVar12 = *(unsigned short **)(temp_v11 + 8);
            temp_v7 = (unsigned int)*puVar12;
            if ((int)temp_v7 <= temp_v4 + temp_v3) {
              temp_v3 = temp_v9;
              if (temp_v4 < (int)temp_v7) {
                *puVar12 = (unsigned short)temp_v4;
                temp_v3 = temp_v4;
              }
              if (temp_v3 < (int)temp_v7) break;
            }
            *puVar12 = (unsigned short)temp_v9;
          }
          break;
        case 5:
        case 0x3d:
        case 0x3e:
        case 0x3f:
          temp_v3 = **(int **)(temp_v11 + 8) + temp_v3;
          **(int **)(temp_v11 + 8) = temp_v3;
          temp_v7 = *(unsigned int *)(temp_v11 + 0xc);
          temp_v8 = *(unsigned int *)(temp_v11 + 0x10);
          if (temp_v7 != temp_v8) {
            puVar13 = *(unsigned int **)(temp_v11 + 8);
            if (temp_v3 < (int)temp_v7) {
              *puVar13 = temp_v7;
              break;
            }
            if ((int)temp_v8 < temp_v3) {
              *puVar13 = temp_v8;
            }
          }
          break;
        case 6:
        case 7:
        case 0x26:
        case 0x35:
        case 0x3a:
          temp_v4 = **(int **)(temp_v11 + 8) + temp_v3;
          if (temp_v4 < 0) {
            temp_v4 = *(int *)(temp_v11 + 0xc);
          }
          **(int **)(temp_v11 + 8) = temp_v4;
          temp_v7 = *(unsigned int *)(temp_v11 + 0xc);
          temp_v8 = *(unsigned int *)(temp_v11 + 0x10);
          if (temp_v7 != temp_v8) {
            puVar13 = *(unsigned int **)(temp_v11 + 8);
            temp_v10 = *puVar13;
            if (temp_v10 <= temp_v8 + temp_v3) {
              temp_v13 = temp_v8 <= temp_v10;
              temp_v12 = temp_v10 == temp_v8;
              if (temp_v13 && !temp_v12) {
                *puVar13 = temp_v8;
              }
              else {
                temp_v13 = temp_v7 <= temp_v10;
                temp_v12 = temp_v10 == temp_v7;
              }
              if (temp_v13 && !temp_v12) break;
            }
            *puVar13 = temp_v7;
          }
          break;
        case 8:
        case 0x23:
        case 0x2b:
          temp_v18 = **(float **)(temp_v11 + 8) + (float)temp_v17;
          **(float **)(temp_v11 + 8) = temp_v18;
          temp_v16 = *(unsigned int *)(temp_v11 + 0xc);
          temp_v5 = *(unsigned int *)(temp_v11 + 0x10);
          temp_v15 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          in_fpscr = in_fpscr & 0xfffffff;
          temp_v7 = in_fpscr | ((unsigned int)(temp_v15 == temp_v14) << 0x1e);
          if (!romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0)) {
            temp_v15 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(temp_v7 >> 0x16) & 3);
            temp_v7 = in_fpscr | ((unsigned int)(temp_v15 < temp_v18) << 0x1f) |
                     ((unsigned int)(temp_v15 == temp_v18) << 0x1e);
            temp_v2 = (unsigned char)(temp_v7 >> 0x18);
            if (!((unsigned char)((temp_v2 >> 6) & 1) || (unsigned char)(temp_v2 >> 7) != ((temp_v15 != temp_v15) || (temp_v18 != temp_v18)))) {
              temp_v5 = VectorSignedToFloat(temp_v16,(unsigned char)(temp_v7 >> 0x16) & 3);
            }
            else {
              temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
              in_fpscr = in_fpscr | ((unsigned int)(temp_v18 <= temp_v15) << 0x1d);
              if (romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                if ((int)romwright_fabs_4(**(float **)(temp_v11 + 8)) < 0x38d1b1b9) {
                  **(float **)(temp_v11 + 8) = (float)((unsigned long long)temp_v17 >> 0x20);
                }
                break;
              }
              temp_v5 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            **(unsigned int **)(temp_v11 + 8) = temp_v5;
          }
          if ((int)romwright_fabs_4(**(float **)(temp_v11 + 8)) < 0x38d1b1b9) {
            **(float **)(temp_v11 + 8) = (float)((unsigned long long)temp_v17 >> 0x20);
          }
          break;
        case 9:
          temp_v3 = (int)*(unsigned int *)(temp_v11 + 0xc) >> 0x1c;
          *(unsigned int *)(*(int *)(temp_v11 + 8) + temp_v3 * 4) =
               (*(unsigned int *)(temp_v11 + 0xc) & 0xfffffff) ^ *(unsigned int *)(*(int *)(temp_v11 + 8) + temp_v3 * 4);
          break;
        case 10:
        case 0xb:
          puVar13 = *(unsigned int **)(temp_v11 + 8);
          temp_v7 = *(unsigned int *)(temp_v11 + 0xc) ^ *puVar13;
          *puVar13 = temp_v7;
          break;
        case 0xc:
          puVar12 = *(unsigned short **)(temp_v11 + 8);
          temp_v6 = (unsigned short)*(unsigned int *)(temp_v11 + 0xc) ^ *puVar12;
          *puVar12 = temp_v6;
          break;
        case 0xd:
          pbVar7 = *(unsigned char **)(temp_v11 + 8);
          temp_v7 = *(unsigned int *)(temp_v11 + 0xc) ^ (unsigned int)*pbVar7;
          *pbVar7 = (unsigned char)temp_v7;
          break;
        case 0xe:
        case 0xf:
        case 0x21:
        case 0x22:
        case 0x24:
          pbVar7 = *(unsigned char **)(temp_v11 + 8);
          temp_v7 = *pbVar7 ^ 1;
          *pbVar7 = (unsigned char)temp_v7;
          break;
        case 0x10:
          puVar12 = *(unsigned short **)(temp_v11 + 8);
          temp_v6 = *puVar12 ^ 1;
          *puVar12 = temp_v6;
          break;
        case 0x11:
          puVar13 = *(unsigned int **)(temp_v11 + 8);
          temp_v7 = *puVar13 ^ 1;
          *puVar13 = temp_v7;
          break;
        case 0x12:
        case 0x13:
          temp_v7 = **(unsigned int **)(temp_v11 + 8);
          **(unsigned int **)(temp_v11 + 8) = ((temp_v3 + (temp_v7 & 0xff)) & 0xff) | (temp_v7 & 0xffffff00);
          break;
        case 0x14:
          puVar13 = *(unsigned int **)(temp_v11 + 8);
          temp_v7 = (*puVar13 & 0xffff00ff) | (((temp_v3 + (*puVar13 >> 8)) & 0xff) << 8);
          *puVar13 = temp_v7;
          break;
        case 0x15:
          puVar13 = *(unsigned int **)(temp_v11 + 8);
          temp_v7 = (*puVar13 & 0xff00ffff) | ((((*puVar13 >> 0x10) + temp_v3) & 0xff) << 0x10);
          *puVar13 = temp_v7;
          break;
        case 0x16:
          puVar13 = *(unsigned int **)(temp_v11 + 8);
          temp_v7 = (*puVar13 & 0xffffff) | (((*puVar13 >> 0x18) + temp_v3) * 0x1000000);
          *puVar13 = temp_v7;
          break;
        case 0x17:
          temp_v3 = **(int **)(temp_v11 + 8) + temp_v3;
          **(int **)(temp_v11 + 8) = temp_v3;
          temp_v4 = *(int *)(temp_v11 + 0x10);
          temp_v9 = *(int *)(temp_v11 + 0xc);
          if (temp_v9 != temp_v4) {
            if (temp_v3 < temp_v9) {
              **(int **)(temp_v11 + 8) = temp_v9;
            }
            else if (temp_v4 < temp_v3) {
              **(int **)(temp_v11 + 8) = temp_v4;
            }
          }
          break;
        case 0x2a:
          piVar18 = *(int **)(temp_v11 + 8);
          temp_v4 = *piVar18 + temp_v3 * 0x10000;
          if (temp_v4 >= 0) {
            *piVar18 = temp_v4;
          }
          else {
            *piVar18 = *(int *)(temp_v11 + 0xc) << 0x10;
          }
          temp_v4 = *(int *)(temp_v11 + 0x10);
          temp_v7 = *(int *)(temp_v11 + 0xc) * 0x10000;
          if (temp_v7 != temp_v4 * 0x10000) {
            puVar13 = *(unsigned int **)(temp_v11 + 8);
            temp_v8 = *puVar13;
            if (temp_v8 <= (unsigned int)((temp_v4 + temp_v3) * 0x10000)) {
              if ((unsigned int)(temp_v4 * 0x10000) < temp_v8) {
                temp_v7 = temp_v4 << 0x10;
                *puVar13 = temp_v7;
                break;
              }
              if ((unsigned int)(*(int *)(temp_v11 + 0xc) * 0x10000) < temp_v8) break;
            }
            *puVar13 = temp_v7;
          }
        }
        temp_v12 = 1;
      }
    }
    else {
      temp_v4 = FUN_00164af0(4);
      if ((temp_v4 != 0) || (temp_v4 = FUN_00164af0(0x11), temp_v4 != 0)) {
        temp_v5 = (unsigned int)((unsigned long long)temp_v17 >> 0x20);
        temp_v3 = FUN_00163fd4(7);
        temp_v18 = -0.1f;
        if ((temp_v3 != 0) || (temp_v3 = FUN_00163fd4(0x18), temp_v3 != 0)) {
          if (*(char *)(temp_v11 + 4) != '\a') {
            temp_v3 = (int)*(float *)(temp_v11 + 0x14) * -10;
          }
          else {
            temp_v3 = (int)*(float *)(temp_v11 + 0x14) * -0x10;
          }
          temp_v18 = *(float *)(temp_v11 + 0x14);
          temp_v15 = -5.0f;
          temp_v17 = CONCAT44(temp_v5,temp_v18 * temp_v15);
        }
        else {
          temp_v3 = FUN_00163fd4(8);
          if ((temp_v3 != 0) || (temp_v3 = FUN_00163fd4(0x1c), temp_v3 != 0)) {
            if (*(char *)(temp_v11 + 4) != '\a') {
              temp_v3 = (int)*(float *)(temp_v11 + 0x14) * -100;
            }
            else {
              temp_v3 = (int)*(float *)(temp_v11 + 0x14) * -0x100;
            }
            temp_v18 = *(float *)(temp_v11 + 0x14);
            temp_v15 = -50.0f;
            temp_v17 = CONCAT44(temp_v5,temp_v18 * temp_v15);
          }
          else {
            temp_v3 = FUN_00163fd4(0);
            if ((temp_v3 != 0) || (temp_v3 = FUN_00163fd4(0x14), temp_v3 != 0)) {
              temp_v3 = -*(int *)(temp_v11 + 0x10);
              temp_v16 = VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = romwright_piece_4_4(temp_v5,temp_v16);
            }
            else {
              temp_v17 = CONCAT44(temp_v5,*(float *)(temp_v11 + 0x14) * temp_v18);
              temp_v3 = -(int)*(float *)(temp_v11 + 0x14);
            }
          }
        }
        goto LAB_002010dc;
      }
LAB_002010e4:
      in_fpscr = (in_fpscr & 0xfffffff) |
                 ((unsigned int)((float)temp_v17 == (float)((unsigned long long)temp_v17 >> 0x20)) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) goto LAB_002010f0;
    }
    temp_v3 = FUN_001656a0(0);
    if (((temp_v3 != 0) || (temp_v3 = FUN_001656a0(0x14), temp_v3 != 0)) && (param_1[6] >= 1)) {
      temp_v1 = *(char *)(temp_v11 + 4);
      if (!((temp_v1 == '\x1a' || temp_v1 == '\x1b') || temp_v1 == '\x1c')) {
        if (temp_v1 != '\x1d') {
          if (temp_v1 != '\x1e') {
            if (temp_v1 == '\x1f') {
              temp_v3 = param_1[7];
              pcVar14 = *(romwright_code **)(temp_v11 + 8);
              piVar18 = param_1;
              (*pcVar14)(temp_v3);
              param_1 = piVar18;
            }
          }
          else {
            if (*(romwright_code **)(temp_v11 + 0xc) != (romwright_code *)0x0) {
              (**(romwright_code **)(temp_v11 + 0xc))(param_1[7]);
            }
            temp_v7 = param_1[4] | 2;
            piVar18 = param_1;
            piVar18[4] = temp_v7;
            param_1 = piVar18;
          }
        }
        else {
          param_1[4] = param_1[4] | 2;
        }
      }
      else {
        if ((romwright_code *)param_1[10] != (romwright_code *)0x0) {
          temp_v5 = 0;
          if ((unsigned int *)param_1[0xb] != (unsigned int *)0x0) {
            temp_v5 = *(unsigned int *)param_1[0xb];
          }
          (*(romwright_code *)param_1[10])(temp_v5);
        }
        *(int **)(*(int *)(temp_v11 + 8) + 0x34) = param_1;
        temp_v1 = *(char *)(temp_v11 + 4);
        piVar18 = *(int **)(temp_v11 + 8);
        if (temp_v1 != '\x1a') {
          if (temp_v1 != '\x1b') {
            if (temp_v1 == '\x1c') {
              piVar18[4] = piVar18[4] & 0xfffffffe;
            }
          }
          else {
            piVar18[1] = param_1[1];
            piVar18[2] = param_1[2];
            param_1[4] = param_1[4] | 1;
          }
        }
        else {
          piVar18[1] = param_1[1] + 0x96;
          if (*param_1 == 0) {
            temp_v11 = param_1[3] * 10;
          }
          else {
            temp_v11 = param_1[3] * 10 + 0x12;
          }
          piVar18[2] = param_1[2] + temp_v11;
          piVar18[4] = piVar18[4] & 0xfffffffe;
        }
        pcVar14 = (romwright_code *)piVar18[8];
        param_1 = piVar18;
        if (pcVar14 != (romwright_code *)0x0) {
          temp_v3 = piVar18[7];
          if (piVar18[0xb] != 0) {
            temp_v5 = (*pcVar14)(temp_v3);
            *(unsigned int *)piVar18[0xb] = temp_v5;
          }
          else {
            (*pcVar14)(temp_v3);
            param_1 = piVar18;
          }
        }
      }
    }
    else {
      temp_v11 = FUN_001656a0(1);
      if ((temp_v11 != 0) || (temp_v11 = FUN_001656a0(0x16), temp_v11 != 0)) {
        piVar18 = (int *)param_1[0xd];
        param_1[4] = param_1[4] | 0x40;
        if (piVar18 != (int *)0x0) {
          pcVar14 = (romwright_code *)param_1[10];
          if ((pcVar14 != (romwright_code *)0x0) &&
             (((romwright_code *)piVar18[10] != pcVar14 || (piVar18[0xb] != param_1[0xb])))) {
            temp_v5 = 0;
            if ((unsigned int *)param_1[0xb] != (unsigned int *)0x0) {
              temp_v5 = *(unsigned int *)param_1[0xb];
            }
            (*pcVar14)(temp_v5);
          }
          temp_v12 = 1;
          temp_v7 = piVar18[4] & 0xfffffffe;
          piVar18[4] = temp_v7;
          param_1 = piVar18;
        }
      }
    }
  }
  temp_v7 = param_1[4];
  param_1[4] = temp_v7 & 0xfffffff7;
  if (!temp_v12) {
    return param_1;
  }
  param_1[4] = (temp_v7 & 0xfffffff7) | 8;
  if (param_1[0xc] == 0) {
    return param_1;
  }
  if ((romwright_code *)param_1[10] != (romwright_code *)0x0) {
    if ((unsigned int *)param_1[0xb] == (unsigned int *)0x0) {
      (*(romwright_code *)param_1[0xc])(param_1[7]);
      return param_1;
    }
    (*(romwright_code *)param_1[10])(*(unsigned int *)param_1[0xb]);
  }
  if (param_1[0xb] != 0) {
    temp_v5 = (*(romwright_code *)param_1[0xc])(param_1[7]);
    *(unsigned int *)param_1[0xb] = temp_v5;
    return param_1;
  }
  (*(romwright_code *)param_1[0xc])(param_1[7]);
  return param_1;
}
