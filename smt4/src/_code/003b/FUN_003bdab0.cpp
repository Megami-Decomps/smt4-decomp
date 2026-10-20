/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bdab0` (_code @ 0x3bdab0, 0x878 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00247478(unsigned char [2], unsigned int *, unsigned int *);
int FUN_0027da30(...);
int btlMainFindEntryByListedId(...);
int FUN_00283ebc(unsigned int, unsigned int, int);
int gameGetUnitRecord(...);
int FUN_002ae164(void);
int dataTable08Sub2GetRecord(void);
int dataTable08Sub1GetRecord(void);
int FUN_003bd9e8(...);
int FUN_003be918(unsigned int, unsigned int, int, int, int);
int FUN_003beba8(...);
int SBORROW4(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_8: 12 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned char sp49; /* 0x49: local_49 */
    unsigned char sp4A; /* 0x4a: local_4a */
    unsigned char sp4B; /* 0x4b: local_4b */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_8_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int randRange(unsigned int);
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: FUN_00283ebc. */
extern unsigned int *btlGetMainState(void);
extern int flagWordTestBit(unsigned int, unsigned int);
/* Supplied declaration required: gameGetUnitRecord. */
extern unsigned int FUN_002ae108(unsigned int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
/* Supplied declaration required: FUN_003bd9e8. */
/* Supplied declaration required: FUN_003be918. */
/* Supplied declaration required: FUN_003beba8. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_003bdab0(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,int param_6,
                 unsigned int param_7,int param_8)

{
/* irregular: 16 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned char temp_v14 [2];
  short temp_v15;
  short temp_v16;
  char temp_v17;
  char temp_v18;
  char temp_v19;
  char temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  int iStack_28;
  
  temp_v21 = param_1;
  temp_v22 = param_2;
  temp_v23 = param_3;
  iStack_28 = param_4;
  puVar3 = (unsigned int *)btlGetMainState();
  temp_v2 = temp_v22;
  FUN_002ae164();
  dataTable08Sub1GetRecord();
  puVar6 = puVar3;
  btlMainFindEntryByListedId(puVar3,param_5);
  puVar5 = puVar3;
  btlMainFindEntryByListedId(puVar3,param_6);
  FUN_00247478(temp_v14,puVar3,puVar6);
  temp_v1 = temp_v22;
  temp_v6 = 0xffffffff;
  temp_v7 = 0xffffffff;
  temp_v9 = 1;
  if ((temp_v17 == '\0') && (temp_v18 != '\0')) {
    return 0xffffffff;
  }
  if (temp_v2 != 0) {
    temp_v5 = *(unsigned int *)(temp_v2 + 0x38);
    if ((temp_v5 & 0x8000) != 0 || (temp_v5 & 0x7f0000) != 0) {
      return 0xffffffff;
    }
    VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v2 + 0x2c),(unsigned char)(in_fpscr >> 0x16) & 3);
    switch(*(unsigned char *)(temp_v2 + 0x23)) {
    case 0:
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4c);
      if (temp_v6 == 0) {
        temp_v6 = temp_v22;
        FUN_003beba8(temp_v22,0,param_5,param_6,0,(int)temp_v20,(int)temp_v19);
        if ((*(unsigned short *)((int)puVar6 + 0x1c6) & 0x200) != 0) {
          temp_v6 = temp_v6 - (int)(temp_v6 * 0x19) / 100;
        }
        temp_v0 = *(unsigned short *)((int)puVar5 + 0x1c6);
        goto joined_r0x003bdcc0;
      }
      if (*(char *)(temp_v2 + 0x4e) != '\0') {
        temp_v8 = 0;
        temp_v4 = temp_v8;
        while( 1 ) {
          temp_v0 = *(unsigned short *)((int)puVar5 + temp_v8 * 2 + 0x1f2);
          if (((temp_v0 & 0xfc00) != 0 && temp_v0 >> 10 != 5) && (temp_v0 >> 10 != 2)) {
            temp_v4 = temp_v4 + 1;
          }
          temp_v8 = temp_v8 + 1;
          if (temp_v8 >= 0x12) break;
          while( 1 ) {
            while( 1 ) {
              while( 1 ) {
                while( 1 ) {
                  while( 1 ) {
                    while( 1 ) {
                      while( 1 ) {
                        while( 1 ) {
                          while (temp_v8 == 8) {
                            temp_v8 = 9;
                          }
                          if (temp_v8 != 9) break;
                          temp_v8 = 10;
                        }
                        if (temp_v8 != 10) break;
                        temp_v8 = 0xb;
                      }
                      if (temp_v8 != 0xb) break;
                      temp_v8 = 0xc;
                    }
                    if (temp_v8 != 0xc) break;
                    temp_v8 = 0xd;
                  }
                  if (temp_v8 != 0xd) break;
                  temp_v8 = 0xe;
                }
                if (temp_v8 != 0xe) break;
                temp_v8 = 0xf;
              }
              if (temp_v8 != 0xf) break;
              temp_v8 = 0x10;
            }
            if (temp_v8 != 0x10) break;
            temp_v8 = 0x11;
          }
        }
        temp_v6 = temp_v6 * temp_v4;
        if ((int)temp_v6 >= 1000) {
          temp_v6 = 999;
        }
      }
      break;
    case 1:
      if ((temp_v5 & 0x800000) != 0) {
        temp_v9 = 0;
        temp_v6 = (int)(short)puVar5[0x6d] - 1;
        goto LAB_003bdce0;
      }
      if (*(char *)(temp_v2 + 0x49) != '\0') {
        temp_v6 = (unsigned int)(0 < (int)(short)puVar5[0x6d] % 2) + (int)(short)puVar5[0x6d] / 2;
      }
      else {
        if (*(unsigned char *)(temp_v2 + 0x47) != 0) {
          temp_v9 = 0;
          temp_v6 = (int)((int)(short)puVar5[0x6d] * (unsigned int)*(unsigned char *)(temp_v2 + 0x47)) / 100;
          goto LAB_003bdce0;
        }
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4c);
        if (temp_v6 == 0) {
          temp_v6 = temp_v22;
          FUN_003be918(temp_v22,param_5,param_6,(int)temp_v20,(int)temp_v19);
          if ((temp_v17 != '\0') && (temp_v6 = (int)temp_v6 / 3, (int)temp_v6 >= 101)) {
            temp_v6 = 100;
          }
          if ((*(unsigned short *)((int)puVar6 + 0x1c6) & 0x200) != 0) {
            temp_v6 = temp_v6 - (int)(temp_v6 * 0x19) / 100;
          }
          temp_v0 = *(unsigned short *)((int)puVar5 + 0x1c6);
          goto joined_r0x003bdcc0;
        }
        if (*(char *)(temp_v2 + 0x4e) != '\0') {
          temp_v8 = 0;
          temp_v4 = temp_v8;
          while( 1 ) {
            temp_v0 = *(unsigned short *)((int)puVar5 + temp_v8 * 2 + 0x1f2);
            if (((temp_v0 & 0xfc00) != 0 && temp_v0 >> 10 != 5) && (temp_v0 >> 10 != 2)) {
              temp_v4 = temp_v4 + 1;
            }
            temp_v8 = temp_v8 + 1;
            if (temp_v8 >= 0x12) break;
            while( 1 ) {
              while( 1 ) {
                while( 1 ) {
                  while( 1 ) {
                    while( 1 ) {
                      while( 1 ) {
                        while( 1 ) {
                          while( 1 ) {
                            while (temp_v8 == 8) {
                              temp_v8 = 9;
                            }
                            if (temp_v8 != 9) break;
                            temp_v8 = 10;
                          }
                          if (temp_v8 != 10) break;
                          temp_v8 = 0xb;
                        }
                        if (temp_v8 != 0xb) break;
                        temp_v8 = 0xc;
                      }
                      if (temp_v8 != 0xc) break;
                      temp_v8 = 0xd;
                    }
                    if (temp_v8 != 0xd) break;
                    temp_v8 = 0xe;
                  }
                  if (temp_v8 != 0xe) break;
                  temp_v8 = 0xf;
                }
                if (temp_v8 != 0xf) break;
                temp_v8 = 0x10;
              }
              if (temp_v8 != 0x10) break;
              temp_v8 = 0x11;
            }
          }
          temp_v6 = temp_v6 * temp_v4;
          if ((int)temp_v6 >= 1000) {
            temp_v6 = 999;
          }
        }
      }
      break;
    default:
      goto LAB_003bdce0;
    case 3:
      if ((*(unsigned short *)(temp_v2 + 0x36) & 0xfff) == 4000) {
        if (puVar5 == (unsigned int *)0x0) {
          temp_v4 = gameGetUnitRecord(param_6 - 0x6d);
          temp_v7 = (unsigned int)*(short *)(temp_v4 + 0xe);
LAB_003be0e4:
          temp_v9 = 0;
          goto LAB_003be1b4;
        }
        temp_v7 = (unsigned int)*(short *)((int)puVar5 + 0x1b6);
LAB_003be070:
        temp_v9 = 0;
LAB_003be190:
        if ((*(unsigned short *)((int)puVar5 + 0x1c6) & 8) == 0 || (int)temp_v7 < 2) goto LAB_003be1d4;
      }
      else {
        if (*(unsigned char *)(temp_v2 + 0x43) != 0) {
          if (puVar5 != (unsigned int *)0x0) {
            temp_v7 = (int)((int)*(short *)((int)puVar5 + 0x1b6) * (unsigned int)*(unsigned char *)(temp_v2 + 0x43)) /
                     100;
            goto LAB_003be070;
          }
          temp_v4 = gameGetUnitRecord(param_6 - 0x6d);
          temp_v7 = ((int)*(short *)(temp_v4 + 0xe) * (int)(short)(unsigned short)*(unsigned char *)(temp_v2 + 0x43)) /
                   100;
          goto LAB_003be0e4;
        }
        temp_v12 = (float)(*(unsigned short *)(temp_v2 + 0x36) & 0xffff0fff);
        temp_v3 = VectorUnsignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = romwright_piece_4_4(0x3f800000,temp_v3);
        puVar6 = (unsigned int *)btlGetMainState();
        btlMainFindEntryByListedId(puVar6,param_5);
        if (((*puVar6 & 2) != 0) && (temp_v7 = temp_v1, FUN_002ae164(), temp_v7 != 0)) {
          temp_v3 = FUN_002ae108(temp_v1);
          FUN_00283ebc(temp_v7,temp_v3,2);
        }
        else {
          temp_v7 = 0;
        }
        FUN_003bd9e8(param_5,0x14);
        temp_v11 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = (unsigned int)((float)temp_v13 * temp_v12 * (float)((unsigned long long)temp_v13 >> 0x20) + 0.0f + temp_v11);
        if (puVar5 != (unsigned int *)0x0) goto LAB_003be190;
LAB_003be1b4:
        temp_v3 = gameGetUnitRecord(param_6 - 0x6d);
        temp_v4 = flagWordTestBit(temp_v3,3);
        temp_v10 = temp_v4 != 0;
        temp_v4 = 0;
        if (temp_v10) {
          temp_v4 = temp_v7 - 1;
        }
        if ((!temp_v10 || temp_v7 == 1) || temp_v4 < 0 != (temp_v10 && SBORROW4(temp_v7,1))) {
LAB_003be1d4:
          if (-1 < (int)temp_v7) goto LAB_003bdce0;
          goto LAB_003be1dc;
        }
      }
      temp_v7 = 1;
      break;
    case 8:
      if (param_8 != 5) {
        if (*(char *)(temp_v2 + 0x44) == '\0') goto LAB_003bdce0;
        if ((short)puVar5[0x6d] != 1) {
          temp_v6 = 1;
        }
        else {
          temp_v6 = 0;
        }
      }
      else {
        if (*(char *)(temp_v2 + 0x44) == '\0') goto LAB_003bdce0;
        if ((short)puVar5[0x6d] == 1) {
          temp_v6 = 0;
          break;
        }
        temp_v6 = (int)(short)puVar5[0x6d] - 1;
      }
    }
    temp_v9 = 0;
  }
  else if (param_4 != 0) {
    temp_v9 = *(unsigned short *)(param_4 + 100) == 0;
    if (!temp_v9) {
      temp_v7 = (unsigned int)*(unsigned short *)(param_4 + 100);
    }
    if (*(char *)(param_4 + 0x68) != '\0') {
      temp_v12 = 0.01f;
      if (param_6 < 0x6d) {
        puVar6 = puVar3;
        FUN_0027da30(puVar3,param_6);
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)((int)puVar6 + 0xea) *
                                            (int)(short)(unsigned short)*(unsigned char *)(param_4 + 0x68),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = temp_v11 * temp_v12;
      }
      else {
        temp_v4 = gameGetUnitRecord(param_6 - 0x6d);
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 0xe) *
                                            (int)(short)(unsigned short)*(unsigned char *)(param_4 + 0x68),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = temp_v11 * temp_v12;
      }
      temp_v7 = (unsigned int)temp_v11;
      temp_v9 = 0;
    }
    if (param_6 < 0x6d) {
      if ((*(unsigned short *)((int)puVar5 + 0x1c6) & 8) == 0 || (int)temp_v7 < 2) goto LAB_003bdce0;
    }
    else {
      temp_v3 = gameGetUnitRecord(param_6 - 0x6d);
      temp_v4 = flagWordTestBit(temp_v3,3);
      temp_v10 = temp_v4 != 0;
      temp_v4 = 0;
      if (temp_v10) {
        temp_v4 = temp_v7 - 1;
      }
      if ((!temp_v10 || temp_v7 == 1) || temp_v4 < 0 != (temp_v10 && SBORROW4(temp_v7,1)))
      goto LAB_003bdce0;
    }
LAB_003be1dc:
    temp_v7 = 1;
  }
  else {
    temp_v4 = (int)temp_v16;
    if ((*puVar6 & 6) != 0) {
      temp_v8 = temp_v23;
      dataTable08Sub2GetRecord();
      temp_v4 = (int)temp_v16;
      if (*(char *)(temp_v8 + 0x52) == '\x02') {
        temp_v3 = 1;
      }
      else {
        temp_v3 = 2;
      }
    }
    else if (temp_v15 == 1) {
      temp_v3 = 2;
    }
    else {
      temp_v3 = 1;
    }
    temp_v6 = 0;
    FUN_003beba8(0,temp_v3,param_5,param_6,temp_v4,(int)temp_v20,(int)temp_v19);
    if ((*(unsigned short *)((int)puVar6 + 0x1c6) & 0x200) != 0) {
      temp_v6 = temp_v6 - (int)(temp_v6 * 0x19) / 100;
    }
    temp_v0 = *(unsigned short *)((int)puVar5 + 0x1c6);
joined_r0x003bdcc0:
    if ((temp_v0 & 0x80) != 0) {
      temp_v6 = temp_v6 + (int)(temp_v6 * 0x19) / 100;
    }
  }
LAB_003bdce0:
  if (((((puVar3[0x1128] & 0x40000) == 0) && (temp_v9)) && (0 < (int)temp_v6)) &&
     (((puVar3[0x112b] & 0x40) == 0 && ((puVar3[0x38] & 0x20000000) == 0)))) {
    temp_v4 = randRange(0xf);
    temp_v6 = temp_v6 + temp_v4;
  }
  if (((temp_v21 != 0) && (temp_v7 = temp_v6, temp_v17 != '\0')) &&
     ((int)*(short *)((int)puVar5 + 0x1b6) < (int)temp_v6)) {
    temp_v7 = (int)*(short *)((int)puVar5 + 0x1b6);
  }
  return temp_v7;
}

} /* extern "C" */
