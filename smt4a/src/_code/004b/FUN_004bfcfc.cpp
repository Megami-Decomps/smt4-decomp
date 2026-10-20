/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bfcfc` (_code @ 0x4bfcfc, 0xb08 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(...);
int FUN_00192550(...);
int FUN_001aba54(...);
int FUN_002e6354(...);
int FUN_0034a290(...);
int FUN_003e8bb0(...);
int FUN_003e9f50(...);
int FUN_003f0e20(...);
int FUN_004bf9a0(...);
int FUN_004c39b0(...);
int FUN_004c60c0(...);
int FUN_004c8340(...);
int VectorSignedToFloat(...);

typedef struct fn_004bfcfc_arg2 fn_004bfcfc_arg2;
struct fn_004bfcfc_arg2 {
    unsigned char pad_0x0[0x34];
    ushort field_0x34; /* +0x34 */
    ushort field_0x36; /* +0x36 */
    byte field_0x38; /* +0x38 */
    byte field_0x39; /* +0x39 */
    byte field_0x3a; /* +0x3a */
};

/* stack frame of param_7: 26 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned short sp158; /* 0x158: local_158 */
    unsigned short sp160; /* 0x160: local_160 */
    unsigned int sp168; /* 0x168: local_168 */
} param_7_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */
extern unsigned int DAT_00571430; /* 0x571430 */
extern unsigned int DAT_00571434; /* 0x571434 */
extern unsigned int DAT_00571450; /* 0x571450 */
extern unsigned int DAT_00571454; /* 0x571454 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_0028cb6c(void);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003e9f50. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bf9a0. */
/* Supplied declaration required: FUN_004c39b0. */
extern unsigned int FUN_004c53fc(unsigned int);
/* Supplied declaration required: FUN_004c60c0. */
/* Supplied declaration required: FUN_004c8340. */
extern unsigned int FUN_004ee568(unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned int
FUN_004bfcfc(int param_1,unsigned int param_2,fn_004bfcfc_arg2 *param_3,unsigned int param_4,unsigned int param_5,
            int param_6,int param_7)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar7;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned char temp_v16 [4];
  short temp_v17;
  short temp_v18;
  unsigned int temp_v19 [2];
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28 [21];
  unsigned int *temp_v29;
  unsigned int *temp_v30;
  unsigned int temp_v31;
  int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  int temp_v37;
  unsigned int *temp_v38;
  unsigned int *temp_v39;
  int temp_v40;
  int iStack_34;
  unsigned int uStack_30;
  fn_004bfcfc_arg2 *pfStack_2c;
  unsigned int temp_v41;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  pfStack_2c = param_3;
  temp_v41 = param_4;
  temp_v29 = (unsigned int *)FUN_0014aa78();
  temp_v37 = 0;
  FUN_001aba54();
  if (param_1 != 0) {
    switch(*(unsigned char *)(param_1 + 0x23)) {
    case 0:
      temp_v37 = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
      return 0;
    }
  }
  FUN_00192550();
  if (param_3 != (fn_004bfcfc_arg2 *)0x0) {
    temp_v2 = param_3->field_0x34;
    temp_v11 = temp_v2 == 0;
    if (temp_v11) {
      temp_v2 = param_3->field_0x36;
    }
    if (!temp_v11 || temp_v2 != 0) {
      return 0;
    }
    temp_v0 = param_3->field_0x38;
    temp_v11 = temp_v0 == 0;
    if (temp_v11) {
      temp_v0 = param_3->field_0x39;
    }
    if (!temp_v11 || temp_v0 != 0) {
      return 0;
    }
    if ((param_3->field_0x3a & 0x7f) != 0) {
      return 0;
    }
  }
  puVar7 = temp_v29;
  FUN_003f0e20(temp_v29,temp_v41);
  puVar4 = temp_v29;
  temp_v30 = puVar7;
  FUN_003f0e20(temp_v29,param_5);
  temp_v8 = temp_v41;
  if (puVar4 == (unsigned int *)0x0) {
    return 0;
  }
  temp_v38 = temp_v30 + 0x59;
  temp_v3 = FUN_0014aa78();
  FUN_003f0e20(temp_v3,temp_v8);
  temp_v4 = FUN_0014aa78();
  FUN_003e8bb0(temp_v19 + 1,temp_v4,temp_v3);
  temp_v8 = temp_v19[1] >> 0x10;
  if (temp_v8 < 2) {
    temp_v37 = 1;
  }
  temp_v7 = temp_v41;
  FUN_004c8340(temp_v41,param_5,temp_v8,(int)(short)temp_v20,0xffffffff);
  temp_v31 = temp_v7;
  if (param_7 == 0) {
    if (temp_v37 != 0) {
      if (((temp_v38[0x44] & 0x10) != 0) && ((puVar4[0x9d] & 0x10) == 0)) {
        puVar7 = (unsigned int *)FUN_004ee568(DAT_0057113c);
        temp_v7 = *puVar7;
        if ((temp_v7 & 0x200) == 0) {
          return 1;
        }
      }
    }
    else if ((((param_1 != 0) && (*(char *)(param_1 + 0x23) == '\x01')) &&
             ((temp_v38[0x44] & 0x10) != 0)) && ((puVar4[0x9d] & 0x10) == 0)) {
      puVar7 = (unsigned int *)FUN_004ee568(DAT_0057113c);
      temp_v7 = *puVar7;
      if ((temp_v7 & 0x200) == 0) {
        return 1;
      }
    }
  }
  if (((temp_v31 & 0x800000) != 0) && ((puVar4[0x9d] & 0x10) == 0)) {
    FUN_0014aa78();
    temp_v19[0] = 0;
    temp_v19[1] = 0;
    temp_v20 = 0;
    temp_v21 = 0;
    temp_v22 = 0;
    FUN_004c39b0(puVar4,temp_v19);
    temp_v5 = 0;
    do {
      if (*(short *)((int)temp_v19 + temp_v5 * 2) != 0) {
        FUN_0034a290();
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 9);
    FUN_003e9f50(temp_v29,puVar4 + 0x59,temp_v8);
    return 2;
  }
  if (param_1 != 0) {
    temp_v0 = *(unsigned char *)(param_1 + 0x23);
    if (temp_v0 >= 2) {
      if (temp_v0 != 2) {
        if (((temp_v0 == 8) &&
            (temp_v5 = FUN_001633a0(99), temp_v5 < (int)(unsigned int)*(unsigned char *)((int)puVar4 + 799))) &&
           (((1 << *(signed char *)(param_1 + 0x4c)) & 0xffffU & (unsigned int)(unsigned short)puVar4[0x9d]) != 0)) {
          return 5;
        }
      }
      else {
        FUN_002e6354(temp_v19,0x54);
        temp_v5 = 0;
        FUN_002e6354(temp_v28,0x54);
        temp_v1 = *(char *)(param_1 + 0x2f);
        if (temp_v1 == '\x01') {
          temp_v19[0] = temp_v8;
          temp_v5 = 1;
        }
        else if (!(temp_v1 == '\x1d' || temp_v1 == '\x1e')) {
          if (temp_v1 != ' ') {
            if (temp_v1 != '!') {
              if (temp_v1 != '\"') {
                if (temp_v1 != '#') {
                  if (temp_v1 != '$') {
                    if (temp_v1 != '%') {
                      if (temp_v1 != '\0') {
                        temp_v19[0] = FUN_004bf9a0();
                        temp_v5 = 1;
                      }
                    }
                    else {
                      temp_v19[0] = FUN_004bf9a0(1);
                      temp_v19[1] = FUN_004bf9a0(3);
                      temp_v20 = FUN_004bf9a0(5);
                      temp_v21 = FUN_004bf9a0(6);
                      temp_v22 = FUN_004bf9a0(7);
                      temp_v23 = FUN_004bf9a0(8);
                      temp_v24 = FUN_004bf9a0(9);
                      temp_v25 = FUN_004bf9a0(0xb);
                      temp_v26 = FUN_004bf9a0(0xc);
                      temp_v27 = FUN_004bf9a0(0xd);
                      temp_v5 = 10;
                    }
                  }
                  else {
                    temp_v19[0] = FUN_004bf9a0(0xb);
                    temp_v19[1] = FUN_004bf9a0(6);
                    temp_v20 = FUN_004bf9a0(8);
                    temp_v5 = 3;
                  }
                }
                else {
                  temp_v19[0] = FUN_004bf9a0(0xb);
                  temp_v19[1] = FUN_004bf9a0(5);
                  temp_v20 = FUN_004bf9a0(8);
                  temp_v5 = 3;
                }
              }
              else {
                temp_v19[0] = FUN_004bf9a0(0xb);
                temp_v19[1] = FUN_004bf9a0(6);
                temp_v20 = FUN_004bf9a0(7);
                temp_v5 = 3;
              }
            }
            else {
              temp_v19[0] = FUN_004bf9a0(5);
              temp_v19[1] = FUN_004bf9a0(9);
              temp_v20 = FUN_004bf9a0(8);
              temp_v5 = 3;
            }
          }
          else {
            temp_v19[0] = FUN_004bf9a0(5);
            temp_v19[1] = FUN_004bf9a0(6);
            temp_v20 = FUN_004bf9a0(7);
            temp_v21 = FUN_004bf9a0(8);
            temp_v22 = FUN_004bf9a0(3);
            temp_v5 = 5;
          }
        }
        else {
          temp_v19[0] = FUN_004bf9a0(5);
          temp_v19[1] = FUN_004bf9a0(6);
          temp_v20 = FUN_004bf9a0(7);
          temp_v21 = FUN_004bf9a0(8);
          temp_v22 = FUN_004bf9a0(9);
          temp_v5 = 5;
        }
        temp_v6 = 0;
        temp_v40 = 0;
        if (temp_v5 != 0) {
          temp_v39 = puVar4 + 0x99;
          do {
            temp_v8 = temp_v41;
            FUN_004c8340(temp_v41,param_5,temp_v19[temp_v6],*(unsigned char *)(param_1 + 0x23),
                         0xffffffff);
            temp_v28[temp_v6] = temp_v8;
            temp_v8 = param_5;
            FUN_004c60c0(param_5,temp_v19[temp_v6]);
            temp_v7 = temp_v28[temp_v6];
            temp_v28[temp_v6] = temp_v8 | temp_v7;
            temp_v9 = temp_v19[temp_v6];
            if (((temp_v8 | temp_v7) & 0x170000) == 0) {
              temp_v8 = param_5;
              temp_v10 = FUN_0014aa78();
              FUN_003f0e20(temp_v10,temp_v8);
              if ((temp_v10 != 0) && (*(int *)(temp_v10 + 0xd8) != 0)) {
                temp_v8 = 0;
                switch(temp_v9) {
                case 9:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x11:
                case 0x12:
                case 0x13:
                  temp_v8 = 0x10000;
                }
              }
              else {
                temp_v8 = 0;
              }
            }
            else {
              temp_v8 = 0;
            }
            temp_v7 = temp_v28[temp_v6];
            temp_v28[temp_v6] = temp_v8 | temp_v7;
            if (((temp_v7 & 0x800000) != 0) && ((temp_v39[4] & 0x10) == 0)) {
              FUN_0014aa78();
              temp_v32 = 0;
              temp_v33 = 0;
              temp_v34 = 0;
              temp_v35 = 0;
              temp_v36 = 0;
              FUN_004c39b0(puVar4,&temp_v32);
              temp_v10 = 0;
              do {
                if (*(short *)((int)&temp_v32 + temp_v10 * 2) != 0) {
                  FUN_0034a290();
                }
                temp_v10 = temp_v10 + 1;
              } while (temp_v10 < 9);
              FUN_003e9f50(temp_v29,puVar4 + 0x59,temp_v19[temp_v6]);
              temp_v40 = 1;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < temp_v5);
          if (temp_v40 != 0) {
            return 2;
          }
        }
      }
    }
    else if ((*(unsigned short *)(param_1 + 0x3a) & 0x4000) != 0) {
      return 2;
    }
  }
  puVar7 = temp_v29;
  FUN_003f0e20(temp_v29,temp_v41);
  if ((*puVar7 & DAT_00571430) != 0 || (puVar7[1] & DAT_00571434) != 0) {
    return 1;
  }
  if ((temp_v29[0x43] & 0x20000000) != 0) {
    if (((temp_v31 & 0x400000) != 0) && (param_6 == 0)) {
      temp_v8 = DAT_00571454 | puVar4[1];
      *puVar4 = DAT_00571450 | *puVar4;
      puVar4[1] = temp_v8;
    }
  }
  else {
    FUN_003e8bb0(temp_v16,temp_v29,temp_v30);
    puVar7 = (unsigned int *)FUN_004ee568(DAT_0057113c);
    temp_v8 = temp_v41;
    if ((*puVar7 & 0x200) == 0) {
      temp_v5 = FUN_0014aa78();
      FUN_003f0e20(temp_v5,temp_v8);
      if (((temp_v5 != 0) && (0 < *(int *)(temp_v5 + 0xc0))) && (temp_v17 == 0)) {
        return 1;
      }
    }
    temp_v8 = temp_v41;
    puVar7 = temp_v38;
    if ((temp_v29[0x1168] & DAT_00571498) != 0 || (temp_v29[0x1169] & DAT_0057149c) != 0) {
      if (((temp_v31 & 0x400000) != 0) && (param_6 == 0)) {
        temp_v8 = *puVar4 | DAT_00571450;
        puVar4[1] = DAT_00571454 | puVar4[1];
        *puVar4 = temp_v8;
      }
    }
    else {
      if (temp_v37 != 0) {
        temp_v12 = 0.0f;
        temp_v13 = (float)VectorSignedToFloat((int)(short)temp_v38[0x43] - (int)(short)puVar4[0x9c],
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        if ((int)temp_v13 >= 0x42480001) {
          temp_v12 = temp_v13 - 50.0f;
          temp_v14 = (float)VectorSignedToFloat((int)(short)puVar4[0x9c],(unsigned char)(in_fpscr >> 0x16) & 3)
          ;
          temp_v14 = (temp_v12 / temp_v14) * 7.0f;
        }
        else {
          temp_v14 = temp_v12;
          if (0xc2480000 < (unsigned int)temp_v13) {
            temp_v14 = (float)VectorSignedToFloat((int)(short)temp_v38[0x43],
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = temp_v13 + 50.0f;
            temp_v14 = (temp_v12 / temp_v14) * 7.0f;
          }
        }
        temp_v5 = (int)temp_v18 + (int)(temp_v14 + (temp_v13 - temp_v12) * 0.25f) + 1;
        if (temp_v5 < 1) {
          temp_v5 = 1;
        }
        else if (temp_v5 >= 100) {
          temp_v5 = 99;
        }
        temp_v15 = 0x3f800000;
        temp_v6 = FUN_0014aa78();
        FUN_003f0e20(temp_v6,temp_v8);
        temp_v12 = (float)temp_v15;
        if (temp_v6 != 0) {
          temp_v19[0] = 0;
          temp_v19[1] = 0;
          temp_v20 = 0;
          temp_v21 = 0;
          temp_v22 = 0;
          FUN_004c39b0(temp_v6,temp_v19);
          temp_v10 = 0;
          temp_v6 = 0;
          do {
            temp_v8 = (unsigned int)*(unsigned short *)((int)temp_v19 + temp_v6 * 2);
            if ((temp_v8 != 0) && (FUN_0034a290(), temp_v8 != 0)) {
              temp_v10 = temp_v10 + (unsigned int)*(unsigned char *)(temp_v8 + 0x30);
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 9);
          temp_v12 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = (float)temp_v15 + temp_v12 * 0.01f;
        }
        temp_v13 = 100.0f;
        temp_v5 = (temp_v5 * (int)(temp_v12 * 100.0f)) / 100;
        if ((temp_v30[1] & DAT_00571414) == 0 && (*temp_v30 & DAT_00571410) == 0) {
          temp_v6 = FUN_0028cb6c();
          temp_v5 = (temp_v5 * (int)(*(float *)(temp_v6 + 0x1c) * temp_v13)) / 100;
        }
        if ((puVar7[0x44] & 0x10) != 0) {
          if ((puVar4[0x9d] & 0x10) == 0) {
            puVar7 = (unsigned int *)FUN_004ee568(DAT_0057113c);
            if ((*puVar7 & 0x200) == 0) {
              temp_v5 = 100;
            }
            goto LAB_004c070c;
          }
          temp_v5 = -1;
        }
        else {
LAB_004c070c:
          if ((puVar4[0x9d] & 0x10) != 0) {
            temp_v5 = -1;
          }
        }
        temp_v6 = FUN_001633a0(99);
        temp_v8 = temp_v41;
        if (temp_v6 <= temp_v5) {
          return 1;
        }
        temp_v3 = FUN_004c53fc(0x23);
        temp_v5 = FUN_0014aa78();
        FUN_003f0e20(temp_v5,temp_v8);
        if (temp_v5 != 0) {
          *(unsigned int *)(temp_v5 + 0x100) = temp_v3;
        }
      }
      else if ((((param_1 != 0) && (*(char *)(param_1 + 0x23) == '\x01')) &&
               ((temp_v38[0x44] & 0x10) != 0)) &&
              (((puVar4[0x9d] & 0x10) == 0 &&
               (puVar7 = (unsigned int *)FUN_004ee568(DAT_0057113c), (*puVar7 & 0x200) == 0)))) {
        return 1;
      }
      if (((temp_v31 & 0x400000) != 0) && (param_6 == 0)) {
        temp_v8 = DAT_00571450 | *puVar4;
        puVar4[1] = DAT_00571454 | puVar4[1];
        *puVar4 = temp_v8;
      }
    }
  }
  if ((temp_v31 & 0x80000) != 0) {
    return 3;
  }
  return 0;
}

} /* extern "C" */
