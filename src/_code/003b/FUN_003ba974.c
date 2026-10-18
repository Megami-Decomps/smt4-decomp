/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba974` (_code @ 0x3ba974, 0x228 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f930; /* 0x49f930 */
extern unsigned char DAT_0049f950; /* 0x49f950 */
extern signed char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_0022b430. */
/* Supplied declaration required: FUN_0026fc24. */
/* Supplied declaration required: FUN_00276c24. */
extern int FUN_0027db38(void);
/* Supplied declaration required: FUN_0027dbfc. */
/* Supplied declaration required: FUN_0027dd94. */
/* Supplied declaration required: FUN_00285f14. */
extern int FUN_00287afc(void);
extern int FUN_00290694(void);
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002a0678. */
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c2bd0(unsigned int);


void FUN_003ba974(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = *(int *)(param_1 + 0xd6c);
  FUN_002972f8(temp_v1,*(unsigned int *)(param_1 + 0xd70));
  *(int *)(param_1 + 0xd74) = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  temp_v4 = (int)*(short *)(param_1 + 0x3c);
  temp_v0 = 0;
  temp_v1 = FUN_00290694();
  if ((temp_v1 != 0) && (temp_v1 = FUN_00287afc(), temp_v1 == 6)) {
    temp_v0 = 1;
  }
  FUN_0022b430(param_1,temp_v4,0xffffffff);
  *(unsigned int *)(param_1 + 0x50) = 0x43c80000;
  *(unsigned int *)(param_1 + 0x54) = 0x43700000;
  temp_v1 = FUN_002c2bd0(0);
  if (temp_v1 == 3) {
    FUN_002a0678(0,10);
  }
  temp_v1 = FUN_002c2bd0(1);
  if (temp_v1 == 3) {
    FUN_002a0678(1,10);
  }
  *(unsigned int *)(param_1 + 0xdb0) = 0;
  FUN_0026fc24();
  if (temp_v4 == 3 || temp_v4 == 4) {
    temp_v1 = 0x1000063;
  }
  else {
    temp_v1 = 0x1000052;
  }
  temp_v2 = FUN_002c0ba8(0x18c);
  if (temp_v2 != 0) {
    temp_v1 = 0x1000057;
  }
  if (*(int *)(param_1 + 0x34) != temp_v1) {
    *(int *)(param_1 + 0x34) = temp_v1;
    FUN_002a0640(temp_v1,0,0x3c);
  }
  if (DAT_0049fc14 != '\0') {
    if (temp_v0) {
      temp_v3 = FUN_0027dbfc();
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
    else if ((*(char *)(DAT_00432fc8 + 0xc1) == '\0') && (temp_v1 = FUN_0027dbfc(), temp_v1 != 6)) {
      temp_v1 = FUN_0027dbfc();
      if (temp_v1 != 1) {
        temp_v1 = FUN_0027dbfc();
        if (temp_v1 == 5) {
          FUN_00285f14(1);
          FUN_0027dd94(0);
          *(unsigned int *)(param_1 + 0xdb0) = 4;
        }
      }
      else {
        FUN_00285f14(1);
        FUN_0027dd94(0);
        temp_v1 = FUN_0027db38();
        if (temp_v1 != 0) {
          *(unsigned int *)(param_1 + 0xdb0) = 3;
        }
        else {
          *(unsigned int *)(param_1 + 0xdb0) = 4;
        }
      }
    }
    else {
      FUN_00285f14(2);
      FUN_0027dd94(0);
    }
  }
  DAT_0049f91c = temp_v4 + 200;
  DAT_0049f950 = 0;
  DAT_0049f930 = 3;
  DAT_0049fc14 = 0;
  FUN_00276c24(0xffffffff,0xffffffff);
  return;
}
