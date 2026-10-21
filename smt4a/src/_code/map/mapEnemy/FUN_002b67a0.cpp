/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b67a0` (_code @ 0x2b67a0, 0x4d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagsGetBlock(void);
int FUN_00178b04(int, unsigned char *, int);
int distSpatial(void);
int FUN_002d7c88(unsigned int);
void FUN_00357b18(unsigned int, int, int, int, int, int, int);
int gameFlagIsSetByBlockAt156c(...);
int sub68OwnerStart1(...);
int FUN_00379958(void);
int moriModelContentCopyBody(void);
int handleRegistryRegisterObject(unsigned int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_002b6c7c; /* 0x2b6c7c */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapEnemy; /* 0x5806d4 */
extern int g_lmapScene; /* 0x581288 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int randRange(unsigned int);
/* Supplied declaration required: gameFlagsGetBlock. */
/* Supplied declaration required: FUN_00178b04. */
extern int gameFlagIsSet(void);
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002d7c88. */
/* Supplied declaration required: FUN_00357b18. */
/* Supplied declaration required: gameFlagIsSetByBlockAt156c. */
/* Supplied declaration required: sub68OwnerStart1. */
/* Supplied declaration required: FUN_00379958. */
extern int dataTableGetRecordFifty(void);
extern int FUN_003ded68(unsigned short);
/* Supplied declaration required: moriModelContentCopyBody. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */


unsigned int FUN_002b67a0(int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  char *pcVar4;
  int temp_v3;
  int temp_v4;
  char *pcVar7;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  unsigned long long temp_v8;
  unsigned int temp_v9;
  short temp_v10;
  
  temp_v0 = g_mapEnemy;
  gameFlagsGetBlock();
  pcVar7 = (char *)0x0;
  *(unsigned char *)(temp_v0 + 0x3d88) = 0;
  temp_v2 = dataTableGetRecordFifty();
  if (0 < temp_v2) {
    temp_v8 = 0;
    do {
      pcVar4 = pcVar7;
      FUN_00379958();
      if ((*pcVar4 != -1) && (temp_v2 = FUN_003ded68(*(unsigned short *)(pcVar4 + 0x12)), temp_v2 != 0)) {
        if ((int)*pcVar4 == *(int *)(temp_v0 + 0xc)) {
          FUN_00357b18((unsigned int)pcVar7,(int)*pcVar4,(int)pcVar4[1],(int)*(short *)(pcVar4 + 2),
                       (int)*(short *)(pcVar4 + 4),(int)*(short *)(pcVar4 + 6),0);
        }
        temp_v10 = (short)(int)pcVar7;
        if (((int)*pcVar4 == *(int *)(temp_v0 + 0xc)) && ((int)pcVar4[1] == *(int *)(temp_v0 + 0x10))) {
          temp_v3 = (int)*(short *)(pcVar4 + 8);
          temp_v5 = 0;
          temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar4 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = romwright_piece_4_4(temp_v9,(int)temp_v8);
          temp_v6 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = romwright_piece_4_4(temp_v6,temp_v9);
          temp_v2 = gameFlagIsSetByBlockAt156c();
          if ((temp_v2 == 0) &&
             ((*(short *)(pcVar4 + 0x14) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) {
            if (*(short *)(pcVar4 + 0x16) != 0) {
              temp_v2 = gameFlagIsSet();
              temp_v5 = temp_v2 != 0;
              if (temp_v5) {
                sub68OwnerStart1();
              }
            }
            if (!temp_v5) {
              if (param_1 != 0) {
                temp_v9 = 1;
                return temp_v9;
              }
              temp_v2 = 0;
              do {
                temp_v4 = temp_v0 + temp_v2 * 0x188;
                if (*(char *)(temp_v4 + 0x34) == '\0') {
                  *(unsigned char *)(temp_v0 + 0x3d88) = 1;
                  *(char *)(temp_v4 + 0x34) = '\x01';
                  temp_v9 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
                  *(unsigned int *)(temp_v4 + 0x3c) = temp_v9;
                  temp_v6 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
                  *(unsigned int *)(temp_v4 + 0x40) = temp_v6;
                  *(int *)(temp_v4 + 0x44) = (int)temp_v7;
                  *(unsigned int *)(temp_v4 + 0x48) = temp_v9;
                  *(unsigned int *)(temp_v4 + 0x4c) = temp_v6;
                  *(int *)(temp_v4 + 0x50) = (int)temp_v7;
                  *(unsigned int *)(temp_v4 + 0x54) = temp_v9;
                  temp_v9 = VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *(unsigned int *)(temp_v4 + 0x58) = temp_v6;
                  *(unsigned int *)(temp_v4 + 0x5c) = *(unsigned int *)(temp_v4 + 0x44);
                  *(unsigned int *)(temp_v4 + 0x60) = temp_v9;
                  *(unsigned int *)(temp_v4 + 0x6c) = 1;
                  *(unsigned int *)(temp_v4 + 100) = 0;
                  *(int *)(temp_v4 + 0x70) = (int)temp_v8;
                  *(unsigned char *)(temp_v4 + 0x84) = 1;
                  *(int *)(temp_v4 + 0xa4) = (int)*(short *)(pcVar4 + 0x10);
                  *(char **)(temp_v4 + 0x8c) = pcVar7;
                  *(int *)(temp_v4 + 0x90) = (int)*(short *)(pcVar4 + 0x18);
                  *(int *)(temp_v4 + 0x94) = (int)*(short *)(pcVar4 + 0x1a);
                  *(unsigned int *)(temp_v4 + 0x98) = *(unsigned int *)(pcVar4 + 0x1c);
                  *(int *)(temp_v4 + 0x9c) = (int)*(short *)(pcVar4 + 0x20);
                  *(int *)(temp_v4 + 0xa0) = (int)*(short *)(pcVar4 + 0x22);
                  if (pcVar4[10] == '\x02') {
                    *(unsigned char *)(temp_v4 + 0xb1) = 1;
                  }
                  *(unsigned char *)(temp_v4 + 0x17c) = 0;
                  *(unsigned short *)(temp_v4 + 0x1a8) = 999;
                  *(unsigned short *)(temp_v4 + 0x1aa) = 0;
                  *(int *)(temp_v4 + 0x1b0) = (int)pcVar4[0xe];
                  *(short *)(temp_v4 + 0x16e) = temp_v10;
                  FUN_002d7c88(*(unsigned int *)(temp_v4 + 0x1b0));
                  *(int *)(temp_v4 + 0xac) = (int)pcVar4[0xb];
                  temp_v2 = *(int *)(g_lmapScene + 0x1c);
                  distSpatial();
                  if (temp_v2 >= 0x43480000) {
                    temp_v1 = (unsigned short)(unsigned char)pcVar4[10];
                    temp_v5 = temp_v1 == 1;
                    if (temp_v5) {
                      temp_v1 = *(unsigned short *)(pcVar4 + 0xc);
                    }
                    if (!temp_v5 || temp_v1 != 0) {
                      if (*(char *)(temp_v4 + 0xb1) != '\0') goto LAB_002b6a70;
                      goto LAB_002b6ad4;
                    }
LAB_002b6a7c:
                    *(unsigned int *)(temp_v4 + 0xb8) = 2;
                    *(unsigned int *)(temp_v4 + 0xbc) = 0;
                    temp_v2 = randRange(200);
                    *(int *)(temp_v4 + 0xc0) = temp_v2 + 0x3c;
                    *(unsigned int *)(temp_v4 + 0xc4) = 0;
                    *(unsigned int *)(temp_v4 + 0x1a4) = 0;
                    temp_v2 = randRange(0x96);
                    *(int *)(temp_v4 + 0xd8) = temp_v2 + 1;
                    *(unsigned char *)(temp_v4 + 0x170) = 0;
                    *(unsigned char *)(temp_v4 + 0x171) = 0;
                    *(unsigned char *)(temp_v4 + 0x173) = 0;
                  }
                  else {
LAB_002b6a70:
                    if (pcVar4[10] != '\x03') goto LAB_002b6a7c;
LAB_002b6ad4:
                    *(unsigned int *)(temp_v4 + 100) = 1;
                    *(unsigned int *)(temp_v4 + 0x6c) = 1;
                    temp_v2 = temp_v0 + *(int *)(temp_v4 + 0x1b0) * 8;
                    if (*(char *)(temp_v2 + 0x3d91) != '\0') {
                      temp_v2 = 0x20;
                      FUN_00178b04(0x20,&LAB_002b6c7c,0x564);
                      temp_v9 = 0;
                      if (temp_v2 != 0) {
                        temp_v9 = modelListInit();
                      }
                      *(unsigned int *)(temp_v4 + 0x1b4) = temp_v9;
                      moriModelContentCopyBody();
                      handleRegistryRegisterObject(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v4 + 0x1b4) + 4));
                      *(unsigned char *)(temp_v4 + 0x1b9) = 1;
                    }
                    else {
                      *(unsigned int *)(temp_v4 + 0x1b4) = *(unsigned int *)(temp_v2 + 0x3d8c);
                      *(unsigned char *)(temp_v0 + *(int *)(temp_v4 + 0x1b0) * 8 + 0x3d91) = 1;
                      *(unsigned char *)(temp_v4 + 0x1b9) = 0;
                    }
                    *(unsigned char *)(temp_v4 + 0x1b8) = 1;
                    *(int *)(temp_v0 + 0x3d78) = *(int *)(temp_v0 + 0x3d78) + 1;
                    if (*(int *)(temp_v4 + 0xac) == 0) {
                      *(unsigned int *)(temp_v4 + 0xb8) = 0x11;
                    }
                    else if (*(int *)(temp_v4 + 0xac) == 1) {
                      *(unsigned int *)(temp_v4 + 0xb8) = 0;
                    }
                    *(unsigned int *)(temp_v4 + 0xbc) = 0;
                    *(unsigned int *)(temp_v4 + 0xc0) = 0;
                    *(unsigned int *)(temp_v4 + 0xc4) = 0;
                    *(unsigned int *)(temp_v4 + 0x1a4) = 0;
                    *(unsigned char *)(temp_v4 + 0x170) = 0;
                    *(unsigned char *)(temp_v4 + 0x171) = 0;
                    *(unsigned char *)(temp_v4 + 0x173) = 0;
                    if (*(char *)(temp_v4 + 0xb1) != '\0') {
                      *(unsigned char *)(temp_v0 + 0x3d89) = 1;
                    }
                  }
                  *(int *)(temp_v0 + 0x3d74) = *(int *)(temp_v0 + 0x3d74) + 1;
                  break;
                }
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < 0x28);
            }
          }
          else {
            sub68OwnerStart1(pcVar7);
          }
        }
        else {
          temp_v2 = gameFlagIsSetByBlockAt156c((int)temp_v10);
          if (((temp_v2 != 0) ||
              ((*(short *)(pcVar4 + 0x14) != 0 && (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) ||
             ((*(short *)(pcVar4 + 0x16) != 0 && (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) {
            sub68OwnerStart1(pcVar7);
          }
        }
      }
      pcVar7 = pcVar7 + 1;
      temp_v2 = dataTableGetRecordFifty();
    } while ((int)pcVar7 < temp_v2);
  }
  if (param_1 != 0) {
    temp_v9 = 0;
  }
  else {
    temp_v9 = 0;
    if (*(int *)(temp_v0 + 0x3d74) != 0) {
      temp_v9 = 1;
    }
  }
  return temp_v9;
}

} /* extern "C" */
