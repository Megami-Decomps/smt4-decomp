/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028dcf4` (_code @ 0x28dcf4, 0x9bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pairSetSecondResetFirst(...);
int FUN_00262210(...);
int FUN_00295eb0(...);
int FUN_002a9fdc(...);
int FUN_002ae3d8(void);
int uiSpriteSetImageKeyframe(...);
int FUN_002b8b4c(...);
int pairSetFirstResetSecond(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int randNextInRange(...);
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

extern unsigned char g_messageMain; /* 0x43e188 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: pairSetSecondResetFirst. */
/* Supplied declaration required: FUN_00262210. */
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: FUN_002a9fdc. */
/* Supplied declaration required: FUN_002ae3d8. */
extern int FUN_002ae424(unsigned int);
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_002b8b4c. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: randNextInRange. */


void FUN_0028dcf4(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int *piVar10;
  unsigned int unaff_r11;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  int temp_v11 [8];
  
  FUN_002bd954(param_1 + 0xc4,0xe,0xffffffff,param_1 + 0xa4,0xb);
  FUN_002bd954(param_1 + 0x150,0xe,0xffffffff,param_1 + 0xa4,0xb);
  FUN_002bd954(param_1 + 0x1dc,0xe,0xffffffff,param_1 + 0xa4,0xb);
  FUN_002bd954(param_1 + 0x268,0xe,0xffffffff,param_1 + 0xa4,0xb);
  FUN_002bd954(param_1 + 0x2f4,0xe,0xffffffff,param_1 + 0xa4,0xb);
  FUN_002bd954(param_1 + 0x380,0xe,0xffffffff,param_1 + 0xa4,0xb);
  temp_v4 = param_1 + 0x40c;
  FUN_002bd954(temp_v4,0xe,0xffffffff,param_1 + 0xa4,0xb);
  switch(param_2) {
  case 1:
    pairSetFirstResetSecond(param_1 + 0xc4,2000);
    FUN_002bee58(param_1 + 0xc4,0);
    FUN_00295eb0(param_1 + 0xc4,0xe,0x7d4);
    pairSetFirstResetSecond(param_1 + 0x2f4,7);
    FUN_002bee58(param_1 + 0x2f4,4);
    FUN_00295eb0(param_1 + 0x2f4,0xe,0x47);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x10:
  case 0x11:
  case 0x12:
    pairSetFirstResetSecond(param_1 + 0xc4,2000);
    FUN_002bee58(param_1 + 0xc4,0);
    FUN_00295eb0(param_1 + 0xc4,0xe,0x7d4);
    pairSetFirstResetSecond(param_1 + 0x1dc,4);
    FUN_002bee58(param_1 + 0x1dc,1);
    pairSetFirstResetSecond(param_1 + 0x2f4,7);
    FUN_002bee58(param_1 + 0x2f4,4);
    FUN_00295eb0(param_1 + 0x2f4,0xe,0x47);
    if (param_2 != 3) {
      if (param_2 != 0x10) {
        if (param_2 != 4) {
          if (param_2 != 0x11) {
            if (param_2 != 5) {
              if (param_2 != 0x12) {
                return;
              }
              pairSetFirstResetSecond(param_1 + 0x150,0x7dd);
              FUN_002a9fdc(param_1 + 0x150,1,0);
              FUN_00262210(param_1 + 0x150,0xe,0x7e0,0x7dd);
            }
            else {
              pairSetFirstResetSecond(param_1 + 0x150,0x7d2);
              FUN_002a9fdc(param_1 + 0x150,1,0);
              FUN_00262210(param_1 + 0x150,0xe,0x7d6,0x7d2);
            }
          }
          else {
            pairSetFirstResetSecond(param_1 + 0x150,0x7de);
            FUN_002a9fdc(param_1 + 0x150,1,0);
            FUN_00262210(param_1 + 0x150,0xe,0x7e1,0x7de);
          }
        }
        else {
          pairSetFirstResetSecond(param_1 + 0x150,0x7d3);
          FUN_002a9fdc(param_1 + 0x150,1,0);
          FUN_00262210(param_1 + 0x150,0xe,0x7d7,0x7d3);
        }
      }
      else {
        pairSetFirstResetSecond(param_1 + 0x150,0x7dc);
        FUN_002a9fdc(param_1 + 0x150,1,0);
        FUN_00262210(param_1 + 0x150,0xe,0x7df,0x7dc);
      }
    }
    else {
      pairSetFirstResetSecond(param_1 + 0x150,0x7d1);
      FUN_002a9fdc(param_1 + 0x150,1,0);
      FUN_00262210(param_1 + 0x150,0xe,0x7d5,0x7d1);
    }
    *(unsigned short *)(param_1 + 0x18a) = 2;
    return;
  case 6:
    pairSetSecondResetFirst(param_1 + 0xc4,0x10);
    FUN_002bee58(param_1 + 0xc4,0);
    FUN_00295eb0(param_1 + 0xc4,0xe,0x111);
    *(unsigned char *)(param_1 + 0x100) = 1;
    *(unsigned short *)(param_1 + 0xfe) = 2;
    pairSetFirstResetSecond(param_1 + 0x2f4,7);
    FUN_002bee58(param_1 + 0x2f4,4);
    FUN_00295eb0(param_1 + 0x2f4,0xe,0x47);
    return;
  case 7:
  case 8:
    pairSetSecondResetFirst(param_1 + 0xc4,6);
    FUN_002bee58(param_1 + 0xc4,3);
    FUN_00295eb0(param_1 + 0xc4,0xe,0x36);
    *(unsigned char *)(param_1 + 0x100) = 1;
    pairSetSecondResetFirst(temp_v4,7);
    FUN_002bee58(temp_v4,3);
    FUN_00295eb0(temp_v4,0xe,0x36);
    *(unsigned char *)(param_1 + 0x448) = 1;
    pairSetFirstResetSecond(param_1 + 0x2f4,7);
    FUN_002bee58(param_1 + 0x2f4,4);
    FUN_00295eb0(param_1 + 0x2f4,0xe,0x47);
    return;
  case 9:
    pairSetSecondResetFirst(param_1 + 0xc4,4);
    FUN_002bee58(param_1 + 0xc4,3);
    FUN_00295eb0(param_1 + 0xc4,0xe,0x22);
    *(unsigned char *)(param_1 + 0x100) = 1;
    pairSetSecondResetFirst(temp_v4,5);
    FUN_002bee58(temp_v4,3);
    FUN_00295eb0(temp_v4,0xe,0x36);
    *(unsigned char *)(param_1 + 0x448) = 1;
    pairSetFirstResetSecond(param_1 + 0x2f4,7);
    FUN_002bee58(param_1 + 0x2f4,4);
    FUN_00295eb0(param_1 + 0x2f4,0xe,0x47);
    return;
  case 10:
    pairSetSecondResetFirst(param_1 + 0xc4,2);
    FUN_002bee58(param_1 + 0xc4,5);
    FUN_00295eb0(param_1 + 0xc4,0xe,0x15);
    *(unsigned char *)(param_1 + 0x100) = 1;
    return;
  case 0xb:
    pairSetSecondResetFirst(param_1 + 0xc4,0xb);
    FUN_002bee58(param_1 + 0xc4,6);
    pairSetSecondResetFirst(param_1 + 0x268,0xf);
    FUN_002bee58(param_1 + 0x268,6);
    pairSetFirstResetSecond(param_1 + 0x380,0xc);
    FUN_002bee58(param_1 + 0x380,9);
    FUN_002b8b4c(param_1);
    return;
  case 0xc:
    temp_v11[0] = 0;
    *(unsigned char *)(param_1 + 0x3c) = 0;
    *(unsigned char *)(param_1 + 0x41) = 0;
    temp_v11[1] = 1;
    *(unsigned char *)(param_1 + 0x3d) = 1;
    *(unsigned char *)(param_1 + 0x42) = 0;
    temp_v11[2] = 2;
    *(unsigned char *)(param_1 + 0x3e) = 2;
    *(unsigned char *)(param_1 + 0x43) = 0;
    temp_v11[3] = 3;
    *(unsigned char *)(param_1 + 0x3f) = 3;
    *(unsigned char *)(param_1 + 0x44) = 0;
    temp_v11[4] = 4;
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
      temp_v2 = randNextInRange(99);
      *(unsigned char *)(param_1 + 0x3e) = (temp_v2 & 1) + 2;
      *(unsigned char *)(param_1 + 0x3f) = 4;
    }
    temp_v4 = *(int *)(param_1 + 0x24);
    temp_v7 = 0;
    if (0 < temp_v4) {
      do {
        temp_v3 = randNextInRange(10);
        *(unsigned char *)(param_1 + temp_v7 + 0x46) = temp_v3;
        temp_v4 = randNextInRange((*(int *)(param_1 + 0x24) - 1U) & 0xffff);
        temp_v5 = randNextInRange((*(int *)(param_1 + 0x24) - 1U) & 0xffff);
        temp_v3 = *(unsigned char *)(temp_v4 + param_1 + 0x3c);
        temp_v7 = temp_v7 + 1;
        *(unsigned char *)(temp_v4 + param_1 + 0x3c) = *(unsigned char *)(temp_v5 + param_1 + 0x3c);
        *(unsigned char *)(temp_v5 + param_1 + 0x3c) = temp_v3;
        temp_v4 = *(int *)(param_1 + 0x24);
      } while (temp_v7 < temp_v4);
    }
    if (0 < temp_v4) {
      unaff_r11 = 0xffff;
    }
    temp_v7 = 0;
    if (0 < temp_v4) {
      do {
        piVar10 = *(int **)(param_1 + 4);
        temp_v4 = 0;
        temp_v1 = *(char *)(param_1 + temp_v7 + 0x3c);
        if (piVar10[5] != 0) {
          temp_v5 = piVar10[3];
          do {
            temp_v8 = (unsigned int)*(unsigned short *)(*piVar10 + temp_v5 * 0x20);
            if (temp_v8 == unaff_r11) break;
            if (temp_v8 != 0xf813) {
              if (temp_v4 == temp_v1) break;
              temp_v6 = FUN_002ae424(temp_v8);
              if (temp_v6 != 0) {
                if (temp_v8 != 0xf801) {
                  if (temp_v8 != 0xf802) goto LAB_0028e528;
                  break;
                }
                temp_v4 = temp_v4 + 1;
              }
            }
            else {
LAB_0028e528:
              FUN_002ae3d8();
              temp_v5 = temp_v5 + temp_v8;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < piVar10[3] + 999);
          temp_v4 = 0;
          while (temp_v0 = *(short *)(*piVar10 + temp_v5 * 0x20), temp_v0 != 0 && temp_v0 != -0x7ff) {
            temp_v6 = temp_v5 * 0x20;
            temp_v5 = temp_v5 + 1;
            temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = (float)VectorSignedToFloat((int)*(char *)(temp_v6 + *piVar10 + 10),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v4 = (int)((float)piVar10[6] + temp_v9 + temp_v10);
          }
        }
        else {
          temp_v4 = 0;
        }
        temp_v5 = temp_v7 * 2;
        temp_v7 = temp_v7 + 1;
        *(short *)(param_1 + temp_v5 + 0x4c) = (short)temp_v4;
      } while (temp_v7 < *(int *)(param_1 + 0x24));
    }
    temp_v4 = 0;
    do {
      temp_v7 = randNextInRange(4);
      temp_v5 = randNextInRange(4);
      temp_v6 = temp_v11[temp_v7];
      temp_v4 = temp_v4 + 1;
      temp_v11[temp_v7] = temp_v11[temp_v5];
      temp_v11[temp_v5] = temp_v6;
    } while (temp_v4 < 5);
    temp_v4 = 0;
    do {
      *(unsigned char *)(param_1 + temp_v4 + 0x37) = 0;
      temp_v7 = param_1 + temp_v4 * 0x8c + 0x498;
      FUN_002bd954(temp_v7,0xe,0xffffffff,param_1 + 0xa4,0xb);
      pairSetFirstResetSecond(temp_v7,0x8b);
      uiSpriteSetImageKeyframe(temp_v7,4,0);
      FUN_002a9fdc(temp_v7,6,0);
      FUN_00295eb0(temp_v7,0xe,temp_v11[temp_v4] + 0x8f);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
    *(unsigned char *)(param_1 + 0x46) = 0;
    *(unsigned int *)((*(int *)((unsigned char *)&g_messageMain + 0xc)) + 0x28) = 0;
    break;
  case 0x13:
    FUN_002bd954(param_1 + 0xc4,0x3a,0xffffffff,param_1 + 0xa4,0xb);
    pairSetSecondResetFirst(param_1 + 0xc4,0x10);
    FUN_002bee58(param_1 + 0xc4,6);
    return;
  }
  return;
}

} /* extern "C" */
