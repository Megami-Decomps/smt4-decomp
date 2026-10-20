/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ce60` (_code @ 0x29ce60, 0x7a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bitsetSetBit(unsigned char [72], int);
int FUN_00269bd0(...);
int FUN_0029c6b0(unsigned char [72]);
int FUN_0029d770(unsigned int, unsigned char [72]);
int FUN_0029dc74(...);
int FUN_0029e974(void);
int FUN_002b9024(void);
int FUN_002b99b8(void);
int dataTableGetEntries(void);
int dataTableGet(...);
int memClear(unsigned char [1400], int);
int jyoucyuGetTableEntry(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int rt_memcpy_w(unsigned char [72], int, int);

/* stack frame of param_5: 27 slot(s), 98 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spC28; /* 0xc28: local_c28 */
    unsigned int spC2C; /* 0xc2c: local_c2c */
    unsigned int spC30; /* 0xc30: local_c30 */
    unsigned int spC34; /* 0xc34: local_c34 */
    unsigned int spC38; /* 0xc38: local_c38 */
    unsigned int spC3C; /* 0xc3c: local_c3c */
    unsigned int spC40; /* 0xc40: local_c40 */
    unsigned int spC44; /* 0xc44: local_c44 */
    unsigned int spC48; /* 0xc48: local_c48 */
    unsigned int spC4C; /* 0xc4c: local_c4c */
    unsigned int spC50; /* 0xc50: local_c50 */
    unsigned int spC54; /* 0xc54: local_c54 */
    unsigned int spC58; /* 0xc58: local_c58 */
    unsigned int spC5C; /* 0xc5c: local_c5c */
    unsigned int spC60; /* 0xc60: local_c60 */
    unsigned int spC64; /* 0xc64: local_c64 */
    unsigned int spCB4; /* 0xcb4: local_cb4 */
    unsigned short spCBA; /* 0xcba: local_cba */
    unsigned short spCBE; /* 0xcbe: local_cbe */
    unsigned short spCC2; /* 0xcc2: local_cc2 */
    unsigned short spCC6; /* 0xcc6: local_cc6 */
    unsigned short spCCA; /* 0xcca: local_cca */
    unsigned int spCD0; /* 0xcd0: local_cd0 */
} param_5_stack;

extern signed char DAT_0043d9b0; /* 0x43d9b0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: bitsetSetBit. */
/* Supplied declaration required: FUN_00269bd0. */
extern int padIsButtonDown(unsigned int);
extern int FUN_002973ec(void);
/* Supplied declaration required: FUN_0029c6b0. */
/* Supplied declaration required: FUN_0029d770. */
/* Supplied declaration required: FUN_0029dc74. */
/* Supplied declaration required: FUN_0029e974. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002b99b8. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x0029d434) */

unsigned int FUN_0029ce60(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 17 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int *piVar4;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char *puVar12;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned short uStack_ccc;
  short temp_v14;
  unsigned short uStack_cc8;
  short temp_v15;
  unsigned short uStack_cc4;
  short temp_v16;
  unsigned short uStack_cc0;
  short temp_v17;
  unsigned short uStack_cbc;
  short temp_v18;
  int temp_v19;
  unsigned char temp_v20 [72];
  unsigned char temp_v21 [4];
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned char temp_v38 [1400];
  unsigned char temp_v39 [52];
  unsigned short temp_v40 [750];
  char acStack_9c [20];
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned char temp_v43 [72];
  unsigned int temp_v44;
  int iStack_34;
  int iStack_30;
  unsigned int uStack_2c;
  
  DAT_0043d9b0 = (char)param_5;
  temp_v44 = param_1;
  iStack_34 = param_2;
  iStack_30 = param_3;
  uStack_2c = param_4;
  FUN_002b9024();
  temp_v41 = param_1;
  if (param_3 != 0) {
    if (param_2 != 0) {
      temp_v7 = 2;
    }
    else {
      temp_v7 = 1;
    }
  }
  else if (param_2 == 0) {
    temp_v7 = 0;
  }
  else {
    temp_v7 = 1;
  }
  if (param_5 != 0) {
    jyoucyuGetTableEntry(0);
  }
  temp_v6 = temp_v44;
  puVar12 = temp_v20;
  if (temp_v7 != 0) {
    if (temp_v7 != 1) {
      puVar12 = (unsigned char *)0x0;
      if (temp_v7 == 2) {
        temp_v7 = FUN_002a8764();
        temp_v4 = 0;
        if (temp_v4 < *(unsigned char *)(temp_v7 + 0x910b)) {
          do {
            temp_v2 = (int)*(char *)(temp_v7 + temp_v4 + 0x90f0);
            if ((-1 < temp_v2) &&
               (temp_v2 = temp_v7 + temp_v2 * 0x604, temp_v3 = temp_v2 + 0x90,
               *(unsigned short *)(temp_v2 + 0xd6) == temp_v6)) goto LAB_0029cf80;
            temp_v4 = (temp_v4 + 1) & 0xffff;
          } while (temp_v4 < *(unsigned char *)(temp_v7 + 0x910b));
        }
        temp_v3 = 0;
LAB_0029cf80:
        rt_memcpy_w(temp_v20,temp_v3,0x604);
        temp_v22 = 0;
        temp_v23 = 0;
        temp_v24 = 0;
        temp_v25 = 0;
        temp_v26 = 0;
        temp_v27 = 0;
        temp_v28 = 0;
        temp_v29 = 0;
        temp_v30 = 0;
        temp_v31 = 0;
        temp_v32 = 0;
        temp_v33 = 0;
        temp_v34 = 0;
        temp_v35 = 0;
        temp_v36 = 0;
        temp_v37 = 0;
        memClear(temp_v38,0x500);
        FUN_002b9024();
        bitsetSetBit(temp_v20,*(unsigned short *)(temp_v6 + 0x38));
        FUN_0029c6b0(temp_v20);
        puVar12 = temp_v20;
      }
    }
    else {
      FUN_0029d770(temp_v44,temp_v20);
    }
  }
  else {
    FUN_0029dc74(temp_v44,temp_v20);
  }
  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(puVar12 + 0xe),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorSignedToFloat((int)*(short *)(puVar12 + 0x10),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = (float)VectorSignedToFloat((int)*(short *)(puVar12 + 0x16) +
                                      (int)*(short *)(puVar12 + 0x18) +
                                      (int)*(short *)(puVar12 + 0x14) +
                                      (int)*(short *)(puVar12 + 0x12) +
                                      (int)*(short *)(puVar12 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
  dataTableGet(0x22,0);
  puVar2 = (unsigned int *)dataTableGetEntries();
  VectorSignedToFloat(puVar2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(*puVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar2[4],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(puVar2[2],(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(puVar2[3],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = temp_v8 * 0.01f;
  temp_v9 = temp_v9 * 0.01f;
  if (DAT_0043d9b0 != '\0') {
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
  }
  temp_v10 = temp_v10 / temp_v8;
  temp_v11 = temp_v11 / temp_v9;
  FUN_002b99b8();
  FUN_002b99b8();
  temp_v10 = temp_v10 + temp_v11;
  FUN_002b99b8();
  temp_v7 = 0;
  temp_v6 = 0;
  temp_v19 = (int)(temp_v10 + temp_v12);
  temp_v42 = (unsigned int)(unsigned char)puVar12[0x48];
  do {
    puVar3 = puVar12;
    FUN_00269bd0(puVar12,temp_v6 & 0xff);
    acStack_9c[temp_v6] = (char)(int)puVar3;
    temp_v6 = temp_v6 + 1;
  } while ((int)temp_v6 < 8);
  dataTableGet(0x22,1);
  piVar4 = (int *)dataTableGetEntries();
  temp_v43[0] = '\0';
  temp_v43[1] = '\x01';
  temp_v43[2] = '\x02';
  temp_v43[3] = '\x03';
  temp_v43[4] = '\x04';
  temp_v43[5] = '\x05';
  temp_v43[6] = '\x06';
  temp_v43[7] = '\a';
  temp_v2 = piVar4[1];
  temp_v13 = (unsigned int)(unsigned short)(((short)(temp_v2 / 100) + (short)(temp_v2 >> 0x1f)) -
                            (short)((long long)temp_v2 * 0x51eb851f >> 0x3f)) << 0x10;
  temp_v2 = piVar4[3];
  (*(unsigned int *)&uStack_ccc) = romwright_piece_2_2(((short)(temp_v2 / 100) + (short)(temp_v2 >> 0x1f)) -
                         (short)((long long)temp_v2 * 0x51eb851f >> 0x3f),1);
  temp_v2 = *piVar4;
  (*(unsigned int *)&uStack_cc8) = romwright_piece_2_2(((short)(temp_v2 / 100) + (short)(temp_v2 >> 0x1f)) -
                         (short)((long long)temp_v2 * 0x51eb851f >> 0x3f),2);
  temp_v2 = piVar4[4];
  (*(unsigned int *)&uStack_cc4) = romwright_piece_2_2(((short)(temp_v2 / 100) + (short)(temp_v2 >> 0x1f)) -
                         (short)((long long)temp_v2 * 0x51eb851f >> 0x3f),3);
  temp_v2 = piVar4[5];
  (*(unsigned int *)&uStack_cc0) = romwright_piece_2_2(((short)(temp_v2 / 100) + (short)(temp_v2 >> 0x1f)) -
                         (short)((long long)temp_v2 * 0x51eb851f >> 0x3f),4);
  temp_v2 = piVar4[2];
  (*(unsigned int *)&uStack_cbc) = romwright_piece_2_2(((short)(temp_v2 / 100) + (short)(temp_v2 >> 0x1f)) -
                         (short)((long long)temp_v2 * 0x51eb851f >> 0x3f),5);
  if (DAT_0043d9b0 != '\0') {
    jyoucyuGetTableEntry(0);
  }
  temp_v2 = 0;
  do {
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      if (*(char *)(&temp_v13 + temp_v3) == acStack_9c[temp_v43[temp_v2]]) {
        temp_v5 = (int)(char)*(unsigned short *)((int)&temp_v13 + temp_v3 * 4 + 2);
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
    temp_v7 = temp_v7 + temp_v5;
    if (DAT_0043d9b0 != '\0') {
      jyoucyuGetTableEntry(0);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  if (temp_v7 < 0) {
    temp_v7 = 0;
  }
  VectorSignedToFloat(piVar4[6],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b99b8();
  temp_v10 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0029dc74(temp_v44,temp_v39);
  temp_v7 = 0;
  if (DAT_0043d9b0 != '\0') {
    jyoucyuGetTableEntry(0);
  }
  temp_v2 = 0;
  do {
    temp_v6 = (unsigned int)temp_v40[temp_v2];
    if ((temp_v6 != 0) && (FUN_0029e974(), temp_v6 != 0)) {
      temp_v6 = *(unsigned char *)(temp_v6 + 3) & 0x1f;
      if (temp_v6 >= 0x20) {
        temp_v6 = 0x1f;
      }
      dataTableGet(0x22,2);
      temp_v3 = dataTableGetEntries();
      temp_v7 = temp_v7 + *(int *)(temp_v3 + temp_v6 * 4);
      if (DAT_0043d9b0 != '\0') {
        jyoucyuGetTableEntry(0);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  temp_v6 = (unsigned int)*(unsigned short *)(puVar12 + 0x46);
  FUN_002b9024();
  temp_v4 = 0;
  temp_v2 = 0;
  do {
    temp_v1 = (unsigned int)*(unsigned short *)(puVar12 + temp_v2 * 2 + 0x34);
    if (((temp_v1 != 0) && (FUN_0029e974(), temp_v1 != 0)) && (temp_v4 < (*(unsigned char *)(temp_v1 + 3) & 0x1f))) {
      temp_v3 = 0;
      do {
        temp_v5 = temp_v6 + temp_v3 * 2;
        temp_v0 = *(short *)(temp_v5 + 0x3c);
        if ((temp_v0 != 0) && (*(short *)(puVar12 + temp_v2 * 2 + 0x34) == temp_v0)) break;
        temp_v0 = *(short *)(temp_v5 + 0x3e);
        if ((temp_v0 != 0) && (*(short *)(puVar12 + temp_v2 * 2 + 0x34) == temp_v0)) {
          temp_v3 = temp_v3 + 1;
          break;
        }
        temp_v3 = temp_v3 + 2;
      } while (temp_v3 < 8);
      if (temp_v3 == 8) {
        temp_v4 = *(unsigned char *)(temp_v1 + 3) & 0x1f;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 8) {
      if (temp_v4 >= 0x20) {
        temp_v4 = 0x1f;
      }
      dataTableGet(0x22,2);
      temp_v2 = dataTableGetEntries();
      temp_v2 = *(int *)(temp_v2 + temp_v4 * 4);
      if (DAT_0043d9b0 != '\0') {
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
      }
      dataTableGet(0x22,3);
      piVar4 = (int *)dataTableGetEntries();
      temp_v6 = (temp_v2 * piVar4[3] + temp_v7 * piVar4[2] +
               (int)(temp_v8 * temp_v10) * piVar4[1] + temp_v19 * *piVar4) *
               (*(unsigned short *)(temp_v41 + 0x3a) / 10);
      temp_v7 = FUN_002973ec();
      if (temp_v7 == 2) {
        temp_v6 = temp_v6 * 3;
      }
      if (param_5 != 0) {
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
      }
      temp_v7 = padIsButtonDown(0x2d);
      if (temp_v7 != 0) {
        temp_v8 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = VectorFloatToUnsigned(temp_v8 * 0.5f,3);
      }
      else {
        temp_v7 = padIsButtonDown(0x2c);
        if (temp_v7 != 0) {
          temp_v8 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v6 = VectorFloatToUnsigned(temp_v8 * 0.8f,3);
        }
        else {
          temp_v7 = padIsButtonDown(0x2b);
          if (temp_v7 != 0) {
            temp_v8 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = VectorFloatToUnsigned(temp_v8 * 0.9f,3);
          }
          else {
            temp_v7 = padIsButtonDown(0x2a);
            if (temp_v7 != 0) {
              temp_v8 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v6 = VectorFloatToUnsigned(temp_v8 * 0.95f,3);
            }
          }
        }
      }
      if (temp_v6 >= 100000000) {
        temp_v6 = 99999999;
      }
      return temp_v6;
    }
  } while( 1 );
}

} /* extern "C" */
