/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1d08` (_code @ 0x1a1d08, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103c9c(void);
int FUN_00223898(unsigned char *, int);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_00297060(void);
int scrScriptProcessDestroy(void);
int FUN_002c40f8(unsigned char *, int *, int, int, int, int);
int asdMemFree(void);
int FUN_002c526c(void);
int gameDataFlagsClear(int);
int gameDataFlagsClearAndRefresh(int);
int FUN_002c5758(int);
int FUN_002e2f14(unsigned char *);
int FUN_00309a60(unsigned int, int, int, int, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern signed char DAT_0043e311; /* 0x43e311 */
extern unsigned char *DAT_0043e314; /* 0x43e314 */
extern int DAT_0043e318; /* 0x43e318 */
extern int DAT_0043e31c; /* 0x43e31c */

/* Supplied declaration required: FUN_00103c9c. */
extern int scrRunOpcodesStub(unsigned int);
extern unsigned int FUN_001c0954(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00223898. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: gameDataFlagsClear. */
/* Supplied declaration required: gameDataFlagsClearAndRefresh. */
/* Supplied declaration required: FUN_002c5758. */
/* Supplied declaration required: FUN_002e2f14. */
/* Supplied declaration required: FUN_00309a60. */


unsigned int FUN_001a1d08(unsigned int param_1,int param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned int temp_v1;
  int iStack_18;
  unsigned char temp_v2 [4];
  
  puVar1 = DAT_0043e314;
  if (DAT_0043e314 == (unsigned char *)0x0) {
    return 1;
  }
  temp_v0 = *(int *)(DAT_0043e314 + 0x50);
  if (temp_v0 != 0) {
    param_2 = *(int *)(DAT_0043e314 + 0x54);
  }
  if (temp_v0 == 0 || param_2 == 0) {
    return 0;
  }
  if (*(int *)(DAT_0043e314 + 0x58) == 0) {
    FUN_00297060();
    *(int *)(puVar1 + 0x58) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
  }
  switch(*(unsigned int *)(puVar1 + 0xc)) {
  case 0:
    if (*(int *)(DAT_0043e314 + 4) == 1) {
      temp_v1 = FUN_001c0954(0xff2ae,0);
      iStack_18 = DAT_0043e318;
      FUN_00309a60(temp_v1,6,0xff2ae,0,6,0);
    }
  case 3:
    FUN_00223898(puVar1,*puVar1);
    temp_v1 = 6;
    break;
  default:
    *(int *)(puVar1 + 0x10) = *(int *)(puVar1 + 0x10) + 1;
    return 0;
  case 6:
    if (*(int *)(puVar1 + 0x44) != 0) {
      puVar3 = temp_v2;
      iStack_18 = *(int *)(puVar1 + 0x44);
      FUN_002c40f8(puVar3,&iStack_18,1,0,0,0);
      if ((int)puVar3 < 0) {
        FUN_002c526c();
      }
      if (((unsigned int)puVar3 & 0x3ff) == 0x3fe) {
        *(int *)(puVar1 + 0x10) = *(int *)(puVar1 + 0x10) + 1;
        return 0;
      }
    }
    FUN_002e2f14(puVar1);
    if (DAT_0043e311 == '\0') {
      if (DAT_0043e31c != -1) {
        FUN_002c5758(1);
        gameDataFlagsClearAndRefresh(1);
        gameDataFlagsClear(1);
        *(unsigned int *)(puVar1 + 0xc) = 10;
        scrScriptProcessStartEntry(*(unsigned int *)(puVar1 + 0x58),DAT_0043e31c);
        *(int *)(puVar1 + 0x10) = *(int *)(puVar1 + 0x10) + 1;
        return 0;
      }
      temp_v1 = 9;
      break;
    }
    temp_v1 = 7;
    break;
  case 7:
    if (*(int *)(DAT_0043e314 + 4) == 1) {
      FUN_00103c9c();
    }
    puVar1 = DAT_0043e314;
    if (*(int *)(DAT_0043e314 + 0x58) != 0) {
      scrScriptProcessDestroy();
      *(unsigned int *)(puVar1 + 0x58) = 0;
    }
    if (*(int *)(puVar1 + 0x50) != 0) {
      asdMemFree();
      *(unsigned int *)(puVar1 + 0x50) = 0;
    }
    if (*(int *)(puVar1 + 0x54) != 0) {
      asdMemFree();
      *(unsigned int *)(puVar1 + 0x54) = 0;
    }
    if (DAT_0043e314 != (unsigned char *)0x0) {
      asdMemFree();
    }
    DAT_0043e314 = (unsigned char *)0x0;
    return 1;
  case 9:
    *(unsigned int *)(puVar1 + 0xc) = 7;
    *(int *)(puVar1 + 0x10) = *(int *)(puVar1 + 0x10) + 1;
    return 0;
  case 10:
    temp_v0 = scrRunOpcodesStub(*(unsigned int *)(puVar1 + 0x58));
    if (temp_v0 != 2) {
      *(int *)(puVar1 + 0x10) = *(int *)(puVar1 + 0x10) + 1;
      return 0;
    }
    temp_v1 = 9;
  }
  *(unsigned int *)(puVar1 + 0xc) = temp_v1;
  *(int *)(puVar1 + 0x10) = *(int *)(puVar1 + 0x10) + 1;
  return 0;
}

} /* extern "C" */
