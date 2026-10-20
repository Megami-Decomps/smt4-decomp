/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c34e0` (_code @ 0x4c34e0, 0x4c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(...);
int FUN_001568f8(...);
int FUN_00192550(void);
int FUN_001ab854(...);
int FUN_001aba54(void);
int FUN_003e8bb0(...);
int FUN_003f0e20(...);
int FUN_004c4178(unsigned int, unsigned int, int, int, int);
int SBORROW4(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_6: 13 slot(s), 33 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned char sp94; /* 0x94: local_94 */
    unsigned char spA0; /* 0xa0: local_a0 */
    unsigned char spA1; /* 0xa1: local_a1 */
    unsigned char spA2; /* 0xa2: local_a2 */
    unsigned char spA3; /* 0xa3: local_a3 */
    unsigned short spAA; /* 0xaa: local_aa */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_6_stack;

extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */
extern unsigned int DAT_005714f8; /* 0x5714f8 */
extern unsigned int DAT_005714fc; /* 0x5714fc */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001ab854. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
extern int FUN_004bd098(unsigned int, int);
extern int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004c4178. */
extern int FUN_004c8754(unsigned short);


unsigned int FUN_004c34e0(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  unsigned char temp_v10 [22];
  short temp_v11;
  char temp_v12;
  char temp_v13;
  char temp_v14;
  char temp_v15;
  char temp_v16;
  unsigned char temp_v17 [46];
  unsigned short temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int uStack_2c;
  int iStack_28;
  
  temp_v20 = param_1;
  temp_v21 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  puVar2 = (unsigned int *)btlGetMainState();
  temp_v4 = temp_v21;
  FUN_001aba54();
  FUN_00192550();
  puVar3 = puVar2;
  FUN_003f0e20(puVar2,param_5);
  puVar4 = puVar2;
  FUN_003f0e20(puVar2,param_6);
  FUN_003e8bb0(temp_v10,puVar2,puVar3);
  temp_v6 = 0xffffffff;
  temp_v19 = 1;
  if ((temp_v13 == '\0') && (temp_v12 != '\0')) {
    return 0xffffffff;
  }
  if (temp_v4 != 0) {
    if ((*(unsigned int *)(temp_v4 + 0x3c) & 0x7f000) != 0) {
      return 0xffffffff;
    }
    VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v4 + 0x2c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = btlGetMainState((unsigned int)*(unsigned short *)(temp_v4 + 0x2c));
    temp_v3 = temp_v1;
    FUN_003f0e20(temp_v1,param_5);
    if ((((temp_v3 != 0) && (temp_v2 = temp_v1, FUN_003f0e20(temp_v1,param_6), temp_v2 != 0)) &&
        (FUN_003e8bb0(temp_v17,temp_v1,temp_v3), temp_v18 != 0)) &&
       ((temp_v3 = FUN_004c8754(*(unsigned short *)(temp_v2 + 0x274)), temp_v3 != 0 &&
        (temp_v0 = (unsigned int)temp_v18 * temp_v3, temp_v0 != 0)))) {
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    switch(*(unsigned char *)(temp_v4 + 0x23)) {
    case 1:
      if ((*(unsigned int *)(temp_v4 + 0x3c) & 0x800) != 0) {
        temp_v6 = (int)puVar4[0x98] / 2;
        temp_v19 = 0;
      }
      else if (temp_v13 != '\0') {
        temp_v6 = temp_v21;
        FUN_004c4178(temp_v21,param_5,param_6,(int)temp_v15,(int)temp_v14);
        if (temp_v13 != '\0') {
          if ((DAT_00571410 & *puVar3) == 0 && (DAT_00571414 & puVar3[1]) == 0) {
            temp_v6 = (int)temp_v6 / 3;
            if (((temp_v16 != '\0') && ((puVar3[0x9d] & 0x10) != 0)) &&
               ((!((puVar3[1] & DAT_0057140c) != 0 || (DAT_00571408 & *puVar3) != 0) ||
                (temp_v3 = FUN_004bd098(puVar3[0xff],(int)temp_v11), temp_v3 >= 0)))) {
              if ((int)temp_v6 >= 0xab) {
                temp_v6 = 0xaa;
              }
            }
            else if ((int)temp_v6 >= 0x56) {
              temp_v6 = 0x55;
            }
          }
        }
        if ((puVar3[0x9d] & 0x200) != 0) {
          temp_v6 = temp_v6 - (int)(temp_v6 * 0x19) / 100;
        }
        if ((puVar4[0x9d] & 0x80) != 0) {
          temp_v6 = temp_v6 + (int)(temp_v6 * 0x19) / 100;
        }
      }
    }
    if (((((puVar2[0x1168] & DAT_00571498) == 0 && (puVar2[0x1169] & DAT_0057149c) == 0) &&
         (temp_v19 != 0)) && (0 < (int)temp_v6)) &&
       (((DAT_005714f8 & puVar2[0x116a]) == 0 && (puVar2[0x116b] & DAT_005714fc) == 0 &&
        ((puVar2[0x43] & 0x20000000) == 0)))) {
      if ((int)temp_v6 >= 0x3d) {
        temp_v3 = FUN_001633a0(0xf);
        temp_v6 = temp_v6 + temp_v3;
      }
      else if ((int)temp_v6 >= 0x29) {
        temp_v3 = FUN_001633a0(10);
        temp_v6 = temp_v6 + temp_v3;
      }
      else if ((int)temp_v6 >= 0x15) {
        temp_v3 = FUN_001633a0(5);
        temp_v6 = temp_v6 + temp_v3;
      }
      else {
        temp_v3 = FUN_001633a0(3);
        temp_v6 = temp_v6 + temp_v3;
      }
    }
    if (temp_v20 != 0) {
      temp_v4 = 0;
      if (temp_v13 != '\0') {
        temp_v4 = puVar4[0x98];
      }
      if (temp_v13 != '\0' && (int)temp_v4 < (int)temp_v6) {
        return temp_v4;
      }
      return temp_v6;
    }
    return 0xffffffff;
  }
  if (param_4 == 0) {
    return 0xffffffff;
  }
  temp_v6 = 0xffffffff;
  if (*(unsigned short *)(param_4 + 0x36) != 0) {
    temp_v6 = (unsigned int)*(unsigned short *)(param_4 + 0x36);
  }
  if (*(char *)(param_4 + 0x39) != '\0') {
    temp_v9 = 0.01f;
    if (param_6 < 0x6d) {
      puVar3 = puVar2;
      FUN_001568f8(puVar2,param_6);
      temp_v8 = (float)VectorSignedToFloat(puVar3[0x40] * (unsigned int)*(unsigned char *)(param_4 + 0x39),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (unsigned int)(temp_v8 * temp_v9);
    }
    else {
      temp_v3 = FUN_001ab854(param_6 - 0x6d);
      temp_v8 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0x10) *
                                          (int)(short)(unsigned short)*(unsigned char *)(param_4 + 0x39),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (unsigned int)(temp_v8 * temp_v9);
    }
  }
  if (temp_v20 != 0) {
    return 0xffffffff;
  }
  if (param_6 < 0x6d) {
    if (!((puVar4[0x9d] & 8) == 0 || (int)temp_v6 < 2)) {
      temp_v6 = 1;
    }
  }
  else {
    temp_v5 = FUN_001ab854(param_6 - 0x6d);
    temp_v3 = FUN_004bd340(temp_v5,3);
    temp_v7 = temp_v3 != 0;
    temp_v3 = 0;
    if (temp_v7) {
      temp_v3 = temp_v6 - 1;
    }
    if (!((!temp_v7 || temp_v6 == 1) || temp_v3 < 0 != (temp_v7 && SBORROW4(temp_v6,1)))) {
      temp_v6 = 1;
    }
  }
  if ((*(unsigned int *)(param_4 + 0x68) & 4) == 0) {
    return temp_v6;
  }
  if (param_6 >= 0x6d) {
    temp_v3 = FUN_001ab854(param_6 - 0x6d);
    return (int)*(short *)(temp_v3 + 0x10);
  }
  FUN_001568f8(puVar2,param_6);
  return puVar2[0x40];
}

} /* extern "C" */
