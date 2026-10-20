/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba754` (_code @ 0x3ba754, 0x228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b29c(int, int, unsigned int);
int FUN_0026f9b4(void);
int FUN_002769b4(unsigned int, unsigned int);
int FUN_0027d98c(void);
int FUN_0027db24(int);
int FUN_00285ca4(int);
int FUN_00297060(int, unsigned int);
int FUN_002a03a0(int, int, int);
int FUN_002a03d8(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_aocMain; /* 0x432fc8 */
extern int g_gameState; /* 0x49f91c */
extern unsigned int DAT_0049f930; /* 0x49f930 */
extern unsigned char DAT_0049f950; /* 0x49f950 */
extern signed char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_0022b29c. */
/* Supplied declaration required: FUN_0026f9b4. */
/* Supplied declaration required: FUN_002769b4. */
extern int FUN_0027d8c8(void);
/* Supplied declaration required: FUN_0027d98c. */
/* Supplied declaration required: FUN_0027db24. */
/* Supplied declaration required: FUN_00285ca4. */
extern int FUN_00287894(void);
extern int FUN_002903f0(void);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002a03a0. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002c09d0(unsigned int);
extern int FUN_002c2a04(unsigned int);


void FUN_003ba754(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = *(int *)(param_1 + 0xd6c);
  FUN_00297060(temp_v1,*(unsigned int *)(param_1 + 0xd70));
  *(int *)(param_1 + 0xd74) = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  temp_v4 = (int)*(short *)(param_1 + 0x3c);
  temp_v0 = 0;
  temp_v1 = FUN_002903f0();
  if ((temp_v1 != 0) && (temp_v1 = FUN_00287894(), temp_v1 == 6)) {
    temp_v0 = 1;
  }
  FUN_0022b29c(param_1,temp_v4,0xffffffff);
  *(unsigned int *)(param_1 + 0x50) = 0x43c80000;
  *(unsigned int *)(param_1 + 0x54) = 0x43700000;
  temp_v1 = FUN_002c2a04(0);
  if (temp_v1 == 3) {
    FUN_002a03d8(0,10);
  }
  temp_v1 = FUN_002c2a04(1);
  if (temp_v1 == 3) {
    FUN_002a03d8(1,10);
  }
  *(unsigned int *)(param_1 + 0xdb0) = 0;
  FUN_0026f9b4();
  if (temp_v4 == 3 || temp_v4 == 4) {
    temp_v1 = 0x1000063;
  }
  else {
    temp_v1 = 0x1000052;
  }
  temp_v2 = FUN_002c09d0(0x18c);
  if (temp_v2 != 0) {
    temp_v1 = 0x1000057;
  }
  if (*(int *)(param_1 + 0x34) != temp_v1) {
    *(int *)(param_1 + 0x34) = temp_v1;
    FUN_002a03a0(temp_v1,0,0x3c);
  }
  if (DAT_0049fc14 != '\0') {
    if (temp_v0) {
      temp_v3 = FUN_0027d98c();
      switch(temp_v3) {
      case 0:
      case 3:
        *(unsigned int *)(param_1 + 0xdb0) = 1;
        *(unsigned char *)(param_1 + 0x6cc) = 1;
        break;
      case 4:
        *(unsigned int *)(param_1 + 0xdb0) = 2;
      }
    }
    else if ((*(char *)(g_aocMain + 0xc1) == '\0') && (temp_v1 = FUN_0027d98c(), temp_v1 != 6)) {
      temp_v1 = FUN_0027d98c();
      if (temp_v1 != 1) {
        temp_v1 = FUN_0027d98c();
        if (temp_v1 == 5) {
          FUN_00285ca4(1);
          FUN_0027db24(0);
          *(unsigned int *)(param_1 + 0xdb0) = 4;
        }
      }
      else {
        FUN_00285ca4(1);
        FUN_0027db24(0);
        temp_v1 = FUN_0027d8c8();
        if (temp_v1 != 0) {
          *(unsigned int *)(param_1 + 0xdb0) = 3;
        }
        else {
          *(unsigned int *)(param_1 + 0xdb0) = 4;
        }
      }
    }
    else {
      FUN_00285ca4(2);
      FUN_0027db24(0);
    }
  }
  g_gameState = temp_v4 + 200;
  DAT_0049f950 = 0;
  DAT_0049f930 = 3;
  DAT_0049fc14 = 0;
  FUN_002769b4(0xffffffff,0xffffffff);
  return;
}

} /* extern "C" */
