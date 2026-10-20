/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba964` (_code @ 0x2ba964, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e0bb8(...);
int FUN_003e1068(...);
int FUN_003e9b74(...);
int FUN_003edb9c(...);
int FUN_003edbd0(...);
int FUN_003f0b28(...);
int FUN_003f0d50(...);
int FUN_003f0e20(...);
int FUN_004caca0(...);
int FUN_004f2abc(...);

int FUN_00100388(...);
int dataTableGetEntries(void);
int FUN_001a6f60(...);
int FUN_00229ffc(void);
int FUN_003d9164(void);
int FUN_003e2840(...);
int FUN_003e9cd0(...);
int FUN_003f12d4(...);
int FUN_003f1994(...);
int FUN_0047118c(...);
int FUN_0047f444(...);
int FUN_004f3ee0(...);
int FUN_004f41b0(...);
int FUN_004f6d34(void);
int FUN_004f7b84(...);
int FUN_004fb670(...);
int FUN_004fd268(...);
int FUN_004fdcd8(...);

int FUN_001568f8(...);
int asdMemFree(void);
int FUN_002804b0(...);
int FUN_002e342c(...);
int sysMemClear(...);
int FUN_003e0cd4(...);
int FUN_003e0f94(...);
int FUN_003e21c8(...);
int FUN_003ed238(...);
int FUN_003ed6e8(...);
int FUN_003f0b80(...);
int FUN_003f0c78(...);
int FUN_003f26d4(...);
int FUN_00470634(...);
int FUN_004aa2e0(...);
int FUN_004cae0c(...);
int FUN_004cb2a4(...);
int FUN_004f1c5c(...);
int words10CopyHighToLow(...);
int FUN_004f9450(void);
int FUN_004fb43c(...);
int FUN_004fd204(...);
int FUN_004fe764(...);

int qsort(...);
int FUN_0013cab8(...);
int FUN_0019cac4(void);
int FUN_001b4a90(unsigned int [4], int, unsigned int);
int FUN_00239404(...);
int FUN_002e5924(...);
int FUN_0038a7dc(...);
int FUN_0039ba24(unsigned int [4], int, unsigned int);
int FUN_003e2038(unsigned int *, int);
int FUN_003e8b78(int);
int FUN_003eaa9c(...);
int FUN_003eba0c(...);
int FUN_003ebec8(int);
int FUN_003ed1f8(int, int);
int FUN_003edaf0(...);
int FUN_003eebf4(...);
int FUN_003efb68(int, unsigned int);
int FUN_003f1334(int);
int FUN_003f881c(int, int);
int aocHandleButtons(int, int);
int FUN_003fce8c(...);
int FUN_004d7a70(...);
int FUN_004d7fe4(...);
int isEntryUsable(...);
int FUN_004f1a54(...);
int FUN_0050dda4(void);
int rt_memcpy_w(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0020e93c; /* 0x20e93c */
extern unsigned char LAB_00221a94; /* 0x221a94 */
extern unsigned char LAB_003e04ec; /* 0x3e04ec */
extern unsigned char LAB_003e2014; /* 0x3e2014 */
extern unsigned char LAB_003e2028; /* 0x3e2028 */
extern unsigned int g_aocSystem; /* 0x570280 */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int *g_btlEncount; /* 0x573828 */
extern unsigned int DAT_00573830; /* 0x573830 */
extern unsigned int DAT_00573834; /* 0x573834 */
extern unsigned int DAT_00573838; /* 0x573838 */
extern unsigned int DAT_0057383c; /* 0x57383c */
extern unsigned int DAT_00573840; /* 0x573840 */
extern unsigned int DAT_00573844; /* 0x573844 */
extern unsigned int DAT_00573848; /* 0x573848 */
extern unsigned int DAT_0057384c; /* 0x57384c */
extern int DAT_00573850; /* 0x573850 */
extern unsigned int DAT_00573854; /* 0x573854 */
extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573860; /* 0x573860 */
extern unsigned int DAT_00573864; /* 0x573864 */
extern unsigned int DAT_00573868; /* 0x573868 */
extern unsigned int DAT_0057386c; /* 0x57386c */
extern unsigned int DAT_00573870; /* 0x573870 */
extern unsigned int DAT_00573874; /* 0x573874 */
extern unsigned int DAT_00573878; /* 0x573878 */
extern unsigned int DAT_0057387c; /* 0x57387c */
extern unsigned int DAT_00573880; /* 0x573880 */
extern unsigned int DAT_00573884; /* 0x573884 */
extern unsigned int DAT_00573888; /* 0x573888 */
extern unsigned int *DAT_0057388c; /* 0x57388c */
extern unsigned int DAT_00573890; /* 0x573890 */
extern unsigned int DAT_00573894; /* 0x573894 */
extern int g_btlEvent; /* 0x573898 */
extern unsigned int DAT_0057a634; /* 0x57a634 */
extern unsigned int DAT_0057a638; /* 0x57a638 */
extern unsigned int DAT_0057a63c; /* 0x57a63c */
extern unsigned int DAT_0057a640; /* 0x57a640 */
extern unsigned int DAT_0057a644; /* 0x57a644 */
extern unsigned int DAT_0057a648; /* 0x57a648 */
extern unsigned int DAT_0057a64c; /* 0x57a64c */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_001568f8. */
extern int jobGetWork(void);
extern int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_001a6f60. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00229ffc. */
/* Supplied declaration required: FUN_00239404. */
extern int FUN_00240c34(unsigned char *);
/* Supplied declaration required: FUN_002804b0. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0038a7dc. */
/* Supplied declaration required: FUN_0039ba24. */
/* Supplied declaration required: FUN_003d9164. */
/* Supplied declaration required: FUN_003e0bb8. */
/* Supplied declaration required: FUN_003e0cd4. */
/* Supplied declaration required: FUN_003e0f94. */
/* Supplied declaration required: FUN_003e1068. */
extern unsigned int *FUN_003e12a8(unsigned int *, int);
extern unsigned int *FUN_003e1390(unsigned int *, int);
/* Supplied declaration required: FUN_003e2038. */
/* Supplied declaration required: FUN_003e21c8. */
/* Supplied declaration required: FUN_003e2840. */
/* Supplied declaration required: FUN_003e8b78. */
extern int valueAtF0IsReady(int);
/* Supplied declaration required: FUN_003e9b74. */
/* Supplied declaration required: FUN_003e9cd0. */
/* Supplied declaration required: FUN_003eaa9c. */
/* Supplied declaration required: FUN_003eba0c. */
/* Supplied declaration required: FUN_003ebec8. */
extern int FUN_003ec620(int, unsigned int);
extern int FUN_003eca48(int, unsigned short);
extern int FUN_003eccd0(int);
extern int FUN_003ece50(int);
/* Supplied declaration required: FUN_003ed1f8. */
/* Supplied declaration required: FUN_003ed238. */
/* Supplied declaration required: FUN_003ed6e8. */
/* Supplied declaration required: FUN_003edaf0. */
/* Supplied declaration required: FUN_003edb9c. */
/* Supplied declaration required: FUN_003edbd0. */
/* Supplied declaration required: FUN_003eebf4. */
extern int FUN_003ef9e0(int, int);
extern unsigned int FUN_003efa38(int);
extern int FUN_003efad8(int, unsigned int);
/* Supplied declaration required: FUN_003efb68. */
/* Supplied declaration required: FUN_003f0b28. */
/* Supplied declaration required: FUN_003f0b80. */
/* Supplied declaration required: FUN_003f0c78. */
/* Supplied declaration required: FUN_003f0d50. */
/* Supplied declaration required: FUN_003f0e20. */
extern int FUN_003f0f2c(int);
extern int FUN_003f0f40(int);
extern int FUN_003f10c8(int, unsigned short);
extern int FUN_003f1230(int);
/* Supplied declaration required: FUN_003f12d4. */
/* Supplied declaration required: FUN_003f1334. */
/* Supplied declaration required: FUN_003f1994. */
/* Supplied declaration required: FUN_003f26d4. */
extern int FUN_003f86c8(unsigned int);
/* Supplied declaration required: FUN_003f881c. */
/* Supplied declaration required: aocHandleButtons. */
extern int FUN_003fce08(int, unsigned int);
/* Supplied declaration required: FUN_003fce8c. */
extern int nkdwLoaderParse(int);
extern unsigned int FUN_00409fe8(unsigned int, unsigned int);
extern int chainCountIdUnflagged(unsigned int, unsigned int *);
extern int FUN_0046ebf0(unsigned int);
/* Supplied declaration required: FUN_00470634. */
extern int FUN_004706a8(unsigned int, unsigned short);
/* Supplied declaration required: FUN_0047118c. */
/* Supplied declaration required: FUN_0047f444. */
extern int FUN_004a96d4(unsigned int);
/* Supplied declaration required: FUN_004aa2e0. */
/* Supplied declaration required: FUN_004caca0. */
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: FUN_004cb2a4. */
/* Supplied declaration required: FUN_004d7a70. */
/* Supplied declaration required: FUN_004d7fe4. */
/* Supplied declaration required: isEntryUsable. */
/* Supplied declaration required: FUN_004f1a54. */
/* Supplied declaration required: FUN_004f1c5c. */
extern int FUN_004f2294(int);
extern int FUN_004f2708(int, int, unsigned int);
/* Supplied declaration required: words10CopyHighToLow. */
/* Supplied declaration required: FUN_004f2abc. */
/* Supplied declaration required: FUN_004f3ee0. */
/* Supplied declaration required: FUN_004f41b0. */
extern int FUN_004f6384(int);
/* Supplied declaration required: FUN_004f6d34. */
/* Supplied declaration required: FUN_004f7b84. */
extern int FUN_004f8264(int);
/* Supplied declaration required: FUN_004f9450. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fd204. */
/* Supplied declaration required: FUN_004fd268. */
/* Supplied declaration required: FUN_004fdcd8. */
/* Supplied declaration required: FUN_004fe764. */
/* Supplied declaration required: FUN_0050dda4. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_002ba964(void)

{
/* irregular: 27 goto(s); irregular input(s): in_s1, in_s2; 78 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned short temp_v4;
  char temp_v5;
  char temp_v6;
  char temp_v7;
  char temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned short *puVar17;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int *puVar26;
  unsigned int *puVar27;
  unsigned int temp_v24;
  int temp_v25;
  int *piVar30;
  int *piVar31;
  unsigned int temp_v26;
  int temp_v27;
  short temp_v28;
  int temp_v29;
  unsigned int *puVar36;
  unsigned int temp_v30;
  float temp_v31;
  float in_s1;
  unsigned int in_s2;
  float temp_v32;
  int aiStack_2f0 [4];
  unsigned int uStack_2e0;
  unsigned int uStack_2dc;
  int iStack_2d8;
  unsigned int uStack_2d4;
  unsigned int uStack_2cc;
  unsigned int uStack_2c8;
  unsigned int uStack_2c4;
  unsigned int uStack_2c0;
  int iStack_2b8;
  int iStack_2b0;
  unsigned char temp_v33 [288];
  int iStack_108;
  unsigned int uStack_104;
  int iStack_100;
  int iStack_fc;
  int aiStack_f8 [12];
  unsigned int temp_v34 [4];
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned char temp_v35 [8];
  unsigned char temp_v36 [8];
  unsigned char temp_v37 [60];
  unsigned int uStack_5c;
  int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned long long uStack_34;
  unsigned int *puStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  temp_v15 = jobGetWork();
  puVar26 = g_btlEncount;
  if (g_btlEncount == (unsigned int *)0x0) {
    return (unsigned int *)0x0;
  }
  puVar27 = g_btlEncount;
  switch(*g_btlEncount) {
  case 0:
    temp_v21 = isEntryUsable(g_btlEvent);
    if (temp_v21 != 0) {
      return (unsigned int *)0x0;
    }
    temp_v21 = g_btlEvent;
    FUN_004d7a70(g_btlEvent,9,0xffffffff,0);
    if (temp_v21 != 0) {
      puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
      if ((DAT_00573888 & *puVar36) == 0 && (*(unsigned int *)(temp_v15 + 0x45a4) & (unsigned int)DAT_0057388c) == 0)
      {
        FUN_002e5924(2);
        temp_v23 = *(unsigned int *)(temp_v15 + 0x45a4) | (unsigned int)DAT_0057388c;
        *puVar36 = *puVar36 | DAT_00573888;
        *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
        temp_v21 = FUN_0013def0(1);
        if (temp_v21 == 3) {
          FUN_0013cab8(1,10,0xff);
        }
      }
      FUN_004d7fe4(g_btlEvent);
    }
    puVar26[4] = 0;
    puVar26[3] = 0;
    *puVar26 = 1;
    goto FUN_003e11ac;
  case 1:
FUN_003e11ac:
    temp_v21 = isEntryUsable(g_btlEvent);
    if (temp_v21 != 0) {
      return (unsigned int *)0x0;
    }
    if (0 < *(int *)(temp_v15 + 300)) {
      *puVar26 = 2;
      puVar26[4] = 0;
      puVar26[3] = 0;
      temp_v21 = FUN_003f86c8(0x4e);
      if (temp_v21 == 0) {
        FUN_003f881c(0x4e,0);
      }
      puVar26[4] = 0;
      *puVar26 = 3;
      puVar26[3] = 0;
      goto FUN_003e2470;
    }
    temp_v21 = valueAtF0IsReady(temp_v15);
    if (temp_v21 != 0) {
      *puVar26 = 4;
      puVar26[4] = 0;
      puVar26[3] = 0;
      FUN_003f1334(temp_v15);
      *puVar26 = 5;
      puVar26[4] = 0;
      puVar26[3] = 0;
      temp_v21 = FUN_003f0f40(temp_v15);
      if (temp_v21 == 0) {
        return (unsigned int *)0x0;
      }
    }
    puVar26[4] = 0;
    *puVar26 = 6;
    puVar26[3] = 0;
    break;
  case 2:
    temp_v21 = FUN_003f86c8(0x4e);
    if (temp_v21 == 0) {
      FUN_003f881c(0x4e,0);
    }
    puVar26[4] = 0;
    puVar26[3] = 0;
    *puVar26 = 3;
    goto FUN_003e2470;
  case 3:
FUN_003e2470:
    temp_v21 = FUN_003f86c8(0x4e);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_003ebec8(temp_v15);
    temp_v21 = valueAtF0IsReady(temp_v15);
    if (temp_v21 != 0) {
      *puVar26 = 4;
      puVar26[4] = 0;
      puVar26[3] = 0;
      FUN_003f1334(temp_v15);
      *puVar26 = 5;
      puVar26[4] = 0;
      puVar26[3] = 0;
      temp_v21 = FUN_003f0f40(temp_v15);
      if (temp_v21 == 0) {
        return (unsigned int *)0x0;
      }
    }
    puVar26[4] = 0;
    *puVar26 = 6;
    puVar26[3] = 0;
    break;
  case 4:
    FUN_003f1334(temp_v15);
    *puVar26 = 5;
    puVar26[4] = 0;
    puVar26[3] = 0;
    temp_v21 = FUN_003f0f40(temp_v15);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    puVar26[4] = 0;
    *puVar26 = 6;
    puVar26[3] = 0;
    break;
  case 5:
    temp_v21 = FUN_003f0f40(temp_v15);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    puVar26[4] = 0;
    *puVar26 = 6;
    puVar26[3] = 0;
    break;
  case 6:
    break;
  case 7:
    temp_v21 = FUN_003f0f2c(temp_v15);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    puVar26[4] = 0;
    puVar26[3] = 0;
    *puVar26 = 8;
    goto FUN_003e03b0;
  case 8:
    goto FUN_003e03b0;
  case 9:
    if (*(int *)(temp_v15 + 0x1ec4) == 0) {
      return (unsigned int *)0x0;
    }
    g_btlEncount[4] = 0;
    *puVar26 = 10;
    puVar26[3] = 0;
    goto code_r0x003e12a8;
  case 10:
code_r0x003e12a8:
    puVar27 = temp_v34;
    FUN_003e8b78(temp_v15);
    temp_v18 = *(unsigned int *)(temp_v15 + 0x1ec4);
    FUN_001b4a90(temp_v34,0xa8,0xffffffff);
    FUN_0039ba24(temp_v34,0x2a,temp_v18);
    temp_v25 = 0;
    temp_v21 = 0;
    if (0 < (int)puVar27) {
      do {
        temp_v19 = FUN_003efad8(temp_v15,temp_v34[temp_v21]);
        if (temp_v19 == 0) {
          temp_v18 = FUN_00409fe8(temp_v34[temp_v21],1);
          FUN_003efb68(temp_v15,temp_v18);
          *(unsigned int *)(temp_v15 + temp_v25 * 8 + 0x2020) = temp_v34[temp_v21];
          FUN_003ed1f8(temp_v15,(int)(short)temp_v34[temp_v21]);
          temp_v25 = temp_v25 + 1;
        }
        temp_v21 = temp_v21 + 1;
      } while (temp_v21 < (int)puVar27);
    }
    *puVar26 = 0xb;
    puVar26[4] = 0;
    puVar26[2] = temp_v25;
    puVar26[3] = 0;
    FUN_003e2038(puVar26,temp_v15);
    return puVar26;
  case 0xb:
    temp_v21 = 0;
    temp_v9 = 1;
    if (0 < (int)g_btlEncount[2]) {
      do {
        temp_v25 = temp_v15 + temp_v21 * 8;
        temp_v19 = FUN_003ec620(temp_v15,*(unsigned int *)(temp_v25 + 0x2020));
        if ((*(unsigned int *)(temp_v25 + 0x201c) & 1) == 0) {
          temp_v20 = nkdwLoaderParse(temp_v19);
          if (temp_v20 == 0) {
            temp_v9 = 0;
          }
          else {
            *(unsigned int *)(temp_v25 + 0x201c) = *(unsigned int *)(temp_v25 + 0x201c) | 1;
            aocHandleButtons(temp_v19,7);
          }
        }
        if ((*(unsigned int *)(temp_v25 + 0x201c) & 2) == 0) {
          temp_v20 = FUN_003fce08(temp_v19,1);
          if (temp_v20 == 0) {
            temp_v9 = 0;
          }
          else {
            FUN_003fce8c(temp_v19,1);
            temp_v20 = temp_v15 + temp_v21 * 0x48;
            *(unsigned int *)(temp_v25 + 0x201c) = *(unsigned int *)(temp_v25 + 0x201c) | 2;
            *(unsigned int *)(temp_v20 + 0x10b4) = *(unsigned int *)(temp_v19 + 4);
            *(unsigned int *)(temp_v20 + 0x10b8) = *(unsigned int *)(temp_v19 + 8);
            *(unsigned int *)(temp_v20 + 0x10bc) = *(unsigned int *)(temp_v19 + 0xc);
            *(unsigned int *)(temp_v20 + 0x10c0) = *(unsigned int *)(temp_v19 + 0x10);
            *(unsigned int *)(temp_v20 + 0x10c4) = *(unsigned int *)(temp_v19 + 0x14);
            *(unsigned int *)(temp_v20 + 0x10c8) = *(unsigned int *)(temp_v19 + 0x18);
            *(unsigned int *)(temp_v20 + 0x10cc) = *(unsigned int *)(temp_v19 + 0x1c);
            *(unsigned int *)(temp_v20 + 0x10d0) = *(unsigned int *)(temp_v19 + 0x20);
            *(unsigned int *)(temp_v20 + 0x10d4) = *(unsigned int *)(temp_v19 + 0x24);
            *(unsigned int *)(temp_v20 + 0x10d8) = *(unsigned int *)(temp_v19 + 0x28);
            *(unsigned int *)(temp_v20 + 0x10dc) = *(unsigned int *)(temp_v19 + 0x2c);
            *(unsigned int *)(temp_v20 + 0x10e0) = *(unsigned int *)(temp_v19 + 0x30);
            *(unsigned int *)(temp_v20 + 0x10e4) = *(unsigned int *)(temp_v19 + 0x34);
            *(unsigned int *)(temp_v20 + 0x10e8) = *(unsigned int *)(temp_v19 + 0x38);
            *(unsigned char *)(temp_v20 + 0x10ec) = *(unsigned char *)(temp_v19 + 0x3c);
            *(unsigned char *)(temp_v20 + 0x10ed) = *(unsigned char *)(temp_v19 + 0x3d);
            *(unsigned int *)(temp_v20 + 0x10f0) = *(unsigned int *)(temp_v19 + 0x40);
            *(unsigned int *)(temp_v20 + 0x10f4) = *(unsigned int *)(temp_v19 + 0x44);
          }
        }
        temp_v21 = temp_v21 + 1;
      } while (temp_v21 < (int)puVar26[2]);
      if (!temp_v9) {
        return (unsigned int *)0x0;
      }
    }
    puVar26[4] = 0;
    puVar26[3] = 0;
    *puVar26 = 0xc;
    goto FUN_003e0510;
  case 0xc:
FUN_003e0510:
    aiStack_2f0[0] = puVar26[2];
    temp_v21 = temp_v15 + 0x430;
    puStack_2c = puVar26;
    iStack_28 = temp_v15;
    FUN_0038a7dc(temp_v21,0x32,*(unsigned int *)(temp_v15 + 0x1ec4),temp_v15 + 0x10b0);
    temp_v15 = iStack_28;
    FUN_003eebf4(iStack_28,1);
    piVar31 = (int *)(iStack_28 + 0x1ffc);
    temp_v23 = (unsigned int)*(unsigned short *)(*piVar31 + temp_v15 * 0x408 + 0x166);
    aiStack_2f0[3] = temp_v15;
    FUN_0019cac4();
    temp_v3 = *(unsigned char *)(temp_v23 + 0xa2);
    temp_v32 = 0.0f;
    if (temp_v3 == 0) {
      temp_v32 = 15.0f;
    }
    if ((temp_v3 >= 2) && (temp_v3 == 2)) {
      temp_v32 = -20.0f;
    }
    temp_v31 = 0.30543265f;
    FUN_0050dda4();
    if (0 < temp_v21) {
      temp_v25 = 0;
      temp_v15 = temp_v21;
      do {
        temp_v15 = temp_v15 - 1;
        temp_v19 = iStack_28 + temp_v25 * 0x20;
        temp_v31 = *(float *)(temp_v19 + 0x448) + temp_v32;
        temp_v25 = temp_v25 + 1;
        *(float *)(temp_v19 + 0x448) = temp_v31;
        *(unsigned int *)(temp_v19 + 0xa8c) = *(unsigned int *)(temp_v19 + 0x44c);
        *(unsigned int *)(temp_v19 + 0xa70) = *(unsigned int *)(temp_v19 + 0x430);
        *(unsigned int *)(temp_v19 + 0xa74) = *(unsigned int *)(temp_v19 + 0x434);
        *(unsigned int *)(temp_v19 + 0xa78) = *(unsigned int *)(temp_v19 + 0x438);
        *(unsigned int *)(temp_v19 + 0xa7c) = *(unsigned int *)(temp_v19 + 0x43c);
        *(unsigned int *)(temp_v19 + 0xa80) = *(unsigned int *)(temp_v19 + 0x440);
        *(unsigned int *)(temp_v19 + 0xa84) = *(unsigned int *)(temp_v19 + 0x444);
        *(float *)(temp_v19 + 0xa88) = temp_v31;
      } while (temp_v15 != 0);
    }
    FUN_00239404(iStack_28 + 0x430,temp_v21);
    FUN_00239404(iStack_28 + 0xa70,temp_v21);
    temp_v15 = 0;
    temp_v25 = -1;
    iStack_2b8 = iStack_28 + 0x1e00;
    *(short *)(iStack_28 + 0x1ec0) = (short)temp_v21;
    temp_v17 = DAT_0057384c;
    temp_v23 = DAT_00573848;
    uStack_38 = 0xff;
    temp_v21 = 4;
    uStack_2d4 = DAT_0057384c;
    uStack_2e0 = DAT_00573848;
    piVar30 = (int *)(iStack_28 + 0x1ed4);
    do {
      temp_v19 = *piVar30;
      temp_v20 = temp_v21 * 0x1d0 + 0x68;
      if (*(short *)(temp_v19 + temp_v20) >= 0) {
        puVar36 = (unsigned int *)(*piVar31 + *(short *)(temp_v19 + temp_v20) * 0x408);
        if ((puVar36[1] & temp_v17) != 0 || (*puVar36 & temp_v23) != 0) {
LAB_003e06c8:
          *(unsigned int *)(temp_v19 + temp_v21 * 0x1d0 + 0x50) = 0x491;
          temp_v19 = iStack_28 + temp_v15 * 0x20;
          *(short *)(*piVar30 + temp_v20) = (short)aiStack_2f0[3];
          temp_v30 = *(unsigned int *)(temp_v19 + 0x444);
          puVar26 = (unsigned int *)(*piVar30 + temp_v21 * 0x1d0 + 0xc);
          temp_v18 = *(unsigned int *)(temp_v19 + 0x448);
          *puVar26 = *(unsigned int *)(temp_v19 + 0x440);
          puVar26[1] = temp_v30;
          aiStack_2f0[1] = temp_v21 * 0x1d0 + 0x6c;
          puVar26[2] = temp_v18;
          *(unsigned short *)(*piVar30 + temp_v21 * 0x1d0 + 0x62) = *(unsigned short *)(temp_v19 + 0x434);
          *(unsigned int *)(*piVar30 + aiStack_2f0[1]) = *(unsigned int *)(temp_v19 + 0x438);
          temp_v31 = *(float *)(temp_v19 + 0x43c);
          iStack_2b0 = temp_v21 * 0x1d0 + 0x110;
          *(float *)(*piVar30 + temp_v21 * 0x1d0 + 0x40) = temp_v31;
          *(unsigned int *)(*piVar30 + temp_v21 * 0x1d0 + 0x104) = 0;
          *(unsigned int *)(*piVar30 + iStack_2b0) = (unsigned int)*(unsigned short *)(temp_v19 + 0x44c);
          iStack_2d8 = *piVar30;
          uStack_2c8 = DAT_0057aa1c >> 0x18;
          uStack_2c4 = (DAT_0057aa1c & 0xff0000) >> 0x10;
          uStack_2c0 = (DAT_0057aa1c & 0xff00) >> 8;
          temp_v26 = *(unsigned int *)(iStack_2d8 + aiStack_2f0[1]);
          uStack_2cc = (temp_v26 & 0xff0000) >> 0x10;
          uStack_2dc = (temp_v26 & 0xff00) >> 8;
          temp_v25 = ((uStack_2c8 + (temp_v26 >> 0x18)) >> 1) * 0x1000000 +
                   ((uStack_2cc + uStack_2c4) >> 1) * 0x10000 +
                   ((uStack_2c0 + uStack_2dc) >> 1) * 0x100 + 0xff;
          *(int *)(iStack_2d8 + aiStack_2f0[1]) = temp_v25;
          *(int *)(*piVar30 + temp_v21 * 0x1d0 + 0x70) = temp_v25;
          *(unsigned int *)(*piVar30 + temp_v21 * 0x1d0 + 0x74) =
               *(unsigned int *)(*piVar30 + aiStack_2f0[1]);
          *(unsigned int *)(*piVar30 + temp_v21 * 0x1d0 + 0x94) =
               *(unsigned int *)(*piVar30 + aiStack_2f0[1]);
          *(unsigned int *)(*piVar30 + temp_v21 * 0x1d0 + 0x98) =
               *(unsigned int *)(*piVar30 + aiStack_2f0[1]);
          if ((int)*(unsigned int *)(*piVar30 + iStack_2b0) < (int)uStack_38) {
            uStack_38 = *(unsigned int *)(*piVar30 + iStack_2b0);
          }
          temp_v27 = 0;
          temp_v29 = temp_v21 * 0x1d0 + 0x6a;
          do {
            temp_v16 = *piVar31 + *(short *)(*piVar30 + temp_v20) * 0x408;
            temp_v25 = (int)*(short *)(temp_v16 + 0x6e);
            *(unsigned int *)(temp_v16 + temp_v15 * 4 + 0x170) = *(unsigned int *)(temp_v19 + 0x430);
            temp_v28 = *(short *)(temp_v16 + temp_v27 * 2 + 8);
            if (*(short *)(*piVar30 + temp_v29) == temp_v28) break;
            if (temp_v28 < 0) {
              *(unsigned short *)(temp_v16 + temp_v27 * 2 + 8) = *(unsigned short *)(*piVar30 + temp_v29);
              break;
            }
            temp_v27 = temp_v27 + 1;
          } while (temp_v27 < 0x32);
          temp_v15 = temp_v15 + 1;
          if (*(short *)(iStack_28 + 0x1ec0) - 1 < temp_v15) break;
        }
      }
      else {
        temp_v26 = *(unsigned int *)(temp_v19 + temp_v21 * 0x1d0 + 0x50);
        if ((temp_v26 & 1) == 0 && (temp_v26 & 0x80) == 0) goto LAB_003e06c8;
      }
      temp_v21 = temp_v21 + 1;
    } while (temp_v21 < 0x36);
    if (temp_v25 != -1) {
      temp_v15 = 0;
      temp_v21 = *piVar31 + temp_v25 * 0x408;
      do {
        temp_v25 = (int)*(short *)(temp_v21 + temp_v15 * 2 + 8);
        if (-1 < temp_v25) {
          temp_v25 = *piVar30 + temp_v25 * 0x1d0;
          if (((*(unsigned int *)(temp_v25 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v25 + 0x50) & 0x80) != 0) &&
             (*(unsigned int *)(temp_v25 + 0x110) == uStack_38)) {
            temp_v19 = *piVar30 + *(short *)(temp_v21 + 8) * 0x1d0;
            if (*(unsigned int *)(temp_v19 + 0x110) == uStack_38) {
              in_s1 = *(float *)(temp_v19 + 0xc) * *(float *)(temp_v19 + 0xc);
              temp_v31 = *(float *)(temp_v25 + 0xc) * *(float *)(temp_v25 + 0xc);
              if (in_s1 <= temp_v31) goto LAB_003e0a8c;
            }
            temp_v20 = FUN_003ef9e0(iStack_28,temp_v19);
            temp_v27 = FUN_003ef9e0(iStack_28,temp_v25);
            temp_v27 = temp_v21 + 0x164 + temp_v27 * 4;
            temp_v20 = temp_v21 + 0x164 + temp_v20 * 4;
            temp_v18 = *(unsigned int *)(temp_v20 + 0xc);
            *(unsigned int *)(temp_v20 + 0xc) = *(unsigned int *)(temp_v27 + 0xc);
            *(unsigned int *)(temp_v27 + 0xc) = temp_v18;
            uStack_3c = (unsigned int)*(unsigned short *)(temp_v25 + 0x6a);
            temp_v4 = *(unsigned short *)(temp_v19 + 0x6a);
            rt_memcpy_w(temp_v33,temp_v19,0x1d0);
            rt_memcpy_w(temp_v19,temp_v25,0x1d0);
            rt_memcpy_w(temp_v25,temp_v33,0x1d0);
            *(unsigned short *)(temp_v19 + 0x6a) = temp_v4;
            *(short *)(temp_v25 + 0x6a) = (short)uStack_3c;
          }
        }
LAB_003e0a8c:
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < 0x32);
      temp_v23 = 0;
      temp_v15 = 0;
      do {
        temp_v25 = (int)*(short *)(temp_v21 + temp_v15 * 2 + 8);
        if (-1 < temp_v25) {
          aiStack_2f0[temp_v23] = *piVar30 + temp_v25 * 0x1d0;
          temp_v23 = temp_v23 + 1;
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < 0x32);
      FUN_003eba0c(iStack_28,temp_v21 + 0x164);
      qsort(aiStack_2f0,temp_v23,4,&LAB_0020e93c);
      if ((int)temp_v23 < 1) {
        temp_v17 = 0;
      }
      else {
        temp_v17 = temp_v23 & 1;
        if (temp_v17 == 1) {
          *(unsigned int *)(aiStack_2f0[0] + 0x108) = 0;
        }
      }
      for (; (int)temp_v17 < (int)temp_v23; temp_v17 = temp_v17 + 2) {
        *(unsigned int *)(aiStack_2f0[temp_v17] + 0x108) = temp_v17;
        *(unsigned int *)(aiStack_2f0[temp_v17 + 1] + 0x108) = temp_v17 + 1;
      }
      FUN_003edaf0(iStack_28,*(unsigned short *)(temp_v21 + 0x166));
      temp_v15 = *piVar30 + *(short *)(temp_v21 + 8) * 0x1d0;
      *(float *)(temp_v15 + 0x1b0) = temp_v31;
      *(float *)(temp_v15 + 0x1b4) = in_s1;
      *(unsigned int *)(temp_v15 + 0x1b8) = in_s2;
    }
    puStack_2c[4] = 0;
    puStack_2c[3] = 0;
    *puStack_2c = 0x11;
    puVar26 = puStack_2c;
    temp_v15 = iStack_28;
    goto FUN_003e3188;
  case 0xd:
    goto FUN_003e025c;
  case 0xe:
    temp_v21 = FUN_004f2294(DAT_00571508);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_004f1a54(DAT_00571508);
    *puVar26 = 0xf;
    puVar26[4] = 0;
    puVar26[3] = 0;
    goto code_r0x003e1068;
  case 0xf:
    goto code_r0x003e1068;
  case 0x10:
    temp_v21 = FUN_003ece50(temp_v15);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_003eaa9c(temp_v15);
    puVar26[4] = 0;
    puVar26[3] = 0;
    *puVar26 = 0x14;
    goto FUN_003e1454;
  case 0x11:
    goto FUN_003e3188;
  case 0x12:
    temp_v21 = temp_v15;
    FUN_004cb2a4(temp_v15,1);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_003ed238(temp_v15,0x400);
    temp_v21 = 4;
    do {
      temp_v23 = *(unsigned int *)(*(int *)(temp_v15 + 0x1ed4) + temp_v21 * 0x1d0 + 0x50);
      if (((temp_v23 & 1) != 0 && (temp_v23 & 0x80) != 0) && (temp_v23 & 0x400) != 0) {
        *(char *)(temp_v15 + 0x1ed9) = *(char *)(temp_v15 + 0x1ed9) + '\x01';
      }
      temp_v21 = temp_v21 + 1;
    } while (temp_v21 < 0x36);
    puVar26[4] = 0;
    *puVar26 = 0xd;
    puVar26[3] = 0;
    goto FUN_003e025c;
  case 0x13:
    g_btlEncount[4] = 0;
    *puVar26 = 0x14;
    puVar26[3] = 0;
    goto FUN_003e1454;
  case 0x14:
    goto FUN_003e1454;
  case 0x15:
    sysMemClear(temp_v37,0x80);
    temp_v18 = FUN_003efa38(temp_v15);
    FUN_002e342c(temp_v37,temp_v18);
    if (puVar26[1] != 0) {
      asdMemFree();
      puVar26[1] = 0;
    }
    if ((*(int *)(temp_v15 + 0xf0) >= 1) && (temp_v21 = FUN_0046ebf0(g_aocSystem), temp_v21 != 0)) {
      FUN_00470634(g_aocSystem,*(unsigned int *)(temp_v15 + 0xf0),puVar26 + 1,temp_v37);
    }
    else {
      FUN_002804b0(temp_v37,puVar26 + 1,0);
    }
    puVar26[4] = 0;
    *puVar26 = 0x16;
    puVar26[3] = 0;
    FUN_003e21c8(puVar26,temp_v15);
    return puVar26;
  case 0x16:
    temp_v21 = g_btlEncount[1];
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
    puVar27 = (unsigned int *)(DAT_00573870 & *puVar36);
    if (((*(unsigned int *)(temp_v15 + 0x45a4) & DAT_00573874) == 0 && puVar27 == (unsigned int *)0x0) &&
       (*(char *)(temp_v21 + 10) == '\x01')) {
      temp_v5 = *(char *)(temp_v21 + 4);
      temp_v6 = *(char *)(temp_v21 + 5);
      temp_v7 = *(char *)(temp_v21 + 6);
      temp_v8 = *(char *)(temp_v21 + 7);
      temp_v25 = *(int *)(temp_v21 + 0xc);
      temp_v21 = (unsigned int)*(unsigned short *)(temp_v21 + 8) + temp_v21;
      *(unsigned int *)(temp_v15 + 0x1ee0) = 0;
      *(unsigned int *)(temp_v15 + 0x1ee4) = 0;
      *(unsigned int *)(temp_v15 + 0x1ee8) = 0;
      *(unsigned int *)(temp_v15 + 0x1eec) = 0;
      *(unsigned int *)(temp_v15 + 0x1ef0) = 0;
      *(unsigned int *)(temp_v15 + 0x1ef4) = 0;
      *(unsigned int *)(temp_v15 + 0x1ef8) = 0;
      if ((int)temp_v8 + ((temp_v5 * 1000 + temp_v6 * 100 + temp_v7 * 10) - 0xd050) == 0x44c) {
        rt_memcpy_w((unsigned int *)(temp_v15 + 0x1ee0),temp_v21,0x118);
        temp_v21 = temp_v21 + 0x118;
      }
      temp_v23 = (temp_v25 - 0x118U) / 0x18;
      if (*(unsigned char *)(temp_v15 + 0x1ed9) < temp_v23) {
        temp_v23 = (unsigned int)*(unsigned char *)(temp_v15 + 0x1ed9);
      }
      puVar27 = (unsigned int *)(temp_v23 * 0x18);
      rt_memcpy_w(*(unsigned int *)(temp_v15 + 0x1ff8),temp_v21);
    }
    FUN_003f0c78(temp_v15);
    FUN_003f0b80(temp_v15);
    words10CopyHighToLow(DAT_00571508);
    temp_v21 = FUN_003e0f94(puVar26,temp_v15);
    if ((temp_v21 == 1 || temp_v21 == 2) || temp_v21 == 5) {
      temp_v21 = 4;
      do {
        temp_v25 = *(int *)(temp_v15 + 0x1ed4) + temp_v21 * 0x1d0;
        if ((((*(unsigned int *)(temp_v25 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v25 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v25 + 0x58) & 8) != 0)) &&
           (*(unsigned int *)(temp_v25 + 0x58) = *(unsigned int *)(temp_v25 + 0x58) & 0xfffffff7,
           (*(unsigned short *)(temp_v25 + 0x60) & 0x800) == 0)) {
          temp_v19 = temp_v15;
          FUN_001568f8(temp_v15,(int)*(short *)(temp_v25 + 0x6a));
          temp_v19 = FUN_003f10c8(temp_v15,*(unsigned short *)(temp_v19 + 2));
          if (temp_v19 == 0) {
            *(unsigned short *)(temp_v25 + 0x60) = *(unsigned short *)(temp_v25 + 0x60) | 0x800;
          }
        }
        temp_v21 = temp_v21 + 1;
      } while (temp_v21 < 0x36);
      puVar27 = (unsigned int *)0x100021b;
      uStack_34 = uStack_34 & 0xffffffff;
      puStack_2c = (unsigned int *)0x0;
      iStack_28 = 0;
      FUN_004fb43c(0,0);
    }
    puVar26[4] = 0;
    *puVar26 = 0x17;
    puVar26[3] = 0;
    temp_v21 = FUN_003e0f94(puVar26,temp_v15);
    if ((temp_v21 != 2 && temp_v21 != 5) &&
       (puVar27 = DAT_0057388c,
       (*(unsigned int *)(temp_v15 + 0x45a4) & (unsigned int)DAT_0057388c) == 0 && (*puVar36 & DAT_00573888) == 0)) {
      FUN_002e5924(2);
      puVar27 = (unsigned int *)*puVar36;
      temp_v23 = (unsigned int)DAT_0057388c | *(unsigned int *)(temp_v15 + 0x45a4);
      *puVar36 = DAT_00573888 | (unsigned int)puVar27;
      *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
    }
    goto code_r0x003e0bb8;
  case 0x17:
code_r0x003e0bb8:
    temp_v21 = FUN_003e0f94();
    if (temp_v21 != 2 && temp_v21 != 5) {
      temp_v21 = FUN_0013def0(0);
      if (temp_v21 == 3) {
        puVar27 = (unsigned int *)0xff;
        FUN_0013cab8(0,10);
      }
      temp_v21 = FUN_0013def0(1);
      if (temp_v21 == 3) {
        puVar27 = (unsigned int *)0xff;
        FUN_0013cab8(1,10);
      }
      temp_v21 = FUN_002e07f4();
      if (temp_v21 == 0) {
        return (unsigned int *)0x0;
      }
    }
    puVar26[4] = 0;
    puVar26[3] = 0;
    *puVar26 = 0x18;
    temp_v18 = FUN_003e0f94(puVar26,temp_v15);
    switch(temp_v18) {
    default:
FUN_003e16cc:
      if ((puVar26[3] == 0) && ((*(unsigned int *)(DAT_00573808 + 0x339c) & 0x400) != 0)) {
        *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x4000;
        FUN_004f9450();
        puVar26[3] = puVar26[3] | 2;
      }
      puVar27 = (unsigned int *)0x0;
      if ((puVar26[3] & 2) != 0) {
        temp_v21 = FUN_004f8264(DAT_00573808);
        puVar27 = (unsigned int *)0x0;
        if (temp_v21 != 0) {
          temp_v25 = 0;
          temp_v21 = 4;
          do {
            temp_v19 = *(int *)(temp_v15 + 0x1ed4) + temp_v21 * 0x1d0;
            if (((*(unsigned int *)(temp_v19 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v19 + 0x50) & 2) != 0) &&
               ((*(unsigned int *)(temp_v19 + 0x58) & 8) != 0)) {
              aiStack_f8[temp_v25] = temp_v19;
              temp_v25 = temp_v25 + 1;
            }
            temp_v21 = temp_v21 + 1;
          } while (temp_v21 < 0x36);
          qsort(aiStack_f8,temp_v25,4,&LAB_00221a94);
          temp_v28 = 0;
          temp_v21 = 0;
          puStack_2c = (unsigned int *)0x0;
          if (0 < temp_v25) {
            do {
              temp_v19 = aiStack_f8[temp_v21];
              if ((((*(unsigned int *)(temp_v19 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v19 + 0x50) & 2) != 0) &&
                  ((*(unsigned int *)(temp_v19 + 0x58) & 8) != 0)) &&
                 (*(unsigned int *)(temp_v19 + 0x58) = *(unsigned int *)(temp_v19 + 0x58) & 0xfffffff7,
                 (*(unsigned short *)(temp_v19 + 0x60) & 0x800) == 0)) {
                temp_v20 = temp_v15;
                FUN_001568f8(temp_v15,(int)*(short *)(temp_v19 + 0x6a));
                temp_v20 = FUN_003f10c8(temp_v15,*(unsigned short *)(temp_v20 + 2));
                if (temp_v20 == 0) {
                  *(unsigned short *)(temp_v19 + 0x60) = *(unsigned short *)(temp_v19 + 0x60) | 0x800;
                  if ((*(unsigned int *)(temp_v19 + 0x50) & 0x10) != 0) {
                    temp_v0 = (short)DAT_0057a640;
                    temp_v1 = (short)DAT_0057a644;
                    temp_v2 = (short)DAT_0057a648;
                  }
                  else {
                    temp_v1 = (short)DAT_0057a638;
                    temp_v0 = (short)DAT_0057a634;
                    temp_v2 = (short)DAT_0057a63c;
                  }
                  iStack_fc = (int)temp_v0;
                  iStack_100 = (int)(short)DAT_0057a64c;
                  iStack_108 = (int)temp_v2;
                  uStack_34 = romwright_piece_4_4((int)temp_v1,(int)uStack_34);
                  FUN_004cae0c(temp_v15,temp_v19,0);
                  uStack_104 = 0;
                  FUN_004fd204((int)temp_v28 * (int)(short)iStack_fc + iStack_100 + (*(unsigned int *)((unsigned char *)&uStack_34 + 4)),
                               puVar26,temp_v19,0xff);
                  temp_v18 = 6;
                  iStack_108 = 0xd;
                  if ((*(unsigned int *)(temp_v19 + 0x50) & 0x10) != 0) {
                    temp_v18 = 7;
                  }
                  FUN_004fe764((int)temp_v28 * (int)(short)iStack_fc + iStack_100,puVar26,temp_v19,
                               temp_v18);
                  if (puStack_2c == (unsigned int *)0x0) {
                    iStack_108 = 0;
                    uStack_104 = 0;
                    iStack_100 = 0;
                    FUN_004fb43c((int)temp_v28 * (int)(short)iStack_fc,puVar26,0x1000276,0);
                    puStack_2c = (unsigned int *)0x1;
                  }
                  temp_v28 = temp_v28 + 1;
                }
              }
              temp_v21 = temp_v21 + 1;
            } while (temp_v21 < temp_v25);
          }
          if (*(int *)(DAT_00571508 + 0x34) != 0) {
            FUN_004f1c5c();
          }
          else {
            FUN_004f1c5c(DAT_00571508,0x78);
          }
          puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
          if ((DAT_00573858 & *puVar36) == 0 && (*(unsigned int *)(temp_v15 + 0x45a4) & DAT_0057385c) == 0) {
            FUN_003ed6e8(temp_v15);
            FUN_003f26d4(temp_v15);
            temp_v23 = DAT_0057387c | *(unsigned int *)(temp_v15 + 0x45a4) | DAT_00573894;
            *puVar36 = DAT_00573878 | *puVar36 | DAT_00573890;
            *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
            FUN_004aa2e0(DAT_0057a9c8,0);
          }
          puVar26[4] = 0;
          *puVar26 = 0x19;
          puVar26[3] = 0;
          FUN_003e0cd4(puVar26,temp_v15);
          puVar27 = puVar26;
        }
      }
      return puVar27;
    case 1:
FUN_003e26f0:
      if (*(int *)(DAT_00571508 + 0x34) != 0) {
        FUN_004f1c5c();
      }
      else {
        FUN_004f1c5c(DAT_00571508,0x78);
      }
      puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
      if ((DAT_00573858 & *puVar36) == 0 && (DAT_0057385c & *(unsigned int *)(temp_v15 + 0x45a4)) == 0) {
        FUN_003ed6e8(temp_v15);
        FUN_003f26d4(temp_v15);
        temp_v23 = DAT_00573890;
        temp_v17 = *puVar36 | DAT_00573878;
        *(unsigned int *)(temp_v15 + 0x45a4) = *(unsigned int *)(temp_v15 + 0x45a4) | DAT_0057387c | DAT_00573894;
        *puVar36 = temp_v17 | temp_v23;
        FUN_004aa2e0(DAT_0057a9c8,0);
      }
      else {
        FUN_003ed6e8(temp_v15);
        FUN_003f26d4(temp_v15);
        temp_v23 = DAT_00573890;
        temp_v17 = DAT_00573878 | *puVar36;
        *(unsigned int *)(temp_v15 + 0x45a4) = DAT_0057387c | *(unsigned int *)(temp_v15 + 0x45a4) | DAT_00573894;
        *puVar36 = temp_v17 | temp_v23;
        temp_v21 = temp_v15;
        FUN_003eebf4(temp_v15,1);
        if ((temp_v21 < 0) && ((*(unsigned int *)(temp_v15 + 0x110) & 0x20) == 0)) {
          FUN_0047f444(3);
        }
      }
      puVar26[4] = 0;
      puVar26[3] = 0;
      *puVar26 = 0x19;
      break;
    case 2:
FUN_003e1b80:
      temp_v25 = 4;
      temp_v21 = puVar26[4];
      if (temp_v21 != 0) {
        if (temp_v21 != 1) {
          puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
          if (temp_v21 != 2) {
            temp_v21 = chainCountIdUnflagged(DAT_005712f0,puVar26);
            if (0 < temp_v21) {
              return (unsigned int *)0x0;
            }
            if ((*(unsigned int *)(temp_v15 + 0x45a4) & DAT_0057385c) == 0 && (DAT_00573858 & *puVar36) == 0)
            {
              FUN_003ed6e8(temp_v15);
              FUN_003f26d4(temp_v15);
              temp_v23 = DAT_0057387c | *(unsigned int *)(temp_v15 + 0x45a4) | DAT_00573894;
              *puVar36 = *puVar36 | DAT_00573878 | DAT_00573890;
              *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
              FUN_004aa2e0(DAT_0057a9c8,0);
            }
            puVar26[4] = 0;
            *puVar26 = 0x19;
            puVar26[3] = 0;
            break;
          }
          if ((puVar26[3] & 2) != 0) {
            temp_v21 = DAT_00573808;
            FUN_004f6d34();
            if (temp_v21 == 0) {
              return (unsigned int *)0x0;
            }
            if ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x200) != 0) {
              return (unsigned int *)0x0;
            }
            temp_v21 = FUN_0013def0(0);
            if (temp_v21 == 3) {
              FUN_0013cab8(0,10,0xff);
            }
            temp_v21 = FUN_0013def0(1);
            if (temp_v21 == 3) {
              FUN_0013cab8(1,10,0xff);
            }
            temp_v21 = *(int *)(temp_v15 + 0x2290);
            (*(int *)((unsigned char *)&uStack_34 + 0)) = temp_v15;
            if (temp_v21 == 0) {
              piVar31 = (int *)0x0;
            }
            else {
              uStack_38 = FUN_001a6f60(temp_v21,1);
              temp_v20 = dataTableGetEntries();
              temp_v27 = dataTableGetCount(uStack_38);
              temp_v19 = temp_v27;
              if (0 < temp_v27) {
                temp_v19 = (int)uStack_34;
              }
              temp_v29 = 0;
              if (temp_v29 < temp_v27) {
                do {
                  piVar31 = (int *)(temp_v20 + temp_v29 * 0x14);
                  if (*(int *)(temp_v19 + 0xf0) == *piVar31) goto LAB_003e1f28;
                  temp_v29 = temp_v29 + 1;
                } while (temp_v29 < temp_v27);
              }
              FUN_001a6f60(temp_v21,0);
              piVar31 = (int *)dataTableGetEntries();
            }
LAB_003e1f28:
            do {
              temp_v21 = *(int *)(temp_v15 + 0x1ed4) + temp_v25 * 0x1d0;
              if ((*(unsigned int *)(temp_v21 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v21 + 0x50) & 2) != 0) {
                uStack_38 = (unsigned int)*(short *)((int)piVar31 + 0xe);
                (*(int *)((unsigned char *)&uStack_34 + 0)) = 1;
                FUN_004fd268((int)(short)piVar31[3],puVar26,temp_v21,*(unsigned int *)(temp_v21 + 0x70));
              }
              temp_v25 = temp_v25 + 1;
            } while (temp_v25 < 0x36);
            if ((*puVar36 & DAT_00573888) == 0 &&
                (*(unsigned int *)(temp_v15 + 0x45a4) & (unsigned int)DAT_0057388c) == 0) {
              FUN_002e5924(2);
              temp_v23 = *puVar36 | DAT_00573888;
              *(unsigned int *)(temp_v15 + 0x45a4) = (unsigned int)DAT_0057388c | *(unsigned int *)(temp_v15 + 0x45a4);
              *puVar36 = temp_v23;
            }
            FUN_004f41b0(DAT_00571508,0,(int)(short)piVar31[2]);
            uStack_38 = 7;
            uStack_34 = 0x600000000;
            puStack_2c = (unsigned int *)0x0;
            FUN_004fdcd8((int)*(short *)((int)piVar31 + 10),puVar26,0);
            FUN_004fb670((int)(short)piVar31[4],puVar26,(int)*(short *)((int)piVar31 + 0x12));
          }
        }
        else {
          if (((puVar26[3] & 0x10) != 0) && (temp_v21 = FUN_003f1230(temp_v15), temp_v21 == 0)) {
            return (unsigned int *)0x0;
          }
          temp_v21 = *(int *)(temp_v15 + 0x2290);
          if (temp_v21 != 0) {
            temp_v18 = FUN_001a6f60(temp_v21,1);
            temp_v25 = dataTableGetEntries();
            temp_v19 = dataTableGetCount(temp_v18);
            if (0 < temp_v19) {
              puVar27 = *(unsigned int **)(temp_v15 + 0xf0);
            }
            temp_v15 = 0;
            if (temp_v15 < temp_v19) {
              do {
                if (puVar27 == *(unsigned int **)(temp_v25 + temp_v15 * 0x14)) {
                  FUN_004f3ee0(DAT_00571508,1,0);
                  puVar26[4] = puVar26[4] + 1;
                  return (unsigned int *)0x0;
                }
                temp_v15 = temp_v15 + 1;
              } while (temp_v15 < temp_v19);
            }
            FUN_001a6f60(temp_v21,0);
            dataTableGetEntries();
          }
          FUN_004f3ee0(DAT_00571508,1,0);
        }
      }
      else {
        do {
          temp_v23 = *(unsigned int *)(*(int *)(temp_v15 + 0x1ed4) + temp_v25 * 0x1d0 + 0x50);
          if ((temp_v23 & 1) != 0 && (temp_v23 & 2) != 0) {
            uStack_34 = romwright_piece_4_4((*(unsigned int *)((unsigned char *)&uStack_34 + 4)),1);
            uStack_38 = 0;
            FUN_004fd268(0,puVar26);
          }
          temp_v25 = temp_v25 + 1;
        } while (temp_v25 < 0x36);
        if (puVar26[3] == 0) {
          if ((*(unsigned int *)(temp_v15 + 0x110) & 0x80) != 0) {
            FUN_004f7b84(DAT_00573808,&LAB_003e2014);
          }
          else {
            FUN_004f7b84(DAT_00573808,&LAB_003e2028);
          }
          *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x4000;
          puVar26[3] = puVar26[3] | 2;
          FUN_003f1994(temp_v15);
          puVar26[3] = puVar26[3] | 0x10;
        }
      }
      puVar26[4] = puVar26[4] + 1;
      return (unsigned int *)0x0;
    case 3:
FUN_003e1a30:
      if (puVar26[3] != 0) {
        temp_v23 = puVar26[3];
      }
      else {
        FUN_004f7b84(DAT_00573808,"ef_Ancient_01");
        *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x4000;
        temp_v23 = puVar26[3] | 2;
        puVar26[3] = temp_v23;
      }
      if (((temp_v23 & 2) == 0) || (temp_v21 = DAT_00573808, FUN_004f6d34(), temp_v21 == 0)) {
        return (unsigned int *)0x0;
      }
      FUN_003e2840(puVar26,temp_v15,3);
      if (*(int *)(DAT_00571508 + 0x34) != 0) {
        FUN_004f1c5c();
      }
      else {
        FUN_004f1c5c(DAT_00571508,0x78);
      }
      puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
      if ((*puVar36 & DAT_00573858) == 0 && (*(unsigned int *)(temp_v15 + 0x45a4) & DAT_0057385c) == 0) {
        FUN_003ed6e8(temp_v15);
        FUN_003f26d4(temp_v15);
        temp_v23 = *(unsigned int *)(temp_v15 + 0x45a4) | DAT_0057387c | DAT_00573894;
        *puVar36 = DAT_00573878 | *puVar36 | DAT_00573890;
        *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
        FUN_004aa2e0(DAT_0057a9c8,0);
      }
      puVar26[4] = 0;
      puVar26[3] = 0;
      *puVar26 = 0x19;
      break;
    case 4:
FUN_003e2a88:
      if (puVar26[3] != 0) {
        temp_v23 = puVar26[3];
      }
      else {
        FUN_004f7b84(DAT_00573808,"ef_Ancient_01G");
        *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x4000;
        temp_v23 = puVar26[3] | 2;
        puVar26[3] = temp_v23;
      }
      if (((temp_v23 & 2) == 0) || (temp_v21 = DAT_00573808, FUN_004f6d34(), temp_v21 == 0)) {
        return (unsigned int *)0x0;
      }
      FUN_003e2840(puVar26,temp_v15,4);
      if (*(int *)(DAT_00571508 + 0x34) != 0) {
        FUN_004f1c5c();
      }
      else {
        FUN_004f1c5c(DAT_00571508,0x78);
      }
      puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
      if ((*puVar36 & DAT_00573858) == 0 && (*(unsigned int *)(temp_v15 + 0x45a4) & DAT_0057385c) == 0) {
        FUN_003ed6e8(temp_v15);
        FUN_003f26d4(temp_v15);
        temp_v23 = *(unsigned int *)(temp_v15 + 0x45a4) | DAT_0057387c | DAT_00573894;
        *puVar36 = DAT_00573878 | *puVar36 | DAT_00573890;
        *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
        FUN_004aa2e0(DAT_0057a9c8,0);
      }
      puVar26[4] = 0;
      puVar26[3] = 0;
      *puVar26 = 0x19;
      break;
    case 5:
FUN_003e2504:
      puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
      if (puVar26[4] != 0) {
        temp_v21 = isEntryUsable();
        if (temp_v21 == 0) {
          if ((*(unsigned int *)(temp_v15 + 0x45a4) & DAT_0057385c) == 0 && (*puVar36 & DAT_00573858) == 0) {
            FUN_003ed6e8(temp_v15);
            FUN_003f26d4(temp_v15);
            temp_v23 = *(unsigned int *)(temp_v15 + 0x45a4) | DAT_0057387c | DAT_00573894;
            *puVar36 = *puVar36 | DAT_00573878 | DAT_00573890;
            *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
            FUN_004aa2e0(DAT_0057a9c8,0);
          }
          else {
            FUN_003ed6e8(temp_v15);
            FUN_003f26d4(temp_v15);
            temp_v23 = *(unsigned int *)(temp_v15 + 0x45a4) | DAT_0057387c | DAT_00573894;
            *puVar36 = *puVar36 | DAT_00573878 | DAT_00573890;
            *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
            temp_v21 = temp_v15;
            FUN_003eebf4(temp_v15,1);
            if ((temp_v21 < 0) && ((*(unsigned int *)(temp_v15 + 0x110) & 0x20) == 0)) {
              FUN_0047f444(3);
            }
          }
          puVar26[4] = 0;
          puVar26[3] = 0;
          *puVar26 = 0x19;
          break;
        }
      }
      else {
        temp_v21 = g_btlEvent;
        FUN_004d7a70(g_btlEvent,0xb,0xffffffff,0);
        if (temp_v21 != 0) {
          if ((*puVar36 & DAT_00573888) == 0 &&
              (*(unsigned int *)(temp_v15 + 0x45a4) & (unsigned int)DAT_0057388c) == 0) {
            FUN_002e5924(2);
            temp_v23 = *(unsigned int *)(temp_v15 + 0x45a4) | (unsigned int)DAT_0057388c;
            *puVar36 = *puVar36 | DAT_00573888;
            *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
          }
          temp_v15 = FUN_0013def0(0);
          if (temp_v15 == 3) {
            FUN_0013cab8(0,10,0xff);
          }
          temp_v15 = FUN_0013def0(1);
          if (temp_v15 == 3) {
            FUN_0013cab8(1,10,0xff);
          }
          FUN_004d7fe4(g_btlEvent);
        }
        puVar26[4] = puVar26[4] + 1;
      }
      return (unsigned int *)0x0;
    }
code_r0x003e0cd4:
    if ((((*(char *)(temp_v15 + 0x45bb) == '\0') ||
         (temp_v21 = chainCountIdUnflagged(DAT_005712f0,puVar26), temp_v21 < 1)) &&
        (temp_v21 = FUN_004f6384(DAT_00573808), temp_v21 != 0)) &&
       (((*(unsigned int *)(temp_v15 + 0x45a0) & DAT_00573860) == 0 &&
         (*(unsigned int *)(temp_v15 + 0x45a4) & DAT_00573864) == 0 ||
        (temp_v21 = FUN_004a96d4(DAT_0057a9c8), temp_v21 != 0)))) {
      temp_v14 = DAT_00573854;
      temp_v13 = DAT_00573850;
      temp_v12 = DAT_00573844;
      temp_v11 = DAT_00573840;
      temp_v10 = DAT_0057383c;
      temp_v26 = DAT_00573838;
      temp_v17 = DAT_00573834;
      temp_v23 = DAT_00573830;
      if ((*(unsigned int *)(temp_v15 + 0x10c) & 0x4000000) != 0) {
        temp_v21 = 4;
        uStack_5c = 4;
        uStack_4c = DAT_00573854;
        uStack_38 = DAT_00573850;
        uStack_3c = DAT_0057383c;
        uStack_34 = romwright_piece_4_4(DAT_00573840,(int)uStack_34);
        do {
          puVar36 = (unsigned int *)(*(int *)(temp_v15 + 0x1ffc) + temp_v21 * 0x408);
          temp_v22 = *puVar36;
          temp_v24 = puVar36[1];
          if ((((temp_v22 & temp_v23) != 0 || (temp_v24 & temp_v17) != 0) &&
              ((temp_v22 & temp_v11) == 0 && (temp_v24 & temp_v12) == 0)) &&
             ((temp_v22 & temp_v26) != 0 || (temp_v10 & temp_v24) != 0)) {
            puVar36[1] = temp_v24 | temp_v14;
            *puVar36 = temp_v22 | temp_v13;
          }
          temp_v21 = temp_v21 + 1;
        } while (temp_v21 < 0x36);
        temp_v21 = 4;
        do {
          temp_v25 = *(int *)(temp_v15 + 0x1ed4) + temp_v21 * 0x1d0;
          temp_v23 = *(unsigned int *)(temp_v25 + 0x50);
          if ((((temp_v23 & 1) != 0) && ((temp_v23 & 0x80) == 0)) && ((temp_v23 & 0x400) != 0)) {
            *(unsigned int *)(temp_v25 + 0x50) = temp_v23 | 0x40000;
          }
          temp_v21 = temp_v21 + 1;
        } while (temp_v21 < 0x36);
      }
      puVar26[3] = puVar26[3] | 4;
      temp_v21 = FUN_004f2708(DAT_00571508,temp_v15,1);
      if (temp_v21 != 0) {
        temp_v28 = *(short *)(temp_v15 + 0x2004);
        temp_v18 = 0xffffffff;
        if (temp_v28 == 0) {
          temp_v18 = 1;
        }
        else if (temp_v28 == 1) {
          temp_v18 = 2;
        }
        else if (temp_v28 == 2) {
          temp_v18 = 3;
        }
        else if (temp_v28 == 3) {
          temp_v18 = 4;
        }
        *(unsigned int *)(DAT_00571508 + 0x7cc) = temp_v18;
      }
      puVar26[4] = 0;
      *puVar26 = 0x1a;
      puVar26[3] = 0;
      temp_v21 = chainCountIdUnflagged(DAT_005712f0,puVar26);
      if (((temp_v21 < 1) && (temp_v21 = FUN_004f6384(DAT_00573808), temp_v21 != 0)) &&
         ((temp_v21 = DAT_00571508, FUN_00229ffc(), temp_v21 != 0 &&
          ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x80000) == 0)))) {
        FUN_003e9cd0(temp_v15);
        *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xffffbfff;
        FUN_003d9164();
        return (unsigned int *)0xffffffff;
      }
    }
    return (unsigned int *)0x0;
  case 0x18:
    temp_v18 = FUN_003e0f94(g_btlEncount);
    switch(temp_v18) {
    default:
      goto FUN_003e16cc;
    case 1:
      break;
    case 2:
      goto FUN_003e1b80;
    case 3:
      goto FUN_003e1a30;
    case 4:
      goto FUN_003e2a88;
    case 5:
      goto FUN_003e2504;
    }
    goto FUN_003e26f0;
  case 0x19:
    goto code_r0x003e0cd4;
  case 0x1a:
    temp_v21 = chainCountIdUnflagged(DAT_005712f0,g_btlEncount);
    if ((((temp_v21 < 1) && (temp_v21 = FUN_004f6384(DAT_00573808), temp_v21 != 0)) &&
        (temp_v21 = DAT_00571508, FUN_00229ffc(), temp_v21 != 0)) &&
       ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x80000) == 0)) {
      FUN_003e9cd0(temp_v15);
      *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xffffbfff;
      FUN_003d9164();
      return (unsigned int *)0xffffffff;
    }
  default:
    return (unsigned int *)0x0;
  }
  temp_v21 = 4;
  do {
    if (*(char *)(*(int *)(temp_v15 + 0x1ffc) + temp_v21 * 0x408 + 0x23a) != '\0') {
      FUN_003f12d4(temp_v15,1);
      *puVar26 = 7;
      puVar26[4] = 0;
      puVar26[3] = 0;
      temp_v21 = FUN_003f0f2c(temp_v15);
      if (temp_v21 == 0) {
        return (unsigned int *)0x0;
      }
      break;
    }
    temp_v21 = temp_v21 + 1;
  } while (temp_v21 < 0x36);
  puVar26[4] = 0;
  *puVar26 = 8;
  puVar26[3] = 0;
FUN_003e03b0:
  temp_v21 = temp_v15;
  FUN_003eebf4(temp_v15,1);
  if (-1 < temp_v21) {
    temp_v23 = DAT_00573884 | *(unsigned int *)(temp_v15 + 0x45a4);
    *(unsigned int *)(temp_v15 + 0x45a0) = DAT_00573880 | *(unsigned int *)(temp_v15 + 0x45a0);
    *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
    puVar17 = (unsigned short *)(unsigned int)*(unsigned short *)(*(int *)(temp_v15 + 0x1ffc) + temp_v21 * 0x408 + 0x166);
    FUN_0019cac4();
    sysMemClear(temp_v36,0x80);
    FUN_00100388(temp_v36,&LAB_003e04ec,*(unsigned char *)(puVar17 + 0x51),
                 *(unsigned char *)((int)puVar17 + 0xa3));
    temp_v21 = FUN_004706a8(g_aocSystem,*puVar17);
    piVar31 = (int *)(temp_v15 + 0x1ec4);
    if (temp_v21 != 0) {
      FUN_0047118c(g_aocSystem,*puVar17,piVar31,temp_v36);
    }
    else {
      FUN_002804b0(temp_v36,piVar31,0);
    }
    *puVar26 = 9;
    puVar26[4] = 0;
    puVar26[3] = 0;
    if (*piVar31 == 0) {
      puVar26 = (unsigned int *)0x0;
    }
    else {
      *puVar26 = 10;
      puVar26 = (unsigned int *)FUN_003e12a8(puVar26,temp_v15);
    }
    return puVar26;
  }
  puVar26[4] = 0;
  *puVar26 = 0x11;
  puVar26[3] = 0;
FUN_003e3188:
  if (!((*(unsigned int *)(temp_v15 + 0x45a4) & DAT_0057386c) == 0 &&
       (DAT_00573868 & *(unsigned int *)(temp_v15 + 0x45a0)) == 0)) {
    FUN_004caca0(temp_v15,1,1,0);
  }
  else {
    FUN_004caca0(temp_v15,1,1);
  }
  *puVar26 = 0x12;
  puVar26[4] = 0;
  puVar26[3] = 0;
  temp_v21 = temp_v15;
  FUN_004cb2a4(temp_v15,1);
  if (temp_v21 == 0) {
    return (unsigned int *)0x0;
  }
  FUN_003ed238(temp_v15,0x400);
  temp_v21 = 4;
  do {
    temp_v23 = *(unsigned int *)(*(int *)(temp_v15 + 0x1ed4) + temp_v21 * 0x1d0 + 0x50);
    if (((temp_v23 & 1) != 0 && (temp_v23 & 0x80) != 0) && (temp_v23 & 0x400) != 0) {
      *(char *)(temp_v15 + 0x1ed9) = *(char *)(temp_v15 + 0x1ed9) + '\x01';
    }
    temp_v21 = temp_v21 + 1;
  } while (temp_v21 < 0x36);
  puVar26[4] = 0;
  *puVar26 = 0xd;
  puVar26[3] = 0;
FUN_003e025c:
  temp_v21 = FUN_003eccd0(temp_v15);
  if ((temp_v21 != 0) &&
     (temp_v25 = temp_v15, FUN_003f0e20(temp_v15,(int)*(short *)(temp_v21 + 0x6a)), temp_v25 != 0)) {
    temp_v21 = FUN_003eca48(temp_v15,*(unsigned short *)(temp_v25 + 0x166));
    *(unsigned int *)(DAT_00573808 + 0x9c70) = *(unsigned int *)(temp_v21 + 0x34);
    if ((temp_v21 != 0) && ((*(unsigned char *)(temp_v21 + 3) & 1) != 0)) {
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      puStack_2c = (unsigned int *)0x0;
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      FUN_00100388(&uStack_58,"battle/model/en%03d_camera.bch",
                   (int)*(short *)(*(int *)(temp_v25 + 0x404) + 0x8c));
      FUN_004f2abc(DAT_00571508,&uStack_58);
      *puVar26 = 0xe;
      puVar26[4] = 0;
      puVar26[3] = 0;
      temp_v21 = FUN_004f2294(DAT_00571508);
      puVar27 = (unsigned int *)0x0;
      if (temp_v21 != 0) {
        FUN_004f1a54(DAT_00571508);
        *puVar26 = 0xf;
        puVar26[4] = 0;
        puVar26[3] = 0;
        FUN_003e1068(puVar26,temp_v15);
        puVar27 = puVar26;
      }
      return puVar27;
    }
  }
  puVar26[4] = 0;
  *puVar26 = 0xf;
  puVar26[3] = 0;
code_r0x003e1068:
  temp_v21 = FUN_003eccd0(temp_v15);
  if ((((temp_v21 != 0) &&
       (temp_v25 = temp_v15, FUN_003f0e20(temp_v15,(int)*(short *)(temp_v21 + 0x6a)), temp_v25 != 0)) &&
      (temp_v21 = FUN_003eca48(temp_v15,*(unsigned short *)(temp_v25 + 0x166)), temp_v21 != 0)) &&
     ((*(unsigned char *)(temp_v21 + 3) & 2) != 0)) {
    FUN_003e9b74(temp_v15);
    *puVar26 = 0x10;
    puVar26[4] = 0;
    puVar26[3] = 0;
    temp_v21 = FUN_003ece50(temp_v15);
    if (temp_v21 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_003eaa9c(temp_v15);
  }
  puVar26[4] = 0;
  puVar26[3] = 0;
  *puVar26 = 0x14;
FUN_003e1454:
  temp_v9 = 0;
  if ((0 < *(int *)(temp_v15 + 0xf0)) && (temp_v21 = FUN_0046ebf0(g_aocSystem), temp_v21 != 0)) {
    temp_v9 = 1;
  }
  sysMemClear(temp_v35,0x80);
  temp_v18 = FUN_003efa38(temp_v15);
  FUN_002e342c(temp_v35,temp_v18);
  if ((!temp_v9) && (temp_v21 = FUN_00240c34(temp_v35), temp_v21 == 0)) {
    FUN_003edbd0(temp_v15);
    FUN_003f0d50(temp_v15);
    FUN_003edb9c(temp_v15);
    FUN_003f0b28(temp_v15);
    words10CopyHighToLow(DAT_00571508);
    temp_v21 = FUN_003e0f94(puVar26,temp_v15);
    puVar36 = (unsigned int *)(temp_v15 + 0x45a0);
    if ((temp_v21 == 1) || (temp_v21 == 2 || temp_v21 == 5)) {
      temp_v21 = 4;
      do {
        temp_v25 = *(int *)(temp_v15 + 0x1ed4) + temp_v21 * 0x1d0;
        if ((((*(unsigned int *)(temp_v25 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v25 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v25 + 0x58) & 8) != 0)) &&
           (*(unsigned int *)(temp_v25 + 0x58) = *(unsigned int *)(temp_v25 + 0x58) & 0xfffffff7,
           (*(unsigned short *)(temp_v25 + 0x60) & 0x800) == 0)) {
          temp_v19 = temp_v15;
          FUN_001568f8(temp_v15,(int)*(short *)(temp_v25 + 0x6a));
          temp_v19 = FUN_003f10c8(temp_v15,*(unsigned short *)(temp_v19 + 2));
          if (temp_v19 == 0) {
            *(unsigned short *)(temp_v25 + 0x60) = *(unsigned short *)(temp_v25 + 0x60) | 0x800;
          }
        }
        temp_v21 = temp_v21 + 1;
      } while (temp_v21 < 0x36);
      uStack_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      FUN_004fb43c(0,0,0x100021b);
      FUN_003ed6e8(temp_v15);
      FUN_003f26d4(temp_v15);
      temp_v23 = *puVar36 | DAT_00573878 | DAT_00573890;
      *(unsigned int *)(temp_v15 + 0x45a4) = *(unsigned int *)(temp_v15 + 0x45a4) | DAT_0057387c | DAT_00573894;
      *puVar36 = temp_v23;
    }
    puVar26[4] = 0;
    *puVar26 = 0x17;
    puVar26[3] = 0;
    temp_v21 = FUN_003e0f94(puVar26,temp_v15);
    if ((temp_v21 != 2 && temp_v21 != 5) &&
       ((*puVar36 & DAT_00573888) == 0 && ((unsigned int)DAT_0057388c & *(unsigned int *)(temp_v15 + 0x45a4)) == 0)) {
      FUN_002e5924(2);
      temp_v23 = *(unsigned int *)(temp_v15 + 0x45a4) | (unsigned int)DAT_0057388c;
      *puVar36 = *puVar36 | DAT_00573888;
      *(unsigned int *)(temp_v15 + 0x45a4) = temp_v23;
    }
    FUN_003e0bb8(puVar26,temp_v15);
    return puVar26;
  }
  puVar26[4] = 0;
  *puVar26 = 0x15;
  puVar26[3] = 0;
  puVar26 = (unsigned int *)FUN_003e1390(puVar26,temp_v15);
  return puVar26;
}

} /* extern "C" */
