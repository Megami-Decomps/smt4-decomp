/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c2ca8` (_code @ 0x4c2ca8, 0x838 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(...);
int FUN_001568f8(...);
int recordGetScaledMaximum(void);
int dataTable8FindRecord(void);
int FUN_00192608(void);
int gameGetSlotRecord(...);
int dataTable04FindById(void);
int FUN_003e8bb0(...);
int FUN_003f0e20(...);
int FUN_004bd098(...);
int FUN_004c4178(unsigned int, unsigned int, int, int, int);
int FUN_004c58e0(...);
int SBORROW4(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_8: 16 slot(s), 41 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned char sp88; /* 0x88: local_88 */
    unsigned char sp94; /* 0x94: local_94 */
    unsigned char sp95; /* 0x95: local_95 */
    unsigned char sp96; /* 0x96: local_96 */
    unsigned char sp97; /* 0x97: local_97 */
    unsigned short sp9E; /* 0x9e: local_9e */
    unsigned short spAA; /* 0xaa: local_aa */
    unsigned short spB2; /* 0xb2: local_b2 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_8_stack;

extern unsigned int DAT_005713f8; /* 0x5713f8 */
extern unsigned int DAT_005713fc; /* 0x5713fc */
extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */
extern unsigned int DAT_005714f8; /* 0x5714f8 */
extern unsigned int DAT_005714fc; /* 0x5714fc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: recordGetScaledMaximum. */
/* Supplied declaration required: dataTable8FindRecord. */
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: gameGetSlotRecord. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bd098. */
extern int bitsAt60Test(unsigned int, unsigned int);
extern unsigned int FUN_004c2aec(unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_004c4178. */
/* Supplied declaration required: FUN_004c58e0. */
extern int flagsCountSelectedBits(unsigned short);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_004c2ca8(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,int param_6,
                 unsigned int param_7,int param_8)

{
/* irregular: 14 goto(s); irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned char temp_v14 [2];
  short temp_v15;
  short temp_v16;
  short temp_v17;
  char temp_v18;
  char temp_v19;
  char temp_v20;
  char temp_v21;
  char temp_v22;
  unsigned char temp_v23 [46];
  unsigned short temp_v24;
  int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  int iStack_28;
  
  temp_v25 = param_1;
  temp_v26 = param_2;
  temp_v27 = param_3;
  iStack_28 = param_4;
  puVar4 = (unsigned int *)btlGetMainState();
  temp_v6 = temp_v26;
  dataTable04FindById();
  dataTable8FindRecord();
  puVar5 = puVar4;
  FUN_003f0e20(puVar4,param_5);
  puVar6 = puVar4;
  FUN_003f0e20(puVar4,param_6);
  FUN_003e8bb0(temp_v14,puVar4,puVar5);
  temp_v7 = 0xffffffff;
  temp_v8 = 0xffffffff;
  temp_v9 = 1;
  if ((temp_v18 == '\0') && (temp_v19 != '\0')) {
    return 0xffffffff;
  }
  if (temp_v6 != 0) {
    if ((*(unsigned int *)(temp_v6 + 0x3c) & 0x800) != 0 || (*(unsigned int *)(temp_v6 + 0x3c) & 0x7f000) != 0) {
      return 0xffffffff;
    }
    VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v6 + 0x2c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = btlGetMainState((unsigned int)*(unsigned short *)(temp_v6 + 0x2c));
    temp_v4 = temp_v3;
    FUN_003f0e20(temp_v3,param_5);
    if ((((temp_v3 != 0) && (temp_v13 = temp_v4, FUN_003f0e20(temp_v4,param_6), temp_v4 != 0)) &&
        (FUN_003e8bb0(temp_v23,temp_v13,temp_v3), temp_v24 != 0)) &&
       ((temp_v4 = flagsCountSelectedBits(*(unsigned short *)(temp_v4 + 0x274)), temp_v4 != 0 &&
        (temp_v0 = (unsigned int)temp_v24 * temp_v4, temp_v0 != 0)))) {
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    switch(*(unsigned char *)(temp_v6 + 0x23)) {
    case 0:
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v6 + 0x58);
      if (temp_v7 == 0) {
        temp_v7 = temp_v26;
        FUN_004c58e0(temp_v26,0,param_5,param_6,0,(int)temp_v21,(int)temp_v20);
        if ((puVar5[0x9d] & 0x200) != 0) {
          temp_v7 = temp_v7 - (int)(temp_v7 * 0x19) / 100;
        }
        temp_v1 = (unsigned short)puVar6[0x9d];
        goto joined_r0x004c2f50;
      }
      break;
    case 1:
      if ((*(unsigned int *)(temp_v6 + 0x3c) & 0x80000) != 0) {
        temp_v9 = 0;
        temp_v7 = puVar6[0x96] - 1;
        goto LAB_004c2f70;
      }
      if (*(char *)(temp_v6 + 0x55) != '\0') {
        temp_v7 = (unsigned int)(0 < (int)puVar6[0x96] % 2) + (int)puVar6[0x96] / 2;
      }
      else {
        if (*(unsigned char *)(temp_v6 + 0x4f) != 0) {
          temp_v9 = 0;
          temp_v7 = (int)(puVar6[0x96] * (unsigned int)*(unsigned char *)(temp_v6 + 0x4f)) / 100;
          goto LAB_004c2f70;
        }
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v6 + 0x58);
        if (temp_v7 == 0) {
          temp_v7 = temp_v26;
          FUN_004c4178(temp_v26,param_5,param_6,(int)temp_v21,(int)temp_v20);
          if (temp_v18 != '\0') {
            if (((((DAT_00571414 & puVar5[1]) == 0 && (DAT_00571410 & *puVar5) == 0) &&
                 (temp_v22 != '\0')) && ((puVar5[0x9d] & 0x10) != 0)) &&
               ((puVar5[1] & DAT_0057140c) != 0 || (DAT_00571408 & *puVar5) != 0)) {
              FUN_004bd098(puVar5[0xff],(int)temp_v17);
            }
          }
          if ((puVar5[0x9d] & 0x200) != 0) {
            temp_v7 = temp_v7 - (int)(temp_v7 * 0x19) / 100;
          }
          temp_v1 = (unsigned short)puVar6[0x9d];
          goto joined_r0x004c2f50;
        }
      }
      break;
    default:
      goto LAB_004c2f70;
    case 3:
      temp_v1 = *(unsigned short *)(temp_v6 + 0x3a);
      if ((temp_v1 & 0xfff) == 4000) {
        if (puVar6 == (unsigned int *)0x0) {
          gameGetSlotRecord(param_6 - 0x6d);
          temp_v8 = recordGetScaledMaximum();
LAB_004c3310:
          temp_v9 = 0;
          goto LAB_004c3314;
        }
        temp_v8 = puVar6[0x97];
LAB_004c3238:
        temp_v9 = 0;
LAB_004c329c:
        if ((puVar6[0x9d] & 8) == 0 || (int)temp_v8 < 2) goto LAB_004c3334;
      }
      else {
        if ((*(unsigned char *)(temp_v6 + 0x4b) != 0) && ((temp_v1 & 0xfff) == 0)) {
          if (puVar6 != (unsigned int *)0x0) {
            temp_v8 = (int)(puVar6[0x97] * (unsigned int)*(unsigned char *)(temp_v6 + 0x4b)) / 100;
            goto LAB_004c3238;
          }
          gameGetSlotRecord(param_6 - 0x6d);
          temp_v2 = recordGetScaledMaximum();
          temp_v8 = ((int)temp_v2 * (int)(short)(unsigned short)*(unsigned char *)(temp_v6 + 0x4b)) / 100;
          goto LAB_004c3310;
        }
        VectorUnsignedToFloat(temp_v1 & 0xffff0fff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = FUN_004c2aec(temp_v26,param_5,param_6);
        if (puVar6 != (unsigned int *)0x0) goto LAB_004c329c;
LAB_004c3314:
        temp_v5 = gameGetSlotRecord(param_6 - 0x6d);
        temp_v4 = bitsAt60Test(temp_v5,3);
        temp_v10 = temp_v4 != 0;
        temp_v4 = 0;
        if (temp_v10) {
          temp_v4 = temp_v8 - 1;
        }
        if ((!temp_v10 || temp_v8 == 1) || temp_v4 < 0 != (temp_v10 && SBORROW4(temp_v8,1))) {
LAB_004c3334:
          if ((int)temp_v8 < 0) {
            temp_v8 = 1;
          }
          goto LAB_004c2f70;
        }
      }
      temp_v8 = 1;
      break;
    case 8:
      if (param_8 != 5) {
        if (*(char *)(temp_v6 + 0x4c) == '\0') goto LAB_004c2f70;
        if (puVar6[0x96] == 1) {
          temp_v7 = 0;
        }
        else {
          temp_v7 = 1;
        }
      }
      else {
        if (*(char *)(temp_v6 + 0x4c) == '\0') goto LAB_004c2f70;
        if (puVar6[0x96] == 1) {
          temp_v7 = 0;
          break;
        }
        temp_v7 = puVar6[0x96] - 1;
      }
    }
    temp_v9 = 0;
  }
  else if (param_4 != 0) {
    temp_v9 = *(unsigned short *)(param_4 + 0x34) == 0;
    if (!temp_v9) {
      temp_v8 = (unsigned int)*(unsigned short *)(param_4 + 0x34);
    }
    if (*(char *)(param_4 + 0x38) != '\0') {
      temp_v12 = 0.01f;
      if (param_6 < 0x6d) {
        puVar5 = puVar4;
        FUN_001568f8(puVar4,param_6);
        temp_v11 = (float)VectorSignedToFloat(puVar5[0x3e] * (unsigned int)*(unsigned char *)(param_4 + 0x38),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = temp_v11 * temp_v12;
      }
      else {
        gameGetSlotRecord(param_6 - 0x6d);
        temp_v2 = recordGetScaledMaximum();
        temp_v11 = (float)VectorSignedToFloat((int)temp_v2 *
                                            (int)(short)(unsigned short)*(unsigned char *)(param_4 + 0x38),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = temp_v11 * temp_v12;
      }
      temp_v8 = (unsigned int)temp_v11;
      temp_v9 = 0;
    }
    if (param_6 < 0x6d) {
      if ((puVar6[0x9d] & 8) != 0 && (int)temp_v8 >= 2) {
        temp_v8 = 1;
      }
    }
    else {
      temp_v5 = gameGetSlotRecord(param_6 - 0x6d);
      temp_v4 = bitsAt60Test(temp_v5,3);
      temp_v10 = temp_v4 != 0;
      temp_v4 = 0;
      if (temp_v10) {
        temp_v4 = temp_v8 - 1;
      }
      if ((temp_v10 && temp_v8 != 1) && temp_v4 < 0 == (temp_v10 && SBORROW4(temp_v8,1))) {
        temp_v8 = 1;
      }
    }
    if ((*(unsigned int *)(param_4 + 0x68) & 4) == 0) goto LAB_004c2f70;
    if (param_6 < 0x6d) {
      puVar5 = puVar4;
      FUN_001568f8(puVar4,param_6);
      temp_v8 = puVar5[0x3e];
    }
    else {
      gameGetSlotRecord(param_6 - 0x6d);
      temp_v8 = recordGetScaledMaximum();
    }
    temp_v9 = 0;
  }
  else {
    temp_v4 = (int)temp_v16;
    if (!((DAT_005713fc & puVar5[1]) == 0 && (DAT_005713f8 & *puVar5) == 0)) {
      temp_v3 = temp_v27;
      FUN_00192608();
      temp_v4 = (int)temp_v16;
      if (*(char *)(temp_v3 + 0x22) == '\x02') {
        temp_v5 = 1;
      }
      else {
        temp_v5 = 2;
      }
    }
    else if (temp_v15 == 1) {
      temp_v5 = 2;
    }
    else {
      temp_v5 = 1;
    }
    temp_v7 = 0;
    FUN_004c58e0(0,temp_v5,param_5,param_6,temp_v4,(int)temp_v21,(int)temp_v20);
    if ((puVar5[0x9d] & 0x200) != 0) {
      temp_v7 = temp_v7 - (int)(temp_v7 * 0x19) / 100;
    }
    temp_v1 = (unsigned short)puVar6[0x9d];
joined_r0x004c2f50:
    if ((temp_v1 & 0x80) != 0) {
      temp_v7 = temp_v7 + (int)(temp_v7 * 0x19) / 100;
    }
  }
LAB_004c2f70:
  if ((((puVar4[0x1168] & DAT_00571498) == 0 && (puVar4[0x1169] & DAT_0057149c) == 0) && (temp_v9))
     && ((0 < (int)temp_v7 &&
         (((puVar4[0x116a] & DAT_005714f8) == 0 && (puVar4[0x116b] & DAT_005714fc) == 0 &&
          ((puVar4[0x43] & 0x20000000) == 0)))))) {
    if ((int)temp_v7 >= 0x3d) {
      temp_v4 = lcgRandomRange(0xf);
      temp_v7 = temp_v7 + temp_v4;
    }
    else if ((int)temp_v7 >= 0x29) {
      temp_v4 = lcgRandomRange(10);
      temp_v7 = temp_v7 + temp_v4;
    }
    else if ((int)temp_v7 >= 0x15) {
      temp_v4 = lcgRandomRange(5);
      temp_v7 = temp_v7 + temp_v4;
    }
    else {
      temp_v4 = lcgRandomRange(3);
      temp_v7 = temp_v7 + temp_v4;
    }
  }
  if (temp_v25 != 0) {
    temp_v6 = 0;
    if (temp_v18 != '\0') {
      temp_v6 = puVar6[0x97];
    }
    temp_v8 = temp_v7;
    if (temp_v18 != '\0' && (int)temp_v6 < (int)temp_v7) {
      temp_v8 = temp_v6;
    }
  }
  return temp_v8;
}

} /* extern "C" */
