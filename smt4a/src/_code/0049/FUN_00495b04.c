/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00495b04` (_code @ 0x495b04, 0x7d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_4_stack;

extern unsigned char LAB_00496270; /* 0x496270 */
extern unsigned char LAB_00496274; /* 0x496274 */
extern unsigned char LAB_0049627c; /* 0x49627c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162758. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001801a4. */
/* Supplied declaration required: FUN_0018349c. */
extern unsigned int FUN_001ba3d0(unsigned int);
/* Supplied declaration required: FUN_0047fc38. */
extern int FUN_00480960(unsigned int);
/* Supplied declaration required: FUN_00493344. */
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_00493408. */
/* Supplied declaration required: FUN_004934ac. */
/* Supplied declaration required: FUN_0049368c. */
extern unsigned int FUN_0049c760(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0049c7a0. */
extern unsigned int FUN_0049cad0(unsigned short *);
extern int FUN_0049cbac(unsigned short, unsigned int);


void FUN_00495b04(int param_1,int param_2,int param_3,unsigned short *param_4)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned short *puVar14;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned int in_fpscr;
  unsigned long long temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22 [44];
  
  temp_v1 = *param_4;
  temp_v6 = (unsigned int)temp_v1;
  if (temp_v6 == 0) {
    return;
  }
  temp_v14 = *(int *)(param_1 + 0x3a0);
  if (param_3 != 0) {
    temp_v14 = temp_v14 + 1;
  }
  VectorSignedToFloat(0x100 - temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (param_3 == 0) {
    temp_v7 = FUN_0018349c(param_1 + 0x3a4,param_2 + 0x27);
  }
  else {
    temp_v7 = FUN_0018349c(param_1 + 0x3a4,param_2 + 0x4f);
  }
  temp_v16 = (int)*(short *)(temp_v7 + 8);
  temp_v7 = (int)*(short *)(temp_v7 + 10);
  if (param_3 != 0) {
    FUN_001677c0();
    FUN_004934ac(param_1 + 0x3a4,0x47,temp_v16,temp_v7,temp_v14);
    FUN_004934ac(param_1 + 0x3a4,0x48,temp_v16,temp_v7,temp_v14);
    FUN_004934ac(param_1 + 0x3a4,0x49,temp_v16,temp_v7,temp_v14);
    FUN_001677c0();
    FUN_0049368c(param_1 + 0x3a4,0x4a,temp_v16,temp_v7,temp_v14,1);
    if (*(char *)(param_1 + 0xb19) != '\0') {
      FUN_004934ac(param_1 + 0x3a4,0x108,temp_v16,temp_v7,temp_v14);
      FUN_004934ac(param_1 + 0x3a4,0x109,temp_v16,temp_v7,temp_v14);
      FUN_004934ac(param_1 + 0x3a4,0x10a,temp_v16,temp_v7,temp_v14);
      FUN_001677c0();
      FUN_004934ac(param_1 + 0x3a4,0x10b,temp_v16,temp_v7,temp_v14);
      FUN_001677c0();
    }
    else {
      FUN_004934ac(param_1 + 0x3a4,0x4b,temp_v16,temp_v7,temp_v14);
      FUN_004934ac(param_1 + 0x3a4,0x4c,temp_v16,temp_v7,temp_v14);
      FUN_004934ac(param_1 + 0x3a4,0x4d,temp_v16,temp_v7,temp_v14);
      FUN_001677c0();
      FUN_004934ac(param_1 + 0x3a4,0x105,temp_v16,temp_v7,temp_v14);
      FUN_001677c0();
    }
    temp_v8 = FUN_0018349c(param_1 + 0x3a4,0xac);
  }
  else {
    temp_v8 = FUN_0018349c(param_1 + 0x3a4,0x99);
  }
  temp_v2 = *(short *)(temp_v8 + 10);
  temp_v8 = *(short *)(temp_v8 + 8) + temp_v16;
  if (param_3 != 0) {
    FUN_0049368c(param_1 + 0x3a4,0xaa,temp_v16,temp_v7,temp_v14,1);
  }
  FUN_00493344(param_1 + 0x3a4,(int)(short)temp_v1,temp_v8,temp_v2 + temp_v7,temp_v14,param_2 != 0);
  if (param_2 != 0) {
    if ((param_4[1] & 1) != 0) {
      if (param_3 != 0) {
        temp_v8 = FUN_0018349c(param_1 + 0x3a4,0xab);
      }
      else {
        temp_v8 = FUN_0018349c(param_1 + 0x3a4,0x98);
      }
      FUN_0049339c(param_1 + 0x3a4,5,*(short *)(temp_v8 + 8) + temp_v16,*(short *)(temp_v8 + 10) + temp_v7,
                   temp_v14);
    }
    if ((param_4[1] & 2) != 0) {
      if (param_3 != 0) {
        temp_v8 = FUN_0018349c(param_1 + 0x3a4,0xb2);
      }
      else {
        temp_v8 = FUN_0018349c(param_1 + 0x3a4,0x9f);
      }
      FUN_0049339c(param_1 + 0x3a4,6,*(short *)(temp_v8 + 8) + temp_v16,*(short *)(temp_v8 + 10) + temp_v7,
                   temp_v14);
    }
  }
  if (param_3 == 0) {
    temp_v9 = 2;
  }
  else {
    temp_v9 = 3;
  }
  temp_v10 = FUN_0049c760(temp_v6,0);
  if (param_3 != 0) {
    temp_v21 = 0xad;
    temp_v8 = (int)*(char *)(param_1 + 0xb19);
    if (temp_v8 == 0) {
      temp_v15 = -0x60180001;
    }
    else {
      temp_v15 = -0xa006001;
    }
    if (param_2 != 0) {
      temp_v8 = *(int *)(param_1 + 0xb40);
    }
    if (param_2 != 0 && temp_v8 != 8) {
      temp_v11 = FUN_0049cad0(param_4);
      temp_v8 = FUN_0049cbac(*param_4,temp_v11);
      if (temp_v8 == 0) {
        temp_v15 = 0x787878ff;
        goto LAB_00495f20;
      }
    }
    temp_v8 = 0x787878ff;
    if (temp_v15 != 0x787878ff) {
      temp_v8 = -0x64646401;
    }
    if (temp_v15 == 0x787878ff || temp_v15 == temp_v8) goto LAB_00495f20;
  }
  else {
    temp_v8 = 0x9a;
    temp_v21 = 0x9a;
    if (param_2 != 0) {
      temp_v8 = *(int *)(param_1 + 0xb40);
    }
    temp_v15 = -1;
    if (param_2 != 0 && temp_v8 != 8) {
      temp_v11 = FUN_0049cad0(param_4);
      temp_v8 = FUN_0049cbac(*param_4,temp_v11);
      if (temp_v8 == 0) {
        temp_v15 = -0x64646401;
        goto LAB_00495f20;
      }
    }
  }
  temp_v8 = FUN_00480960(temp_v6);
  if (temp_v8 != 0) {
    temp_v12 = temp_v6;
    FUN_0047fc38();
    if (temp_v12 == 0) {
      temp_v15 = 0x8400ff;
    }
    else {
      temp_v15 = -0x414c601;
    }
  }
LAB_00495f20:
  temp_v8 = FUN_0018349c(param_1 + 0x3a4,temp_v21);
  VectorSignedToFloat(*(short *)(temp_v8 + 10) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v8 + 8) + temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162758(param_1 + 0x3a4,temp_v9,temp_v15,temp_v10);
  temp_v8 = FUN_0049c7a0(temp_v6);
  temp_v5 = 0;
  switch(*(unsigned int *)(param_1 + 0xb40)) {
  case 0:
    puVar14 = (unsigned short *)FUN_001801a4(0);
    temp_v5 = *puVar14;
    break;
  case 1:
    temp_v15 = FUN_001801a4(0);
    temp_v5 = *(unsigned short *)(temp_v15 + 2);
    break;
  case 2:
    temp_v15 = FUN_001801a4(0);
    temp_v5 = *(unsigned short *)(temp_v15 + 4);
    break;
  case 3:
    temp_v15 = FUN_001801a4(0);
    temp_v5 = *(unsigned short *)(temp_v15 + 6);
    break;
  case 4:
    temp_v15 = FUN_001801a4(0);
    temp_v5 = *(unsigned short *)(temp_v15 + 8);
    break;
  case 5:
    temp_v15 = FUN_001801a4(0);
    temp_v5 = *(unsigned short *)(temp_v15 + 10);
    break;
  case 6:
    temp_v15 = FUN_001801a4(0);
    temp_v5 = *(unsigned short *)(temp_v15 + 0xc);
  }
  temp_v15 = FUN_0049c7a0(temp_v5);
  if (param_3 != 0) {
    temp_v20 = FUN_0018349c(param_1 + 0x3a4,0xb1);
    temp_v13 = (int)temp_v20;
    temp_v18 = param_2 == 0;
    temp_v0 = 0;
    temp_v4 = (int)((unsigned long long)temp_v20 >> 0x20);
    if (!temp_v18) {
      temp_v0 = temp_v8 - temp_v15;
      temp_v4 = temp_v8;
    }
    temp_v19 = temp_v4 == temp_v15;
    temp_v17 = !temp_v18 && SBORROW4(temp_v4,temp_v15);
    if (temp_v18 || temp_v19) {
      temp_v15 = -0x60180001;
    }
    if (temp_v0 < 0 != temp_v17) {
      temp_v15 = -0xdad601;
    }
    if ((!temp_v18 && !temp_v19) && temp_v0 < 0 == temp_v17) {
      temp_v15 = 0x72e027ff;
    }
  }
  else {
    temp_v20 = FUN_0018349c(param_1 + 0x3a4,0x9e);
    temp_v13 = (int)temp_v20;
    temp_v18 = param_2 == 0;
    temp_v0 = 0;
    temp_v4 = (int)((unsigned long long)temp_v20 >> 0x20);
    if (!temp_v18) {
      temp_v0 = temp_v8 - temp_v15;
      temp_v4 = temp_v8;
    }
    temp_v19 = temp_v4 == temp_v15;
    temp_v17 = !temp_v18 && SBORROW4(temp_v4,temp_v15);
    if (temp_v18 || temp_v19) {
      temp_v15 = -1;
    }
    if (temp_v0 < 0 != temp_v17) {
      temp_v15 = -0x23f0eb01;
    }
    if ((!temp_v18 && !temp_v19) && temp_v0 < 0 == temp_v17) {
      temp_v15 = 0x8400ff;
    }
  }
  temp_v2 = *(short *)(temp_v13 + 8);
  temp_v3 = *(short *)(temp_v13 + 10);
  FUN_00100388(temp_v22,&LAB_00496270,temp_v8);
  FUN_00493408(param_1 + 0x3a4,0,temp_v2 + temp_v16,temp_v3 + temp_v7,0,7,temp_v15,temp_v14,temp_v22);
  if (param_2 != 0) {
    temp_v9 = FUN_0049cad0(param_4);
    if (param_3 != 0) {
      temp_v8 = FUN_0018349c(param_1 + 0x3a4,0xba);
      temp_v10 = 0xffffffff;
    }
    else {
      temp_v8 = FUN_0018349c(param_1 + 0x3a4,0xa7);
      temp_v10 = 0x9b9b9bff;
    }
    temp_v2 = *(short *)(temp_v8 + 8);
    temp_v3 = *(short *)(temp_v8 + 10);
    FUN_00100388(temp_v22,&LAB_00496274,temp_v9);
    FUN_00493408(param_1 + 0x3a4,0,temp_v2 + temp_v16,temp_v3 + temp_v7,0,7,temp_v10,temp_v14,temp_v22);
  }
  temp_v9 = FUN_001ba3d0(temp_v6);
  if (param_3 != 0) {
    temp_v8 = FUN_0018349c(param_1 + 0x3a4,0xbc);
    temp_v10 = 0x57d8ffff;
  }
  else {
    temp_v8 = FUN_0018349c(param_1 + 0x3a4,0xa9);
    if (param_2 == 0) {
      temp_v10 = 0xffffffff;
    }
    else {
      temp_v10 = 0x9fddddff;
    }
  }
  temp_v2 = *(short *)(temp_v8 + 8);
  temp_v3 = *(short *)(temp_v8 + 10);
  FUN_00100388(temp_v22,&LAB_0049627c,temp_v9);
  FUN_00493408(param_1 + 0x3a4,0,temp_v2 + temp_v16,temp_v3 + temp_v7,0,7,temp_v10,temp_v14,temp_v22);
  return;
}
