/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002551ac` (_code @ 0x2551ac, 0xc34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_25: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} param_25_stack;

extern unsigned char LAB_0019d7bc; /* 0x19d7bc */
extern unsigned int DAT_0043427c; /* 0x43427c */
extern int DAT_00434290; /* 0x434290 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned char DAT_00439960; /* 0x439960 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002266dc. */
/* Supplied declaration required: FUN_002267b8. */
/* Supplied declaration required: FUN_002268d0. */
/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_002550d8. */
extern short FUN_00255158(int, unsigned int);
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(unsigned int, int);
extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_00282924. */
extern int FUN_00293230(unsigned int *);
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_0029be5c. */
/* Supplied declaration required: FUN_002b7bca. */
extern int FUN_003bd0e8(int);
/* Supplied declaration required: FUN_003ddee0. */


/* WARNING: Removing unreachable block (ram,0x00255d58) */
/* WARNING: Removing unreachable block (ram,0x00255cc4) */
/* WARNING: Removing unreachable block (ram,0x00255d74) */
/* WARNING: Removing unreachable block (ram,0x00255ce0) */
/* WARNING: Removing unreachable block (ram,0x002557e8) */

unsigned int
FUN_002551ac(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6,
            unsigned int param_7,unsigned int param_8,unsigned int param_9,int param_10,
            unsigned int param_11,int param_12,int param_13,int param_14,int param_15,int param_16,
            int param_17,int param_18,int param_19,int param_20,short param_21,int param_22,
            unsigned int *param_23,unsigned int *param_24,int param_25)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  short temp_v1;
  short temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  int temp_v14 [2];
  unsigned int *temp_v15;
  unsigned int *temp_v16;
  int temp_v17;
  unsigned int *temp_v18;
  unsigned int *temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  unsigned char *temp_v23;
  int iStack_34;
  unsigned int uStack_30;
  int iStack_2c;
  int temp_v24;
  
  temp_v21 = (*(unsigned int *)(param_3 + 0x50) & 0x10) >> 4;
  iStack_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  temp_v24 = param_4;
  puVar5 = (unsigned int *)FUN_002939f4();
  temp_v20 = param_1 + param_16;
  temp_v23 = &DAT_00439960 + param_13 * 0xc;
  temp_v19 = puVar5;
  FUN_00282924(puVar5,(int)*(short *)(param_3 + 0x62));
  temp_v22 = 1;
  temp_v0 = *(short *)(param_3 + 0x62) < 0x6d;
  temp_v2 = (short)param_1;
  temp_v18 = puVar5;
  if (temp_v0) {
    if (param_15 == 0) {
      FUN_002550d8((int)*(short *)(param_3 + 0x62),0,1);
    }
    if (param_12 != 1) {
      if (param_10 != 0) {
        temp_v14[0] = (int)(short)(temp_v2 + param_21 + 1);
        temp_v3 = DAT_00434290;
        FUN_0022699c(DAT_00434290,temp_v14[0],0,param_2);
        *(unsigned char *)(temp_v3 + 4) = 0x13;
        *(int *)(temp_v3 + 0x14) = param_3;
        *(int *)(temp_v3 + 0x4c) = param_10;
        temp_v3 = DAT_00434290;
        FUN_0022699c(DAT_00434290,temp_v14[0],0,param_2);
        *(unsigned char *)(temp_v3 + 4) = 8;
        *(int *)(temp_v3 + 0x14) = param_3;
        *(int *)(temp_v3 + 0x28) = param_10;
        temp_v14[0] = 1;
        temp_v3 = DAT_00434290;
        FUN_0022699c(DAT_00434290,(int)(short)(temp_v2 + param_21),0,param_2);
        *(unsigned char *)(temp_v3 + 4) = 0x1d;
        *(int *)(temp_v3 + 0x14) = param_3;
        *(int *)(temp_v3 + 0x28) = temp_v14[0];
        *(int *)(temp_v3 + 0x4c) = param_10;
        temp_v3 = FUN_003bd0e8(param_10);
        if (temp_v3 == 0) {
          temp_v22 = 0;
        }
      }
      if (temp_v21 != 0) {
        temp_v4 = 0;
        temp_v3 = 0;
        puVar5 = temp_v19 + 0x7a6;
        do {
          temp_v6 = *puVar5 + temp_v4 * 0x114;
          temp_v7 = *(unsigned int *)(temp_v6 + 0x50);
          if ((((temp_v7 & 1) != 0 && (temp_v7 & 2) != 0) && (temp_v7 & 0x10) != 0) &&
             ((*(unsigned int *)(temp_v6 + 0xf8) & 2) == 0)) {
            temp_v3 = temp_v3 + 1;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x6d);
        temp_v1 = (short)temp_v19[0x7a1];
        temp_v11 = (float)VectorSignedToFloat(param_8,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = (float)VectorSignedToFloat(param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (int)(char)(((char)((int)temp_v1 / 10) + (char)(temp_v1 >> 7)) -
                           (char)(temp_v1 * 0x6667 >> 0x1f));
        if (temp_v4 < 3) {
          temp_v4 = 3;
        }
        temp_v13 = (float)VectorSignedToFloat(temp_v1 + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (int)(char)(int)((temp_v13 * temp_v11) / temp_v12);
        if (temp_v6 < temp_v4) {
          temp_v6 = temp_v4;
        }
        temp_v6 = temp_v3 - temp_v6;
        if (0 < temp_v6) {
          temp_v6 = (int)(char)temp_v6;
          temp_v3 = temp_v6;
        }
        if (0 < temp_v6) {
          temp_v4 = FUN_0027e928(DAT_0043427c);
          *(unsigned char *)(temp_v4 + 0x59c) = 1;
          temp_v4 = 0;
          if (param_13 == 0) {
            *(unsigned int *)(DAT_00435d18 + 0x3028) = *(unsigned int *)(DAT_00435d18 + 0x3028) | 0x8000;
          }
          temp_v6 = 4;
          do {
            temp_v8 = *puVar5 + temp_v6 * 0x114;
            temp_v7 = *(unsigned int *)(temp_v8 + 0x50);
            if (((((temp_v7 & 1) != 0 && (temp_v7 & 0x10) != 0) && (temp_v7 & 2) != 0) &&
                ((*(unsigned int *)(temp_v8 + 0xf8) & 2) == 0 && (*(unsigned int *)(temp_v8 + 0xf8) & 4) == 0)) &&
               (*(short *)(temp_v8 + 0x62) != *(short *)(param_3 + 0x62))) {
              temp_v14[temp_v4] = temp_v8;
              temp_v4 = (int)(char)((char)temp_v4 + '\x01');
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 0x36);
          FUN_002b7bca(temp_v14,temp_v4,4,&LAB_0019d7bc);
          temp_v6 = 0;
          temp_v4 = 0;
          do {
            piVar2 = temp_v14 + temp_v4;
            temp_v6 = (int)(char)((char)temp_v6 + '\x01');
            temp_v10 = SBORROW4(temp_v6,temp_v3);
            temp_v8 = temp_v6 - temp_v3;
            if (temp_v6 < temp_v3) {
              temp_v4 = temp_v4 + 1;
            }
            if (temp_v6 < temp_v3) {
              temp_v10 = SBORROW4(temp_v4,0x32);
              temp_v8 = temp_v4 - 0x32;
            }
            *(unsigned int *)(*piVar2 + 0xf8) = *(unsigned int *)(*piVar2 + 0xf8) | 4;
          } while (temp_v8 < 0 != temp_v10);
        }
        temp_v3 = 4;
        temp_v15 = temp_v19 + 0xbc0;
        temp_v16 = temp_v19 + 0xbc1;
        do {
          temp_v4 = *puVar5 + temp_v3 * 0x114;
          temp_v7 = *(unsigned int *)(temp_v4 + 0x50);
          if (((((temp_v7 & 1) != 0 && (temp_v7 & 0x10) != 0) && (temp_v7 & 2) != 0) &&
              ((*(unsigned int *)(temp_v4 + 0xf8) & 2) == 0)) &&
             (*(short *)(temp_v4 + 0x62) != *(short *)(param_3 + 0x62) &&
              (*(unsigned int *)(temp_v4 + 0xf8) & 4) != 0)) {
            *(char *)temp_v16 = (char)temp_v15[1] + '\x01';
            switch(param_13) {
            case 0:
            case 1:
              *(unsigned int *)(temp_v4 + 0xf8) = *(unsigned int *)(temp_v4 + 0xf8) | 2;
              temp_v14[0] = 0;
              temp_v6 = DAT_00434290;
              FUN_0022699c(DAT_00434290,
                           (int)(short)((short)*(unsigned int *)(temp_v4 + 0x5c) + (short)temp_v20),0,
                           param_2);
              *(unsigned char *)(temp_v6 + 4) = 0x13;
              *(int *)(temp_v6 + 0x14) = temp_v4;
              *(int *)(temp_v6 + 0x4c) = temp_v14[0];
              FUN_002267b8(*(int *)(temp_v4 + 0x5c) + temp_v20,param_2,temp_v4);
              temp_v4 = DAT_00434290;
              FUN_0022699c(DAT_00434290,
                           (int)(short)((short)*(unsigned int *)(param_3 + 0x5c) + temp_v2 + 5),0,
                           param_2);
              *(unsigned char *)(temp_v4 + 4) = 0x1b;
              break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
              *(unsigned int *)(temp_v4 + 0xf8) = *(unsigned int *)(temp_v4 + 0xf8) | 2;
              temp_v14[0] = 0;
              temp_v6 = DAT_00434290;
              FUN_0022699c(DAT_00434290,
                           (int)(short)((short)*(unsigned int *)(temp_v4 + 0x5c) + (short)temp_v20),0,
                           param_2);
              *(unsigned char *)(temp_v6 + 4) = 0x13;
              *(int *)(temp_v6 + 0x14) = temp_v4;
              *(int *)(temp_v6 + 0x4c) = temp_v14[0];
              if (param_13 != 9) {
                temp_v14[1] = param_13;
                if ((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0) {
                  temp_v6 = *(int *)(DAT_00434290 + 8);
                  do {
                    if (temp_v6 == 0) {
                      temp_v6 = DAT_00434290;
                      FUN_0022699c(DAT_00434290,
                                   (int)(short)((short)*(unsigned int *)(temp_v4 + 0x5c) +
                                               (short)temp_v20),0);
                      temp_v14[0] = temp_v6;
                      temp_v6 = FUN_002939f4();
                      FUN_0027da30(temp_v6,(int)*(short *)(temp_v4 + 0x62));
                      temp_v17 = temp_v6;
                      temp_v5 = FUN_002939f4();
                      temp_v6 = FUN_0027dab0(temp_v5,temp_v4);
                      if (temp_v6 < 0) {
                        temp_v6 = 0;
                      }
                      *(unsigned char *)(temp_v14[0] + 4) = 0x25;
                      *(int *)(temp_v14[0] + 0x14) = temp_v4;
                      *(int *)(temp_v14[0] + 0x28) = temp_v14[1];
                      *(short *)(temp_v14[0] + 0x24) =
                           (short)*(unsigned int *)(temp_v17 + temp_v6 * 4 + 0xc);
                      break;
                    }
                    temp_v7 = (unsigned int)*(unsigned char *)(temp_v6 + 4);
                    temp_v10 = temp_v7 == 0x25;
                    if (temp_v10) {
                      temp_v7 = *(unsigned int *)(temp_v6 + 8);
                    }
                    temp_v9 = temp_v10 && temp_v7 == param_2;
                    if (temp_v10 && temp_v7 == param_2) {
                      temp_v9 = *(int *)(temp_v6 + 0x14) == temp_v4;
                    }
                    temp_v6 = *(int *)(temp_v6 + 0xc);
                  } while (!temp_v9);
                }
              }
              else {
                FUN_002266dc(*(int *)(temp_v4 + 0x5c) + temp_v20,param_2,temp_v4,9);
              }
              temp_v6 = DAT_00434290;
              FUN_0022699c(DAT_00434290,
                           (int)(short)((short)temp_v20 +
                                       (short)*(unsigned int *)(temp_v4 + 0x5c) +
                                       *(short *)(temp_v23 + 10)),0,param_2);
              *(unsigned char *)(temp_v6 + 4) = 0x17;
              *(int *)(temp_v6 + 0x28) = param_13;
            }
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x36);
      }
    }
    else {
      temp_v14[0] = 1;
      temp_v14[1] = 1;
      FUN_003ddee0(temp_v20,param_2,param_3,param_13);
    }
    FUN_002550d8((int)*(short *)(param_3 + 0x62),1,1,0);
    temp_v3 = temp_v24;
    if ((-1 < param_17) && (temp_v22 != 0)) {
      temp_v14[0] = (int)(short)((short)param_17 + temp_v2);
      temp_v5 = 0x3f800000;
      temp_v4 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v14[0],0,param_2);
      *(unsigned char *)(temp_v4 + 4) = 0x12;
      *(int *)(temp_v4 + 0x14) = param_3;
      *(unsigned int *)(temp_v4 + 0x30) = temp_v5;
      *(int *)(temp_v4 + 0x4c) = temp_v3;
      *(short *)(temp_v4 + 0x24) = (short)param_23;
      if (temp_v21 != 0) {
        temp_v3 = 4;
        puVar5 = temp_v19 + 0x7a6;
        do {
          temp_v4 = *puVar5 + temp_v3 * 0x114;
          temp_v7 = *(unsigned int *)(temp_v4 + 0x50);
          if ((((temp_v7 & 1) != 0 && (temp_v7 & 0x10) != 0) && (temp_v7 & 2) != 0) &&
             (*(short *)(temp_v4 + 0x62) != *(short *)(param_3 + 0x62))) {
            temp_v14[1] = temp_v24;
            temp_v15 = param_23;
            temp_v6 = DAT_00434290;
            FUN_0022699c(DAT_00434290,temp_v14[0],0,param_2);
            *(unsigned char *)(temp_v6 + 4) = 0x12;
            *(int *)(temp_v6 + 0x14) = temp_v4;
            *(unsigned int *)(temp_v6 + 0x30) = temp_v5;
            *(int *)(temp_v6 + 0x4c) = temp_v14[1];
            *(short *)(temp_v6 + 0x24) = (short)temp_v15;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x36);
      }
      temp_v3 = FUN_00293230(temp_v19);
      if (temp_v3 != 0) {
        temp_v14[0] = 1;
        temp_v14[1] = 0;
        temp_v15 = (unsigned int *)0x0;
        FUN_002505c0(0,0,0x10001a0,0);
      }
    }
    puVar5 = temp_v18;
    if (((-1 < param_18) && (temp_v18 != (unsigned int *)0x0)) && (-1 < param_20)) {
      temp_v3 = DAT_00434290;
      FUN_0022699c(DAT_00434290,(int)(short)((short)param_18 + temp_v2),0,param_2);
      *(unsigned char *)(temp_v3 + 4) = 6;
      *(unsigned int **)(temp_v3 + 0x18) = puVar5;
      *(int *)(temp_v3 + 0x28) = param_20;
    }
  }
  temp_v4 = param_19 + param_1 + param_15;
  temp_v3 = (int)(short)(temp_v2 + (short)param_19 + (short)param_15);
  if (param_5 >= 0) {
    if (param_6 >= 0) {
      if (((temp_v0) && (-1 < param_19)) && (param_25 != 0)) {
        temp_v14[1] = param_6;
        temp_v15 = (unsigned int *)0x4;
        temp_v17 = param_14;
        if (param_14 != 0) {
          temp_v17 = 1;
        }
        temp_v14[0] = param_5;
        temp_v16 = param_24;
        FUN_002268d0(temp_v4,0,param_2,param_3);
        temp_v6 = DAT_00434290;
        FUN_0022699c(DAT_00434290,temp_v3,0,param_2);
        *(unsigned char *)(temp_v6 + 4) = 0x32;
      }
      temp_v14[0] = 0;
      temp_v6 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v3,0,param_2);
      *(unsigned char *)(temp_v6 + 4) = 0x1c;
      *(int *)(temp_v6 + 0x14) = param_3;
      *(int *)(temp_v6 + 0x28) = temp_v14[0];
      *(int *)(temp_v6 + 0x4c) = -param_5;
      temp_v6 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v3,0,param_2);
      *(unsigned char *)(temp_v6 + 4) = 0x1c;
      *(int *)(temp_v6 + 0x14) = param_3;
      *(unsigned int *)(temp_v6 + 0x28) = 1;
      *(int *)(temp_v6 + 0x4c) = -param_6;
    }
    else {
LAB_00255b74:
      if (((temp_v0) && (-1 < param_19)) && (param_25 != 0)) {
        temp_v14[1] = 0;
        temp_v15 = (unsigned int *)0x0;
        temp_v17 = param_14;
        if (param_14 != 0) {
          temp_v17 = 1;
        }
        temp_v14[0] = param_5;
        temp_v16 = param_24;
        FUN_002268d0(temp_v4,0,param_2,param_3);
        temp_v6 = DAT_00434290;
        FUN_0022699c(DAT_00434290,temp_v3,0,param_2);
        *(unsigned char *)(temp_v6 + 4) = 0x32;
      }
      temp_v6 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v3,0,param_2);
      *(unsigned char *)(temp_v6 + 4) = 0x1c;
      *(int *)(temp_v6 + 0x14) = param_3;
      *(unsigned int *)(temp_v6 + 0x28) = 0;
      *(int *)(temp_v6 + 0x4c) = -param_5;
    }
  }
  else {
    if (param_6 < 0) {
      if (param_5 < 0) goto LAB_00255c1c;
      goto LAB_00255b74;
    }
    if (((temp_v0) && (-1 < param_19)) && (param_25 != 0)) {
      temp_v14[1] = 0;
      temp_v15 = (unsigned int *)0x1;
      temp_v17 = param_14;
      if (param_14 != 0) {
        temp_v17 = 1;
      }
      temp_v14[0] = param_6;
      temp_v16 = param_24;
      FUN_002268d0(temp_v4,0,param_2,param_3);
      temp_v6 = DAT_00434290;
      FUN_0022699c(DAT_00434290,temp_v3,0,param_2);
      *(unsigned char *)(temp_v6 + 4) = 0x32;
    }
    temp_v6 = DAT_00434290;
    FUN_0022699c(DAT_00434290,temp_v3,0,param_2);
    *(unsigned char *)(temp_v6 + 4) = 0x1c;
    *(int *)(temp_v6 + 0x14) = param_3;
    *(unsigned int *)(temp_v6 + 0x28) = 1;
    *(int *)(temp_v6 + 0x4c) = -param_6;
  }
LAB_00255c1c:
  if ((param_14 == 1 && temp_v0) && (temp_v24 != 0)) {
    if (temp_v24 != 1) {
      if (temp_v24 == 2) {
        for (temp_v3 = *(int *)(DAT_00434290 + 8); temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0xc)) {
        }
        temp_v3 = DAT_00434290;
        FUN_0022699c(DAT_00434290,(int)(short)temp_v4,0,param_2);
        *(unsigned char *)(temp_v3 + 4) = 7;
        *(int *)(temp_v3 + 0x14) = param_3;
        *(unsigned int *)(temp_v3 + 0x28) = 1;
        temp_v2 = FUN_00255158((int)*(short *)(param_3 + 0x62),1);
        *(short *)(temp_v3 + 0x24) = temp_v2 - 1;
        *(unsigned char *)(temp_v3 + 5) = *(unsigned char *)(temp_v3 + 5) | 4;
      }
    }
    else {
      for (temp_v3 = *(int *)(DAT_00434290 + 8); temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0xc)) {
      }
      temp_v3 = DAT_00434290;
      FUN_0022699c(DAT_00434290,(int)(short)temp_v4,0,param_2);
      *(unsigned char *)(temp_v3 + 4) = 7;
      *(int *)(temp_v3 + 0x14) = param_3;
      *(unsigned int *)(temp_v3 + 0x28) = 2;
      temp_v2 = FUN_00255158((int)*(short *)(param_3 + 0x62),1);
      *(short *)(temp_v3 + 0x24) = temp_v2 - 1;
      *(unsigned char *)(temp_v3 + 5) = *(unsigned char *)(temp_v3 + 5) | 4;
    }
  }
  if (((param_22 != 0) && (-1 < param_5)) && (temp_v18 != (unsigned int *)0x0)) {
    if ((*temp_v18 & 0x10) != 0) {
      temp_v5 = 6;
    }
    else {
      if ((*temp_v18 & 10) == 0) {
        return 1;
      }
      temp_v5 = 7;
    }
    FUN_0029be5c(temp_v5,param_5);
  }
  return 1;
}
