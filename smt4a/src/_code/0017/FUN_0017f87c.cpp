/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017f87c` (_code @ 0x17f87c, 0x3bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018fb38(int, float [9], unsigned int, int);
int FUN_001a83bc(unsigned int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

/* Supplied declaration required: FUN_0018fb38. */
/* Supplied declaration required: FUN_001a83bc. */


void FUN_0017f87c(int param_1,int *param_2,int *param_3,int *param_4)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int *puVar6;
  char temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  float in_s0;
  float temp_v10;
  float in_s1;
  unsigned long long temp_v11;
  float temp_v12 [9];
  int temp_v13;
  int *temp_v14;
  int *piStack_2c;
  int *temp_v15;
  
  temp_v7 = 0;
  temp_v11 = (unsigned long long)(unsigned int)in_s0;
  temp_v13 = param_1;
  temp_v14 = param_2;
  piStack_2c = param_3;
  temp_v15 = param_4;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*param_3 + temp_v7 * 2);
      if (temp_v2 != 0xffff) {
        temp_v8 = *temp_v14 + temp_v2 * 0x158;
        temp_v6 = *(int *)(*(int *)(temp_v13 + 0xc) + temp_v7 * 4);
        temp_v0 = *(short *)(temp_v6 + 6);
        temp_v10 = (float)temp_v11;
        if (temp_v0 != 0) {
          if (temp_v0 == 2) {
            switch(*(unsigned short *)(temp_v6 + 4)) {
            case 0x13:
              pfVar5 = (float *)(temp_v8 + 0xf0);
              break;
            default:
              pfVar5 = (float *)0x0;
              break;
            case 0x15:
              pfVar5 = (float *)(temp_v8 + 0xfc);
              break;
            case 0x16:
              pfVar5 = (float *)(temp_v8 + 0x108);
              break;
            case 0x18:
              pfVar5 = (float *)(temp_v8 + 0x114);
              break;
            case 0x19:
              pfVar5 = (float *)(temp_v8 + 0x120);
              break;
            case 0x1b:
              pfVar5 = (float *)(temp_v8 + 300);
            }
            temp_v12[0] = *pfVar5;
            temp_v12[1] = pfVar5[1];
            temp_v2 = 0;
            do {
              if ((*(unsigned int *)(temp_v6 + 8) & (0x100 << (temp_v2 & 0xff))) == 0) {
                temp_v3 = temp_v6 + temp_v2 * 4;
                if ((*(unsigned int *)(temp_v6 + 8) & (1 << (temp_v2 & 0xff))) != 0) {
                  in_s0 = *(float *)(temp_v3 + 0xc);
                }
                else {
                  in_s0 = (float)temp_v11;
                  FUN_001a83bc(*(unsigned int *)(temp_v3 + 0xc));
                }
                temp_v12[temp_v2] = in_s0;
              }
              temp_v2 = temp_v2 + 1;
            } while ((int)temp_v2 < 2);
            switch(*(unsigned short *)(temp_v6 + 4)) {
            case 0x13:
              pfVar5 = (float *)(temp_v8 + 0xf0);
              *pfVar5 = temp_v12[0];
              pfVar5[1] = temp_v12[1];
              break;
            default:
              break;
            case 0x15:
              pfVar5 = (float *)(temp_v8 + 0xfc);
              *pfVar5 = temp_v12[0];
              pfVar5[1] = temp_v12[1];
              break;
            case 0x16:
              pfVar5 = (float *)(temp_v8 + 0x108);
              *pfVar5 = temp_v12[0];
              pfVar5[1] = temp_v12[1];
              break;
            case 0x18:
              pfVar5 = (float *)(temp_v8 + 0x114);
              *pfVar5 = temp_v12[0];
              pfVar5[1] = temp_v12[1];
              break;
            case 0x19:
              pfVar5 = (float *)(temp_v8 + 0x120);
              *pfVar5 = temp_v12[0];
              pfVar5[1] = temp_v12[1];
              break;
            case 0x1b:
              pfVar5 = (float *)(temp_v8 + 300);
              *pfVar5 = temp_v12[0];
              pfVar5[1] = temp_v12[1];
            }
          }
          else if (temp_v0 == 5) {
            temp_v2 = 0;
            do {
              if ((*(unsigned int *)(temp_v6 + 8) & (0x100 << (temp_v2 & 0xff))) == 0) {
                temp_v3 = temp_v6 + temp_v2 * 4;
                if ((*(unsigned int *)(temp_v6 + 8) & (1 << (temp_v2 & 0xff))) != 0) {
                  in_s0 = *(float *)(temp_v3 + 0xc);
                }
                else {
                  in_s0 = (float)temp_v11;
                  FUN_001a83bc(*(unsigned int *)(temp_v3 + 0xc));
                }
                temp_v12[temp_v2] = in_s0;
              }
              temp_v2 = temp_v2 + 1;
            } while ((int)temp_v2 < 4);
            FUN_0018fb38(temp_v8,temp_v12,~(*(unsigned int *)(temp_v6 + 8) & 0xf00) << 8,
                         *(unsigned short *)(temp_v6 + 4));
          }
          else if (temp_v0 == 6) {
            if ((*(unsigned int *)(temp_v6 + 8) & 0x100) == 0) {
              if ((*(unsigned int *)(temp_v6 + 8) & 1) != 0) {
                in_s0 = *(float *)(temp_v6 + 0xc);
              }
              else {
                FUN_001a83bc(*(unsigned int *)(temp_v6 + 0xc));
                in_s0 = temp_v10;
              }
            }
            in_s0 = (float)(int)in_s0;
            temp_v0 = *(short *)(temp_v6 + 4);
            puVar6 = *(unsigned int **)(*temp_v15 + (int)in_s0 * 4);
            if (temp_v0 != 0xd) {
              if (temp_v0 != 0xf) {
                if (temp_v0 == 0x11) {
                  temp_v4 = *(char *)(puVar6 + 6);
                  temp_v5 = puVar6[4];
                  temp_v9 = temp_v4 != '\f';
                  if (temp_v9) {
                    temp_v4 = '\0';
                  }
                  *(unsigned int *)(temp_v8 + 0x154) = puVar6[5];
                  *(unsigned int *)(temp_v8 + 0x150) = temp_v5;
                  if (!temp_v9) {
                    temp_v4 = '\x01';
                  }
                  if (temp_v4 != '\0') {
                    temp_v1 = *(unsigned char *)(temp_v8 + 2) | 4;
                  }
                  else {
                    temp_v1 = *(unsigned char *)(temp_v8 + 2) & 0xfb;
                  }
                  *(unsigned char *)(temp_v8 + 2) = temp_v1;
                }
              }
              else {
                temp_v4 = *(char *)(puVar6 + 6);
                temp_v5 = puVar6[2];
                temp_v9 = temp_v4 != '\f';
                if (temp_v9) {
                  temp_v4 = '\0';
                }
                *(unsigned int *)(temp_v8 + 0x14c) = puVar6[3];
                *(unsigned int *)(temp_v8 + 0x148) = temp_v5;
                if (!temp_v9) {
                  temp_v4 = '\x01';
                }
                if (temp_v4 != '\0') {
                  temp_v1 = *(unsigned char *)(temp_v8 + 2) | 2;
                }
                else {
                  temp_v1 = *(unsigned char *)(temp_v8 + 2) & 0xfd;
                }
                *(unsigned char *)(temp_v8 + 2) = temp_v1;
              }
            }
            else {
              temp_v4 = *(char *)(puVar6 + 6);
              temp_v5 = *puVar6;
              temp_v9 = temp_v4 != '\f';
              if (temp_v9) {
                temp_v4 = '\0';
              }
              *(unsigned int *)(temp_v8 + 0x144) = puVar6[1];
              *(unsigned int *)(temp_v8 + 0x140) = temp_v5;
              if (!temp_v9) {
                temp_v4 = '\x01';
              }
              if (temp_v4 != '\0') {
                temp_v1 = *(unsigned char *)(temp_v8 + 2) | 1;
              }
              else {
                temp_v1 = *(unsigned char *)(temp_v8 + 2) & 0xfe;
              }
              *(unsigned char *)(temp_v8 + 2) = temp_v1;
            }
          }
        }
        else {
          in_s0 = temp_v10;
          if ((*(unsigned int *)(temp_v6 + 8) & 0x100) == 0) {
            if ((*(unsigned int *)(temp_v6 + 8) & 1) != 0) {
              in_s1 = *(float *)(temp_v6 + 0xc);
            }
            else {
              FUN_001a83bc(*(unsigned int *)(temp_v6 + 0xc));
              in_s0 = temp_v10;
              in_s1 = temp_v10;
            }
          }
          temp_v0 = *(short *)(temp_v6 + 4);
          if (temp_v0 == 0x14) {
            *(float *)(temp_v8 + 0xf8) = in_s1;
          }
          else if (temp_v0 == 0x17) {
            temp_v8 = temp_v8 + 0x70;
            *(float *)(temp_v8 + 0xa0) = in_s1;
          }
          else if (temp_v0 == 0x1a) {
            temp_v8 = temp_v8 + 0x88;
            *(float *)(temp_v8 + 0xa0) = in_s1;
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < *(unsigned int *)(temp_v13 + 0x10));
  }
  return;
}

} /* extern "C" */
