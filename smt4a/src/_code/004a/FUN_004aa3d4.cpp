/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa3d4` (_code @ 0x4aa3d4, 0x334 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0015f858(unsigned int, int);
int FUN_00168518(int, int);
int FUN_00184310(void);
int FUN_00227af0(unsigned char [64]);
int FUN_0022fcb8(void);
int FUN_002a3258(void);
int FUN_002c13b0(int);
int FUN_002c13d4(int, int);
int FUN_002e4308(int, unsigned int, int);
int menuStateSetMode4(int);
int FUN_00388424(int, int);
int FUN_003b67d4(unsigned int);
int FUN_003b67e8(void);
int FUN_003c0d90(void);
int menuStateStartSelect(int);

/* stack frame of param_6: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp60; /* 0x60: local_60 */
} param_6_stack;

extern unsigned char LAB_004aa70c; /* 0x4aa70c */
extern unsigned char LAB_004aa71c; /* 0x4aa71c */
extern unsigned char LAB_004aa724; /* 0x4aa724 */
extern unsigned char LAB_004aa734; /* 0x4aa734 */
extern unsigned char LAB_004aa744; /* 0x4aa744 */
extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int *g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bd84(unsigned short);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00168518. */
/* Supplied declaration required: FUN_00184310. */
extern int gameGetOptions(void);
extern int FUN_001ba3d4(unsigned short);
/* Supplied declaration required: FUN_00227af0. */
/* Supplied declaration required: FUN_0022fcb8. */
/* Supplied declaration required: FUN_002a3258. */
extern int FUN_002a4860(unsigned int *);
extern int FUN_002a4894(unsigned int *);
/* Supplied declaration required: FUN_002c13b0. */
/* Supplied declaration required: FUN_002c13d4. */
/* Supplied declaration required: FUN_002e4308. */
/* Supplied declaration required: menuStateSetMode4. */
/* Supplied declaration required: FUN_00388424. */
/* Supplied declaration required: FUN_003b67d4. */
/* Supplied declaration required: FUN_003b67e8. */
/* Supplied declaration required: FUN_003c0d90. */
/* Supplied declaration required: menuStateStartSelect. */
extern int playerHasFlagBit(unsigned int);
extern int FUN_003e8430(unsigned int);
extern int FUN_003f2448(unsigned int);
extern int btlUnitGet(unsigned int);


void FUN_004aa3d4(unsigned int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                 int param_6)

{
/* irregular: 16 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  short temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [64];
  
  puVar2 = g_btlUiBlock;
  *(unsigned char *)(g_btlUiBlock + 0x3010) = 1;
  puVar2[0x3013] = param_2;
  *(short *)(puVar2 + 0x3014) = (short)param_3;
  puVar2[0x3012] = 0;
  puVar2[0x3011] = 0x28;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7[0] = 0;
  switch(puVar2[0x3013]) {
  case 1:
    if (param_4 != 0) {
      temp_v4 = FUN_002a4860(puVar2 + 0x18c4);
      temp_v1 = FUN_002a4894(puVar2 + 0x18c4);
      if (temp_v1 + temp_v4 != 0) {
        if (temp_v1 + temp_v4 == 1) {
          temp_v5 = (short)(int)temp_v7;
          FUN_00100388(temp_v7,&LAB_004aa70c);
          FUN_003b67e8();
        }
      }
      else {
        temp_v5 = (short)(int)temp_v7;
        FUN_00100388(temp_v7,&LAB_004aa70c);
        FUN_003c0d90();
      }
    }
    else if (param_6 != 0) {
      temp_v4 = gameGetOptions();
      temp_v0 = *(unsigned short *)(temp_v4 + 0x12e);
      temp_v4 = gameGetOptions();
      FUN_00168518((int)*(short *)(temp_v4 + 300),temp_v0);
      temp_v5 = (short)(int)temp_v7;
      FUN_00100388(temp_v7,&LAB_004aa70c);
      FUN_0022fcb8();
    }
    else {
      FUN_00184310();
      FUN_00100388(temp_v7,&LAB_004aa70c);
      FUN_003b67d4(param_5);
      temp_v5 = (short)param_5;
    }
    menuStateSetMode4((int)temp_v5);
    break;
  case 2:
  case 3:
    temp_v2 = FUN_0014bd84(*(unsigned short *)(puVar2 + 0x3014));
    FUN_00100388(temp_v7,&LAB_004aa71c,temp_v2);
    if (param_4 != 0) {
      temp_v4 = playerHasFlagBit(4);
      temp_v6 = temp_v4 != 0;
      temp_v2 = 1;
    }
    else {
      if ((param_6 == 0) &&
         (temp_v4 = btlUnitGet(g_btlScriptUnit),
         (*(unsigned short *)(*(int *)(temp_v4 + 0x28) + 0x110) & 0x10) != 0)) {
        temp_v6 = 1;
      }
      temp_v2 = 0;
    }
    FUN_002e4308((int)*(short *)(puVar2 + 0x3014),temp_v2,temp_v6);
    FUN_00388424((int)(short)param_5,puVar2[0x1d29] == 0);
    break;
  case 8:
    temp_v3 = (unsigned int)*(unsigned short *)(puVar2 + 0x3014);
    FUN_0015f858(temp_v3,0);
    FUN_00100388(temp_v7,&LAB_004aa71c,temp_v3);
    FUN_002c13b0((int)*(short *)(puVar2 + 0x3014));
    temp_v4 = FUN_003f2448(*puVar2);
    if ((temp_v4 != 0) && (temp_v4 = FUN_003e8430(*puVar2), temp_v4 == 0)) {
      temp_v4 = FUN_001ba3d4(*(unsigned short *)(puVar2 + 0x3014));
      FUN_002c13d4((int)*(short *)(puVar2 + 0x3014),temp_v4 + 1);
    }
    break;
  case 9:
  case 10:
  case 0xc:
    if (param_3 != 0) {
      FUN_00100388(temp_v7,&LAB_004aa724);
    }
    else {
      FUN_00100388(temp_v7,&LAB_004aa734);
    }
    FUN_002a3258();
    break;
  case 0xb:
    FUN_00100388(temp_v7,&LAB_004aa744);
    FUN_002a3258();
  }
  FUN_00227af0(temp_v7);
  menuStateStartSelect(0);
  return;
}

} /* extern "C" */
