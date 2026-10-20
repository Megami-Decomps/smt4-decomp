/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187114` (_code @ 0x187114, 0x1408 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int fadeObjectResetIfActive(...);
int FUN_0029a284(...);
int dataTable00FindById(void);
int FUN_002b6dd8(...);

int FUN_0029a17c(...);
int FUN_0029a924(...);
int FUN_0029ab54(int, int);
int FUN_0029acb0(void);
int FUN_0029c8f4(...);
int FUN_0029dc74(...);
int FUN_0029ee54(...);
int FUN_002ae164(void);
int FUN_002b6c34(...);
int FUN_002bce00(...);
int FUN_002bdf94(...);
int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_002bf538(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_2: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int sp6A4; /* 0x6a4: local_6a4 */
    unsigned int sp6B4; /* 0x6b4: local_6b4 */
    unsigned int sp6B8; /* 0x6b8: local_6b8 */
    unsigned int sp6BC; /* 0x6bc: local_6bc */
    unsigned int sp6C0; /* 0x6c0: local_6c0 */
} param_2_stack;

extern unsigned char LAB_00187424; /* 0x187424 */
extern unsigned char LAB_0018742c; /* 0x18742c */
extern unsigned char LAB_0018792c; /* 0x18792c */
extern unsigned char LAB_00187940; /* 0x187940 */
extern unsigned char LAB_00187d54; /* 0x187d54 */
extern unsigned char LAB_00188110; /* 0x188110 */
extern unsigned char LAB_001884e0; /* 0x1884e0 */
extern unsigned char LAB_001884ec; /* 0x1884ec */
extern unsigned char LAB_0018851c; /* 0x18851c */
extern int g_statusDown; /* 0x44e190 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0029a17c. */
/* Supplied declaration required: fadeObjectResetIfActive. */
/* Supplied declaration required: FUN_0029a284. */
/* Supplied declaration required: FUN_0029a924. */
extern unsigned int FUN_0029a9d4(unsigned short, unsigned int);
extern int FUN_0029aafc(void);
/* Supplied declaration required: FUN_0029ab54. */
extern int FUN_0029ac94(void);
/* Supplied declaration required: FUN_0029acb0. */
/* Supplied declaration required: FUN_0029c8f4. */
extern int FUN_0029d644(int);
/* Supplied declaration required: FUN_0029dc74. */
extern int FUN_0029e9cc(unsigned short);
/* Supplied declaration required: FUN_0029ee54. */
extern int FUN_0029efa8(void);
/* Supplied declaration required: FUN_002ae164. */
extern int FUN_002b066c(unsigned short);
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002bce00. */
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_00187114(int param_1,int param_2)

{
/* irregular: 13 goto(s); irregular input(s): in_fpscr; 22 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned short *puVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short *puVar10;
  unsigned int temp_v7;
  unsigned char *puVar12;
  int *piVar13;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  unsigned char temp_v13 [8];
  int temp_v14;
  int temp_v15;
  unsigned char temp_v16 [68];
  unsigned int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  int temp_v22;
  
  temp_v2 = g_statusDown;
  temp_v18 = g_statusDown + 0x4d4;
  temp_v15 = FUN_0029efa8();
  temp_v20 = 0;
  temp_v17 = 0;
  psVar4 = (short *)FUN_0029acb0();
  temp_v8 = 0;
  if (*psVar4 < 0) {
    temp_v17 = 1;
  }
  temp_v21 = FUN_0029ac94();
  if (temp_v21 != 0xd) {
    if (temp_v21 == 6) {
      puVar5 = (unsigned short *)FUN_0029acb0();
      temp_v3 = FUN_0029e9cc(*puVar5);
      if (temp_v3 == 0) {
        temp_v8 = 1;
      }
    }
  }
  else {
    temp_v8 = 1;
  }
  FUN_002bf380(2,0x1a,4,param_1,param_2,0xb3);
  FUN_002bf380(2,0x1a,6,param_1,param_2,0xb5);
  FUN_0029ab54(param_1,param_2);
  temp_v22 = temp_v2 + 0x500;
  temp_v19 = temp_v2 + 0x400;
  temp_v3 = 0;
  do {
    temp_v4 = temp_v2 + temp_v3 * 2;
    if (*(short *)(temp_v4 + 0x482) != 0) {
      temp_v9 = 0;
      if (*(int *)(temp_v2 + 0x400) == 4) {
        if (*(int *)(temp_v2 + 0x40c) >= 9) {
          temp_v5 = FUN_0029d644(temp_v18);
          if (temp_v5 == temp_v3 + 1) {
            temp_v9 = vec2GetXInt(temp_v2 + 0x2e4);
          }
          goto LAB_0018730c;
        }
      }
      else {
LAB_0018730c:
        if (*(int *)(temp_v2 + 0x400) == 9) {
          if (*(int *)(temp_v2 + 0x53c) == temp_v3) {
            temp_v9 = *(int *)(temp_v2 + 0x40c);
            if (temp_v9 >= 9) {
              temp_v9 = vec2GetXInt(temp_v2 + 0x2e4);
              goto LAB_0018733c;
            }
            temp_v9 = temp_v9 * -0x28;
          }
        }
        else {
LAB_0018733c:
          temp_v5 = *(int *)(temp_v2 + 0x400);
          temp_v11 = temp_v5 == 0xe;
          if (temp_v11) {
            temp_v5 = *(int *)(temp_v2 + 0x544);
          }
          if (temp_v11 && temp_v5 == temp_v3) {
            temp_v9 = *(int *)(temp_v2 + 0x40c);
            if (temp_v9 < 9) {
              temp_v9 = temp_v9 * -0x28;
            }
            else {
              temp_v9 = vec2GetXInt(temp_v2 + 0x2e4);
            }
          }
        }
      }
      temp_v5 = FUN_002bf4f8(0x1a,temp_v3 + 0x414);
      temp_v14 = FUN_002bf4f8(0x1a,0x40f);
      if (temp_v8 != 0) {
        FUN_002be624(temp_v16,&LAB_00187424);
      }
      else {
        temp_v10 = FUN_002bce00(*(unsigned short *)(temp_v4 + 0x482));
        FUN_002be624(temp_v16,&LAB_0018742c,temp_v10);
      }
      temp_v6 = *(int *)(temp_v2 + 0x400);
      if (!(temp_v6 == 0xb || temp_v6 == 0xe)) {
        if (temp_v6 == 6 || temp_v6 == 9) {
          temp_v10 = 0xff;
        }
        else if ((((temp_v6 != 4) || (*(int *)(temp_v2 + 0x40c) < 9)) ||
                 (temp_v6 = FUN_0029d644(temp_v18), temp_v6 != temp_v3 + 1)) &&
                ((*(char *)(temp_v22 + 0x48) == '\0' || (*(int *)(temp_v2 + 0x54c) != temp_v3)))) {
          temp_v10 = 0xff;
          temp_v0 = *(char *)(temp_v2 + temp_v3 + 0x4c2);
          if (temp_v0 != '\x01') {
            if (temp_v0 == '\x02') {
              temp_v10 = 0xdc0f14ff;
            }
          }
          else {
            temp_v10 = 0x8400ff;
          }
        }
        else {
          temp_v10 = 0x8400ff;
        }
      }
      else if (*(int *)(temp_v2 + 0x544) == temp_v3) {
        temp_v10 = 0x8400ff;
      }
      else {
        temp_v10 = 0x5a5a5aff;
      }
      temp_v9 = temp_v9 + param_1;
      VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v14 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v9,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,temp_v10,temp_v16,(int)*(short *)(temp_v14 + 10));
      temp_v6 = FUN_002bf4f8(0x1a,0x40e);
      FUN_002b6c34((int)*(short *)(temp_v4 + 0x482),
                   (int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v9,
                   (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,0xb5,temp_v17
                   ,0);
      if (temp_v8 == 0) {
        if (*(short *)(temp_v19 + 0x7e) < 0) {
          temp_v20 = FUN_0029a9d4(*(unsigned short *)(temp_v4 + 0x482),1);
        }
        else {
          temp_v7 = (unsigned int)*(unsigned short *)(temp_v4 + 0x482);
          if (temp_v21 != 6) {
            temp_v20 = FUN_0029a924();
          }
          else {
            FUN_002ae164();
            if (temp_v7 != 0) {
              temp_v20 = (unsigned int)*(unsigned char *)(temp_v7 + 0x22);
            }
          }
        }
        FUN_002bf380(2,0x1a,7,*(short *)(temp_v5 + 8) + temp_v9,*(short *)(temp_v5 + 10) + param_2,0xb5);
        temp_v4 = FUN_002bf4f8(0x1a,0x413);
        FUN_002bdf94(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v9,
                     (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,1,4,0xba,
                     &LAB_0018792c,temp_v20);
      }
    }
    else {
      if (*(short *)(temp_v19 + 0x7e) < 0) {
        temp_v4 = FUN_0029aafc();
      }
      else {
        temp_v4 = FUN_002b066c(*(unsigned short *)(temp_v19 + 0x7e));
        if (temp_v4 != 0) {
          temp_v4 = FUN_0029c8f4();
        }
        else {
          FUN_0029dc74(*(unsigned short *)(temp_v19 + 0x7e),temp_v13);
          temp_v4 = FUN_0029c8f4(temp_v13);
        }
      }
      if ((temp_v4 <= temp_v3) && (temp_v21 != 6)) {
        FUN_002bf288(2,0x1a,temp_v3 + 0x54b,param_1,param_2,0xb5);
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  temp_v3 = *(int *)(temp_v2 + 0x400);
  if (temp_v3 != 3) {
    if (temp_v3 == 6) {
      if (*(int *)(temp_v2 + 0x40c) >= 9) {
        temp_v3 = FUN_0029ee54(temp_v18);
        if (temp_v3 - 1 == temp_v15) goto LAB_001876e0;
        if (*(int *)(temp_v2 + 0x400) == 0xb) goto LAB_00187678;
      }
      goto LAB_00187690;
    }
    if (temp_v3 == 0xb) {
LAB_00187678:
      temp_v3 = FUN_0029ee54(temp_v18);
      if (temp_v3 - 1 != temp_v15) goto LAB_00187690;
      goto LAB_001876e0;
    }
    if (temp_v3 == 0xf || temp_v3 == 7) goto LAB_00187690;
LAB_001876ec:
    if (temp_v3 != 0xe) {
      if (*(char *)(temp_v22 + 0x38) != '\0') {
        if (!(temp_v3 == 6 || temp_v3 == 7)) {
          FUN_002bf380(2,0x1a,9,param_1,param_2,0xbf);
        }
        else {
          FUN_002bf380(2,0x1a,0x12,param_1,param_2,0xbf);
        }
        temp_v8 = 0;
        do {
          temp_v3 = temp_v2 + temp_v8 * 2;
          if (*(short *)(temp_v3 + 0x4a2) == 0) break;
          if (*(short *)(temp_v3 + 0x4a4) == 0) {
            temp_v8 = temp_v8 + 1;
            break;
          }
          temp_v8 = temp_v8 + 2;
        } while (temp_v8 < 8);
        if (temp_v8 < 1) {
          FUN_002bf288(2,0x1a,0x4e3,param_1,param_2,0xb3);
          FUN_002bf288(2,0x1a,0x4e4,param_1,param_2,0xb3);
          FUN_002bf288(2,0x1a,0x4e5,param_1,param_2,0xb3);
          temp_v8 = FUN_002bf4f8(0x1a,0x4e6);
          FUN_002be624(temp_v16,&LAB_00187940);
          VectorSignedToFloat(*(short *)(temp_v8 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v8 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(2,0x323232ff,temp_v16);
        }
        else {
          while (temp_v3 = temp_v8 - 1, -1 < temp_v3) {
            temp_v9 = *(int *)(temp_v2 + 0x400);
            temp_v4 = 0;
            if (temp_v9 != 4) {
              if (temp_v9 != 9) {
                if ((((temp_v9 == 6 || temp_v9 == 7) || temp_v9 == 8) && (0 < temp_v3)) &&
                   (temp_v4 = *(int *)(temp_v2 + 0x40c) * 0x10, temp_v4 >= 0x85)) {
                  temp_v4 = 0x84;
                }
                if ((temp_v9 != 6 && temp_v9 != 9) && (temp_v9 != 7 && temp_v9 != 8)) goto LAB_00187b88;
              }
              else {
                temp_v4 = *(int *)(temp_v2 + 0x40c) * -0x18;
                if (0 < temp_v3) {
                  temp_v4 = temp_v4 + 0x84;
                  goto joined_r0x00187b44;
                }
              }
              if (temp_v3 != 0) goto LAB_00187b88;
              temp_v8 = 0;
              if ((temp_v9 == 6) || (temp_v9 == 7 || temp_v9 == 8)) {
                temp_v8 = FUN_0029ee54(temp_v18);
                temp_v8 = temp_v8 - 1;
              }
              if (*(int *)(temp_v2 + 0x400) == 9) {
                temp_v8 = FUN_0029ee54();
              }
              if ((*(int *)(temp_v2 + 0x40c) >= 9) && (temp_v15 == temp_v8)) {
                temp_v9 = FUN_002bf4f8(0x1a,0x50b);
                FUN_002bf538();
                FUN_002bf380(2,0x1a,0x16,*(short *)(temp_v9 + 8) + param_1,
                             *(short *)(temp_v9 + 10) + param_2,0xbf);
                FUN_002bf538();
                FUN_002bf288(2,0x1a,0x4ff,*(short *)(temp_v9 + 8) + param_1,
                             *(short *)(temp_v9 + 10) + param_2,0xc2);
                temp_v8 = *(int *)(temp_v2 + 0x418);
                temp_v10 = 0x500;
                temp_v11 = temp_v8 == 0;
                if (temp_v11) {
                  temp_v8 = *(int *)(temp_v2 + 0x41c);
                }
                if (temp_v11 && temp_v8 == 0) {
                  temp_v8 = *(int *)(temp_v2 + 0x420);
                  temp_v11 = temp_v8 == 0;
                  if (temp_v11) {
                    temp_v8 = *(int *)(temp_v2 + 0x424);
                  }
                  temp_v12 = temp_v11 && temp_v8 == 0;
                  if (temp_v11 && temp_v8 == 0) {
                    temp_v12 = *(int *)(temp_v2 + 0x428) == 0;
                  }
                  if ((temp_v12) && (-1 < *(int *)(temp_v2 + 0x414))) {
                    temp_v10 = 0x501;
                  }
                }
                FUN_002bf288(2,0x1a,temp_v10,*(short *)(temp_v9 + 8) + param_1,
                             *(short *)(temp_v9 + 10) + param_2,0xc4);
                FUN_002bf288(2,0x1a,0x503,*(short *)(temp_v9 + 8) + param_1,
                             *(short *)(temp_v9 + 10) + param_2,0xc4);
                FUN_002bf288(2,0x1a,0x504,*(short *)(temp_v9 + 8) + param_1,
                             *(short *)(temp_v9 + 10) + param_2,0xc4);
                temp_v5 = FUN_002bf4f8(0x1a,0x500);
                temp_v8 = g_titleScene;
                piVar13 = (int *)(g_titleScene + 0x130c);
                temp_v6 = piVar13[*piVar13 + 2];
                piVar13[*piVar13 + 2] = 3;
                if (*(char *)(temp_v8 + 0x1324) != '\0' || temp_v6 != 3) {
                  (**(romwright_code **)(temp_v8 + 0x1328))();
                  *(unsigned char *)(temp_v8 + 0x1324) = 0;
                }
                FUN_0029a17c((int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v5 + 8) + param_1,
                             (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v5 + 10) + param_2,
                             (int)**(short **)(temp_v5 + 0xc),(int)(*(short **)(temp_v5 + 0xc))[1],1);
                temp_v8 = vec2GetYInt(temp_v2 + 0x1cc);
                temp_v1 = *(short *)(temp_v9 + 10);
                temp_v5 = vec2GetXInt(temp_v2 + 0x1cc);
                FUN_002bf288(2,0x1a,0x502,temp_v5 + param_1 + (int)*(short *)(temp_v9 + 8),
                             temp_v8 + param_2 + (int)temp_v1,0xc9);
                temp_v8 = g_titleScene;
                piVar13 = (int *)(g_titleScene + 0x130c);
                temp_v5 = piVar13[*piVar13 + 2];
                piVar13[*piVar13 + 2] = 0;
                if (*(char *)(temp_v8 + 0x1324) != '\0' || temp_v5 != 0) {
                  (**(romwright_code **)(temp_v8 + 0x1328))();
                  *(unsigned char *)(temp_v8 + 0x1324) = 0;
                }
                temp_v8 = FUN_002bf4f8(0x1a,0x50a);
                temp_v10 = FUN_002bce00(*(unsigned short *)(temp_v19 + 0xa2));
                FUN_002be624(temp_v16,&LAB_001884e0,temp_v10);
                VectorSignedToFloat((int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v8 + 10) +
                                    param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v9 + 8) +
                                    param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002be5a4(3,0xffffffff,temp_v16,(int)*(short *)(temp_v9 + 8));
                temp_v8 = FUN_002bf4f8(0x1a,0x509);
                FUN_002b6c34((int)*(short *)(temp_v19 + 0xa2),
                             (int)*(short *)(temp_v9 + 8) + (int)*(short *)(temp_v8 + 8) + param_1,
                             (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,
                             0xc9,temp_v17,0);
                temp_v10 = FUN_0029a924(*(unsigned short *)(temp_v19 + 0xa2));
                temp_v8 = FUN_002bf4f8(0x1a,0x508);
                FUN_002bdf94(0,(int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v9 + 8) + param_1,
                             (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,1
                             ,4,0xc9,&LAB_001884ec,temp_v10);
              }
              else {
                temp_v9 = FUN_002bf4f8(0x1a,0x43f);
                temp_v6 = FUN_002bf4f8(0x1a,0x4f1);
                temp_v5 = g_titleScene;
                temp_v8 = *(int *)(temp_v2 + 0x40c) * 0x10;
                temp_v6 = (int)**(short **)(temp_v6 + 0xc) - (int)**(short **)(temp_v9 + 0xc);
                if (temp_v6 < temp_v8) {
                  temp_v8 = temp_v6;
                }
                if (-1 < temp_v4) {
                  piVar13 = (int *)(g_titleScene + 0x130c);
                  temp_v6 = piVar13[*piVar13 + 2];
                  piVar13[*piVar13 + 2] = 3;
                  if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 3) {
                    (**(romwright_code **)(temp_v5 + 0x1328))();
                    *(unsigned char *)(temp_v5 + 0x1324) = 0;
                  }
                  FUN_0029a17c(*(short *)(temp_v9 + 8) + param_1,*(short *)(temp_v9 + 10) + param_2,
                               **(short **)(temp_v9 + 0xc) + temp_v8,
                               (int)(*(short **)(temp_v9 + 0xc))[1],1);
                }
                temp_v5 = param_1 + temp_v4;
                FUN_002bf380(2,0x1a,0x15,temp_v5,param_2,0xb3);
                temp_v8 = FUN_002bf4f8(0x1a,0x4f6);
                FUN_002b6c34((int)*(short *)(temp_v19 + 0xa2),*(short *)(temp_v8 + 8) + temp_v5,
                             *(short *)(temp_v8 + 10) + param_2,0xb5,0,0);
                temp_v8 = FUN_002bf4f8(0x1a,0x4f7);
                temp_v10 = FUN_002bce00(*(unsigned short *)(temp_v19 + 0xa2));
                FUN_002be624(temp_v16,&LAB_001884e0,temp_v10);
                VectorSignedToFloat(*(short *)(temp_v8 + 8) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(short *)(temp_v8 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002be5a4(2,0xff,temp_v16);
                temp_v10 = FUN_0029a924(*(unsigned short *)(temp_v19 + 0xa2));
                temp_v8 = FUN_002bf4f8(0x1a,0x4fb);
                FUN_002bdf94(0,*(short *)(temp_v8 + 8) + temp_v5,*(short *)(temp_v8 + 10) + param_2,1,4,
                             0xc9,&LAB_001884ec,temp_v10);
                temp_v8 = g_titleScene;
                if (-1 < temp_v4) {
                  piVar13 = (int *)(g_titleScene + 0x130c);
                  temp_v5 = piVar13[*piVar13 + 2];
                  piVar13[*piVar13 + 2] = 0;
                  if (*(char *)(temp_v8 + 0x1324) != '\0' || temp_v5 != 0) {
                    (**(romwright_code **)(temp_v8 + 0x1328))();
                    *(unsigned char *)(temp_v8 + 0x1324) = 0;
                  }
                }
              }
            }
            else {
              temp_v4 = *(int *)(temp_v2 + 0x40c) * -8;
              if (0 < temp_v3) {
joined_r0x00187b44:
                if (temp_v4 < -0x2c) {
                  temp_v4 = -0x2c;
                }
              }
LAB_00187b88:
              temp_v9 = FUN_002bf4f8(0x1a,temp_v8 + 0x43e);
              FUN_002bf380(2,0x1a,10,(int)*(short *)(temp_v9 + 8) + param_1 + temp_v4,
                           *(short *)(temp_v9 + 10) + param_2,0xb3);
              temp_v8 = FUN_002bf4f8(0x1a,0x43e);
              FUN_002b6c34((int)*(short *)(temp_v2 + temp_v3 * 2 + 0x4a2),
                           (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v9 + 8) +
                           param_1 + temp_v4,
                           (int)*(short *)(temp_v9 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,
                           0xb5,0,0);
            }
            temp_v5 = 0;
            do {
              temp_v8 = *(int *)(temp_v2 + 0x400);
              if (((((temp_v8 != 6 && temp_v8 != 7) && temp_v8 != 8) || temp_v3 != 0) &&
                  (temp_v1 = *(short *)(temp_v2 + temp_v5 * 2 + 0x4b2), temp_v1 != 0)) &&
                 (temp_v1 == *(short *)(temp_v2 + temp_v3 * 2 + 0x4a2))) {
                temp_v7 = *(unsigned int *)(temp_v2 + 0x40c);
                temp_v8 = (int)(((long long)(int)temp_v7 * -0x77777777 + ((unsigned long long)temp_v7 << 0x20))
                              >> 0x20);
                temp_v8 = temp_v7 + ((temp_v8 >> 3) - (temp_v8 >> 0x1f)) * -0xf;
                VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002bf538(temp_v8);
                FUN_002bf288(2,0x1a,0x50d,(int)*(short *)(temp_v9 + 8) + temp_v4 + param_1,
                             *(short *)(temp_v9 + 10) + param_2,0xbf);
                FUN_002bf538();
              }
              temp_v5 = temp_v5 + 1;
              temp_v8 = temp_v3;
            } while (temp_v5 < 8);
          }
        }
      }
      goto LAB_00187ce0;
    }
  }
  else {
LAB_00187690:
    temp_v1 = *(short *)(temp_v2 + temp_v15 * 2 + 0x482);
    if (temp_v1 != 0) {
      FUN_0029a284(param_1,param_2,temp_v1,temp_v15 + 0x42c,temp_v17,temp_v8,0,
                   *(unsigned char *)(temp_v15 + temp_v2 + 0x4c2));
    }
LAB_001876e0:
    temp_v3 = *(int *)(temp_v2 + 0x400);
    if (temp_v3 != 0xb) goto LAB_001876ec;
  }
  temp_v8 = 0;
  if (temp_v3 == 0xe) {
    temp_v8 = *(int *)(temp_v2 + 0x40c) * -0x28;
  }
  temp_v3 = FUN_002bf4f8(0x1a,0x54a);
  temp_v8 = temp_v8 + param_1;
  FUN_002bf288(2,0x1a,0x4e3,temp_v8,param_2,0xb3);
  FUN_002bf288(2,0x1a,0x4e4,temp_v8,param_2,0xb3);
  FUN_002bf288(2,0x1a,0x4e5,temp_v8,param_2,0xb3);
  FUN_002bf380(2,0x1a,0x13,param_1,param_2,0xb3);
  if ((*(int *)(temp_v2 + 0x400) == 0xb) && (temp_v4 = FUN_0029ee54(temp_v18), temp_v4 - 1 == temp_v15)) {
    FUN_0029a284(temp_v8,param_2,*(unsigned int *)(temp_v2 + 0x540) & 0xffff,0x435,temp_v17,0,0,0);
  }
  else {
    temp_v4 = FUN_002bf4f8(0x1a,0x40f);
    temp_v10 = FUN_002bce00(*(unsigned int *)(temp_v2 + 0x540));
    FUN_002be624(temp_v16,&LAB_00187d54,temp_v10);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v8,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0x8400ff,temp_v16,(int)*(short *)(temp_v4 + 8));
    temp_v4 = FUN_002bf4f8(0x1a,0x40e);
    FUN_002b6c34((int)(short)*(unsigned int *)(temp_v2 + 0x540),
                 (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v8,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,0xb5,temp_v17,0
                );
    temp_v10 = FUN_0029a924(*(unsigned int *)(temp_v2 + 0x540));
    FUN_002bf380(2,0x1a,7,*(short *)(temp_v3 + 8) + temp_v8,*(short *)(temp_v3 + 10) + param_2,0xb5);
    temp_v4 = FUN_002bf4f8(0x1a,0x413);
    FUN_002bdf94(0,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v8,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,1,4,0xba,
                 &LAB_0018792c,temp_v10);
  }
LAB_00187ce0:
  temp_v8 = FUN_0029ee54(temp_v18);
  if (temp_v8 < 1) {
    FUN_002bf380(2,0x1a,0x1b,param_1,param_2,0xdd);
    temp_v8 = FUN_002bf4f8(0x1a,0x544);
    puVar10 = (unsigned short *)FUN_0029acb0();
    temp_v7 = (unsigned int)*puVar10;
    dataTable00FindById();
    if ((temp_v7 == 0) || ((*(unsigned short *)(temp_v7 + 0x16) & 1) != 0)) {
      FUN_002be624(temp_v16,&LAB_00188110);
    }
    else {
      FUN_002be624(temp_v16,&LAB_0018851c);
    }
    puVar12 = temp_v16;
    FUN_002b6dd8(temp_v16,2);
    VectorSignedToFloat(*(short *)(temp_v8 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v8 + 8) +
                        ((int)**(short **)(temp_v8 + 0xc) - (int)puVar12) / 2 + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xffffffff,temp_v16);
  }
  temp_v8 = g_titleScene;
  temp_v3 = *(int *)(temp_v2 + 0x400);
  if ((temp_v3 == 4 || temp_v3 == 9) || temp_v3 == 0xe) {
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar13 = (int *)(temp_v8 + 0x12ac);
    temp_v4 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = temp_v3;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    fadeObjectResetIfActive(temp_v2 + 0x370);
    temp_v2 = g_titleScene;
    temp_v8 = packNibblesAndByte(6,7,0);
    piVar13 = (int *)(temp_v2 + 0x12ac);
    temp_v3 = piVar13[*piVar13 + 2];
    piVar13[*piVar13 + 2] = temp_v8;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v3 != temp_v8) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
  }
  return;
}

} /* extern "C" */
