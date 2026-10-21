/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003370ac` (_code @ 0x3370ac, 0x278 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00255e38(int, unsigned char [2], int, int, int);
int randomGetLowerTenBits(int, unsigned int);
int randomGetUpperSixBits(int, unsigned int);
int devilGetRecord(void);
int FUN_0033774c(int, unsigned char [2], unsigned int);
int FUN_0033adf8(void);

/* stack frame of param_1: 39 slot(s), 124 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned char sp99; /* 0x99: local_99 */
    unsigned char sp9A; /* 0x9a: local_9a */
    unsigned short spE4; /* 0xe4: local_e4 */
    unsigned short spE6; /* 0xe6: local_e6 */
    unsigned short spE8; /* 0xe8: local_e8 */
    unsigned short spEA; /* 0xea: local_ea */
    unsigned short spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned short spFE; /* 0xfe: local_fe */
    unsigned int sp102; /* 0x102: local_102 */
    unsigned int sp106; /* 0x106: local_106 */
    unsigned int sp10A; /* 0x10a: local_10a */
    unsigned int sp10E; /* 0x10e: local_10e */
    unsigned char sp110; /* 0x110: local_110 */
    unsigned short sp1DC; /* 0x1dc: local_1dc */
    unsigned short sp1DE; /* 0x1de: local_1de */
    unsigned short sp1E0; /* 0x1e0: local_1e0 */
    unsigned short sp1E2; /* 0x1e2: local_1e2 */
    unsigned char sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp2B8; /* 0x2b8: local_2b8 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern unsigned short FUN_0023eb7c(int);
extern int saveResolvePartySlot(unsigned int);
/* Supplied declaration required: FUN_00255e38. */
/* Supplied declaration required: randomGetLowerTenBits. */
/* Supplied declaration required: randomGetUpperSixBits. */
extern int gameGetSlotTable(void);
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_0033774c. */
/* Supplied declaration required: FUN_0033adf8. */


void FUN_003370ac(int param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8;
  unsigned char temp_v9 [2];
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned char temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned short temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned short temp_v26;
  unsigned short temp_v27;
  unsigned short temp_v28;
  unsigned short temp_v29 [18];
  unsigned short temp_v30 [18];
  unsigned char temp_v31;
  unsigned char temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  unsigned int temp_v47;
  int temp_v48;
  
  temp_v48 = param_1;
  if (*(short *)(param_1 + 0xf0) != 0) {
    FUN_0033adf8();
  }
  temp_v2 = gameGetSlotTable();
  temp_v3 = gameGetPlayerData();
  FUN_0033774c(temp_v48,temp_v9,temp_v3);
  FUN_00255e38(temp_v48,temp_v9,0,0,0);
  temp_v8 = 0;
  do {
    if (-1 < *(char *)(temp_v2 + temp_v8 + 0x9108)) {
      temp_v4 = saveResolvePartySlot(temp_v8);
      temp_v9[0] = 2;
      temp_v13 = FUN_0023eb7c(temp_v4);
      temp_v10 = *(unsigned short *)(temp_v4 + 0x46);
      temp_v11 = 0xffff;
      temp_v12 = 0xffff;
      temp_v14 = 0;
      temp_v15 = romwright_piece_2_2(*(unsigned short *)(temp_v4 + 0xe),*(unsigned short *)(temp_v4 + 0x2a));
      temp_v16 = romwright_piece_2_2(*(unsigned short *)(temp_v4 + 0x10),*(unsigned short *)(temp_v4 + 0x2c));
      temp_v17 = *(unsigned int *)(temp_v4 + 0x12);
      temp_v18 = *(unsigned int *)(temp_v4 + 0x16);
      temp_v19 = *(unsigned short *)(temp_v4 + 0x1a);
      temp_v20 = temp_v15;
      temp_v21 = temp_v16;
      temp_v25 = *(unsigned short *)(temp_v4 + 0x44);
      temp_v26 = 0;
      temp_v27 = 0;
      temp_v28 = (unsigned short)*(unsigned char *)(temp_v4 + 0x48);
      temp_v47 = 0;
      temp_v33 = 0;
      temp_v34 = 0;
      temp_v35 = 0;
      temp_v36 = 0;
      temp_v37 = 0;
      temp_v38 = 0;
      temp_v39 = 0;
      temp_v40 = 0;
      temp_v41 = 0;
      temp_v42 = 0;
      temp_v43 = 0;
      temp_v44 = 0;
      temp_v45 = 0;
      temp_v46 = 0;
      temp_v6 = 0;
      temp_v22 = temp_v17;
      temp_v23 = temp_v18;
      temp_v24 = temp_v19;
      do {
        temp_v5 = temp_v4;
        randomGetLowerTenBits(temp_v4,temp_v6 & 0xff);
        temp_v29[temp_v6] = ((unsigned short)temp_v5 & 0x3ff) | (temp_v29[temp_v6] & 0xfc00);
        temp_v5 = temp_v4;
        randomGetUpperSixBits(temp_v4,temp_v6 & 0xff);
        temp_v29[temp_v6] = (unsigned short)(temp_v5 << 10) | (temp_v29[temp_v6] & 0x3ff);
        temp_v5 = temp_v4;
        randomGetLowerTenBits(temp_v4,temp_v6 & 0xff);
        temp_v30[temp_v6] = ((unsigned short)temp_v5 & 0x3ff) | (temp_v30[temp_v6] & 0xfc00);
        temp_v5 = temp_v4;
        randomGetUpperSixBits(temp_v4,temp_v6 & 0xff);
        temp_v7 = temp_v6 + 1;
        temp_v30[temp_v6] = (unsigned short)(temp_v5 << 10) | (temp_v30[temp_v6] & 0x3ff);
        temp_v6 = temp_v7;
      } while ((int)temp_v7 < 0x12);
      temp_v6 = (unsigned int)temp_v10;
      devilGetRecord();
      temp_v31 = *(unsigned char *)(temp_v6 + 0x33);
      temp_v0 = *(char *)(temp_v6 + 5);
      temp_v1 = 1;
      if (temp_v0 != '\x01') {
        if (temp_v0 == '\x04') {
          temp_v32 = 0;
          temp_v1 = temp_v32;
        }
        else {
          temp_v1 = temp_v32;
          if (temp_v0 == '\x05') {
            temp_v1 = 2;
          }
        }
      }
      temp_v32 = temp_v1;
      FUN_00255e38(temp_v48,temp_v9,0,temp_v8 + 1,0);
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 3);
  return;
}

} /* extern "C" */
