/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273060` (_code @ 0x273060, 0x708 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002b5cd4(void);
int FUN_002d2834(void);
int FUN_003281c4(int, unsigned int, unsigned int, int);
int naviMainQueueRequest(int);
int FUN_00352bc4(void);
int FUN_003b959c(void);
int FUN_003fd76c(int, int *);
int FUN_003fd784(int);
int FUN_003fdb18(int);
int FUN_003fe86c(int, unsigned int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int *DAT_005806a4; /* 0x5806a4 */
extern int DAT_005806d4; /* 0x5806d4 */
extern int DAT_00581280; /* 0x581280 */
extern int g_lmapScene; /* 0x581288 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161c; /* 0x5f161c */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f161f; /* 0x5f161f */
extern int DAT_005f17f0; /* 0x5f17f0 */
extern signed char DAT_005f1aa4; /* 0x5f1aa4 */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1be0; /* 0x5f1be0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_002d2834. */
/* Supplied declaration required: FUN_003281c4. */
/* Supplied declaration required: naviMainQueueRequest. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_003b959c. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
extern int FUN_004bc5a4(unsigned int);


void FUN_00273060(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned int temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  int temp_v19;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  temp_v1 = DAT_005806d4;
  if (DAT_005f1be0 == 0) {
    if (DAT_005f161f == '\0') {
      if ((*DAT_005806a4 == 3) || (*(char *)(DAT_00581280 + 0xf40) != '\0')) {
        temp_v2 = 0;
        do {
          temp_v3 = temp_v1 + temp_v2 * 0x188;
          if ((*(char *)(temp_v3 + 0x34) != '\0') && (*(char *)(temp_v3 + 0x1b8) != '\0')) {
            temp_v3 = *(int *)(*(int *)(temp_v3 + 0x1b4) + 4);
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x28);
        return;
      }
      if (DAT_005f161d != '\0') {
        temp_v2 = 0;
        do {
          temp_v3 = temp_v1 + temp_v2 * 0x188;
          if ((*(char *)(temp_v3 + 0x34) != '\0') && (*(char *)(temp_v3 + 0x1b8) != '\0')) {
            temp_v3 = *(int *)(*(int *)(temp_v3 + 0x1b4) + 4);
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x28);
        return;
      }
      if (DAT_005f1aa4 != '\0') {
        temp_v2 = 0;
        do {
          temp_v3 = temp_v1 + temp_v2 * 0x188;
          if ((*(char *)(temp_v3 + 0x34) != '\0') && (*(char *)(temp_v3 + 0x1b8) != '\0')) {
            temp_v3 = *(int *)(*(int *)(temp_v3 + 0x1b4) + 4);
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x28);
        return;
      }
      temp_v16 = 0;
      temp_v7 = DAT_005f1bc4 == '\0';
      temp_v0 = DAT_005f1bc4;
      if (temp_v7) {
        temp_v0 = DAT_005f1614;
      }
      temp_v8 = temp_v7 && temp_v0 == '\0';
      if (temp_v7 && temp_v0 == '\0') {
        temp_v8 = DAT_005f161c == '\0';
      }
      if (temp_v8) {
        FUN_003b959c();
        temp_v2 = g_lmapScene;
        temp_v14 = 0.017453292f;
        temp_v4 = *(unsigned int *)(g_lmapScene + 0x2c);
        temp_v5 = *(unsigned int *)(g_lmapScene + 0x30);
        *(unsigned int *)(temp_v1 + 0x14) = *(unsigned int *)(g_lmapScene + 0x28);
        *(unsigned int *)(temp_v1 + 0x18) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x1c) = temp_v5;
        *(unsigned int *)(temp_v1 + 0x20) = *(unsigned int *)(temp_v2 + 0x7c);
        temp_v9 = *(float *)(temp_v2 + 0x50);
        *(float *)(temp_v1 + 0x24) = temp_v9;
        temp_v9 = temp_v9 * 0.017453292f;
        FUN_001bc124();
        *(float *)(temp_v1 + 0x28) = temp_v9 * *(float *)(temp_v1 + 0x20);
        *(unsigned int *)(temp_v1 + 0x2c) = temp_v16;
        temp_v14 = *(float *)(temp_v1 + 0x24) * temp_v14;
        FUN_001bbf0c();
        *(float *)(temp_v1 + 0x30) = temp_v14 * *(float *)(temp_v1 + 0x20);
        if (0 < DAT_005f17f0) {
          DAT_005f17f0 = DAT_005f17f0 - 1;
        }
        FUN_002d2834();
      }
      temp_v2 = DAT_005806d4;
      temp_v17 = romwright_piece_4_4(0x3f800000,temp_v16);
      temp_v11 = (float)DAT_005806a4[0x17] - (float)DAT_005806a4[0x14];
      temp_v14 = (float)DAT_005806a4[0x18] - (float)DAT_005806a4[0x15];
      temp_v9 = (float)DAT_005806a4[0x19] - (float)DAT_005806a4[0x16];
      temp_v12 = 1.0f / romwright_sqrt_4(temp_v11 * temp_v11 + temp_v14 * temp_v14 + temp_v9 * temp_v9);
      temp_v15 = CONCAT44(temp_v14 * temp_v12,temp_v11 * temp_v12);
      temp_v9 = temp_v9 * temp_v12;
      temp_v10 = DAT_005806a4[0x14];
      FUN_00352bc4();
      temp_v18 = (unsigned long long)temp_v10;
      temp_v3 = 0;
      do {
        temp_v6 = temp_v2 + temp_v3 * 0x188;
        if (*(char *)(temp_v6 + 0x34) != '\0') {
          FUN_00352bc4();
          temp_v12 = *(float *)(temp_v6 + 0x54) - (float)DAT_005806a4[0x14];
          temp_v14 = *(float *)(temp_v6 + 0x58) - (float)DAT_005806a4[0x15];
          temp_v11 = *(float *)(temp_v6 + 0x5c) - (float)DAT_005806a4[0x16];
          temp_v13 = (float)((unsigned long long)temp_v17 >> 0x20) /
                   romwright_sqrt_4(temp_v12 * temp_v12 + temp_v14 * temp_v14 + temp_v11 * temp_v11);
          temp_v14 = (float)temp_v15 * temp_v12 * temp_v13 +
                   (float)((unsigned long long)temp_v15 >> 0x20) * temp_v14 * temp_v13 + temp_v9 * temp_v11 * temp_v13;
          temp_v10 = (unsigned int)temp_v18;
          FUN_002b5cd4();
          *(unsigned int *)(temp_v6 + 0xb4) = temp_v10;
          if ((temp_v10 < 0xc2200000) && ((int)temp_v10 < 0x42200000)) {
            *(unsigned char *)(temp_v6 + 0xb2) = 1;
          }
          else {
            *(unsigned char *)(temp_v6 + 0xb2) = 0;
          }
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v17 <= temp_v14) << 0x1d);
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            *(unsigned char *)(temp_v6 + 0xb2) = 0;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x28);
      temp_v2 = 0;
      do {
        temp_v3 = temp_v1 + temp_v2 * 0x188;
        if ((*(char *)(temp_v3 + 0x34) != '\0') && (*(char *)(temp_v3 + 0x1b8) != '\0')) {
          if (*(char *)(temp_v3 + 0xb2) != '\0') {
            temp_v19 = *(unsigned int *)(temp_v3 + 0x54);
            uStack_4c = *(unsigned int *)(temp_v3 + 0x58);
            uStack_48 = *(unsigned int *)(temp_v3 + 0x5c);
            temp_v6 = *(int *)(*(int *)(temp_v3 + 0x1b4) + 4);
            *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) & 0xfffffffc;
            FUN_003fd76c(temp_v6,&temp_v19);
            FUN_003fdb18(temp_v6);
            temp_v0 = *(char *)(temp_v3 + 0x1af);
            if (temp_v0 != '\x01') {
              if (temp_v0 == '\x02') {
                switch(*(unsigned int *)(temp_v3 + 0x1b0)) {
                case 2:
                case 0xc:
                  break;
                case 3:
                case 0xd:
                  break;
                case 4:
                case 0xe:
                  break;
                case 5:
                case 0xf:
                  break;
                case 6:
                case 0x10:
                  break;
                case 7:
                case 0x11:
                  break;
                case 8:
                case 0x12:
                  break;
                case 9:
                case 0x13:
                  break;
                case 10:
                case 0x14:
                }
                FUN_003fd784(temp_v6);
              }
              else if (temp_v0 == '\x03') {
                switch(*(unsigned int *)(temp_v3 + 0x1b0)) {
                case 2:
                case 0xc:
                  break;
                case 3:
                case 0xd:
                  break;
                case 4:
                case 0xe:
                  break;
                case 5:
                case 0xf:
                  break;
                case 6:
                case 0x10:
                  break;
                case 7:
                case 0x11:
                  break;
                case 8:
                case 0x12:
                  break;
                case 9:
                case 0x13:
                  break;
                case 10:
                case 0x14:
                }
                FUN_003fd784(temp_v6);
              }
            }
            else {
              FUN_003fd784(temp_v6);
            }
            if (*(int *)(temp_v3 + 100) != *(int *)(temp_v3 + 0x68)) {
              *(int *)(temp_v3 + 0x68) = *(int *)(temp_v3 + 100);
              temp_v16 = VectorSignedToFloat(*(unsigned int *)(temp_v3 + 0x6c),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
              *(unsigned int *)(temp_v6 + 0x1fc) = temp_v16;
              FUN_003fe86c(temp_v6,*(unsigned int *)(temp_v3 + 100),2);
            }
          }
          else {
            temp_v6 = *(int *)(*(int *)(temp_v3 + 0x1b4) + 4);
            *(unsigned int *)(temp_v6 + 4) = *(unsigned int *)(temp_v6 + 4) | 3;
          }
          temp_v6 = *(int *)(temp_v3 + 0xb8);
          if (temp_v6 != 7) {
            if (temp_v6 < 7) {
              switch(temp_v6) {
              case 0:
              case 1:
              case 3:
              case 4:
              case 5:
              case 6:
                goto LAB_00273700;
              default:
                goto LAB_0027370c;
              }
            }
            if (temp_v6 == 0xe) goto LAB_00273700;
            if (temp_v6 < 0xe) {
              if (temp_v6 == 8 || temp_v6 == 0xd) goto LAB_00273700;
            }
            else if (temp_v6 == 0xf || temp_v6 == 0x1e) goto LAB_00273700;
          }
          else {
LAB_00273700:
            if (*(char *)(temp_v3 + 0x1ae) == '\x01') {
              temp_v6 = FUN_004bc5a4(*(unsigned int *)(temp_v3 + 0xa4));
              if (temp_v6 == 0) {
                *(unsigned char *)(temp_v3 + 0x1ae) = 0;
              }
              else {
                FUN_003281c4(temp_v2,*(unsigned int *)(temp_v1 + 0xc),*(unsigned int *)(temp_v1 + 0x10),1);
              }
              temp_v2 = temp_v2 + 1;
              if (temp_v2 >= 0x28) {
                return;
              }
              continue;
            }
          }
LAB_0027370c:
          naviMainQueueRequest(temp_v2);
        }
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= 0x28) {
          return;
        }
      } while( 1 );
    }
    temp_v2 = 0;
    do {
      temp_v3 = temp_v1 + temp_v2 * 0x188;
      if ((*(char *)(temp_v3 + 0x34) != '\0') && (*(char *)(temp_v3 + 0x1b8) != '\0')) {
        temp_v3 = *(int *)(*(int *)(temp_v3 + 0x1b4) + 4);
        *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x28);
  }
  return;
}

} /* extern "C" */
