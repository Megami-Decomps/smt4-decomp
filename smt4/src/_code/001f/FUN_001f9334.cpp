/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f9334` (_code @ 0x1f9334, 0x9ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00256550(unsigned int);
int contentEntryGetE(void);
int FUN_00267144(void);
int FUN_00273f5c(void);
int FUN_00287aec(void);
int FUN_002a0428(unsigned int, int);
int gameFlagIsSet(...);
int FUN_002f3c28(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int g_mapEnemy; /* 0x447600 */
extern int g_lmapScene; /* 0x447e88 */

#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00256550. */
/* Supplied declaration required: contentEntryGetE. */
/* Supplied declaration required: FUN_00267144. */
extern int FUN_002671bc(void);
/* Supplied declaration required: FUN_00273f5c. */
extern int FUN_0027d968(void);
extern unsigned int asdMdlManagerClone(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: gameFlagIsSet. */
extern int randNextInRange(unsigned int);
extern int gameGetMapBlock(void);
/* Supplied declaration required: FUN_002f3c28. */


unsigned int FUN_001f9334(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 9 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  char *pcVar9;
  unsigned int temp_v8;
  unsigned char *pbVar11;
  int temp_v9;
  char *pcVar13;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  unsigned long long temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned long long temp_v20;
  
  temp_v3 = g_mapEnemy;
  temp_v11 = 0;
  temp_v5 = gameGetMapBlock();
  *(unsigned char *)(temp_v3 + 0x3048) = 0;
  temp_v6 = gameGetMapBlock();
  temp_v10 = 0;
  pcVar13 = (char *)0x0;
  temp_v7 = FUN_002671bc();
  if (0 < temp_v7) {
    do {
      pcVar9 = pcVar13;
      FUN_00267144();
      temp_v8 = (unsigned int)*pcVar9;
      temp_v12 = temp_v8 != 0xffffffff;
      if (temp_v12) {
        temp_v8 = (unsigned int)*(unsigned short *)(pcVar9 + 0x12);
      }
      if ((temp_v12 && temp_v8 != 0) && (temp_v7 = FUN_0027d968(), temp_v7 == *(short *)(pcVar9 + 0x12))) {
        temp_v7 = temp_v6 + temp_v10 * 0x14;
        pbVar11 = (unsigned char *)(temp_v7 + 0xf20);
        if ((*pbVar11 & 1) != 0) {
          temp_v9 = gameFlagIsSet(temp_v10 + 0x310);
          if (temp_v9 != 0) {
            *pbVar11 = *(unsigned char *)(temp_v7 + 0xf20) & 0xfb;
          }
          else if (((*(short *)(pcVar9 + 0x14) == 0) || (temp_v9 = gameFlagIsSet(), temp_v9 != 0)) &&
                  ((*(short *)(pcVar9 + 0x16) == 0 || (temp_v9 = gameFlagIsSet(), temp_v9 == 0)))) {
            *pbVar11 = *(unsigned char *)(temp_v7 + 0xf20) | 4;
          }
        }
        temp_v10 = temp_v10 + 1;
      }
      pcVar13 = pcVar13 + 1;
      temp_v7 = FUN_002671bc();
    } while ((int)pcVar13 < temp_v7);
  }
  pcVar13 = (char *)0x0;
  temp_v6 = FUN_002671bc();
  if (0 < temp_v6) {
    temp_v14 = 0;
    do {
      pcVar9 = pcVar13;
      FUN_00267144();
      if (*pcVar9 != -1) {
        temp_v1 = romwright_subpiece_4_2_0(pcVar13,0);
        if (*(short *)(pcVar9 + 0x12) != 0) {
          temp_v6 = FUN_0027d968();
          if (temp_v6 == *(short *)(pcVar9 + 0x12)) {
            temp_v12 = 0;
            temp_v2 = 0;
            if ((int)*(short *)(temp_v5 + 0x1e) != (int)*(short *)(pcVar9 + 0x12)) {
              FUN_00273f5c();
              *(unsigned short *)(temp_v5 + 0x1e) = *(unsigned short *)(pcVar9 + 0x12);
            }
            if (*(short *)(pcVar9 + 0xc) >= 1) {
              temp_v6 = temp_v5 + temp_v11 * 0x14;
              temp_v12 = 1;
              if ((*(unsigned char *)(temp_v6 + 0xf20) & 8) != 0) {
                FUN_002f3c28();
              }
              *(unsigned char *)(temp_v6 + 0xf20) = *(unsigned char *)(temp_v6 + 0xf20) & 0xdf;
              temp_v7 = (int)*(short *)(temp_v6 + 0xf24);
              contentEntryGetE();
              temp_v10 = *(int *)(temp_v3 + 0xc);
              if (((((*(char *)(temp_v7 + 4) == temp_v10) &&
                    ((int)*(char *)(temp_v7 + 5) == *(int *)(temp_v3 + 0x10))) ||
                   ((*(char *)(temp_v7 + 0x12) == temp_v10 &&
                    ((int)*(char *)(temp_v7 + 0x13) == *(int *)(temp_v3 + 0x10))))) ||
                  ((*(char *)(temp_v7 + 0x20) == temp_v10 &&
                   ((int)*(char *)(temp_v7 + 0x21) == *(int *)(temp_v3 + 0x10))))) ||
                 ((*(char *)(temp_v7 + 0x2e) == temp_v10 &&
                  ((int)*(char *)(temp_v7 + 0x2f) == *(int *)(temp_v3 + 0x10))))) {
                temp_v19 = (int)*(short *)(temp_v6 + 0xf32);
                temp_v17 = VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf2c),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v15 = VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf2e),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = romwright_piece_4_4(temp_v17,temp_v15);
                temp_v15 = VectorSignedToFloat((int)*(short *)(temp_v6 + 0xf30),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = romwright_piece_4_4(temp_v15,(int)temp_v14);
                if ((*(char *)(temp_v6 + 0xf21) != temp_v10) ||
                   ((int)*(char *)(temp_v6 + 0xf22) != *(int *)(temp_v3 + 0x10))) {
                  temp_v2 = 1;
                }
LAB_001f9924:
                temp_v6 = gameFlagIsSet(temp_v11 + 0x310);
                if (((temp_v6 == 0) &&
                    ((*(short *)(pcVar9 + 0x14) == 0 || (temp_v6 = gameFlagIsSet(), temp_v6 != 0)))) &&
                   ((*(short *)(pcVar9 + 0x16) == 0 || (temp_v6 = gameFlagIsSet(), temp_v6 == 0)))) {
                  if (param_1 != 0) {
                    temp_v15 = 1;
                    return temp_v15;
                  }
                  temp_v6 = 0;
                  do {
                    temp_v7 = temp_v3 + temp_v6 * 0x180;
                    if (*(char *)(temp_v7 + 0x34) == '\0') {
                      *(unsigned char *)(temp_v3 + 0x3048) = 1;
                      *(char *)(temp_v7 + 0x34) = '\x01';
                      temp_v18 = (unsigned int)((unsigned long long)temp_v20 >> 0x20);
                      *(unsigned int *)(temp_v7 + 0x3c) = temp_v18;
                      temp_v16 = (unsigned int)temp_v20;
                      *(unsigned int *)(temp_v7 + 0x40) = temp_v16;
                      temp_v15 = VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                      temp_v17 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
                      *(unsigned int *)(temp_v7 + 0x44) = temp_v17;
                      *(unsigned int *)(temp_v7 + 0x48) = temp_v18;
                      *(unsigned int *)(temp_v7 + 0x4c) = temp_v16;
                      *(unsigned int *)(temp_v7 + 0x50) = temp_v17;
                      *(unsigned int *)(temp_v7 + 0x54) = temp_v18;
                      *(unsigned int *)(temp_v7 + 0x58) = temp_v16;
                      *(unsigned int *)(temp_v7 + 0x5c) = *(unsigned int *)(temp_v7 + 0x44);
                      *(unsigned int *)(temp_v7 + 0x60) = temp_v15;
                      *(unsigned int *)(temp_v7 + 0x6c) = 1;
                      *(unsigned int *)(temp_v7 + 100) = 0;
                      *(int *)(temp_v7 + 0x70) = (int)temp_v14;
                      *(unsigned char *)(temp_v7 + 0x84) = 1;
                      temp_v0 = *(short *)(pcVar9 + 0x10);
                      *(int *)(temp_v7 + 0x8c) = temp_v11 + 0x310;
                      *(int *)(temp_v7 + 0xa4) = (int)temp_v0;
                      *(int *)(temp_v7 + 0x88) = temp_v11;
                      *(int *)(temp_v7 + 0x90) = (int)*(short *)(pcVar9 + 0x18);
                      *(int *)(temp_v7 + 0x94) = (int)*(short *)(pcVar9 + 0x1a);
                      *(unsigned int *)(temp_v7 + 0x98) = *(unsigned int *)(pcVar9 + 0x1c);
                      *(int *)(temp_v7 + 0x9c) = (int)*(short *)(pcVar9 + 0x20);
                      *(int *)(temp_v7 + 0xa0) = (int)*(short *)(pcVar9 + 0x22);
                      if (temp_v12) {
                        *(unsigned char *)(temp_v7 + 0xb0) = 1;
                      }
                      if (pcVar9[10] == '\x02') {
                        *(unsigned char *)(temp_v7 + 0xb1) = 1;
                      }
                      *(unsigned char *)(temp_v7 + 0x178) = 0;
                      *(unsigned int *)(temp_v7 + 0x1a4) = 999;
                      *(int *)(temp_v7 + 0x1a8) = (int)pcVar9[0xe];
                      *(unsigned short *)(temp_v7 + 0x16e) = temp_v1;
                      FUN_00256550(*(unsigned int *)(temp_v7 + 0x1a8));
                      temp_v12 = 0;
                      *(int *)(temp_v7 + 0xac) = (int)pcVar9[0xb];
                      temp_v6 = *(int *)(g_lmapScene + 0x1c);
                      FUN_00287aec();
                      if (temp_v6 < 0x43480000) {
                        temp_v12 = 1;
                      }
                      else {
                        temp_v4 = (unsigned short)(unsigned char)pcVar9[10];
                        temp_v13 = temp_v4 == 1;
                        if (temp_v13) {
                          temp_v4 = *(unsigned short *)(pcVar9 + 0xc);
                        }
                        if ((temp_v13 && temp_v4 == 0) || (*(char *)(temp_v7 + 0xb1) != '\0')) {
                          temp_v12 = 1;
                        }
                      }
                      if (temp_v2) {
                        *(unsigned int *)(temp_v7 + 100) = 1;
                        *(unsigned int *)(temp_v7 + 0x6c) = 1;
                        *(unsigned int *)(temp_v7 + 0xb8) = 0x13;
                        *(unsigned int *)(temp_v7 + 0xbc) = 0;
                        temp_v6 = temp_v3 + *(int *)(temp_v7 + 0x1a8) * 8;
                        temp_v15 = *(unsigned int *)(temp_v6 + 0x304c);
                        if (*(char *)(temp_v6 + 0x3051) != '\0') {
                          temp_v15 = asdMdlManagerClone(temp_v15,0);
                          *(unsigned int *)(temp_v7 + 0x1ac) = temp_v15;
                          FUN_002a0428(temp_v15,1);
                          *(unsigned char *)(temp_v7 + 0x1b1) = 1;
                        }
                        else {
                          *(unsigned int *)(temp_v7 + 0x1ac) = temp_v15;
                          *(unsigned char *)(temp_v3 + *(int *)(temp_v7 + 0x1a8) * 8 + 0x3051) = 1;
                          *(unsigned char *)(temp_v7 + 0x1b1) = 0;
                        }
                        *(unsigned char *)(temp_v7 + 0x1b0) = 1;
                        *(int *)(temp_v3 + 0x3038) = *(int *)(temp_v3 + 0x3038) + 1;
                        *(unsigned int *)(temp_v7 + 0xc4) = 0;
                        *(unsigned int *)(temp_v7 + 0x1a0) = 0;
                        *(unsigned char *)(temp_v7 + 0x170) = 0;
                        *(unsigned char *)(temp_v7 + 0x171) = 0;
                      }
                      else if ((temp_v12) && (pcVar9[10] != '\x03')) {
                        *(unsigned int *)(temp_v7 + 0xb8) = 2;
                        *(unsigned int *)(temp_v7 + 0xbc) = 0;
                        temp_v6 = randNextInRange(100);
                        *(int *)(temp_v7 + 0xc0) = temp_v6 + 0x1e;
                        *(unsigned int *)(temp_v7 + 0xc4) = 0;
                        *(unsigned int *)(temp_v7 + 0x1a0) = 0;
                        temp_v6 = randNextInRange(0x96);
                        *(int *)(temp_v7 + 0xd8) = temp_v6 + 1;
                        *(unsigned char *)(temp_v7 + 0x170) = 0;
                        *(unsigned char *)(temp_v7 + 0x171) = 0;
                      }
                      else {
                        *(unsigned int *)(temp_v7 + 100) = 1;
                        *(unsigned int *)(temp_v7 + 0x6c) = 1;
                        temp_v6 = temp_v3 + *(int *)(temp_v7 + 0x1a8) * 8;
                        if (*(char *)(temp_v6 + 0x3051) != '\0') {
                          temp_v15 = asdMdlManagerClone(*(unsigned int *)(temp_v6 + 0x304c),0);
                          *(unsigned int *)(temp_v7 + 0x1ac) = temp_v15;
                          FUN_002a0428(temp_v15,1);
                          *(unsigned char *)(temp_v7 + 0x1b1) = 1;
                        }
                        else {
                          *(unsigned int *)(temp_v7 + 0x1ac) = *(unsigned int *)(temp_v6 + 0x304c);
                          *(unsigned char *)(temp_v3 + *(int *)(temp_v7 + 0x1a8) * 8 + 0x3051) = 1;
                          *(unsigned char *)(temp_v7 + 0x1b1) = 0;
                        }
                        *(unsigned char *)(temp_v7 + 0x1b0) = 1;
                        *(int *)(temp_v3 + 0x3038) = *(int *)(temp_v3 + 0x3038) + 1;
                        if (*(int *)(temp_v7 + 0xac) == 0) {
                          temp_v15 = 0x11;
                          *(unsigned int *)(temp_v7 + 0xb8) = temp_v15;
                        }
                        else if (*(int *)(temp_v7 + 0xac) == 1) {
                          temp_v15 = 0;
                          *(unsigned int *)(temp_v7 + 0xb8) = temp_v15;
                        }
                        *(unsigned int *)(temp_v7 + 0xbc) = 0;
                        *(unsigned int *)(temp_v7 + 0xc0) = 0;
                        *(unsigned int *)(temp_v7 + 0xc4) = 0;
                        *(unsigned int *)(temp_v7 + 0x1a0) = 0;
                        *(unsigned char *)(temp_v7 + 0x170) = 0;
                        *(unsigned char *)(temp_v7 + 0x171) = 0;
                        if (*(char *)(temp_v7 + 0xb1) != '\0') {
                          *(unsigned char *)(temp_v3 + 0x3049) = 1;
                        }
                      }
                      *(int *)(temp_v3 + 0x3034) = *(int *)(temp_v3 + 0x3034) + 1;
                      break;
                    }
                    temp_v6 = temp_v6 + 1;
                  } while (temp_v6 < 0x20);
                }
              }
            }
            else {
              temp_v6 = temp_v5 + temp_v11 * 0x14;
              if (((*(unsigned char *)(temp_v6 + 0xf20) & 1) != 0) && ((*(unsigned char *)(temp_v6 + 0xf20) & 2) == 0)) {
                *(char *)(temp_v6 + 0xf21) = *pcVar9;
                *(char *)(temp_v6 + 0xf22) = pcVar9[1];
                *(unsigned short *)(temp_v6 + 0xf2c) = *(unsigned short *)(pcVar9 + 2);
                *(unsigned short *)(temp_v6 + 0xf2e) = *(unsigned short *)(pcVar9 + 4);
                *(unsigned short *)(temp_v6 + 0xf30) = *(unsigned short *)(pcVar9 + 6);
                *(unsigned short *)(temp_v6 + 0xf32) = *(unsigned short *)(pcVar9 + 8);
                *(unsigned short *)(temp_v6 + 0xf26) = temp_v1;
              }
              if (((int)*pcVar9 == *(int *)(temp_v3 + 0xc)) &&
                 ((int)pcVar9[1] == *(int *)(temp_v3 + 0x10))) {
                temp_v19 = (int)*(short *)(pcVar9 + 8);
                temp_v17 = VectorSignedToFloat((int)*(short *)(pcVar9 + 2),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar9 + 4),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = romwright_piece_4_4(temp_v17,temp_v15);
                temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar9 + 6),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = romwright_piece_4_4(temp_v15,(int)temp_v14);
                goto LAB_001f9924;
              }
            }
            temp_v11 = temp_v11 + 1;
          }
        }
        else if (((int)*pcVar9 == *(int *)(temp_v3 + 0xc)) &&
                ((int)pcVar9[1] == *(int *)(temp_v3 + 0x10))) {
          temp_v0 = *(short *)(pcVar9 + 8);
          temp_v17 = VectorSignedToFloat((int)*(short *)(pcVar9 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar9 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = romwright_piece_4_4(temp_v17,temp_v15);
          temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar9 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = romwright_piece_4_4(temp_v15,(int)temp_v14);
          if (((*(short *)(pcVar9 + 0x14) == 0) || (temp_v6 = gameFlagIsSet(), temp_v6 != 0)) &&
             ((*(short *)(pcVar9 + 0x16) == 0 || (temp_v6 = gameFlagIsSet(), temp_v6 == 0)))) {
            temp_v6 = 0;
            if (param_1 != 0) {
              temp_v15 = 1;
              return temp_v15;
            }
            do {
              temp_v7 = temp_v3 + temp_v6 * 0x180;
              if (*(char *)(temp_v7 + 0x34) == '\0') {
                *(unsigned char *)(temp_v3 + 0x3048) = 1;
                *(char *)(temp_v7 + 0x34) = '\x01';
                temp_v18 = (unsigned int)((unsigned long long)temp_v20 >> 0x20);
                *(unsigned int *)(temp_v7 + 0x3c) = temp_v18;
                temp_v16 = (unsigned int)temp_v20;
                *(unsigned int *)(temp_v7 + 0x40) = temp_v16;
                temp_v15 = VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v17 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
                *(unsigned int *)(temp_v7 + 0x44) = temp_v17;
                *(unsigned int *)(temp_v7 + 0x48) = temp_v18;
                *(unsigned int *)(temp_v7 + 0x4c) = temp_v16;
                *(unsigned int *)(temp_v7 + 0x50) = temp_v17;
                *(unsigned int *)(temp_v7 + 0x54) = temp_v18;
                *(unsigned int *)(temp_v7 + 0x58) = temp_v16;
                *(unsigned int *)(temp_v7 + 0x5c) = *(unsigned int *)(temp_v7 + 0x44);
                *(unsigned int *)(temp_v7 + 0x60) = temp_v15;
                *(unsigned int *)(temp_v7 + 0x6c) = 1;
                *(unsigned int *)(temp_v7 + 100) = 0;
                *(int *)(temp_v7 + 0x70) = (int)temp_v14;
                *(unsigned char *)(temp_v7 + 0x84) = 1;
                *(int *)(temp_v7 + 0xa4) = (int)*(short *)(pcVar9 + 0x10);
                *(int *)(temp_v7 + 0x88) = temp_v11;
                *(unsigned int *)(temp_v7 + 0x8c) = 0;
                *(int *)(temp_v7 + 0x90) = (int)*(short *)(pcVar9 + 0x18);
                *(int *)(temp_v7 + 0x94) = (int)*(short *)(pcVar9 + 0x1a);
                *(unsigned int *)(temp_v7 + 0x98) = *(unsigned int *)(pcVar9 + 0x1c);
                *(int *)(temp_v7 + 0x9c) = (int)*(short *)(pcVar9 + 0x20);
                *(int *)(temp_v7 + 0xa0) = (int)*(short *)(pcVar9 + 0x22);
                *(unsigned char *)(temp_v7 + 0x178) = 0;
                *(unsigned int *)(temp_v7 + 0x1a4) = 999;
                *(int *)(temp_v7 + 0x1a8) = (int)pcVar9[0xe];
                *(unsigned short *)(temp_v7 + 0x16e) = temp_v1;
                FUN_00256550(*(unsigned int *)(temp_v7 + 0x1a8));
                temp_v6 = *(int *)(g_lmapScene + 0x1c);
                FUN_00287aec();
                *(int *)(temp_v7 + 0xac) = (int)pcVar9[0xb];
                if ((temp_v6 < 0x43480000) && (pcVar9[10] != '\x03')) {
                  *(unsigned int *)(temp_v7 + 0xb8) = 2;
                  *(unsigned int *)(temp_v7 + 0xbc) = 0;
                  temp_v6 = randNextInRange(100);
                  *(int *)(temp_v7 + 0xc0) = temp_v6 + 0x1e;
                  *(unsigned int *)(temp_v7 + 0xc4) = 0;
                  *(unsigned int *)(temp_v7 + 0x1a0) = 0;
                  temp_v6 = randNextInRange(0x96);
                  *(int *)(temp_v7 + 0xd8) = temp_v6 + 1;
                  *(unsigned char *)(temp_v7 + 0x170) = 0;
                  *(unsigned char *)(temp_v7 + 0x171) = 0;
                }
                else {
                  *(unsigned int *)(temp_v7 + 100) = 1;
                  *(unsigned int *)(temp_v7 + 0x6c) = 1;
                  temp_v6 = temp_v3 + *(int *)(temp_v7 + 0x1a8) * 8;
                  temp_v15 = *(unsigned int *)(temp_v6 + 0x304c);
                  if (*(char *)(temp_v6 + 0x3051) != '\0') {
                    temp_v15 = asdMdlManagerClone(temp_v15,0);
                    *(unsigned int *)(temp_v7 + 0x1ac) = temp_v15;
                    FUN_002a0428(temp_v15,1);
                    *(unsigned char *)(temp_v7 + 0x1b1) = 1;
                  }
                  else {
                    *(unsigned int *)(temp_v7 + 0x1ac) = temp_v15;
                    *(unsigned char *)(temp_v3 + *(int *)(temp_v7 + 0x1a8) * 8 + 0x3051) = 1;
                    *(unsigned char *)(temp_v7 + 0x1b1) = 0;
                  }
                  *(unsigned char *)(temp_v7 + 0x1b0) = 1;
                  *(int *)(temp_v3 + 0x3038) = *(int *)(temp_v3 + 0x3038) + 1;
                  if (*(int *)(temp_v7 + 0xac) == 0) {
                    *(unsigned int *)(temp_v7 + 0xb8) = 0x11;
                  }
                  else if (*(int *)(temp_v7 + 0xac) == 1) {
                    *(unsigned int *)(temp_v7 + 0xb8) = 0;
                  }
                  *(unsigned int *)(temp_v7 + 0xbc) = 0;
                  *(unsigned int *)(temp_v7 + 0xc0) = 0;
                  *(unsigned int *)(temp_v7 + 0xc4) = 0;
                  *(unsigned int *)(temp_v7 + 0x1a0) = 0;
                  *(unsigned char *)(temp_v7 + 0x170) = 0;
                  *(unsigned char *)(temp_v7 + 0x171) = 0;
                  if (*(char *)(temp_v7 + 0xb1) != '\0') {
                    *(unsigned char *)(temp_v3 + 0x3049) = 1;
                  }
                }
                *(int *)(temp_v3 + 0x3034) = *(int *)(temp_v3 + 0x3034) + 1;
                break;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 0x20);
          }
        }
      }
      pcVar13 = pcVar13 + 1;
      temp_v6 = FUN_002671bc();
    } while ((int)pcVar13 < temp_v6);
  }
  if (param_1 != 0) {
    temp_v15 = 0;
  }
  else {
    temp_v15 = 0;
    if (*(int *)(temp_v3 + 0x3034) != 0) {
      temp_v15 = 1;
    }
  }
  return temp_v15;
}

} /* extern "C" */
