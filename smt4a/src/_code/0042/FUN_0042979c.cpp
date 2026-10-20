/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042979c` (_code @ 0x42979c, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);
int FUN_001b57a8(...);
int FUN_00426800(unsigned char *, unsigned char [24], int, unsigned int [2], unsigned int);
int FUN_004269b0(unsigned char *, int, unsigned int *);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_001b57a8. */
/* Supplied declaration required: FUN_00426800. */
/* Supplied declaration required: FUN_004269b0. */


void FUN_0042979c(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  unsigned char *puVar6;
  unsigned int temp_v4 [2];
  unsigned char temp_v5 [4];
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [24];
  unsigned char temp_v9 [28];
  
  switch((char)param_3[1]) {
  case 0:
    temp_v1 = 0x8c;
    break;
  case 1:
    temp_v1 = 0xd;
    break;
  default:
    temp_v1 = 0;
    break;
  case 3:
    temp_v1 = 0x10;
    break;
  case 4:
    temp_v1 = 0x30;
  }
  temp_v3 = *param_3;
  temp_v0 = *(unsigned char *)((int)param_3 + 5);
  temp_v2 = 0;
  if (*(char *)((int)param_3 + 6) != '\0') {
    if (*(char *)((int)param_3 + 6) == '\x01') {
      temp_v2 = 2;
    }
    else {
      FUN_00195fc8();
      temp_v2 = 0;
    }
  }
  temp_v6 = (unsigned int)temp_v0 | ((temp_v3 & 0xfffff) << 8) | (temp_v2 << 0x1c);
  temp_v4[1] = 0;
  puVar4 = temp_v5;
  temp_v4[0] = temp_v1 | 0x40000;
  temp_v7 = temp_v1 | 0x40000;
  FUN_00426800(puVar4,temp_v8,1,temp_v4,temp_v6);
  if (puVar4 == (unsigned char *)0xd8a083fa) {
    FUN_001b57a8(param_1,0xc8813894);
    return;
  }
  if ((int)puVar4 < 0) {
    FUN_001b57a8(param_1,puVar4);
    return;
  }
  puVar4 = temp_v9;
  FUN_004269b0(puVar4,1,&temp_v6);
  puVar6 = (unsigned char *)(((unsigned int)puVar4 & 0x3fc00) >> 10);
  if (((puVar6 != (unsigned char *)0x11) ||
      (puVar6 = (unsigned char *)((unsigned int)puVar4 & 0x3ff), puVar6 < (unsigned char *)0x64)) ||
     ((unsigned char *)0xb3 < puVar6)) {
    if (puVar4 != (unsigned char *)0xd8a083fa) {
      puVar6 = (unsigned char *)0xc8a0802b;
    }
    if (puVar4 != (unsigned char *)0xd8a083fa && puVar4 != puVar6) {
      if (-1 < (int)puVar4) {
        *param_2 = temp_v6;
        param_2[1] = temp_v7;
        FUN_001b57a8(param_1,0);
        return;
      }
      FUN_001b57a8(param_1,puVar4);
      return;
    }
  }
  FUN_001b57a8(param_1,0xc8813887);
  return;
}

} /* extern "C" */
