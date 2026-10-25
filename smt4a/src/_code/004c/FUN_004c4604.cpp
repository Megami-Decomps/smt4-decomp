/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c4604` (_code @ 0x4c4604, 0xb44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

extern "C" {

int dataTable8FindRecord(void);
int dataTable04FindById(void);
int sysMemClear(...);
int FUN_003e8bb0(unsigned char [2], unsigned int, unsigned int *);
int FUN_003f0e20(...);
int FUN_004bf6e0(...);
int FUN_004bf9a0(...);
int FUN_004c0f74(unsigned int *, unsigned int);
int kindIdStore(unsigned int, unsigned int [7]);
int FUN_004c60c0(...);
int FUN_004c8340(...);
int VectorSignedToFloat(int, int);

/* stack frame of param_8: 18 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned short sp7E; /* 0x7e: local_7e */
    unsigned short sp80; /* 0x80: local_80 */
    unsigned short sp82; /* 0x82: local_82 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp140; /* 0x140: local_140 */
} param_8_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */
extern unsigned int DAT_00571458; /* 0x571458 */
extern unsigned int DAT_0057145c; /* 0x57145c */
extern unsigned int uRam00571468; /* 0x571468 */
extern unsigned int uRam0057146c; /* 0x57146c */
extern unsigned int DAT_00571470; /* 0x571470 */
extern unsigned int DAT_00571474; /* 0x571474 */
extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */
extern unsigned int DAT_005714b0; /* 0x5714b0 */
extern unsigned int DAT_005714b4; /* 0x5714b4 */
extern unsigned int DAT_005714b8; /* 0x5714b8 */
extern unsigned int DAT_005714bc; /* 0x5714bc */
extern unsigned int DAT_00571500; /* 0x571500 */
extern unsigned int DAT_00571504; /* 0x571504 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: btlGetMainState. */
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: dataTable8FindRecord. */
/* Supplied declaration required: dataTable04FindById. */
extern int FUN_0028cb6c(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bf6e0. */
/* Supplied declaration required: FUN_004bf9a0. */
/* Supplied declaration required: FUN_004c0f74. */
/* Supplied declaration required: kindIdStore. */
/* Supplied declaration required: FUN_004c60c0. */
/* Supplied declaration required: FUN_004c8340. */
extern int flagsCountSelectedBits(short);
extern unsigned int btlUnitGet(unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned int
FUN_004c4604(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,int param_6,
            int param_7,char *param_8)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar8;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned int temp_v23 [4];
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30 [24];
  unsigned char temp_v31 [2];
  unsigned short temp_v32;
  short temp_v33;
  short temp_v34;
  short temp_v35;
  unsigned int temp_v36 [7];
  int iStack_34;
  unsigned int uStack_30;
  int temp_v37;
  unsigned int temp_v38;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  temp_v37 = param_3;
  temp_v38 = param_4;
  puVar3 = (unsigned int *)reinterpret_cast<int>(btlGetMainState());
  puVar4 = puVar3;
  FUN_003f0e20(puVar3,temp_v38);
  puVar5 = puVar3;
  FUN_003f0e20(puVar3,param_5);
  *param_8 = '\0';
  switch(temp_v37) {
  case 0xb:
    temp_v3 = 0xb;
    break;
  default:
    if (param_1 != 0xffff) {
      temp_v4 = param_1;
      dataTable04FindById();
      temp_v1 = 0;
      if (param_1 >= 1) {
        if (param_6 != 0) {
          temp_v0 = *(char *)(temp_v4 + 0x23);
          if ((temp_v0 == '\a' || temp_v0 == '\t') || temp_v0 == '\v') {
            return 0x10;
          }
          temp_v2 = (*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5;
          temp_v10 = temp_v2 != 7;
          temp_v11 = temp_v2 != 8;
          if (temp_v10 && temp_v11) {
            temp_v2 = (unsigned int)*(unsigned char *)(temp_v4 + 0x2f);
          }
          if ((!temp_v10 || !temp_v11) || temp_v2 == 4) {
            return 0x10;
          }
        }
        temp_v0 = *(char *)(temp_v4 + 0x23);
        if (temp_v0 == '\a' || temp_v0 == '\t') {
          temp_v3 = 6;
          break;
        }
        if (temp_v0 == '\v') {
          return 0x11;
        }
        if ((*(unsigned short *)(temp_v4 + 0x3a) & 0x1000) != 0) {
          return 9;
        }
        if (*(char *)(temp_v4 + 0x56) != '\0') {
          return 7;
        }
        if (*(char *)(temp_v4 + 0x60) != '\0') {
          return 0xc;
        }
        if ((*(unsigned short *)(temp_v4 + 0x3a) & 0x2000) != 0) {
          return 0xf;
        }
        if ((temp_v4 != 0) && ((*(unsigned int *)(temp_v4 + 0x3c) & 0x7f000) != 0)) {
          temp_v1 = 1;
        }
        temp_v2 = (unsigned int)*(unsigned char *)(temp_v4 + 0x45);
        if (temp_v2 != 0) {
          switch(temp_v2) {
          case 0x1d:
          case 0x1e:
            temp_v2 = 0x3e0;
            break;
          default:
            temp_v2 = 1 << temp_v2;
            break;
          case 0x20:
            temp_v2 = 1000;
            break;
          case 0x21:
            temp_v2 = 800;
            break;
          case 0x22:
            temp_v2 = 0x8c0;
            break;
          case 0x23:
            temp_v2 = 0x920;
            break;
          case 0x24:
            temp_v2 = 0x940;
            break;
          case 0x25:
            temp_v2 = 0x3bea;
          }
          if ((temp_v2 & (unsigned short)puVar5[0x9d]) == 0) {
            return 5;
          }
        }
        if (!temp_v1) goto LAB_004c4810;
      }
      else {
LAB_004c4810:
        if ((DAT_00571500 & puVar3[0x116a]) != 0 || (puVar3[0x116b] & DAT_00571504) != 0) {
          return 5;
        }
        if ((puVar3[0x116a] & DAT_005714b8) != 0 || (puVar3[0x116b] & DAT_005714bc) != 0) {
          return 1;
        }
      }
      if ((puVar3[0x116a] & DAT_005714b0) == 0 && (puVar3[0x116b] & DAT_005714b4) == 0) {
        temp_v3 = reinterpret_cast<int>(btlGetMainState());
        FUN_003e8bb0(temp_v31,temp_v3,puVar4);
        if ((param_1 < 1) && (temp_v37 != 1)) {
          if (temp_v37 != 8) {
            return 0;
          }
          temp_v4 = (int)(short)puVar4[0xc9];
          dataTable8FindRecord();
          if (temp_v4 == 0) {
            return 0;
          }
          if ((*(unsigned int *)(temp_v4 + 0x68) & 0x10) == 0) {
            return 0;
          }
          return 0xd;
        }
        temp_v7 = (int)temp_v33;
        temp_v23[0] = (unsigned int)temp_v32;
        temp_v15 = (float)VectorSignedToFloat((int)temp_v34,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = temp_v15 * 0.01f;
        if (temp_v7 == 3 || temp_v7 == 4) {
          return 0;
        }
        temp_v2 = temp_v38;
        FUN_004c8340(temp_v38,param_5,temp_v23[0],temp_v7,0xffffffff);
        kindIdStore(temp_v23[0],temp_v36);
        puVar8 = puVar4;
        FUN_004c0f74(puVar4,temp_v36[0] & 0xff);
        if (puVar8 != (unsigned int *)0x0) {
          if ((temp_v2 & 0xf0000) != 0) {
            if (param_7 == 0) {
              puVar3[0x12f0] = 1;
            }
            *param_8 = '\x01';
          }
          if (((temp_v2 & 0x20000) != 0) && (*param_8 == '\0')) {
            if (((temp_v2 & 0x200000) != 0) && (param_7 == 0)) {
              temp_v2 = DAT_00571458 | *puVar5;
              puVar5[1] = DAT_0057145c | puVar5[1];
              *puVar5 = temp_v2;
            }
            return 1;
          }
        }
        else {
          if ((temp_v2 & 0x40000) != 0) {
            if ((temp_v2 & 0x1000000) != 0) {
              temp_v2 = DAT_00571474 | puVar5[1];
              *puVar5 = *puVar5 | DAT_00571470;
              puVar5[1] = temp_v2;
            }
            return 2;
          }
          if ((temp_v2 & 0x20000) != 0) {
            if ((temp_v2 & 0x200000) == 0) {
              return 1;
            }
            if (param_7 != 0) {
              return 1;
            }
            temp_v2 = DAT_0057145c | puVar5[1];
            *puVar5 = DAT_00571458 | *puVar5;
            puVar5[1] = temp_v2;
            return 1;
          }
          if ((temp_v2 & 0x10000) != 0) {
            return 3;
          }
        }
        if (temp_v4 != 0) {
          if (*(char *)(temp_v4 + 0x23) == '\x02') {
            sysMemClear(temp_v23,0x54);
            sysMemClear(temp_v30,0x54);
            temp_v0 = *(char *)(temp_v4 + 0x2f);
            if (temp_v0 != '\x01') {
              if (!(temp_v0 == '\x1d' || temp_v0 == '\x1e')) {
                if (temp_v0 != ' ') {
                  if (temp_v0 != '!') {
                    if (temp_v0 != '\"') {
                      if (temp_v0 != '#') {
                        if (temp_v0 != '$') {
                          if (temp_v0 != '%') {
                            if (temp_v0 == '\0') {
                              return 0;
                            }
                            temp_v23[0] = FUN_004bf9a0();
                            temp_v7 = 1;
                          }
                          else {
                            temp_v23[0] = FUN_004bf9a0(1);
                            temp_v23[1] = FUN_004bf9a0(3);
                            temp_v23[2] = FUN_004bf9a0(5);
                            temp_v23[3] = FUN_004bf9a0(6);
                            temp_v24 = FUN_004bf9a0(7);
                            temp_v25 = FUN_004bf9a0(8);
                            temp_v26 = FUN_004bf9a0(9);
                            temp_v27 = FUN_004bf9a0(0xb);
                            temp_v28 = FUN_004bf9a0(0xc);
                            temp_v29 = FUN_004bf9a0(0xd);
                            temp_v7 = 10;
                          }
                        }
                        else {
                          temp_v23[0] = FUN_004bf9a0(0xb);
                          temp_v23[1] = FUN_004bf9a0(6);
                          temp_v23[2] = FUN_004bf9a0(8);
                          temp_v7 = 3;
                        }
                      }
                      else {
                        temp_v23[0] = FUN_004bf9a0(0xb);
                        temp_v23[1] = FUN_004bf9a0(5);
                        temp_v23[2] = FUN_004bf9a0(8);
                        temp_v7 = 3;
                      }
                    }
                    else {
                      temp_v23[0] = FUN_004bf9a0(0xb);
                      temp_v23[1] = FUN_004bf9a0(6);
                      temp_v23[2] = FUN_004bf9a0(7);
                      temp_v7 = 3;
                    }
                  }
                  else {
                    temp_v23[0] = FUN_004bf9a0(5);
                    temp_v23[1] = FUN_004bf9a0(9);
                    temp_v23[2] = FUN_004bf9a0(8);
                    temp_v7 = 3;
                  }
                }
                else {
                  temp_v23[0] = FUN_004bf9a0(5);
                  temp_v23[1] = FUN_004bf9a0(6);
                  temp_v23[2] = FUN_004bf9a0(7);
                  temp_v23[3] = FUN_004bf9a0(8);
                  temp_v24 = FUN_004bf9a0(9);
                  temp_v25 = FUN_004bf9a0(3);
                  temp_v7 = 6;
                }
              }
              else {
                temp_v23[0] = FUN_004bf9a0(5);
                temp_v23[1] = FUN_004bf9a0(6);
                temp_v23[2] = FUN_004bf9a0(7);
                temp_v23[3] = FUN_004bf9a0(8);
                temp_v24 = FUN_004bf9a0(9);
                temp_v7 = 5;
              }
            }
            else {
              temp_v7 = 1;
              temp_v23[0] = (unsigned int)temp_v32;
            }
            temp_v8 = 0;
            do {
              temp_v2 = temp_v38;
              FUN_004c8340(temp_v38,param_5,temp_v23[temp_v8],*(unsigned char *)(temp_v4 + 0x23),
                           0xffffffff);
              temp_v30[temp_v8] = temp_v2;
              temp_v2 = param_5;
              FUN_004c60c0(param_5,temp_v23[temp_v8]);
              temp_v6 = temp_v30[temp_v8];
              temp_v30[temp_v8] = temp_v2 | temp_v6;
              temp_v9 = temp_v23[temp_v8];
              if (((temp_v2 | temp_v6) & 0x170000) == 0) {
                temp_v5 = reinterpret_cast<int>(btlGetMainState());
                FUN_003f0e20(temp_v5,param_5);
                if ((temp_v5 != 0) && (*(int *)(temp_v5 + 0xd8) != 0)) {
                  temp_v2 = 0;
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
                    temp_v2 = 0x10000;
                  }
                }
                else {
                  temp_v2 = 0;
                }
              }
              else {
                temp_v2 = 0;
              }
              temp_v6 = temp_v30[temp_v8];
              temp_v30[temp_v8] = temp_v2 | temp_v6;
              if (temp_v2 != 0 || (temp_v6 & 0x170000) != 0) {
                return 3;
              }
              temp_v8 = temp_v8 + 1;
              if (temp_v7 <= temp_v8) {
                return 0;
              }
            } while( 1 );
          }
          if (*(char *)(temp_v4 + 0x23) == '\b') {
            return 0;
          }
        }
        if ((temp_v35 != 0) && (temp_v7 = flagsCountSelectedBits((short)puVar5[0x9d]), temp_v7 == 0)) {
          return 5;
        }
        temp_v2 = puVar5[0x9d];
        if ((((((temp_v2 & 0x200) == 0) && ((temp_v2 & 0x80) == 0)) && ((temp_v2 & 0x100) == 0)) &&
            (((temp_v2 & 0x1000) == 0 && ((puVar3[0x43] & 0x20000000) == 0)))) &&
           ((puVar3[0x1169] & DAT_0057149c) == 0 && (DAT_00571498 & puVar3[0x1168]) == 0)) {
          if ((puVar4[1] & uRam0057146c) != 0 || (*puVar4 & uRam00571468) != 0) {
            if ((temp_v4 != 0) && (*(char *)(temp_v4 + 0x23) == '\0')) {
              return 0;
            }
            if (*(short *)((int)puVar4 + 0x322) == 1) {
              return 0;
            }
          }
          puVar3 = (unsigned int *)btlUnitGet(g_btlScriptUnit);
          temp_v2 = temp_v38;
          if ((*puVar3 & 0x200) == 0) {
            temp_v4 = reinterpret_cast<int>(btlGetMainState());
            FUN_003f0e20(temp_v4,temp_v2);
            if ((temp_v4 != 0) && (0 < *(int *)(temp_v4 + 0xc0))) {
              if (!temp_v1) {
                return 0;
              }
              return 0xe;
            }
          }
          temp_v12 = (float)VectorSignedToFloat(temp_v38,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_004bf6e0(0xb);
          temp_v13 = (float)VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_004bf6e0(9);
          temp_v14 = 0.0f;
          temp_v21 = 50.0f;
          temp_v20 = (float)VectorSignedToFloat((int)*(short *)((int)puVar4 + 0x26e) -
                                              (int)*(short *)((int)puVar5 + 0x26e),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          if ((int)temp_v20 >= 0x42480001) {
            temp_v18 = (float)VectorSignedToFloat((int)*(short *)((int)puVar5 + 0x26e),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = temp_v20 - 50.0f;
            temp_v18 = ((temp_v20 - 50.0f) / temp_v18) * 10.0f;
          }
          else {
            temp_v16 = temp_v14;
            temp_v18 = temp_v14;
            if (0xc2480000 < (unsigned int)temp_v20) {
              temp_v18 = (float)VectorSignedToFloat((int)*(short *)((int)puVar4 + 0x26e),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = temp_v20 + 50.0f;
              temp_v18 = (temp_v16 / temp_v18) * 10.0f;
            }
          }
          temp_v19 = (float)VectorSignedToFloat((int)(short)puVar4[0x9c] - (int)(short)puVar5[0x9c],
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          if ((int)temp_v19 >= 0x42480001) {
            temp_v22 = (float)VectorSignedToFloat((int)(short)puVar5[0x9c],
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = temp_v19 - 50.0f;
            temp_v22 = ((temp_v19 - 50.0f) / temp_v22) * 3.0f;
          }
          else {
            temp_v17 = temp_v14;
            temp_v22 = temp_v14;
            if (0xc2480000 < (unsigned int)temp_v19) {
              temp_v22 = (float)VectorSignedToFloat((int)(short)puVar4[0x9c],
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = temp_v19 + 50.0f;
              temp_v22 = (temp_v17 / temp_v22) * 3.0f;
            }
          }
          temp_v15 = (temp_v18 + (temp_v20 - temp_v16) * 0.35f + 95.0f + temp_v22 + (temp_v19 - temp_v17) * 0.1f) *
                   temp_v12 * temp_v13 * temp_v15;
          if (((int)temp_v15 >= 0x42480000) && (temp_v21 = temp_v15, (int)temp_v15 >= 0x42c40001)) {
            temp_v21 = 98.0f;
          }
          temp_v2 = puVar4[0xfe];
          temp_v10 = temp_v2 == 0;
          if (temp_v10) {
            temp_v2 = puVar4[0xff];
          }
          if ((!temp_v10 || temp_v2 != 0) && (*(unsigned short *)((int)puVar4 + 0x27a) < 0x10)) {
            temp_v2 = *(unsigned short *)((int)puVar4 + 0x27a) - 1;
            temp_v15 = -10.0f;
            if (0 < (int)temp_v2) {
              if ((temp_v2 & 1) != 0) {
                temp_v15 = -9.375f;
              }
              for (temp_v4 = (int)temp_v2 >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
                temp_v15 = temp_v15 + 0.625f;
                temp_v14 = temp_v14 + 0.625f;
              }
              temp_v15 = temp_v15 + temp_v14;
            }
            temp_v21 = temp_v21 + temp_v15;
          }
          if ((puVar4[1] & DAT_00571414) == 0 && (*puVar4 & DAT_00571410) == 0) {
            temp_v4 = FUN_0028cb6c();
            temp_v21 = *(float *)(temp_v4 + 4) * temp_v21;
          }
          if (((puVar4[0x9d] & 0x10) != 0) && ((puVar5[0x9d] & 0x10) == 0)) {
            temp_v21 = 100.0f;
          }
          temp_v4 = lcgRandomRange(99);
          if ((int)temp_v21 < temp_v4) {
            return 5;
          }
        }
      }
      if (!temp_v1) {
        return 0;
      }
      return 0xe;
    }
  case 9:
  case 10:
  case 0xc:
    temp_v3 = 6;
    break;
  case 0xe:
    temp_v3 = 8;
  }
  return temp_v3;
}

} /* extern "C" */
