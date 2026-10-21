/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00494d68` (_code @ 0x494d68, 0x750 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162758(...);
int efctSetSpeed(void);
int FUN_0018349c(...);
int FUN_001ba3d0(...);
int FUN_0047fc38(void);
int FUN_0049339c(...);
int FUN_00493408(...);
int FUN_004934ac(...);
int FUN_0049368c(...);
int FUN_0049cad0(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_4_stack;

extern unsigned char LAB_004954cc; /* 0x4954cc */
extern unsigned char LAB_004954d0; /* 0x4954d0 */
extern unsigned char LAB_004954e0; /* 0x4954e0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00162758. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0018349c. */
/* Supplied declaration required: FUN_001ba3d0. */
/* Supplied declaration required: FUN_0047fc38. */
extern int FUN_0047fe44(unsigned int);
extern int FUN_00480960(unsigned int);
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_00493408. */
/* Supplied declaration required: FUN_004934ac. */
/* Supplied declaration required: FUN_0049368c. */
extern int FUN_00498408(int, unsigned int);
extern int itemGetNameOrFallback(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0049cad0. */
extern int btlRollClamped(unsigned short, unsigned int);
extern unsigned int FUN_0049cc10(unsigned short *);


void FUN_00494d68(int param_1,int param_2,int param_3,unsigned short *param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  unsigned char temp_v13 [32];
  int temp_v14;
  unsigned int temp_v15;
  int iStack_34;
  int temp_v16;
  int iStack_2c;
  unsigned short *puStack_28;
  
  temp_v0 = *param_4;
  temp_v12 = (unsigned int)temp_v0;
  if (temp_v12 == 0) {
    return;
  }
  temp_v9 = *(int *)(param_1 + 0x3a0);
  if (param_3 != 0) {
    temp_v9 = temp_v9 + 1;
  }
  VectorSignedToFloat(0x100 - temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  iStack_34 = param_1;
  temp_v16 = param_2;
  iStack_2c = param_3;
  puStack_28 = param_4;
  if (param_3 == 0) {
    temp_v3 = FUN_0018349c(param_1 + 0x3a4,param_2 + 0x27);
  }
  else {
    temp_v3 = FUN_0018349c(param_1 + 0x3a4,param_2 + 0x4f);
  }
  temp_v11 = (int)*(short *)(temp_v3 + 8);
  temp_v3 = (int)*(short *)(temp_v3 + 10);
  if (param_3 != 0) {
    efctSetSpeed();
    FUN_004934ac(param_1 + 0x3a4,0x47,temp_v11,temp_v3,temp_v9);
    FUN_004934ac(param_1 + 0x3a4,0x48,temp_v11,temp_v3,temp_v9);
    FUN_004934ac(param_1 + 0x3a4,0x49,temp_v11,temp_v3,temp_v9);
    efctSetSpeed();
    FUN_0049368c(param_1 + 0x3a4,0x4a,temp_v11,temp_v3,temp_v9,1);
    if (*(char *)(param_1 + 0xb19) != '\0') {
      FUN_004934ac(param_1 + 0x3a4,0x108,temp_v11,temp_v3,temp_v9);
      FUN_004934ac(param_1 + 0x3a4,0x109,temp_v11,temp_v3,temp_v9);
      FUN_004934ac(param_1 + 0x3a4,0x10a,temp_v11,temp_v3,temp_v9);
      efctSetSpeed();
      FUN_004934ac(param_1 + 0x3a4,0x10b,temp_v11,temp_v3,temp_v9);
      efctSetSpeed();
    }
    else {
      FUN_004934ac(param_1 + 0x3a4,0x4b,temp_v11,temp_v3,temp_v9);
      FUN_004934ac(param_1 + 0x3a4,0x4c,temp_v11,temp_v3,temp_v9);
      FUN_004934ac(param_1 + 0x3a4,0x4d,temp_v11,temp_v3,temp_v9);
      efctSetSpeed();
      FUN_004934ac(param_1 + 0x3a4,0x105,temp_v11,temp_v3,temp_v9);
      efctSetSpeed();
    }
    temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xac);
  }
  else {
    temp_v4 = FUN_0018349c(param_1 + 0x3a4,0x99);
  }
  temp_v1 = *(short *)(temp_v4 + 10);
  temp_v4 = *(short *)(temp_v4 + 8) + temp_v11;
  if (param_3 != 0) {
    FUN_0049368c(param_1 + 0x3a4,0xaa,temp_v11,temp_v3,temp_v9,1);
  }
  FUN_00493344((const OffsetPosition2D *)(param_1 + 0x3a4),(int)(short)temp_v0,temp_v4,temp_v1 + temp_v3,temp_v9,temp_v16 != 0);
  if (temp_v16 != 0) {
    if ((param_4[1] & 1) != 0) {
      if (param_3 != 0) {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xab);
      }
      else {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0x98);
      }
      FUN_0049339c(param_1 + 0x3a4,5,*(short *)(temp_v4 + 8) + temp_v11,*(short *)(temp_v4 + 10) + temp_v3,
                   temp_v9);
    }
    if ((param_4[1] & 2) != 0) {
      if (param_3 != 0) {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xb2);
      }
      else {
        temp_v4 = FUN_0018349c(param_1 + 0x3a4,0x9f);
      }
      temp_v8 = *(short *)(temp_v4 + 8) + temp_v11;
      temp_v4 = *(short *)(temp_v4 + 10) + temp_v3;
      if (*(int *)(param_1 + 0xb40) != 8) {
        FUN_0049339c(param_1 + 0x3a4,6,temp_v8,temp_v4,temp_v9);
      }
      else {
        FUN_0049339c(param_1 + 0x3a4,7,temp_v8,temp_v4,temp_v9);
      }
    }
  }
  if (param_3 == 0) {
    temp_v5 = 2;
  }
  else {
    temp_v5 = 3;
  }
  temp_v14 = itemGetNameOrFallback(temp_v12,0);
  if (param_3 != 0) {
    temp_v15 = 0xad;
    if (*(char *)(param_1 + 0xb19) == '\0') {
      temp_v10 = -0x60180001;
    }
    else {
      temp_v10 = -0xa006001;
    }
    if (*(int *)(param_1 + 0xb40) != 8) {
      temp_v6 = FUN_0049cad0(param_4);
      temp_v4 = btlRollClamped(*param_4,temp_v6);
      if (temp_v4 == 0) {
        temp_v10 = 0x787878ff;
      }
      else {
LAB_00495274:
        temp_v4 = 0x787878ff;
        if (temp_v10 != 0x787878ff) {
          temp_v4 = -0x64646401;
        }
        if (!(temp_v10 == 0x787878ff || temp_v10 == temp_v4)) {
          temp_v4 = FUN_00480960(temp_v12);
          if (temp_v4 != 0) {
            temp_v7 = temp_v12;
            FUN_0047fc38();
            if (temp_v7 == 0) {
              temp_v10 = 0x8400ff;
            }
            else {
              temp_v10 = -0x414c601;
            }
          }
        }
      }
    }
    else {
      temp_v4 = FUN_00498408(param_1,temp_v12);
      if (((temp_v4 == 0) || (temp_v4 = FUN_001ba3d0(temp_v12), temp_v4 >= 2)) &&
         (temp_v4 = FUN_0047fe44(temp_v12), temp_v4 == 0)) goto LAB_00495274;
      temp_v10 = 0x787878ff;
    }
  }
  else {
    temp_v8 = *(int *)(param_1 + 0xb40);
    temp_v10 = -1;
    temp_v4 = temp_v8;
    if (temp_v8 == 8) {
      temp_v4 = param_1;
    }
    temp_v15 = 0x9a;
    if (temp_v8 != 8) {
      temp_v6 = FUN_0049cad0(param_4);
      temp_v4 = btlRollClamped(*param_4,temp_v6);
      if (temp_v4 == 0) {
        temp_v10 = -0x64646401;
      }
      else {
        temp_v4 = FUN_00480960(temp_v12);
        if (temp_v4 != 0) {
          temp_v7 = temp_v12;
          FUN_0047fc38();
          if (temp_v7 == 0) {
            temp_v10 = 0x8400ff;
          }
          else {
            temp_v10 = -0x414c601;
          }
        }
      }
    }
    else {
      temp_v4 = FUN_00498408(temp_v4,temp_v12);
      if (((temp_v4 != 0) && (temp_v4 = FUN_001ba3d0(temp_v12), temp_v4 < 2)) ||
         (temp_v4 = FUN_0047fe44(temp_v12), temp_v4 != 0)) {
        temp_v10 = -0x64646401;
      }
      else {
        temp_v4 = FUN_00480960(temp_v12);
        if (temp_v4 != 0) {
          temp_v7 = temp_v12;
          FUN_0047fc38();
          if (temp_v7 == 0) {
            temp_v10 = 0x8400ff;
          }
          else {
            temp_v10 = -0x414c601;
          }
        }
      }
    }
  }
  temp_v4 = FUN_0018349c(param_1 + 0x3a4,temp_v15);
  VectorSignedToFloat(*(short *)(temp_v4 + 10) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v4 + 8) + temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162758(param_1 + 0x3a4,temp_v5,temp_v10,temp_v14);
  if (temp_v16 != 0) {
    if (*(int *)(param_1 + 0xb40) != 8) {
      temp_v5 = FUN_0049cad0();
    }
    else {
      temp_v5 = FUN_0049cc10(param_4);
    }
    if (param_3 != 0) {
      temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xba);
      temp_v6 = 0xffffffff;
    }
    else {
      temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xa7);
      temp_v6 = 0x9b9b9bff;
    }
    temp_v1 = *(short *)(temp_v4 + 8);
    temp_v14 = *(short *)(temp_v4 + 10) + temp_v3;
    textFormatBuffer(temp_v13,&LAB_004954cc,temp_v5);
    if ((*(int *)(param_1 + 0xb40) == 8) &&
       (((temp_v4 = FUN_00498408(param_1,temp_v12), temp_v4 != 0 &&
         (temp_v4 = FUN_001ba3d0(temp_v12), temp_v4 < 2)) || (temp_v4 = FUN_0047fe44(temp_v12), temp_v4 != 0))))
    {
      textFormatBuffer(temp_v13,&LAB_004954d0);
    }
    FUN_00493408(param_1 + 0x3a4,0,temp_v1 + temp_v11,temp_v14,0,7,temp_v6,temp_v9,temp_v13);
  }
  temp_v5 = FUN_001ba3d0(temp_v12);
  if (param_3 != 0) {
    temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xbc);
    temp_v6 = 0x57d8ffff;
  }
  else {
    temp_v4 = FUN_0018349c(param_1 + 0x3a4,0xa9);
    temp_v6 = 0x9fddddff;
  }
  temp_v1 = *(short *)(temp_v4 + 8);
  temp_v2 = *(short *)(temp_v4 + 10);
  textFormatBuffer(temp_v13,&LAB_004954e0,temp_v5);
  FUN_00493408(param_1 + 0x3a4,0,temp_v11 + temp_v1,temp_v2 + temp_v3,0,7,temp_v6,temp_v9,temp_v13);
  return;
}

} /* extern "C" */
