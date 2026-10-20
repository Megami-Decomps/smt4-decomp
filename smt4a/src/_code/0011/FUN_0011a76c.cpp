/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a76c` (_code @ 0x11a76c, 0x12a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(unsigned char [8]);
int FUN_002e9afe(int, unsigned int);
int FUN_002ea43c(int);
int FUN_002ea928(int);
int FUN_002ea974(...);
int FUN_002ea9c0(unsigned char [104], unsigned int);
int FUN_002ea9dc(unsigned char [104]);
int FUN_002eb2ec(unsigned char [104], unsigned int);
int FUN_002ee5b8(unsigned char *, unsigned char [104]);
int FUN_002ee938(unsigned char [8], int);
int FUN_002f4ffc(unsigned char **);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
} param_1_stack;

extern unsigned char DAT_00558dd4; /* 0x558dd4 */
extern unsigned char DAT_00559748; /* 0x559748 */

extern unsigned int FUN_001237f8(int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea928. */
extern unsigned int FUN_002ea93c(int);
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9c0. */
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002eb2ec. */
/* Supplied declaration required: FUN_002ee5b8. */
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002eea7c(unsigned char *);
/* Supplied declaration required: FUN_002f4ffc. */
extern unsigned int FUN_002fd5c4(void);
extern int FUN_002fd5d4(int *, unsigned char *);
extern int FUN_002fd624(int);
extern int *FUN_00306e84(int, unsigned int);


void FUN_0011a76c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned char temp_v4 [8];
  unsigned char *temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [104];
  unsigned int temp_v8;
  int temp_v9;
  unsigned char *temp_v10;
  unsigned char *temp_v11;
  unsigned char *temp_v12;
  unsigned char temp_v13 [104];
  unsigned char temp_v14 [8];
  
  temp_v1 = param_1 + 0x234;
  temp_v2 = FUN_002fd5c4();
  *(unsigned int *)(param_1 + 0x2b4) = temp_v2;
  temp_v2 = FUN_001237f8(temp_v1);
  *(unsigned int *)(param_1 + 0x2b0) = temp_v2;
  FUN_002ee938(temp_v14,temp_v1);
  temp_v3 = FUN_002eea7c(temp_v14);
  if (((temp_v3 == 0) || (temp_v3 = FUN_002fd624(temp_v1), temp_v3 == 0)) ||
     (temp_v3 = FUN_002ea928(temp_v1), temp_v3 == 0)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  FUN_002e9318(temp_v14);
  if (temp_v0) {
    FUN_002ea974(temp_v13);
    temp_v2 = FUN_002ea93c(temp_v1);
    FUN_002ea9c0(temp_v13,temp_v2);
    temp_v2 = FUN_002ea928(temp_v1);
    FUN_002eb2ec(temp_v13,temp_v2);
    temp_v10 = temp_v7;
    temp_v12 = &DAT_00559748;
    temp_v5 = &DAT_00559748;
    temp_v6 = temp_v6 & 0xffffff00;
    temp_v1 = FUN_002ea974();
    temp_v11 = &DAT_00558dd4;
    *(unsigned char **)(temp_v1 - 8) = &DAT_00558dd4;
    FUN_002ee5b8(temp_v10,temp_v13);
    temp_v8 = *(unsigned int *)(param_1 + 0x2b4);
    temp_v9 = param_1 + 0x1a8;
    temp_v3 = *(int *)(param_1 + 0x1b8);
    piVar5 = (int *)FUN_00306e84(temp_v9,0);
    piVar5[2] = (int)temp_v12;
    *(unsigned char *)(piVar5 + 3) = (unsigned char)temp_v6;
    temp_v1 = FUN_002fd5d4(piVar5 + 4,temp_v10);
    *(unsigned int *)(temp_v1 + 0x68) = temp_v8;
    *(unsigned char **)(temp_v1 - 8) = temp_v11;
    *piVar5 = temp_v3;
    piVar5[1] = *(int *)(temp_v3 + 4);
    **(int **)(temp_v3 + 4) = (int)piVar5;
    *(int **)(temp_v3 + 4) = piVar5;
    *(int *)(temp_v9 + 0x14) = *(int *)(temp_v9 + 0x14) + 1;
    FUN_002f4ffc(&temp_v5);
    FUN_002ea9dc(temp_v13);
  }
  if ((*(int *)(param_1 + 0x2b0) == 0) && (*(int *)(param_1 + 0x2b4) == 0)) {
    temp_v6 = 0x80050003;
    temp_v2 = FUN_002e7908(temp_v4,&temp_v6);
    FUN_002e9afe(param_1 + 0x228,temp_v2);
    *(unsigned char *)(param_1 + 0x3b) = 5;
    FUN_002ea43c(param_1);
  }
  return;
}

} /* extern "C" */
