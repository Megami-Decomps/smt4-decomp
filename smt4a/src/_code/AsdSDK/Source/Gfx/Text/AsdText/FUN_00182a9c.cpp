/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00182a9c` (_code @ 0x182a9c, 0x868 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019bea4(void);
int FUN_0019c4fc(int);
int gfxSetSelectedChannelActive(int);
int FUN_0019c9b4(void);
int FUN_0019caa0(unsigned int, unsigned int);
int FUN_0019dcbc(int *, int);

typedef int romwright_code(...);
/* stack frame of param_1: 14 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3D; /* 0x3d: local_3d */
    unsigned char sp3E; /* 0x3e: local_3e */
    unsigned char sp3F; /* 0x3f: local_3f */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned char sp41; /* 0x41: local_41 */
    unsigned char sp42; /* 0x42: local_42 */
    unsigned char sp43; /* 0x43: local_43 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned char sp45; /* 0x45: local_45 */
    unsigned char sp46; /* 0x46: local_46 */
    unsigned char sp47; /* 0x47: local_47 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern romwright_code *DAT_005b3d68; /* 0x5b3d68 */
extern romwright_code *DAT_005b3d6c; /* 0x5b3d6c */
extern unsigned char DAT_0063af98; /* 0x63af98 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int FUN_0019be8c(short);
/* Supplied declaration required: FUN_0019bea4. */
/* Supplied declaration required: FUN_0019c4fc. */
/* Supplied declaration required: gfxSetSelectedChannelActive. */
/* Supplied declaration required: FUN_0019c9b4. */
/* Supplied declaration required: FUN_0019caa0. */
/* Supplied declaration required: FUN_0019dcbc. */


int FUN_00182a9c(int *param_1)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  short temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned int temp_v23;
  
  temp_v8 = param_1[2];
  temp_v3 = *param_1;
  temp_v9 = *(short *)(temp_v3 + temp_v8 * 0x20);
  if (temp_v9 == -1) {
    *(unsigned char *)(param_1 + 0x11) = 2;
    param_1[0xc] = 0;
    if ((param_1[0xd] & 0x300U) == 0) {
      return 1;
    }
    FUN_0019c9b4();
    temp_v3 = param_1[3];
    if (temp_v3 < param_1[4] + temp_v3) {
      do {
        FUN_0019c4fc(*(unsigned short *)(*param_1 + temp_v3 * 0x20));
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < param_1[4] + param_1[3]);
    }
    temp_v4 = param_1[0xd];
  }
  else {
    if (param_1[4] == 0) {
      if (temp_v9 == -0x7ee) {
        do {
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
        } while (*(short *)(temp_v3 + (temp_v8 + 1) * 0x20) != 0);
        temp_v9 = 0;
      }
      else {
        if (temp_v9 == -0x7ed) {
          param_1[2] = temp_v8 + 1;
          param_1[4] = 1;
          temp_v0 = *(unsigned short *)(temp_v3 + (temp_v8 + 1) * 0x20);
          param_1[2] = temp_v8 + 2;
          param_1[4] = 2;
          temp_v1 = *(unsigned short *)(temp_v3 + (temp_v8 + 2) * 0x20);
          param_1[4] = 3;
          param_1[2] = temp_v8 + 3;
          temp_v10 = romwright_piece_2_2(temp_v1,temp_v0);
          temp_v0 = *(unsigned short *)(temp_v3 + (temp_v8 + 3) * 0x20);
          param_1[2] = temp_v8 + 4;
          param_1[4] = 4;
          temp_v9 = *(short *)(temp_v3 + (temp_v8 + 4) * 0x20);
          temp_v5 = romwright_piece_2_2(temp_v9,temp_v0);
          if (DAT_005b3d68 != (romwright_code *)0x0) {
            (*DAT_005b3d68)(temp_v10,temp_v5);
          }
          if ((param_1[0xd] & 0x100U) != 0) {
            FUN_0019caa0(temp_v10,temp_v5);
          }
        }
        if (temp_v9 == -0x7e5) {
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20);
          temp_v11 = (unsigned char)temp_v0;
          temp_v12 = (unsigned char)(temp_v0 >> 8);
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20);
          temp_v13 = (unsigned char)temp_v0;
          temp_v14 = (unsigned char)(temp_v0 >> 8);
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20);
          temp_v15 = (unsigned char)temp_v0;
          temp_v16 = (unsigned char)(temp_v0 >> 8);
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20);
          temp_v17 = (unsigned char)temp_v0;
          temp_v18 = (unsigned char)(temp_v0 >> 8);
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20);
          temp_v19 = (unsigned char)temp_v0;
          temp_v20 = (unsigned char)(temp_v0 >> 8);
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20);
          temp_v21 = (unsigned char)temp_v0;
          temp_v22 = (unsigned char)(temp_v0 >> 8);
          if (DAT_005b3d6c != (romwright_code *)0x0) {
            (*DAT_005b3d6c)(&temp_v11);
          }
          goto LAB_00182db8;
        }
      }
      temp_v3 = 0;
      do {
        if ((*(int *)(temp_v3 * 4 + 0x636f68) != 0) &&
           (*(short *)(&DAT_0063af98 + temp_v3 * 2) == temp_v9)) {
          FUN_0019dcbc(param_1,temp_v9);
          break;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 8);
    }
LAB_00182db8:
    temp_v3 = param_1[2];
    param_1[2] = temp_v3 + 1;
    param_1[4] = param_1[4] + 1;
    temp_v9 = *(short *)(*param_1 + (temp_v3 + 1) * 0x20);
    if (temp_v9 != -1) {
      temp_v3 = 0;
      temp_v8 = FUN_0019be8c(temp_v9);
      do {
        if (temp_v8 == 0) {
          return temp_v3;
        }
        temp_v8 = 0;
        do {
          if ((*(int *)(temp_v8 * 4 + 0x636f68) != 0) &&
             (*(short *)(&DAT_0063af98 + temp_v8 * 2) == temp_v9)) {
            FUN_0019dcbc(param_1,temp_v9);
            goto LAB_00183248;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < 8);
        switch(temp_v9) {
        case -0x7fe:
          *(unsigned char *)(param_1 + 0x11) = 2;
          temp_v3 = 1;
          param_1[0xc] = 0;
          break;
        case -0x7fc:
          param_1[4] = param_1[4] + 1;
          param_1[2] = param_1[2] + 1;
          break;
        case -0x7fb:
          temp_v3 = param_1[2];
          param_1[2] = temp_v3 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v2 = *(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20);
          *(unsigned char *)(param_1 + 0x11) = 4;
          param_1[10] = 0;
          param_1[0xb] = (unsigned int)temp_v2;
          return 1;
        case -0x7fa:
          *(unsigned char *)(param_1 + 0x11) = 3;
          return 1;
        case -0x7ee:
          do {
            temp_v8 = param_1[2];
            param_1[2] = temp_v8 + 1;
            param_1[4] = param_1[4] + 1;
          } while (*(short *)(*param_1 + (temp_v8 + 1) * 0x20) != 0);
          break;
        case -0x7ed:
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          temp_v6 = param_1[4];
          param_1[4] = temp_v6 + 1;
          temp_v7 = *param_1;
          temp_v0 = *(unsigned short *)(temp_v7 + (temp_v8 + 1) * 0x20);
          param_1[2] = temp_v8 + 2;
          param_1[4] = temp_v6 + 2;
          temp_v1 = *(unsigned short *)(temp_v7 + (temp_v8 + 2) * 0x20);
          param_1[2] = temp_v8 + 3;
          param_1[4] = temp_v6 + 3;
          temp_v23 = romwright_piece_2_2(temp_v1,temp_v0);
          temp_v0 = *(unsigned short *)(temp_v7 + (temp_v8 + 3) * 0x20);
          param_1[2] = temp_v8 + 4;
          param_1[4] = temp_v6 + 4;
          temp_v5 = romwright_piece_2_2(*(unsigned short *)(temp_v7 + (temp_v8 + 4) * 0x20),temp_v0);
          if (DAT_005b3d68 != (romwright_code *)0x0) {
            (*DAT_005b3d68)(temp_v23,temp_v5);
          }
          if ((param_1[0xd] & 0x100U) != 0) {
            FUN_0019caa0(temp_v23,temp_v5);
          }
          break;
        case -0x7ec:
          param_1[2] = param_1[2] + 2;
          param_1[4] = param_1[4] + 2;
          break;
        case -0x7e9:
          do {
            do {
              temp_v8 = param_1[2];
              param_1[2] = temp_v8 + 1;
              param_1[4] = param_1[4] + 1;
              temp_v9 = *(short *)(*param_1 + (temp_v8 + 1) * 0x20);
              temp_v8 = FUN_0019be8c(temp_v9);
            } while (temp_v8 == 0);
          } while (temp_v9 != -0x7e8);
          break;
        case -0x7e7:
        case -0x7e6:
          param_1[2] = param_1[2] + 1;
          param_1[4] = param_1[4] + 1;
          break;
        case -0x7e5:
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v8 + 1) * 0x20);
          temp_v11 = (unsigned char)temp_v0;
          temp_v12 = (unsigned char)(temp_v0 >> 8);
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v8 + 1) * 0x20);
          temp_v13 = (unsigned char)temp_v0;
          temp_v14 = (unsigned char)(temp_v0 >> 8);
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v8 + 1) * 0x20);
          temp_v15 = (unsigned char)temp_v0;
          temp_v16 = (unsigned char)(temp_v0 >> 8);
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v8 + 1) * 0x20);
          temp_v17 = (unsigned char)temp_v0;
          temp_v18 = (unsigned char)(temp_v0 >> 8);
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v8 + 1) * 0x20);
          temp_v19 = (unsigned char)temp_v0;
          temp_v20 = (unsigned char)(temp_v0 >> 8);
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
          temp_v0 = *(unsigned short *)(*param_1 + (temp_v8 + 1) * 0x20);
          temp_v21 = (unsigned char)temp_v0;
          temp_v22 = (unsigned char)(temp_v0 >> 8);
          if (DAT_005b3d6c != (romwright_code *)0x0) {
            (*DAT_005b3d6c)(&temp_v11);
          }
        }
LAB_00183248:
        temp_v8 = param_1[2];
        param_1[2] = temp_v8 + 1;
        param_1[4] = param_1[4] + 1;
        temp_v9 = *(short *)(*param_1 + (temp_v8 + 1) * 0x20);
        if (temp_v3 != 0) {
          if ((param_1[0xd] & 0x300U) == 0) {
            return temp_v3;
          }
          FUN_0019c9b4();
          temp_v8 = param_1[3];
          if (temp_v8 < param_1[4] + temp_v8) {
            do {
              FUN_0019c4fc(*(unsigned short *)(*param_1 + temp_v8 * 0x20));
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < param_1[3] + param_1[4]);
          }
          if ((param_1[0xd] & 0x200U) != 0) {
            gfxSetSelectedChannelActive(1);
          }
          FUN_0019bea4();
          return temp_v3;
        }
        temp_v8 = FUN_0019be8c(temp_v9);
      } while( 1 );
    }
    *(unsigned char *)(param_1 + 0x11) = 2;
    param_1[0xc] = 0;
    if ((param_1[0xd] & 0x300U) == 0) {
      return 1;
    }
    FUN_0019c9b4();
    temp_v3 = param_1[3];
    if (temp_v3 < param_1[4] + temp_v3) {
      do {
        FUN_0019c4fc(*(unsigned short *)(*param_1 + temp_v3 * 0x20));
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < param_1[3] + param_1[4]);
    }
    temp_v4 = param_1[0xd];
  }
  if ((temp_v4 & 0x200) != 0) {
    gfxSetSelectedChannelActive(1);
  }
  FUN_0019bea4();
  return 1;
}

} /* extern "C" */
