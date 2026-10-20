/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202ea4` (_code @ 0x202ea4, 0xaa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(...);
int FUN_003180c4(...);
int FUN_003491e8(void);

int FUN_0014e188(...);
int FUN_001517b4(...);
int FUN_00163aa4(...);
int FUN_001641b4(...);
int FUN_001641c4(void);
int FUN_00169ddc(...);
int FUN_001834a4(int, int);
int FUN_00184758(...);
int FUN_00184c00(...);
int FUN_00187180(...);
int FUN_0019de98(...);
int FUN_00213b5c(void);
int FUN_00215994(...);
int FUN_00224880(...);
int FUN_00228b04(int, int);
int FUN_00275bc8(void);
int FUN_00275f44(...);
int FUN_00284168(int, int, int, int);
int FUN_003450d4(...);
int FUN_003a76a8(...);
int FUN_0050d778(int, unsigned int);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_0057f230; /* 0x57f230 */
extern int DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_001641c4. */
extern int FUN_001643a0(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00187180. */
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00213b5c. */
/* Supplied declaration required: FUN_00215994. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_00284168. */
extern int FUN_002a4894(int);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_003450d4. */
extern int FUN_00348ed0(int);
/* Supplied declaration required: FUN_003491e8. */
/* Supplied declaration required: FUN_003a76a8. */
extern int FUN_003d21dc(void);
extern int FUN_003f86c8(unsigned int);
/* Supplied declaration required: FUN_0050d778. */


void FUN_00202ea4(void)

{
/* irregular: 1 goto(s); 25 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  char *pcVar10;
  unsigned int temp_v10;
  char *pcVar12;
  char *pcVar13;
  int temp_v11;
  unsigned char temp_v12 [16];
  
  temp_v7 = DAT_0057f230;
  FUN_00163aa4(DAT_0057f230 + 0x430);
  temp_v6 = DAT_0057f230;
  temp_v11 = 0;
  switch(*(unsigned int *)(temp_v7 + 100)) {
  case 0:
    temp_v11 = *(int *)(temp_v7 + 0x7c);
    temp_v6 = temp_v8;
    if (temp_v11 != 0) {
      temp_v6 = *(int *)(temp_v7 + 0x80);
    }
    if (temp_v11 != 0 && temp_v6 != 0) {
      *(unsigned int *)(temp_v7 + 0x84) = 0;
      FUN_00275bc8();
      *(int *)(temp_v7 + 0x84) = temp_v11;
      FUN_003a76a8(0);
      temp_v6 = FUN_00213b5c();
      if ((temp_v6 == 4) && (*(char *)(temp_v7 + 0xc0) != '\0')) {
        FUN_00275f44(*(unsigned int *)(temp_v7 + 0x84),1);
      }
      else {
        temp_v6 = FUN_003d21dc();
        if ((temp_v6 == 0) && (DAT_005f15fc != 0x2a)) {
          temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
          temp_v9 = 0;
        }
        else {
          temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
          temp_v9 = 2;
        }
        FUN_00275f44(temp_v4,temp_v9);
      }
      temp_v4 = FUN_00213b5c();
      *(unsigned int *)(temp_v7 + 0x4c4) = temp_v4;
      temp_v7 = DAT_0057f230;
      temp_v6 = 0;
      if (0 < *(short *)(DAT_0057f230 + 0x78)) {
        do {
          FUN_001641c4();
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(short *)(temp_v7 + 0x78));
      }
      FUN_0050d778(temp_v7 + 0x6c,0xffffffff);
      temp_v3 = *(int *)(temp_v7 + 0x8c);
      *(unsigned short *)(temp_v7 + 0x78) = 0;
      temp_v6 = FUN_00348ed0(temp_v7);
      temp_v11 = 0;
      if (temp_v11 < temp_v6) {
        do {
          temp_v1 = FUN_001834a4(0x24,temp_v3 + temp_v11);
          temp_v2 = (int)*(short *)(temp_v1 + 8);
          FUN_00284168(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                       (int)(*(short **)(temp_v1 + 0xc))[1]);
          temp_v1 = temp_v11 * 2;
          temp_v11 = temp_v11 + 1;
          *(short *)(temp_v7 + temp_v1 + 0x6e) = (short)temp_v2;
          *(short *)(temp_v7 + 0x78) = *(short *)(temp_v7 + 0x78) + 1;
        } while (temp_v11 < temp_v6);
      }
      temp_v7 = DAT_0057f230;
      *(unsigned int *)(DAT_0057f230 + 100) = 1;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
    }
    break;
  case 1:
    FUN_00163aa4(temp_v7 + 0xe8);
    temp_v6 = FUN_00348ed0(temp_v7);
    temp_v11 = 0;
    if (0 < temp_v6) {
      do {
        FUN_00163aa4(temp_v7 + temp_v11 * 0x8c + 0x174);
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < temp_v6);
    }
    temp_v0 = *(char *)(temp_v7 + temp_v6 * 0x8c + 0x172);
    *(int *)(temp_v7 + 0x4bc) = *(int *)(temp_v7 + 0x4bc) + 1;
    if (temp_v0 != '\0') {
      temp_v10 = *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x98);
      temp_v4 = FUN_00187180(0x36,1);
      temp_v7 = FUN_00192798();
      temp_v5 = FUN_00192748(temp_v4);
      if (temp_v10 >= temp_v5) {
        temp_v7 = 0;
      }
      else {
        temp_v7 = temp_v7 + temp_v10 * 0x44;
      }
      FUN_0019de98(temp_v7,0xf4f4f4ff);
      temp_v7 = DAT_0057f230;
      *(unsigned int *)(DAT_0057f230 + 100) = 2;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
    break;
  case 2:
    temp_v12[0] = 0;
    FUN_001834a4(0x24,0x59);
    FUN_00224880(*(unsigned int *)(temp_v7 + 0x84));
    temp_v3 = FUN_001643a0();
    temp_v6 = temp_v7;
    FUN_00228b04(temp_v7,1);
    if ((temp_v6 != 0) ||
       (temp_v6 = temp_v7,
       FUN_003450d4(temp_v7,0,temp_v7 + 0x6e,0xffffffff,0xffffffff,0xffffffff,temp_v12,0,1), temp_v6 != 0)
       ) {
      temp_v6 = FUN_002a4894(temp_v7);
      *(int *)(temp_v7 + 0x88) = temp_v6;
      temp_v10 = *(unsigned int *)(temp_v7 + temp_v6 * 8 + 0x98);
      temp_v4 = FUN_00187180(0x36,1);
      temp_v7 = FUN_00192798();
      temp_v5 = FUN_00192748(temp_v4);
      if (temp_v10 < temp_v5) {
        temp_v11 = temp_v7 + temp_v10 * 0x44;
      }
      FUN_0019de98(temp_v11,0xf4f4f4ff);
      return;
    }
    temp_v6 = 0;
    FUN_001517b4(0,1);
    if ((temp_v6 == 0) && (temp_v3 != 6)) {
      temp_v6 = 1;
      FUN_001517b4();
      if (temp_v6 != 0) {
        FUN_001641b4(0x100020f);
        FUN_003a76a8(1);
        FUN_0019de98(0,0xf4f4f4ff);
        FUN_00184758(temp_v7 + 0xe8,1,0);
        FUN_00184c00(temp_v7 + 0xe8,1,0);
        temp_v6 = 0;
        do {
          temp_v11 = temp_v7 + temp_v6 * 0x8c;
          FUN_0014e188(temp_v11 + 0x174,0x24,0x57,temp_v7 + 200,1);
          FUN_00184758(temp_v11 + 0x174,1,0);
          FUN_00184c00(temp_v11 + 0x174,1,0);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 5);
        *(unsigned int *)(temp_v7 + 0x4bc) = 0;
        temp_v7 = DAT_0057f230;
        *(unsigned int *)(DAT_0057f230 + 100) = 4;
        *(unsigned int *)(temp_v7 + 0x68) = 0;
        return;
      }
    }
    else if ((*(char *)(temp_v7 + 0xc0) == '\0') ||
            (temp_v6 = FUN_00213b5c(), temp_v6 != *(int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x94)))
    {
      temp_v7 = DAT_0057f230;
      if (*(char *)(DAT_0057f230 + 0xc0) != '\0') {
        FUN_00213b5c();
        temp_v6 = FUN_00213b5c();
        if (((temp_v6 == 4) || (temp_v6 = FUN_003d21dc(), temp_v6 != 0)) || (DAT_005f15fc == 0x2a)) {
          FUN_00169ddc(0x100020f);
          temp_v7 = DAT_0057f230;
          *(unsigned int *)(DAT_0057f230 + 100) = 2;
          *(unsigned int *)(temp_v7 + 0x68) = 0;
          return;
        }
        *(unsigned int *)(temp_v7 + 0xc4) = *(unsigned int *)(temp_v7 + 0xbc);
        temp_v4 = FUN_00213b5c();
        *(unsigned int *)(temp_v7 + 0x4c4) = temp_v4;
        *(unsigned int *)(temp_v7 + 0x4c8) = *(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x94);
        FUN_00215994();
        temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
        temp_v9 = 9;
      }
      else {
        temp_v4 = FUN_00213b5c();
        *(unsigned int *)(temp_v7 + 0xc4) = temp_v4;
        FUN_00215994(*(unsigned int *)(temp_v7 + *(int *)(temp_v7 + 0x88) * 8 + 0x94));
        temp_v4 = *(unsigned int *)(temp_v7 + 0x84);
        temp_v9 = 7;
      }
      FUN_00275f44(temp_v4,temp_v9);
      FUN_00169ddc(0x100020e);
      FUN_003491e8();
      FUN_003a76a8(1);
      FUN_001681cc(0xa0);
      temp_v7 = DAT_0057f230;
      *(unsigned int *)(DAT_0057f230 + 100) = 3;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
    break;
  case 3:
    pcVar12 = "NoTableLoaded";
    pcVar13 = "NoName";
    switch(*(unsigned int *)(DAT_0057f230 + 0x68)) {
    case 0:
      if (*(char *)(DAT_0057f230 + 0xc0) != '\0') {
        temp_v4 = 6;
        *(unsigned int *)(temp_v6 + 0x68) = temp_v4;
        return;
      }
      *(unsigned int *)(DAT_0057f230 + 0x68) = 1;
      break;
    case 1:
      temp_v7 = FUN_00224880(*(unsigned int *)(DAT_0057f230 + 0x84));
      if (temp_v7 == 2) {
        temp_v7 = FUN_002a4b74();
        if (temp_v7 != 0) {
          FUN_00215994(*(unsigned int *)(temp_v6 + 0xc4));
          FUN_001681cc(5);
          *(unsigned int *)(temp_v6 + 0x68) = 5;
          return;
        }
        if (*(char *)(temp_v6 + 0xc0) == '\0') {
          *(unsigned int *)(temp_v6 + 0xbc) = *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94)
          ;
          FUN_00215994();
          temp_v4 = FUN_00213b5c();
          *(unsigned int *)(temp_v6 + 0x4c4) = temp_v4;
          FUN_003a76a8(1);
          FUN_00275f44(*(unsigned int *)(temp_v6 + 0x84),8);
          FUN_001681cc(5);
          temp_v7 = DAT_0057f230;
          *(unsigned int *)(DAT_0057f230 + 100) = 5;
          *(unsigned int *)(temp_v7 + 0x68) = 0;
          return;
        }
        *(unsigned int *)(temp_v6 + 0xbc) = *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94);
        FUN_00215994();
        temp_v4 = FUN_00213b5c();
        *(unsigned int *)(temp_v6 + 0x68) = 3;
        *(unsigned int *)(temp_v6 + 0x4c4) = temp_v4;
        return;
      }
      break;
    case 2:
      temp_v7 = FUN_00224880(*(unsigned int *)(DAT_0057f230 + 0x84));
      if (temp_v7 == 2) {
        temp_v7 = FUN_002a4b74();
        if (temp_v7 != 0) {
          FUN_00215994(*(unsigned int *)(temp_v6 + 0xc4));
          FUN_001681cc(5);
          *(unsigned int *)(temp_v6 + 0x68) = 5;
          return;
        }
        *(unsigned int *)(temp_v6 + 0xbc) = *(unsigned int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94);
        FUN_00215994();
        temp_v4 = FUN_00213b5c();
        *(unsigned int *)(temp_v6 + 0x68) = 3;
        *(unsigned int *)(temp_v6 + 0x4c4) = temp_v4;
        return;
      }
      break;
    case 3:
      temp_v11 = *(int *)(DAT_0057f230 + 0xbc);
      temp_v7 = FUN_003f86c8(0x36);
      if ((temp_v7 != 0) && (pcVar12 = pcVar13, temp_v11 < 5)) {
        switch((short)temp_v11) {
        case 0:
          temp_v7 = 2;
          break;
        case 1:
          temp_v7 = 1;
          break;
        case 2:
          temp_v7 = 3;
          break;
        case 3:
          temp_v7 = 0;
          break;
        case 4:
          temp_v7 = 4;
          break;
        default:
          temp_v7 = -1;
        }
        FUN_00187180(0x36,0);
        temp_v11 = FUN_00192798();
        pcVar12 = (char *)(temp_v11 + temp_v7 * 0xc + 0x1e);
      }
      FUN_003180c4(0,pcVar12);
      FUN_00275f44(*(unsigned int *)(temp_v6 + 0x84),5);
      temp_v4 = 4;
      *(unsigned int *)(temp_v6 + 0x68) = temp_v4;
      return;
    case 4:
      temp_v7 = FUN_00224880(*(unsigned int *)(DAT_0057f230 + 0x84));
      if (temp_v7 == 2) {
        FUN_001681cc(5);
        *(unsigned int *)(temp_v6 + 0x68) = 5;
        goto LAB_00203688;
      }
      break;
    case 5:
LAB_00203688:
      temp_v7 = FUN_00213b5c();
      if ((temp_v7 == 4) && (*(char *)(temp_v6 + 0xc0) != '\0')) {
        FUN_00275f44(*(unsigned int *)(temp_v6 + 0x84),1);
      }
      else {
        temp_v7 = FUN_003d21dc();
        if ((temp_v7 == 0) && (DAT_005f15fc != 0x2a)) {
          temp_v4 = *(unsigned int *)(temp_v6 + 0x84);
          temp_v9 = 0;
        }
        else {
          temp_v4 = *(unsigned int *)(temp_v6 + 0x84);
          temp_v9 = 2;
        }
        FUN_00275f44(temp_v4,temp_v9);
      }
      FUN_003a76a8(0);
      temp_v7 = DAT_0057f230;
      *(unsigned int *)(DAT_0057f230 + 100) = 2;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    case 6:
      temp_v7 = FUN_00224880(*(unsigned int *)(DAT_0057f230 + 0x84));
      if (temp_v7 == 2) {
        FUN_00215994(*(unsigned int *)(temp_v6 + 0x4c4));
        temp_v7 = FUN_00213b5c();
        temp_v11 = FUN_003f86c8(0x36);
        pcVar10 = pcVar12;
        if ((temp_v11 != 0) && (pcVar10 = pcVar13, temp_v7 < 5)) {
          switch((short)temp_v7) {
          case 0:
            temp_v7 = 2;
            break;
          case 1:
            temp_v7 = 1;
            break;
          case 2:
            temp_v7 = 3;
            break;
          case 3:
            temp_v7 = 0;
            break;
          case 4:
            temp_v7 = 4;
            break;
          default:
            temp_v7 = -1;
          }
          FUN_00187180(0x36,0);
          temp_v11 = FUN_00192798();
          pcVar10 = (char *)(temp_v11 + temp_v7 * 0xc + 0x1e);
        }
        FUN_003180c4(0,pcVar10);
        temp_v11 = *(int *)(temp_v6 + *(int *)(temp_v6 + 0x88) * 8 + 0x94);
        temp_v7 = FUN_003f86c8(0x36);
        if ((temp_v7 != 0) && (pcVar12 = pcVar13, temp_v11 < 5)) {
          switch((short)temp_v11) {
          case 0:
            temp_v7 = 2;
            break;
          case 1:
            temp_v7 = 1;
            break;
          case 2:
            temp_v7 = 3;
            break;
          case 3:
            temp_v7 = 0;
            break;
          case 4:
            temp_v7 = 4;
            break;
          default:
            temp_v7 = -1;
          }
          FUN_00187180(0x36,0);
          temp_v11 = FUN_00192798();
          pcVar12 = (char *)(temp_v11 + temp_v7 * 0xc + 0x1e);
        }
        FUN_003180c4(1,pcVar12);
        FUN_00275f44(*(unsigned int *)(temp_v6 + 0x84),3);
        *(unsigned int *)(temp_v6 + 0x68) = 1;
        return;
      }
    }
    break;
  case 4:
    FUN_00163aa4(temp_v7 + 0xe8);
    temp_v6 = FUN_00348ed0(temp_v7);
    temp_v11 = 0;
    if (0 < temp_v6) {
      do {
        FUN_00163aa4(temp_v7 + temp_v11 * 0x8c + 0x174);
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < temp_v6);
    }
    if (*(char *)(temp_v7 + temp_v6 * 0x8c + 0x172) != '\0') {
      temp_v7 = DAT_0057f230;
      *(unsigned int *)(DAT_0057f230 + 100) = 6;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
    break;
  case 5:
    temp_v7 = FUN_00224880(*(unsigned int *)(temp_v7 + 0x84));
    if (temp_v7 == 2) {
      temp_v7 = DAT_0057f230;
      *(unsigned int *)(DAT_0057f230 + 100) = 6;
      *(unsigned int *)(temp_v7 + 0x68) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
