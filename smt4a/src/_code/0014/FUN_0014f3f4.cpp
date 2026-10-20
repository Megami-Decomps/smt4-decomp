/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f3f4` (_code @ 0x14f3f4, 0x11a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001527d8(...);
int FUN_001634b4(...);
int FUN_00163ec4(...);
int FUN_00164034(...);
int FUN_00164168(...);
int FUN_001678a8(...);
int FUN_00183bb0(void);
int SBORROW4(...);

int CONCAT44(int, double);
int FUN_00100388(...);
int FUN_00157558(...);
int FUN_00162790(...);
int FUN_00164490(int);
int FUN_00164b5c(int, int);
int FUN_001654d8(...);
int FUN_001654e4(...);
int FUN_00165b08(void);
int efctSetSpeed(void);
int FUN_00168594(int, int);
int FUN_0016c4b8(...);
int FUN_0016c69c(...);
int FUN_0016c6f0(...);
int FUN_0017ffa8(int, int, int, int);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0018408c(...);
int FUN_001879d0(...);
int VectorSignedToFloat(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_0014fb38; /* 0x14fb38 */
extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern signed char DAT_005e204c; /* 0x5e204c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_00162848(unsigned int);
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_00163ec4. */
/* Supplied declaration required: FUN_00164034. */
/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_00164490. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001654d8. */
/* Supplied declaration required: FUN_001654e4. */
/* Supplied declaration required: FUN_00165b08. */
extern int FUN_001671e0(void);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001678a8. */
/* Supplied declaration required: FUN_00168594. */
extern int FUN_0016887c(unsigned int);
extern int FUN_001688c4(unsigned int);
extern int FUN_00169240(unsigned int);
extern unsigned int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
extern int FUN_001861c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001879d0. */


char FUN_0014f3f4(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 28 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  int temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  float temp_v24;
  
  temp_v5 = jobGetWork();
  temp_v18 = 0.25f;
  temp_v17 = 0x3f800000;
  if (temp_v5 == DAT_0057f590) {
    temp_v13 = *(char *)(DAT_0057f590 + 0x8e) != '\0';
    temp_v0 = '\0';
    if (temp_v13) {
      temp_v0 = *(char *)(DAT_0057f590 + 0x91);
    }
    if (temp_v13 && temp_v0 != '\0') {
      FUN_00164490(1);
    }
    if (*(char *)(DAT_0057f590 + 0x90) != '\0') {
      FUN_00165b08();
    }
    if (*(char *)(DAT_0057f590 + 0x191) != '\0') {
      temp_v6 = DAT_0057f590 + 0x1820;
      temp_v24 = temp_v18;
      temp_v7 = FUN_001654d8();
      temp_v6 = FUN_001654e4(temp_v6);
      temp_v18 = temp_v24;
      FUN_001879d0(g_renderCtx);
      temp_v16 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00157558(g_renderCtx);
      temp_v7 = FUN_001692ac(1,0);
      FUN_0016c6f0(g_renderCtx,3,temp_v7);
      temp_v8 = FUN_00169240(0);
      if (temp_v8 != 0) {
        temp_v22 = FUN_001834a4(0x13,0x11f1);
        temp_v23 = FUN_001834a4(0x13,0x11f2);
        temp_v14 = (float)((unsigned long long)temp_v17 >> 0x20);
        FUN_00168594(temp_v8,3);
        temp_v21 = 0xb;
        temp_v20 = temp_v6;
        FUN_00164b5c(2,0x13);
        temp_v12 = (int)(temp_v24 + temp_v16) + (0x18c - (int)temp_v14);
        VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v23 + 10) + temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(3,0xffffffff,temp_v8);
        temp_v20 = *(short *)(temp_v22 + 10) + temp_v6;
        temp_v21 = 0x74;
        FUN_0017ffa8(2,0x13,0x1245,temp_v12 - 0x10);
      }
      FUN_0016c69c(g_renderCtx,3);
    }
    temp_v6 = DAT_0057f590;
    if (*(char *)(DAT_0057f590 + 0x19f2) != '\0') {
      temp_v8 = DAT_0057f590 + 0x144c;
      temp_v12 = FUN_001654d8();
      temp_v8 = FUN_001654e4(temp_v8);
      temp_v6 = *(int *)(temp_v6 + 0x19f4);
      temp_v20 = 0;
      temp_v21 = 0xb;
      FUN_001835b4(2,4,44000,0);
      efctSetSpeed();
      temp_v24 = 0.35f;
      temp_v19 = CONCAT44(0x3eb33333,temp_v18);
      FUN_001879d0(g_renderCtx);
      temp_v11 = 0;
      do {
        temp_v21 = 0x10;
        temp_v20 = temp_v8;
        FUN_001835b4(2,4,temp_v11 + 0xabe1,temp_v12 + (int)temp_v24);
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 9);
      temp_v24 = (float)((unsigned long long)temp_v19 >> 0x20);
      FUN_001879d0(g_renderCtx);
      temp_v18 = (float)temp_v19;
      temp_v21 = 0x15;
      temp_v20 = temp_v8;
      FUN_001835b4(2,4,temp_v6 + 0xabec,temp_v12 + (int)temp_v24);
      temp_v16 = 0.29f;
      temp_v24 = temp_v16;
      FUN_001879d0(g_renderCtx);
      temp_v21 = 0x15;
      temp_v20 = temp_v8;
      FUN_001835b4(2,4,temp_v6 + 0xabee,temp_v12 + (int)temp_v16);
      FUN_001879d0(g_renderCtx);
      temp_v15 = (int)temp_v24;
      temp_v21 = 0x15;
      temp_v20 = temp_v8;
      FUN_001835b4(2,4,0xabea,temp_v12 + temp_v15);
      temp_v11 = FUN_001834a4(4,0xabeb);
      temp_v20 = -0xff01;
      temp_v21 = temp_v6 * 3;
      temp_v6 = temp_v6 * 0xc;
      FUN_00100388(&temp_v22,
                   "犂袂薂鎂袂膂䂁蒂薂钂薂莂钂薂蒂䦁䂁撂颂薂銂莂覂鎂薂䂁莂膂閂钂覂辂躂䦁"
                   ,*(unsigned int *)
                     ("\xe4f8U\xe516U\xe507U\xe525UഗV\xe534U\xe551UഗV\xe4e1Uͼ" + temp_v6 + 4));
      piVar10 = &temp_v22;
      FUN_0018408c(piVar10,2);
      temp_v10 = *(short *)(temp_v11 + 8) + temp_v12 +
               temp_v15 + ((int)**(short **)(temp_v11 + 0xc) - (int)piVar10) / 2;
      VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,temp_v20,&temp_v22,temp_v10);
      temp_v11 = FUN_001834a4(4,0xabec);
      temp_v20 = *(int *)("\xe4f8U\xe516U\xe507U\xe525UഗV\xe534U\xe551UഗV\xe4e1Uͼ" + temp_v6 + 8)
      ;
      FUN_00100388(&temp_v22,&LAB_0014fb38,
                   *(unsigned int *)
                    ("\xe4f8U\xe516U\xe507U\xe525UഗV\xe534U\xe551UഗV\xe4e1Uͼ" + temp_v21 * 4),
                   *(unsigned int *)
                    ("\xe4f8U\xe516U\xe507U\xe525UഗV\xe534U\xe551UഗV\xe4e1Uͼ" + temp_v6 + 4));
      piVar10 = &temp_v22;
      FUN_0018408c(piVar10,3);
      temp_v6 = *(short *)(temp_v11 + 8) + temp_v12 +
              temp_v15 + ((int)**(short **)(temp_v11 + 0xc) - (int)piVar10) / 2;
      VectorSignedToFloat(*(short *)(temp_v11 + 10) + temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,0xffffffff,&temp_v22,temp_v6);
      efctSetSpeed();
    }
  }
  if (*(char *)(temp_v5 + 0x95) != '\0') {
    return '\0';
  }
  temp_v0 = *(char *)(temp_v5 + 8);
  temp_v13 = temp_v0 == '\0';
  if (temp_v13) {
    temp_v0 = *(char *)(temp_v5 + 0x35);
  }
  if (temp_v13 && temp_v0 == '\0') {
    return temp_v0;
  }
  temp_v6 = FUN_001861c4(8,0);
  FUN_0016c4b8(g_renderCtx,*(unsigned int *)(temp_v6 + 8));
  FUN_00157558(g_renderCtx);
  switch(*(unsigned char *)(temp_v5 + 9)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x11:
  case 0x12:
  case 0x13:
    temp_v24 = temp_v18;
    FUN_001879d0(g_renderCtx);
    temp_v6 = (int)temp_v18;
    if (*(char *)(temp_v5 + 9) == '\a' || *(char *)(temp_v5 + 9) == '\t') {
      efctSetSpeed();
      temp_v7 = FUN_001692ac(1,0);
      FUN_0016c6f0(g_renderCtx,3,temp_v7);
      temp_v20 = 0;
      temp_v21 = 6;
      FUN_001835b4(2,8,0x106,0);
      FUN_0016c69c(g_renderCtx,3);
      efctSetSpeed();
    }
    temp_v18 = temp_v24;
    FUN_001678a8(temp_v5);
    temp_v9 = *(unsigned int *)(temp_v5 + 0xc);
    if ((temp_v9 & 0x20) != 0) goto LAB_0014fe54;
    if (((temp_v5 == 0) || (temp_v9 = (unsigned int)*(unsigned char *)(temp_v5 + 8), temp_v9 != 4)) ||
       (temp_v9 = (unsigned int)*(unsigned char *)(temp_v5 + 0x6d), temp_v9 != 0)) {
      if (temp_v5 != 0) {
        temp_v9 = (unsigned int)*(unsigned char *)(temp_v5 + 8);
      }
      if (temp_v5 != 0 && temp_v9 != 0) {
        temp_v8 = FUN_0016887c(*(unsigned int *)(temp_v5 + 4));
        if ((temp_v8 != 0) || ((*(char *)(temp_v5 + 8) == '\x04' && (*(char *)(temp_v5 + 0x6d) != '\0'))))
        {
          temp_v7 = FUN_001692ac(1,0);
          FUN_0016c6f0(g_renderCtx,3,temp_v7);
          temp_v8 = FUN_001654d8(temp_v5 + 0x3e4);
          temp_v8 = temp_v8 + temp_v6;
          temp_v12 = FUN_001654e4(temp_v5 + 0x3e4);
          efctSetSpeed();
          FUN_00183bb0();
          temp_v0 = *(char *)(temp_v5 + 9);
          if (!(temp_v0 == '\a' || temp_v0 == '\b')) {
            if (temp_v0 != '\t') {
              if ((DAT_005e204c == '\0') || (*(char *)(temp_v5 + 0x6d) != '\0')) {
                temp_v20 = 0;
                temp_v21 = 0x15;
                FUN_001835b4(2,8,6,temp_v8);
                efctSetSpeed();
                temp_v20 = 0;
                temp_v21 = 0x15;
                FUN_001835b4(2,8,7,temp_v6);
                efctSetSpeed();
              }
              else {
                efctSetSpeed();
                temp_v21 = 0x13;
                temp_v20 = 0;
                FUN_001835b4(2,8,0x116,temp_v6);
                temp_v7 = packNibblesAndByte(6,1,0);
                FUN_0016c6f0(g_renderCtx,6,temp_v7);
                efctSetSpeed();
                temp_v21 = 0x15;
                temp_v20 = 0;
                FUN_001835b4(2,8,0x117,temp_v8);
                efctSetSpeed();
                FUN_0016c69c(g_renderCtx,6);
              }
            }
            else {
              temp_v11 = FUN_001834a4(8,0xe0);
              temp_v20 = (int)*(short *)(temp_v11 + 10);
              temp_v21 = 0x13;
              FUN_001835b4(2,8,0xdf,*(short *)(temp_v11 + 8) + temp_v6);
              temp_v20 = *(short *)(temp_v11 + 10) + temp_v12;
              temp_v21 = 0x15;
              FUN_001835b4(2,8,0xde,*(short *)(temp_v11 + 8) + temp_v8);
            }
          }
          else {
            temp_v11 = FUN_001834a4(8,0xe1);
            temp_v20 = (int)*(short *)(temp_v11 + 10);
            temp_v21 = 0x13;
            FUN_001835b4(2,8,0xdf,*(short *)(temp_v11 + 8) + temp_v6);
            temp_v20 = *(short *)(temp_v11 + 10) + temp_v12;
            temp_v21 = 0x15;
            FUN_001835b4(2,8,0xde,*(short *)(temp_v11 + 8) + temp_v8);
          }
          FUN_0016c69c(g_renderCtx,3);
        }
        if ((*(unsigned int *)(temp_v5 + 0xc) & 0x20) != 0) goto LAB_0014fe54;
      }
    }
    if ((temp_v5 != 0) && (*(char *)(temp_v5 + 8) == '\x04')) {
      if ((*(char *)(DAT_0057f590 + 8) != '\0') &&
         ((*(char *)(DAT_0057f590 + 0x6d) == '\0' && (*(char *)(DAT_0057f58c + 0x6d) == '\0')))) {
        temp_v8 = FUN_001654d8(temp_v5 + 0x3e4);
        FUN_001654e4(temp_v5 + 0x3e4);
        temp_v7 = FUN_001692ac(1,0);
        FUN_0016c6f0(g_renderCtx,3,temp_v7);
        efctSetSpeed();
        temp_v20 = 0;
        temp_v21 = 0x1a;
        FUN_001835b4(2,8,0x182,temp_v6);
        temp_v7 = packNibblesAndByte(6,1,0);
        FUN_0016c6f0(g_renderCtx,6,temp_v7);
        efctSetSpeed();
        temp_v20 = 0;
        temp_v21 = 0x1a;
        FUN_001835b4(2,8,0x183,temp_v8 + temp_v6);
        FUN_0016c69c(g_renderCtx,6);
        efctSetSpeed();
        break;
      }
    }
    else if (*(char *)(temp_v5 + 8) == '\0') {
      return '\0';
    }
    goto LAB_0014fe60;
  default:
    goto LAB_0014fe54;
  case 0xc:
    temp_v7 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v7);
    efctSetSpeed();
    FUN_00183bb0();
    temp_v24 = 0.27f;
    temp_v6 = 0;
    do {
      if (*(char *)(temp_v5 + temp_v6 + 0x37) != '\0') {
        temp_v16 = temp_v24;
        FUN_001879d0(g_renderCtx);
        VectorSignedToFloat((int)temp_v24,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v5 + temp_v6 * 0x8c + 0x588);
        temp_v24 = temp_v16;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    break;
  case 0xd:
    temp_v7 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v7);
    efctSetSpeed();
    FUN_00183bb0();
    if (*(char *)(temp_v5 + 0x5c) != '\0') {
      temp_v24 = 0.27f;
      FUN_001879d0(g_renderCtx);
      VectorSignedToFloat((int)temp_v24,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001634b4(temp_v5 + *(short *)(temp_v5 + 0x56) * 0x8c + 0x844);
    }
  }
  FUN_0016c69c(g_renderCtx,3);
LAB_0014fe54:
  if (*(char *)(temp_v5 + 8) == '\0') {
    return '\0';
  }
LAB_0014fe60:
  switch(*(unsigned char *)(temp_v5 + 9)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x11:
  case 0x12:
  case 0x13:
    temp_v6 = 0;
    temp_v8 = 0;
    switch(*(unsigned char *)(temp_v5 + 9)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x11:
    case 0x12:
    case 0x13:
      temp_v6 = 0x7d8;
      temp_v8 = 3;
      break;
    case 7:
    case 8:
      temp_v6 = 0x6b;
      temp_v8 = 7;
      break;
    case 9:
      temp_v6 = 0x69;
      temp_v8 = 8;
    }
    temp_v7 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v7);
    if (*(char *)(temp_v5 + 8) == '\x01' || *(char *)(temp_v5 + 8) == '\x04') {
      temp_v12 = FUN_001671e0();
      if (temp_v12 != 0) {
        temp_v12 = FUN_001834a4(8,0x7d8);
        temp_v22 = (int)temp_v17;
        temp_v11 = 0x3eccccce;
        temp_v20 = (int)((unsigned long long)temp_v17 >> 0x20);
        temp_v23 = 0x3eccccce;
        temp_v21 = temp_v20;
        FUN_0016c4b8(g_renderCtx,0);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v12 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v12 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00164034(&temp_v20);
        temp_v12 = FUN_001834a4(8,0x7d9);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v12 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v12 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00164034(&temp_v20);
        temp_v20 = (int)temp_v17;
        temp_v21 = (int)((unsigned long long)temp_v17 >> 0x20);
        temp_v22 = temp_v21;
        temp_v23 = temp_v11;
        temp_v12 = FUN_001834a4(8,0x7da);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v12 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v12 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00164034(&temp_v20);
        temp_v12 = FUN_001834a4(8,0x7db);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v12 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v12 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00164034(&temp_v20);
        temp_v20 = (int)((unsigned long long)temp_v17 >> 0x20);
        temp_v21 = (int)temp_v17;
        temp_v22 = temp_v20;
        temp_v23 = temp_v11;
        temp_v12 = FUN_001834a4(8,0x42);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v12 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)(*(short **)(temp_v12 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)**(short **)(temp_v12 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00164034(&temp_v20);
      }
      FUN_001527d8(*(unsigned int *)(temp_v5 + 4),*(unsigned int *)(temp_v5 + 0x10));
      temp_v12 = 0;
      if (temp_v12 < temp_v8) {
        do {
          temp_v24 = temp_v18;
          temp_v11 = FUN_001834a4(8,temp_v6 + temp_v12);
          temp_v18 = temp_v24;
          FUN_001879d0(g_renderCtx);
          temp_v20 = 6;
          temp_v21 = temp_v12;
          FUN_00164168(*(unsigned int *)(temp_v5 + 4),(int)*(short *)(temp_v11 + 8) + (int)temp_v24);
          temp_v12 = temp_v12 + 1;
        } while (temp_v12 < temp_v8);
      }
      temp_v6 = FUN_00162848(*(unsigned int *)(temp_v5 + 4));
      if (temp_v6 != 0) {
        temp_v1 = *(unsigned short *)(*(int *)(temp_v5 + 4) + 0x48);
        if (temp_v1 < 3) {
          temp_v6 = FUN_001834a4(8,0x2f);
        }
        else if (temp_v1 < 5) {
          temp_v6 = FUN_001834a4(8,0x1f);
        }
        else if (temp_v1 < 7) {
          temp_v6 = FUN_001834a4(8,0x23);
        }
        else if (temp_v1 < 9) {
          temp_v6 = FUN_001834a4(8,0x42);
        }
        else {
          temp_v6 = FUN_001834a4(8,0x28);
        }
        FUN_001879d0(g_renderCtx);
        FUN_00163ec4(*(unsigned int *)(temp_v5 + 4),(int)*(short *)(temp_v6 + 8) + (int)temp_v18,
                     *(short *)(temp_v6 + 10) - 1,0x33);
      }
    }
    break;
  default:
    return '\0';
  case 0xc:
    temp_v7 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v7);
    temp_v18 = 0.27f;
    FUN_001879d0(g_renderCtx);
    temp_v22 = FUN_001688c4(*(unsigned int *)(temp_v5 + 4));
    temp_v6 = FUN_001834a4(8,0x8e);
    temp_v2 = *(short *)(temp_v6 + 8);
    temp_v3 = *(short *)(temp_v6 + 10);
    temp_v8 = 0;
    temp_v4 = **(short **)(temp_v6 + 0xc);
    do {
      if (*(char *)(temp_v5 + temp_v8 + 0x37) != '\0') {
        temp_v11 = temp_v5 + temp_v8 * 0x8c;
        temp_v13 = (*(unsigned char *)(temp_v11 + 0x610) & *(unsigned char *)(temp_v11 + 0x60f)) != 0;
        temp_v6 = 0;
        temp_v12 = 0;
        if (temp_v13) {
          temp_v6 = temp_v22 - temp_v8;
          temp_v12 = temp_v22;
        }
        if ((temp_v13 && temp_v12 != temp_v8) && temp_v6 < 0 == (temp_v13 && SBORROW4(temp_v12,temp_v8))) {
          temp_v21 = (int)*(char *)(temp_v5 + temp_v8 + 0x3c);
          temp_v20 = 6;
          FUN_00164168(*(unsigned int *)(temp_v5 + 4),
                       (((int)*(short *)(temp_v11 + 0x5a0) + (int)temp_v2 + (int)temp_v4 / 2) -
                       (int)*(short *)(temp_v5 + temp_v8 * 2 + 0x4c) / 2) + (int)temp_v18,
                       (int)*(short *)(temp_v11 + 0x5a2) + (int)temp_v3,0x3d);
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 5);
    break;
  case 0xd:
    temp_v7 = FUN_001692ac(1,0);
    FUN_0016c6f0(g_renderCtx,3,temp_v7);
    temp_v18 = 0.27f;
    FUN_001879d0(g_renderCtx);
    temp_v6 = FUN_001834a4(8,0x8e);
    if ((*(char *)(temp_v5 + 0x5c) != '\0') &&
       (temp_v8 = temp_v5 + *(short *)(temp_v5 + 0x56) * 0x8c,
       (*(unsigned char *)(temp_v8 + 0x8cc) & *(unsigned char *)(temp_v8 + 0x8cb)) != 0)) {
      temp_v20 = 6;
      temp_v21 = 0;
      FUN_00164168(*(unsigned int *)(temp_v5 + 4),
                   (((int)*(short *)(temp_v8 + 0x85c) +
                    (int)*(short *)(temp_v6 + 8) + (int)**(short **)(temp_v6 + 0xc) / 2) -
                   (int)*(short *)(temp_v5 + 0x60) / 2) + (int)temp_v18,
                   (int)*(short *)(temp_v8 + 0x85e) + (int)*(short *)(temp_v6 + 10),0x3d);
    }
    FUN_0016c69c(g_renderCtx,3);
    return '\0';
  }
  FUN_0016c69c(g_renderCtx,3);
  return '\0';
}

} /* extern "C" */
