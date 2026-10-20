/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00261a28` (_code @ 0x261a28, 0xb14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteC(...);

int gameFlagIsSet(...);
int FUN_001f50fc(...);
int FUN_002159dc(...);
int FUN_00237418(void);
int FUN_00283d74(int);
int FUN_002854a8(...);
int FUN_002c7ad8(void);
int FUN_002e0798(...);
int asdOperatorNewD(void);
int FUN_002f4374(void);
int gameDataBlocksSetFlagBits(...);
int FUN_00363c58(int);
int FUN_003df7c4(...);
int playerSyncPair2AOnce(void);
int FUN_003e45bc(...);
int FUN_003e48dc(...);
int FUN_003fd5bc(...);
int gameFlagSetValue(...);
int FUN_0046bd44(...);
int flagValueSub(...);
int FUN_0048111c(...);
int FUN_004bcb54(...);
int FUN_004bcd90(...);
int dispatchIfFound(...);
int bitsAt60Set(...);
int rt_memcpy_w(...);

/* stack frame of param_1: 35 slot(s), 140 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_1_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: gameFlagIsSet. */
extern int gameGetSlotRecord(unsigned int);
extern unsigned int FUN_001ba3d4(unsigned int);
/* Supplied declaration required: FUN_001f50fc. */
extern int FUN_00213b5c(void);
/* Supplied declaration required: FUN_002159dc. */
/* Supplied declaration required: FUN_00237418. */
/* Supplied declaration required: FUN_00283d74. */
/* Supplied declaration required: FUN_002854a8. */
extern int FUN_002a4654(void);
/* Supplied declaration required: FUN_002c7ad8. */
/* Supplied declaration required: FUN_002e0798. */
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: asdOperatorDeleteC. */
/* Supplied declaration required: FUN_002f4374. */
/* Supplied declaration required: gameDataBlocksSetFlagBits. */
/* Supplied declaration required: FUN_00363c58. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: playerSyncPair2AOnce. */
/* Supplied declaration required: FUN_003e45bc. */
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: FUN_003e48dc. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003fd5bc. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_0046bd44. */
/* Supplied declaration required: flagValueSub. */
extern int flagValueIsPositive(unsigned int);
/* Supplied declaration required: FUN_0048111c. */
/* Supplied declaration required: FUN_004bcb54. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: dispatchIfFound. */
extern unsigned long long bitsAt60Test(int, unsigned int);
/* Supplied declaration required: bitsAt60Set. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00261a28(int param_1)

{
/* irregular: 27 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  char temp_v17 [68];
  char temp_v18 [8];
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  int temp_v25;
  int temp_v26;
  int temp_v27;
  unsigned int *temp_v28;
  int temp_v29;
  int temp_v30;
  int temp_v31;
  int temp_v32;
  int temp_v33;
  int temp_v34;
  int temp_v35;
  
  temp_v7 = 0;
  temp_v5 = 0x426;
  temp_v17[0] = '\0';
  temp_v17[1] = '\0';
  temp_v17[2] = '\0';
  temp_v17[3] = '\0';
  temp_v17[4] = '\0';
  temp_v17[5] = '\0';
  temp_v17[6] = '\0';
  temp_v17[7] = '\0';
  temp_v17[8] = '\0';
  temp_v17[9] = '\0';
  temp_v17[10] = '\0';
  temp_v17[0xb] = '\0';
  temp_v17[0xc] = '\0';
  temp_v17[0xd] = '\0';
  temp_v17[0xe] = '\0';
  temp_v17[0xf] = '\0';
  temp_v17[0x10] = '\0';
  temp_v17[0x11] = '\0';
  temp_v17[0x12] = '\0';
  temp_v17[0x13] = '\0';
  temp_v17[0x14] = '\0';
  temp_v17[0x15] = '\0';
  temp_v17[0x16] = '\0';
  temp_v17[0x17] = '\0';
  temp_v17[0x18] = '\0';
  temp_v17[0x19] = '\0';
  temp_v17[0x1a] = '\0';
  temp_v17[0x1b] = '\0';
  temp_v17[0x1c] = '\0';
  temp_v17[0x1d] = '\0';
  temp_v17[0x1e] = '\0';
  temp_v17[0x1f] = '\0';
  temp_v17[0x20] = '\0';
  temp_v17[0x21] = '\0';
  temp_v17[0x22] = '\0';
  temp_v17[0x23] = '\0';
  temp_v17[0x24] = '\0';
  temp_v17[0x25] = '\0';
  temp_v17[0x26] = '\0';
  temp_v17[0x27] = '\0';
  temp_v17[0x28] = '\0';
  temp_v17[0x29] = '\0';
  temp_v17[0x2a] = '\0';
  temp_v17[0x2b] = '\0';
  temp_v35 = param_1;
  do {
    temp_v0 = gameFlagIsSet(temp_v5);
    if (temp_v0 != 0) {
      temp_v17[temp_v7] = '\x01';
    }
    temp_v5 = temp_v5 + 1;
    temp_v7 = temp_v7 + 1;
  } while (temp_v5 < 0x452);
  temp_v5 = 0x4b8;
  temp_v7 = 0;
  temp_v17[0x2c] = '\0';
  temp_v17[0x2d] = '\0';
  temp_v17[0x2e] = '\0';
  temp_v17[0x2f] = '\0';
  temp_v17[0x30] = '\0';
  temp_v17[0x31] = '\0';
  temp_v17[0x32] = '\0';
  temp_v17[0x33] = '\0';
  temp_v17[0x34] = '\0';
  temp_v17[0x35] = '\0';
  temp_v17[0x36] = '\0';
  temp_v17[0x37] = '\0';
  temp_v17[0x38] = '\0';
  temp_v17[0x39] = '\0';
  temp_v17[0x3a] = '\0';
  temp_v17[0x3b] = '\0';
  do {
    temp_v0 = gameFlagIsSet(temp_v5);
    if (temp_v0 != 0) {
      temp_v17[temp_v7 + 0x2c] = '\x01';
    }
    temp_v5 = temp_v5 + 1;
    temp_v7 = temp_v7 + 1;
  } while (temp_v5 < 0x4c6);
  temp_v7 = 0;
  temp_v5 = 0x77;
  temp_v18[0] = '\0';
  temp_v18[1] = '\0';
  temp_v18[2] = '\0';
  temp_v18[3] = '\0';
  temp_v18[4] = '\0';
  temp_v18[5] = '\0';
  temp_v18[6] = '\0';
  temp_v18[7] = '\0';
  do {
    temp_v0 = gameDataFlagTestBit(temp_v5);
    if (temp_v0 != 0) {
      temp_v18[temp_v7] = '\x01';
    }
    temp_v5 = temp_v5 + 1;
    temp_v7 = temp_v7 + 1;
  } while (temp_v5 < 0x7f);
  temp_v25 = gameFlagIsSet(0x556);
  temp_v26 = gameFlagIsSet(0x557);
  temp_v23 = gameFlagIsSet(0x555);
  temp_v27 = gameFlagIsSet(0x558);
  temp_v28 = (unsigned int *)gameFlagIsSet(0x559);
  temp_v24 = FUN_00213b5c();
  if (temp_v24 == 4) {
    temp_v24 = 0;
  }
  temp_v21 = gameFlagIsSet(0x603);
  temp_v20 = gameFlagIsSet(0x604);
  temp_v29 = gameFlagIsSet(0x605);
  temp_v30 = gameFlagIsSet(0x606);
  temp_v31 = gameFlagIsSet(0x534);
  temp_v19 = gameFlagIsSet(0x464);
  temp_v22 = gameFlagIsSet(0x4ca);
  temp_v7 = gameFlagIsSet(0x551);
  temp_v32 = gameFlagIsSet(0x45b);
  temp_v33 = gameFlagIsSet(0x4f6);
  temp_v34 = gameFlagIsSet(0x4f7);
  puVar2 = (unsigned int *)0x17;
  asdOperatorNewD();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(unsigned short *)(puVar2 + 5) = 0;
  temp_v5 = 0;
  *(unsigned char *)((int)puVar2 + 0x16) = 0;
  do {
    temp_v0 = gameFlagIsSet(*(unsigned short *)(temp_v5 * 2 + 0x530fb4));
    if (temp_v0 != 0) {
      *(unsigned char *)((int)puVar2 + temp_v5) = 1;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x17);
  FUN_00237418();
  FUN_00283d74(0);
  FUN_00363c58(0);
  temp_v0 = gameDataBlocksGetSaveData();
  temp_v1 = FUN_002a4654();
  *(unsigned int *)(temp_v0 + 0x21d90) = *(unsigned int *)(temp_v1 + 0x21d90);
  temp_v9 = *(unsigned int *)(temp_v1 + 0x2154c);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x21550);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x21554);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x21558);
  temp_v13 = *(unsigned int *)(temp_v1 + 0x2155c);
  temp_v14 = *(unsigned int *)(temp_v1 + 0x21560);
  temp_v15 = *(unsigned int *)(temp_v1 + 0x21564);
  *(unsigned int *)(temp_v0 + 0x21548) = *(unsigned int *)(temp_v1 + 0x21548);
  *(unsigned int *)(temp_v0 + 0x2154c) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x21550) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x21554) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x21558) = temp_v12;
  *(unsigned int *)(temp_v0 + 0x2155c) = temp_v13;
  *(unsigned int *)(temp_v0 + 0x21560) = temp_v14;
  *(unsigned int *)(temp_v0 + 0x21564) = temp_v15;
  temp_v6 = 0;
  temp_v9 = *(unsigned int *)(temp_v1 + 0x2156c);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x21570);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x21574);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x21578);
  temp_v13 = *(unsigned int *)(temp_v1 + 0x2157c);
  temp_v14 = *(unsigned int *)(temp_v1 + 0x21580);
  temp_v15 = *(unsigned int *)(temp_v1 + 0x21584);
  *(unsigned int *)(temp_v0 + 0x21568) = *(unsigned int *)(temp_v1 + 0x21568);
  *(unsigned int *)(temp_v0 + 0x2156c) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x21570) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x21574) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x21578) = temp_v12;
  *(unsigned int *)(temp_v0 + 0x2157c) = temp_v13;
  *(unsigned int *)(temp_v0 + 0x21580) = temp_v14;
  *(unsigned int *)(temp_v0 + 0x21584) = temp_v15;
  temp_v9 = *(unsigned int *)(temp_v1 + 0x27eb4);
  *(unsigned int *)(temp_v0 + 0x27eb0) = *(unsigned int *)(temp_v1 + 0x27eb0);
  *(unsigned int *)(temp_v0 + 0x27eb4) = temp_v9;
  do {
    if (temp_v17[temp_v6] != '\0') {
      gameFlagSetValue(temp_v6 + 0x426,1);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x2c);
  gameFlagSetValue(0x43f,1);
  gameFlagSetValue(0x440,1);
  gameFlagSetValue(0x444,1);
  if (temp_v21 != 0 || temp_v20 != 0) {
    gameFlagSetValue(0x43e,1);
    gameFlagSetValue(0x441,1);
  }
  rt_memcpy_w(temp_v0 + 0x21e94,temp_v1 + 0x21e94,0x100);
  rt_memcpy_w(temp_v0 + 0x21f94,temp_v1 + 0x21f94,0x100);
  temp_v5 = 0;
  *(unsigned int *)(temp_v0 + 0x2204c) = *(unsigned int *)(temp_v1 + 0x21d90);
  *(unsigned int *)(temp_v0 + 0x21e44) = *(unsigned int *)(temp_v1 + 0x21e44);
  do {
    if (temp_v18[temp_v5] != '\0') {
      FUN_003e45bc(temp_v5 + 0x77,1,0);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 8);
  if (temp_v19 != 0) {
    gameFlagSetValue(0x464,1);
  }
  if (temp_v22 != 0) {
    gameFlagSetValue(0x4ca,1);
  }
  temp_v9 = *(unsigned int *)(temp_v1 + 0x27e08);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x27e0c);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x27e10);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x27e14);
  temp_v13 = *(unsigned int *)(temp_v1 + 0x27e18);
  temp_v14 = *(unsigned int *)(temp_v1 + 0x27e1c);
  temp_v15 = *(unsigned int *)(temp_v1 + 0x27e20);
  *(unsigned int *)(temp_v0 + 0x27e04) = *(unsigned int *)(temp_v1 + 0x27e04);
  *(unsigned int *)(temp_v0 + 0x27e08) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x27e0c) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x27e10) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x27e14) = temp_v12;
  *(unsigned int *)(temp_v0 + 0x27e18) = temp_v13;
  *(unsigned int *)(temp_v0 + 0x27e1c) = temp_v14;
  *(unsigned int *)(temp_v0 + 0x27e20) = temp_v15;
  temp_v9 = *(unsigned int *)(temp_v1 + 0x27e2c);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x27e30);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x27e34);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x27e24);
  temp_v13 = *(unsigned int *)(temp_v1 + 0x27e28);
  *(unsigned int *)(temp_v0 + 0x27e38) = *(unsigned int *)(temp_v1 + 0x27e38);
  *(unsigned int *)(temp_v0 + 0x27e2c) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x27e30) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x27e34) = temp_v12;
  *(unsigned int *)(temp_v0 + 0x27e24) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x27e28) = temp_v13;
  rt_memcpy_w(temp_v0 + 0x27184,temp_v1 + 0x27184,0xc80);
  rt_memcpy_w(temp_v0 + 0x28310,temp_v1 + 0x28310,0x50);
  temp_v9 = *(unsigned int *)(temp_v1 + 0x28364);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x28368);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x2836c);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x28370);
  temp_v13 = *(unsigned int *)(temp_v1 + 0x28374);
  temp_v14 = *(unsigned int *)(temp_v1 + 0x28378);
  temp_v15 = *(unsigned int *)(temp_v1 + 0x2837c);
  temp_v6 = 0;
  *(unsigned int *)(temp_v0 + 0x28360) = *(unsigned int *)(temp_v1 + 0x28360);
  *(unsigned int *)(temp_v0 + 0x28364) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x28368) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x2836c) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x28370) = temp_v12;
  *(unsigned int *)(temp_v0 + 0x28374) = temp_v13;
  *(unsigned int *)(temp_v0 + 0x28378) = temp_v14;
  *(unsigned int *)(temp_v0 + 0x2837c) = temp_v15;
  temp_v9 = *(unsigned int *)(temp_v1 + 0x28384);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x28388);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x2838c);
  *(unsigned int *)(temp_v0 + 0x28380) = *(unsigned int *)(temp_v1 + 0x28380);
  *(unsigned int *)(temp_v0 + 0x28384) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x28388) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x2838c) = temp_v11;
  do {
    if (temp_v17[temp_v6 + 0x2c] != '\0') {
      gameFlagSetValue(temp_v6 + 0x4b8,1);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xe);
  temp_v9 = *(unsigned int *)(temp_v1 + 0x282f0);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x282f4);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x282f8);
  *(unsigned int *)(temp_v0 + 0x282ec) = *(unsigned int *)(temp_v1 + 0x282ec);
  *(unsigned int *)(temp_v0 + 0x282f0) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x282f4) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x282f8) = temp_v11;
  temp_v9 = *(unsigned int *)(temp_v1 + 0x28300);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x28304);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x28308);
  *(unsigned int *)(temp_v0 + 0x282fc) = *(unsigned int *)(temp_v1 + 0x282fc);
  *(unsigned int *)(temp_v0 + 0x28300) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x28304) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x28308) = temp_v11;
  temp_v6 = 0;
  temp_v9 = *(unsigned int *)(temp_v1 + 0x28298);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x2829c);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x282a0);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x282a4);
  temp_v13 = *(unsigned int *)(temp_v1 + 0x282a8);
  temp_v14 = *(unsigned int *)(temp_v1 + 0x282ac);
  temp_v15 = *(unsigned int *)(temp_v1 + 0x282b0);
  *(unsigned int *)(temp_v0 + 0x28294) = *(unsigned int *)(temp_v1 + 0x28294);
  *(unsigned int *)(temp_v0 + 0x28298) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x2829c) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x282a0) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x282a4) = temp_v12;
  *(unsigned int *)(temp_v0 + 0x282a8) = temp_v13;
  *(unsigned int *)(temp_v0 + 0x282ac) = temp_v14;
  *(unsigned int *)(temp_v0 + 0x282b0) = temp_v15;
  temp_v9 = *(unsigned int *)(temp_v1 + 0x282b8);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x282bc);
  temp_v11 = *(unsigned int *)(temp_v1 + 0x282c0);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x282c4);
  *(unsigned int *)(temp_v0 + 0x282b4) = *(unsigned int *)(temp_v1 + 0x282b4);
  *(unsigned int *)(temp_v0 + 0x282b8) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x282bc) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x282c0) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x282c4) = temp_v12;
  do {
    if (*(char *)((int)puVar2 + temp_v6) != '\0') {
      gameFlagSetValue(*(unsigned short *)(temp_v6 * 2 + 0x530fb4),1);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x17);
  FUN_003fd5bc(temp_v0 + 0x54d0,temp_v1 + 0x54d0);
  if (temp_v25 != 0) {
    gameFlagSetValue(0x556,1);
  }
  if (temp_v26 != 0) {
    gameFlagSetValue(0x557,1);
  }
  if (temp_v23 != 0) {
    gameFlagSetValue(0x555,1);
  }
  if (temp_v27 != 0) {
    gameFlagSetValue(0x558,1);
  }
  if (temp_v28 != (unsigned int *)0x0) {
    gameFlagSetValue(0x559,1);
  }
  FUN_002159dc(temp_v24);
  if (temp_v21 != 0) {
    gameFlagSetValue(0x603,1);
  }
  if (temp_v20 != 0) {
    gameFlagSetValue(0x604,1);
  }
  if (temp_v29 != 0) {
    gameFlagSetValue(0x605,1);
  }
  if (temp_v30 != 0) {
    gameFlagSetValue(0x606,1);
  }
  if (temp_v31 != 0) {
    gameFlagSetValue(0x534,1);
  }
  if (temp_v32 != 0) {
    gameFlagSetValue(0x45b,1);
  }
  if (temp_v33 != 0) {
    gameFlagSetValue(0x4f6,1);
  }
  if (temp_v34 != 0) {
    gameFlagSetValue(0x4f7,1);
  }
  rt_memcpy_w(temp_v0 + 0x54,temp_v1 + 0x54,0x12);
  temp_v6 = 0;
  temp_v27 = 0;
  temp_v21 = temp_v1 + 0x2d34;
  temp_v22 = temp_v0 + 0x2d34;
  temp_v23 = temp_v1 + 0x28390;
  temp_v24 = temp_v0 + 0x28390;
  temp_v20 = temp_v0 + 0x5ed4;
  temp_v28 = (unsigned int *)(temp_v1 + 0x2d2c);
  do {
    if (*(char *)(temp_v35 + temp_v6) != '\0') {
      switch(temp_v6) {
      case 0:
        *(unsigned short *)(temp_v0 + 0x6a) = *(unsigned short *)(temp_v1 + 0x6a);
        *(unsigned int *)(temp_v0 + 0x16) = *(unsigned int *)(temp_v1 + 0x16);
        *(unsigned int *)(temp_v0 + 0x1a) = *(unsigned int *)(temp_v1 + 0x1a);
        *(unsigned int *)(temp_v0 + 0x1e) = *(unsigned int *)(temp_v1 + 0x1e);
        *(unsigned short *)(temp_v0 + 0x22) = *(unsigned short *)(temp_v1 + 0x22);
        *(unsigned int *)(temp_v0 + 0x38) = *(unsigned int *)(temp_v1 + 0x38);
        temp_v9 = *(unsigned int *)(temp_v1 + 0x40);
        temp_v10 = *(unsigned int *)(temp_v1 + 0x44);
        temp_v11 = *(unsigned int *)(temp_v1 + 0x48);
        *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v1 + 0x3c);
        *(unsigned int *)(temp_v0 + 0x40) = temp_v9;
        *(unsigned int *)(temp_v0 + 0x44) = temp_v10;
        *(unsigned int *)(temp_v0 + 0x48) = temp_v11;
        temp_v9 = *(unsigned int *)(temp_v1 + 0x50);
        *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v1 + 0x4c);
        *(unsigned int *)(temp_v0 + 0x50) = temp_v9;
        FUN_003df7c4(0);
        playerSyncPair2AOnce();
        temp_v27 = 1;
        break;
      case 1:
        FUN_0048111c(temp_v22,temp_v21,(int)*(char *)(temp_v35 + 3));
        rt_memcpy_w(temp_v24,temp_v23,0x10e8);
        temp_v2 = flagValueIsPositive(0xac);
        if (temp_v2 != 0) {
          temp_v9 = FUN_001ba3d4(0xac);
          flagValueSub(0xac,temp_v9);
        }
        temp_v2 = flagValueIsPositive(0xad);
        if (temp_v2 != 0) {
          temp_v9 = FUN_001ba3d4(0xad);
          flagValueSub(0xad,temp_v9);
        }
        break;
      case 2:
        rt_memcpy_w(temp_v20,temp_v1 + 0x5ed4,0x19000);
        break;
      case 4:
        *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v1 + 4);
        break;
      case 5:
        FUN_002e0798(*temp_v28);
        break;
      case 6:
        temp_v2 = 0;
        do {
          temp_v3 = temp_v1 + temp_v2 * 300;
          temp_v4 = temp_v3 + 0x6c;
          temp_v16 = bitsAt60Test(temp_v4,2);
          temp_v5 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
          temp_v8 = (int)temp_v16 != 0;
          if (temp_v8) {
            temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 0xce);
          }
          if (temp_v8 && temp_v5 != 0) {
            dispatchIfFound(0);
            temp_v3 = gameGetSlotRecord(0);
            rt_memcpy_w(temp_v3,temp_v4,300);
            *(unsigned char *)(temp_v3 + 0x66) = 0;
            *(unsigned char *)(temp_v3 + 0x67) = 0;
            *(unsigned char *)(temp_v3 + 0x12a) = 0;
            *(unsigned short *)(temp_v3 + 0x60) = 0;
            bitsAt60Set(temp_v3,2);
            FUN_004bcd90(temp_v3);
            FUN_004bcb54(temp_v3);
            bitsAt60Set(temp_v3,2);
            gameDataBlocksSetFlagBits(0x20,1);
            if (temp_v7 != 0) {
              gameFlagSetValue(0x551,1);
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x18);
        break;
      case 7:
        rt_memcpy_w(temp_v20,temp_v1 + 0x5ed4,0x19000);
        temp_v3 = 0;
        temp_v2 = 0;
        do {
          temp_v4 = temp_v3 + 1;
          temp_v2 = temp_v2 + 2;
          *(unsigned short *)(temp_v0 + temp_v3 * 0x50 + 0x5f08) = 0;
          temp_v3 = temp_v3 + 2;
          *(unsigned short *)(temp_v0 + temp_v4 * 0x50 + 0x5f08) = 0;
        } while (temp_v2 < 0x500);
        break;
      case 8:
        temp_v5 = 0;
        do {
          temp_v2 = FUN_003e4d68(temp_v5 & 0xffff);
          rt_memcpy_w(temp_v2,temp_v1 + temp_v5 * 0x134 + 0x1de0,0x134);
          FUN_003e48dc(*(unsigned short *)(temp_v2 + 300));
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 < 0xc);
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 9);
  gameFlagSetValue(0x565,1);
  if (temp_v27 != 0) {
    gameFlagSetValue(0x466,1);
    gameFlagSetValue(0x410,1);
  }
  FUN_0046bd44(g_aocSystem);
  rt_memcpy_w(temp_v0 + 0x29478,temp_v1 + 0x29478,0x290);
  temp_v7 = 0;
  do {
    temp_v6 = *(int *)(temp_v0 + 0x29478 + temp_v7 * 0x28 + 0x10);
    if (temp_v6 != 0) {
      FUN_001f50fc((int)(short)temp_v6,0);
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x10);
  temp_v7 = 0;
  do {
    FUN_002854a8(temp_v7,0);
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 10);
  FUN_002c7ad8();
  *(unsigned int *)(temp_v0 + 0x53b8) = 1;
  *(unsigned int *)(temp_v0 + 0x53c0) = *(unsigned int *)(temp_v1 + 0x53c0);
  FUN_002f4374();
  asdOperatorDeleteC(puVar2);
  return;
}

} /* extern "C" */
