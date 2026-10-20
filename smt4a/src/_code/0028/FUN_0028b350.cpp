/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028b350` (_code @ 0x28b350, 0xd0c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetImageKeyframe(...);

int randRange(...);
int FUN_0014e188(...);
int FUN_001517b4(...);
int FUN_00162ec0(...);
int pairSetSecondResetFirst(...);
int uiSpriteSelectAnim(...);
int pairSetFirstResetSecond(...);
int FUN_0019dc70(void);
int FUN_0019e330(...);
int FUN_00202188(...);
int FUN_00387240(...);
int FUN_003872b8(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned char g_messageMain; /* 0x57f588 */
extern unsigned short DAT_005e2058; /* 0x5e2058 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: randRange. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00162ec0. */
extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: pairSetSecondResetFirst. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int FUN_0019be8c(unsigned int);
/* Supplied declaration required: FUN_0019dc70. */
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: FUN_00202188. */
extern unsigned short FUN_0033885c(unsigned int, int);
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_003872b8. */


void FUN_0028b350(int param_1,int param_2)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned short temp_v0;
  char temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int *piVar13;
  unsigned int unaff_r11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  int temp_v14 [8];
  
  FUN_0014e188(param_1 + 0x1b4,8,0xffffffff,param_1 + 0x194,0xb);
  FUN_0014e188(param_1 + 0x240,8,0xffffffff,param_1 + 0x194,0xb);
  FUN_0014e188(param_1 + 0x2cc,8,0xffffffff,param_1 + 0x194,0xb);
  FUN_0014e188(param_1 + 0x358,8,0xffffffff,param_1 + 0x194,0xb);
  FUN_0014e188(param_1 + 0x3e4,8,0xffffffff,param_1 + 0x194,0xb);
  FUN_0014e188(param_1 + 0x470,8,0xffffffff,param_1 + 0x194,0xb);
  temp_v6 = param_1 + 0x4fc;
  FUN_0014e188(temp_v6,8,0xffffffff,param_1 + 0x194,0xb);
  temp_v7 = param_1 + 0x18ac;
  FUN_0014e188(temp_v7,8,0xffffffff,param_1 + 0x194,0xb);
  switch(param_2) {
  default:
    return;
  case 1:
    pairSetFirstResetSecond(param_1 + 0x1b4,2000);
    temp_v6 = 9;
    FUN_001517b4(9,2);
    if ((temp_v6 != 0) || (temp_v6 = FUN_00163fd4(6), temp_v6 != 0)) {
      *(unsigned char *)(param_1 + 0x239) = 1;
    }
    else {
      uiSpriteSelectAnim(param_1 + 0x1b4,0);
    }
    FUN_00387240(param_1 + 0x1b4,8,0x7d4);
    pairSetFirstResetSecond(param_1 + 0x3e4,7);
    uiSpriteSelectAnim(param_1 + 0x3e4,4);
    FUN_00387240(param_1 + 0x3e4,8,0x47);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x11:
  case 0x12:
  case 0x13:
    temp_v11 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x10);
    *(unsigned int *)(*(int *)(param_1 + 4) + 0x10) = 1;
    FUN_00202188(*(unsigned int *)(param_1 + 4),0,0,0x10,0xffffffff);
    temp_v0 = *(unsigned short *)(*(int *)(param_1 + 4) + 0x48);
    *(unsigned int *)(*(int *)(param_1 + 4) + 0x10) = temp_v11;
    pairSetFirstResetSecond(param_1 + 0x1b4,2000);
    FUN_00387240(param_1 + 0x1b4,8,0x7d4);
    if (temp_v0 < 3) {
      pairSetSecondResetFirst(param_1 + 0x2cc,0x1f);
    }
    else if (temp_v0 < 5) {
      pairSetSecondResetFirst(param_1 + 0x2cc,0x1b);
    }
    else if (temp_v0 < 7) {
      pairSetSecondResetFirst(param_1 + 0x2cc,0x1c);
    }
    else if (temp_v0 < 9) {
      pairSetSecondResetFirst(param_1 + 0x2cc,0x1e);
    }
    else {
      pairSetSecondResetFirst(param_1 + 0x2cc,0x1d);
    }
    temp_v6 = 9;
    FUN_001517b4(9,2);
    if ((temp_v6 != 0) || (temp_v6 = FUN_00163fd4(6), temp_v6 != 0)) {
      *(unsigned char *)(param_1 + 0x239) = 1;
      *(unsigned char *)(param_1 + 0x351) = 1;
    }
    else {
      uiSpriteSelectAnim(param_1 + 0x1b4,0);
      uiSpriteSelectAnim(param_1 + 0x2cc,1);
    }
    pairSetFirstResetSecond(param_1 + 0x3e4,7);
    uiSpriteSelectAnim(param_1 + 0x3e4,4);
    FUN_00387240(param_1 + 0x3e4,8,0x47);
    if (param_2 != 3) {
      if (param_2 != 0x11) {
        if (param_2 != 4) {
          if (param_2 != 0x12) {
            if (param_2 != 5) {
              if (param_2 != 0x13) {
                return;
              }
              pairSetFirstResetSecond(param_1 + 0x240,0x7dd);
              FUN_0019e330(param_1 + 0x240,1,0);
              FUN_003872b8(param_1 + 0x240,8,0x7e0,0x7dd);
            }
            else {
              pairSetFirstResetSecond(param_1 + 0x240,0x7d2);
              FUN_0019e330(param_1 + 0x240,1,0);
              FUN_003872b8(param_1 + 0x240,8,0x7d6,0x7d2);
            }
          }
          else {
            pairSetFirstResetSecond(param_1 + 0x240,0x7de);
            FUN_0019e330(param_1 + 0x240,1,0);
            FUN_003872b8(param_1 + 0x240,8,0x7e1,0x7de);
          }
        }
        else {
          pairSetFirstResetSecond(param_1 + 0x240,0x7d3);
          FUN_0019e330(param_1 + 0x240,1,0);
          FUN_003872b8(param_1 + 0x240,8,0x7d7,0x7d3);
        }
      }
      else {
        pairSetFirstResetSecond(param_1 + 0x240,0x7dc);
        FUN_0019e330(param_1 + 0x240,1,0);
        FUN_003872b8(param_1 + 0x240,8,0x7df,0x7dc);
      }
    }
    else {
      pairSetFirstResetSecond(param_1 + 0x240,0x7d1);
      FUN_0019e330(param_1 + 0x240,1,0);
      FUN_003872b8(param_1 + 0x240,8,0x7d5,0x7d1);
    }
    *(unsigned short *)(param_1 + 0x27a) = 2;
    return;
  case 6:
    pairSetSecondResetFirst(param_1 + 0x1b4,0x10);
    temp_v6 = 9;
    FUN_001517b4(9,2);
    if ((temp_v6 != 0) || (temp_v6 = FUN_00163fd4(6), temp_v6 != 0)) {
      *(unsigned char *)(param_1 + 0x239) = 1;
    }
    else {
      uiSpriteSelectAnim(param_1 + 0x1b4,0);
    }
    FUN_00387240(param_1 + 0x1b4,8,0x111);
    *(unsigned char *)(param_1 + 0x1f0) = 1;
    *(unsigned short *)(param_1 + 0x1ee) = 2;
    pairSetFirstResetSecond(param_1 + 0x3e4,7);
    uiSpriteSelectAnim(param_1 + 0x3e4,4);
    FUN_00387240(param_1 + 0x3e4,8,0x47);
    return;
  case 7:
  case 8:
    pairSetSecondResetFirst(param_1 + 0x1b4,6);
    FUN_00387240(param_1 + 0x1b4,8,0x36);
    *(unsigned char *)(param_1 + 0x1f0) = 1;
    pairSetSecondResetFirst(temp_v6,7);
    FUN_00387240(temp_v6,8,0x36);
    *(unsigned char *)(param_1 + 0x538) = 1;
    temp_v7 = 9;
    FUN_001517b4(9,2);
    if (temp_v7 == 0) {
      temp_v7 = FUN_00163fd4(6);
joined_r0x0028baa4:
      if (temp_v7 == 0) {
        uiSpriteSelectAnim(param_1 + 0x1b4,3);
        uiSpriteSelectAnim(temp_v6,3);
        pairSetFirstResetSecond(param_1 + 0x3e4,7);
        uiSpriteSelectAnim(param_1 + 0x3e4,4);
        FUN_00387240(param_1 + 0x3e4,8,0x47);
        return;
      }
    }
    break;
  case 9:
    pairSetSecondResetFirst(param_1 + 0x1b4,4);
    FUN_00387240(param_1 + 0x1b4,8,0x22);
    *(unsigned char *)(param_1 + 0x1f0) = 1;
    pairSetSecondResetFirst(temp_v6,5);
    FUN_00387240(temp_v6,8,0x36);
    *(unsigned char *)(param_1 + 0x538) = 1;
    temp_v7 = 9;
    FUN_001517b4(9,2);
    if (temp_v7 == 0) {
      temp_v7 = FUN_00163fd4(6);
      goto joined_r0x0028baa4;
    }
    break;
  case 10:
    pairSetSecondResetFirst(param_1 + 0x1b4,2);
    temp_v6 = 9;
    FUN_001517b4(9,2);
    if ((temp_v6 != 0) || (temp_v6 = FUN_00163fd4(6), temp_v6 != 0)) {
      *(unsigned char *)(param_1 + 0x239) = 1;
    }
    else {
      uiSpriteSelectAnim(param_1 + 0x1b4,5);
    }
    FUN_00387240(param_1 + 0x1b4,8,0x15);
    *(unsigned char *)(param_1 + 0x1f0) = 1;
    return;
  case 0xb:
    pairSetSecondResetFirst(param_1 + 0x1b4,0xb);
    uiSpriteSelectAnim(param_1 + 0x1b4,6);
    pairSetSecondResetFirst(param_1 + 0x358,0xf);
    uiSpriteSelectAnim(param_1 + 0x358,6);
    pairSetFirstResetSecond(param_1 + 0x470,0xc);
    uiSpriteSelectAnim(param_1 + 0x470,9);
    pairSetSecondResetFirst(temp_v7,0x1a);
    uiSpriteSelectAnim(temp_v7,4);
    *(unsigned int *)(param_1 + 0x1a18) = 0;
    *(unsigned int *)(param_1 + 0x1a1c) = 0;
    *(unsigned int *)(param_1 + 0x1a20) = 0;
    *(unsigned int *)(param_1 + 0x1a24) = 0;
    FUN_00162ec0(param_1);
    return;
  case 0xc:
    temp_v14[0] = 0;
    *(unsigned char *)(param_1 + 0x3c) = 0;
    *(unsigned char *)(param_1 + 0x41) = 0;
    temp_v14[1] = 1;
    *(unsigned char *)(param_1 + 0x3d) = 1;
    *(unsigned char *)(param_1 + 0x42) = 0;
    temp_v14[2] = 2;
    *(unsigned char *)(param_1 + 0x3e) = 2;
    *(unsigned char *)(param_1 + 0x43) = 0;
    temp_v14[3] = 3;
    *(unsigned char *)(param_1 + 0x3f) = 3;
    *(unsigned char *)(param_1 + 0x44) = 0;
    temp_v14[4] = 4;
    *(unsigned char *)(param_1 + 0x40) = 4;
    *(unsigned char *)(param_1 + 0x45) = 0;
    if (*(int *)(param_1 + 0x24) != 4) {
      if (*(int *)(param_1 + 0x24) == 3) {
        *(unsigned char *)(param_1 + 0x3c) = 0;
        *(unsigned char *)(param_1 + 0x3d) = 1;
        *(unsigned char *)(param_1 + 0x3e) = 4;
      }
    }
    else {
      *(unsigned char *)(param_1 + 0x3c) = 0;
      *(unsigned char *)(param_1 + 0x3d) = 1;
      temp_v3 = randRange(99);
      *(unsigned char *)(param_1 + 0x3e) = (temp_v3 & 1) + 2;
      *(unsigned char *)(param_1 + 0x3f) = 4;
    }
    temp_v6 = *(int *)(param_1 + 0x24);
    temp_v7 = 0;
    if (0 < temp_v6) {
      do {
        temp_v4 = randRange(10);
        *(unsigned char *)(param_1 + temp_v7 + 0x46) = temp_v4;
        temp_v6 = randRange((*(int *)(param_1 + 0x24) - 1U) & 0xffff);
        temp_v8 = randRange((*(int *)(param_1 + 0x24) - 1U) & 0xffff);
        temp_v4 = *(unsigned char *)(temp_v6 + param_1 + 0x3c);
        temp_v7 = temp_v7 + 1;
        *(unsigned char *)(temp_v6 + param_1 + 0x3c) = *(unsigned char *)(temp_v8 + param_1 + 0x3c);
        *(unsigned char *)(temp_v8 + param_1 + 0x3c) = temp_v4;
        temp_v6 = *(int *)(param_1 + 0x24);
      } while (temp_v7 < temp_v6);
    }
    if (0 < temp_v6) {
      unaff_r11 = 0xffff;
    }
    temp_v7 = 0;
    if (0 < temp_v6) {
      do {
        piVar13 = *(int **)(param_1 + 4);
        temp_v6 = 0;
        temp_v1 = *(char *)(param_1 + temp_v7 + 0x3c);
        if (piVar13[5] != 0) {
          temp_v8 = piVar13[3];
          do {
            temp_v10 = (unsigned int)*(unsigned short *)(*piVar13 + temp_v8 * 0x20);
            if (temp_v10 == unaff_r11) break;
            if (temp_v10 != 0xf813) {
              if (temp_v6 == temp_v1) break;
              temp_v9 = FUN_0019be8c(temp_v10);
              if (temp_v9 != 0) {
                if (temp_v10 != 0xf801) {
                  if (temp_v10 != 0xf802) goto LAB_0028bd98;
                  break;
                }
                temp_v6 = temp_v6 + 1;
              }
            }
            else {
LAB_0028bd98:
              FUN_0019dc70();
              temp_v8 = temp_v8 + temp_v10;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < piVar13[3] + 999);
          temp_v6 = 0;
          while (temp_v2 = *(short *)(*piVar13 + temp_v8 * 0x20), temp_v2 != 0 && temp_v2 != -0x7ff) {
            temp_v9 = temp_v8 * 0x20;
            temp_v8 = temp_v8 + 1;
            temp_v13 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorSignedToFloat((int)*(char *)(temp_v9 + *piVar13 + 10),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = (int)((float)piVar13[6] + temp_v12 + temp_v13);
          }
        }
        else {
          temp_v6 = 0;
        }
        temp_v8 = temp_v7 * 2;
        temp_v7 = temp_v7 + 1;
        *(short *)(param_1 + temp_v8 + 0x4c) = (short)temp_v6;
      } while (temp_v7 < *(int *)(param_1 + 0x24));
    }
    temp_v6 = 0;
    do {
      temp_v7 = randRange(4);
      temp_v8 = randRange(4);
      temp_v9 = temp_v14[temp_v7];
      temp_v6 = temp_v6 + 1;
      temp_v14[temp_v7] = temp_v14[temp_v8];
      temp_v14[temp_v8] = temp_v9;
    } while (temp_v6 < 5);
    temp_v6 = 0;
    do {
      *(unsigned char *)(param_1 + temp_v6 + 0x37) = 0;
      temp_v7 = param_1 + temp_v6 * 0x8c + 0x588;
      FUN_0014e188(temp_v7,8,0xffffffff,param_1 + 0x194,0xb);
      pairSetFirstResetSecond(temp_v7,0x8b);
      uiSpriteSetImageKeyframe(temp_v7,4,0);
      FUN_0019e330(temp_v7,6,0);
      FUN_00387240(temp_v7,8,temp_v14[temp_v6] + 0x8f);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    *(unsigned char *)(param_1 + 0x46) = 0;
    *(unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0xc)) + 0x28) = 0;
    return;
  case 0xd:
    *(unsigned char *)(param_1 + 0x5d) = 0;
    temp_v5 = FUN_0033885c(*(unsigned int *)(param_1 + 4),(int)*(short *)(param_1 + 0x5a));
    *(unsigned short *)(param_1 + 0x60) = temp_v5;
    temp_v6 = 0;
    switch(DAT_005e2058) {
    case 1:
      temp_v6 = 0x191;
      break;
    case 2:
      temp_v6 = 0x192;
      break;
    case 3:
      temp_v6 = 0x194;
      break;
    case 4:
      temp_v6 = 0x197;
    }
    *(unsigned char *)(param_1 + 0x5c) = 0;
    temp_v2 = *(short *)(param_1 + 0x56);
    temp_v7 = param_1 + temp_v2 * 0x8c + 0x844;
    FUN_0014e188(temp_v7,8,0xffffffff,param_1 + 0x194,0xb);
    pairSetFirstResetSecond(temp_v7,0x8b);
    uiSpriteSetImageKeyframe(temp_v7,4,0);
    FUN_0019e330(temp_v7,6,0);
    FUN_00387240(temp_v7,8,temp_v6 + temp_v2);
    *(unsigned char *)(param_1 + 0x5e) = 0;
    *(unsigned short *)((*(int *)((unsigned char *)&g_messageMain + 0xc)) + 0x58) = 0;
    *(unsigned short *)(param_1 + 0x62) = 0;
    return;
  case 0x14:
    FUN_0014e188(param_1 + 0x1b4,0x2f,0xffffffff,param_1 + 0x194,0xb);
    pairSetSecondResetFirst(param_1 + 0x1b4,0x10);
    uiSpriteSelectAnim(param_1 + 0x1b4,6);
    return;
  }
  *(unsigned char *)(param_1 + 0x239) = 1;
  *(unsigned char *)(param_1 + 0x581) = 1;
  pairSetFirstResetSecond(param_1 + 0x3e4,7);
  uiSpriteSelectAnim(param_1 + 0x3e4,4);
  FUN_00387240(param_1 + 0x3e4,8,0x47);
  return;
}

} /* extern "C" */
