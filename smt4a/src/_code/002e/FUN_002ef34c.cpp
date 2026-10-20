/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef34c` (_code @ 0x2ef34c, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001085bc(unsigned int, int);
int FUN_0010ae5a(int, int, int, unsigned int);
int FUN_002e7908(...);
int FUN_002e9538(int *, int);
int FUN_002e995c(int *);
int FUN_002ea93c(int);
int FUN_002eb16e(int, int);
int FUN_002eb17c(...);
int FUN_002eb188(...);
int FUN_002eb588(int *);
int FUN_002eee90(int, int, int, int);
int FUN_002eefc4(int, int);
int FUN_002ef00c(...);

/* stack frame of param_3: 7 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int DAT_00594a04; /* 0x594a04 */

/* Supplied declaration required: FUN_001085bc. */
/* Supplied declaration required: FUN_0010ae5a. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9538. */
/* Supplied declaration required: FUN_002e995c. */
/* Supplied declaration required: FUN_002ea93c. */
extern unsigned int FUN_002eacbc(int);
/* Supplied declaration required: FUN_002eb16e. */
/* Supplied declaration required: FUN_002eb17c. */
/* Supplied declaration required: FUN_002eb188. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eb6ae(int, unsigned int);
extern int FUN_002eed8c(int);
extern int *FUN_002eee88(int, unsigned char);
/* Supplied declaration required: FUN_002eee90. */
/* Supplied declaration required: FUN_002eefc4. */
/* Supplied declaration required: FUN_002ef00c. */
extern int FUN_002ef01c(unsigned int);


void FUN_002ef34c(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [2];
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int iStack_1c;
  int iStack_18;
  
  *(int *)(param_2 + 0x290) = *(int *)(param_2 + 0x290) + 1;
  temp_v9 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  temp_v0 = FUN_002eed8c(param_3);
  *(int *)(param_2 + 0x2b4) = temp_v0 + *(int *)(param_2 + 0x2b4);
  temp_v8 = param_2 + 8;
  if ((int)((unsigned int)*(unsigned short *)(param_3 + 0x3c) * 0x400000) < 0) {
    FUN_002e995c(&temp_v2);
    FUN_002e9538(&temp_v2,DAT_00594a04 + 8);
    temp_v0 = FUN_002ea93c(temp_v8);
    temp_v4 = *(unsigned short *)(temp_v0 + 6);
    FUN_002eb17c(param_3);
    *(int *)(param_2 + 0x29c) = *(int *)(param_2 + 0x29c) + 1;
    temp_v0 = FUN_002eed8c(param_3);
    *(int *)(param_2 + 0x2c0) = temp_v0 + *(int *)(param_2 + 0x2c0);
  }
  else if ((int)((unsigned int)*(unsigned short *)(param_3 + 0x3c) << 0x15) < 0) {
    FUN_002e995c(&temp_v2);
    FUN_002e9538(&temp_v2,DAT_00594a04 + 0x28);
    FUN_002eb17c(param_3,&temp_v2);
    *(int *)(param_2 + 0x2a0) = *(int *)(param_2 + 0x2a0) + 1;
    temp_v0 = FUN_002eed8c(param_3);
    *(int *)(param_2 + 0x2c4) = temp_v0 + *(int *)(param_2 + 0x2c4);
  }
  else {
    temp_v1 = FUN_002ea93c(temp_v8);
    FUN_002eb17c(param_3,temp_v1);
  }
  FUN_002eb16e(param_3 + 0x28,param_2 + 0x108);
  *(unsigned char *)(param_3 + 0x65) = *(unsigned char *)(param_2 + 0x149);
  temp_v2 = param_2 + 0x200;
  if ((int)((unsigned int)*(unsigned short *)(param_3 + 0x3c) * 0x4000000) < 0) {
    *(int *)(param_2 + 0x300) = *(int *)(param_2 + 0x300) + 1;
    temp_v0 = FUN_002eed8c(param_3);
    *(int *)(param_2 + 0x304) = temp_v0 + *(int *)(param_2 + 0x304);
    if (*(short *)(param_3 + 0x120) == 0) {
      *(int *)(param_2 + 0x31c) = *(int *)(param_2 + 0x31c) + 1;
      temp_v1 = *(unsigned int *)(param_2 + 4);
      piVar2 = (int *)FUN_002eee88(param_2 + 0x9c,*(unsigned char *)(param_3 + 0x84));
      temp_v0 = *piVar2;
      FUN_0010ae5a(temp_v0,param_3,temp_v2,temp_v1);
      if (temp_v0 == 0) {
        FUN_001085bc(temp_v9,param_2);
        return;
      }
    }
    FUN_002eee90(temp_v2,param_3,*(unsigned char *)(*(int *)(param_2 + 4) + 4),1);
    FUN_002eefc4(param_2,*(unsigned char *)(param_3 + 0x84));
  }
  else {
    *(int *)(param_2 + 0x294) = *(int *)(param_2 + 0x294) + 1;
    temp_v0 = FUN_002eed8c(param_3);
    *(int *)(param_2 + 0x2b8) = temp_v0 + *(int *)(param_2 + 0x2b8);
    temp_v0 = FUN_002eb6ae(param_3,0x10);
    if (((temp_v0 == 0) && (temp_v0 = FUN_002eb6ae(param_3,0x2000), temp_v0 == 0)) &&
       ((*(unsigned short *)(param_3 + 0x3c) & 0xf) == 2)) {
      *(int *)(param_2 + 0x298) = *(int *)(param_2 + 0x298) + 1;
      temp_v0 = FUN_002eed8c(param_3);
      *(int *)(param_2 + 700) = temp_v0 + *(int *)(param_2 + 700);
      temp_v0 = FUN_002eb6ae(param_3,0x200);
      if ((temp_v0 != 0) || (temp_v0 = FUN_002eb6ae(param_3,0x400), temp_v0 != 0)) {
        temp_v0 = FUN_002ef00c(temp_v3,*(unsigned int *)(param_2 + 0xf8));
        *(unsigned short *)(param_3 + 0x44) = *(unsigned short *)(temp_v0 + 4);
        *(short *)(*(int *)(param_2 + 0xf8) + 4) = *(short *)(*(int *)(param_2 + 0xf8) + 4) + 1;
      }
      else {
        temp_v0 = FUN_002ef00c(temp_v3);
        *(unsigned short *)(param_3 + 0x44) = *(unsigned short *)(temp_v0 + 4);
        *(short *)(param_2 + 0xec) = *(short *)(param_2 + 0xec) + 1;
      }
      FUN_002eee90(temp_v2,param_3,*(unsigned char *)(*(int *)(param_2 + 4) + 4),1);
    }
    temp_v0 = FUN_002ef01c(*(unsigned int *)(param_2 + 4));
    if (*(char *)(temp_v0 + 0x70) != '\0') {
      FUN_002eb588(&temp_v5);
      *(unsigned int *)(param_2 + 0xd8) = temp_v5;
      *(unsigned int *)(param_2 + 0xdc) = temp_v6;
    }
    temp_v0 = temp_v2 + 0x20;
    temp_v1 = FUN_002eacbc(param_2);
    temp_v2 = temp_v0;
    FUN_002eb188(*(unsigned int *)(param_2 + 4),*(unsigned short *)(param_2 + 0x8e),temp_v1,param_3);
  }
  temp_v7 = 0x10001;
  FUN_002e7908(temp_v9,&temp_v7);
  return;
}

} /* extern "C" */
