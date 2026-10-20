/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef584` (_code @ 0x2ef584, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121f78(unsigned int);
int FUN_0012e494(int **, int, int *);
int FUN_0012fce0(int **, int, int *);
int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7232(int);
int FUN_002e75fa(int);
int FUN_002f6c54(int *, unsigned int);
int FUN_002f6c70(int, int **);
int FUN_002f6c82(int, int *);
int FUN_002f6d1c(int **);

/* stack frame of param_2: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00121f78. */
/* Supplied declaration required: FUN_0012e494. */
/* Supplied declaration required: FUN_0012fce0. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e75fa. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002f6c54. */
/* Supplied declaration required: FUN_002f6c70. */
/* Supplied declaration required: FUN_002f6c82. */
/* Supplied declaration required: FUN_002f6d1c. */
extern int wordRefsDiffer_002f6d4c(int **, int *);
extern int FUN_002f6d5c(int, int *, int *);
extern int wordRefsEqual_002f6d6c(int **, unsigned int *);


void FUN_002ef584(int param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int *piVar5;
  int *temp_v3;
  int temp_v4;
  int temp_v5;
  int *temp_v6;
  unsigned int temp_v7 [2];
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [12];
  int iStack_1c;
  int temp_v14;
  
  iStack_1c = param_1;
  temp_v14 = param_2;
  temp_v1 = FUN_002ea714();
  FUN_002e6e34(temp_v13,temp_v1);
  temp_v5 = param_1 + 0x20;
  if ((*(char *)(param_1 + 0x3c) != '\0') &&
     (((temp_v0 = *(unsigned short *)(temp_v14 + 0x3c) & 0xf, (*(unsigned short *)(temp_v14 + 0x3c) & 0xf) == 0 ||
       (temp_v0 == 1)) || (temp_v0 == 3)))) {
    *(unsigned int *)(*(int *)(temp_v14 + 0x118) + 4) = 1;
    temp_v2 = *(int *)(temp_v14 + 0x118);
    temp_v4 = 0;
    temp_v3 = (int *)0x1;
    *(unsigned int *)(temp_v2 + 0x14) = 0;
    *(unsigned int *)(temp_v2 + 0x10) = 1;
  }
  FUN_00121f78(*(unsigned int *)(temp_v14 + 0x118));
  FUN_002e75fa(temp_v14);
  temp_v3 = &temp_v14;
  temp_v4 = param_1 + 0x1d;
  piVar3 = (int *)(*(int **)(param_1 + 0x14))[1];
  temp_v6 = *(int **)(param_1 + 0x14);
  while (piVar5 = piVar3, piVar5 != (int *)0x0) {
    temp_v2 = FUN_002f6d5c(temp_v4,piVar5 + 4,temp_v3);
    if (temp_v2 != 0) {
      piVar3 = (int *)piVar5[3];
    }
    else {
      piVar3 = (int *)piVar5[2];
      temp_v6 = piVar5;
    }
  }
  temp_v7[0] = *(unsigned int *)(param_1 + 0x14);
  temp_v2 = wordRefsEqual_002f6d6c(&temp_v6,temp_v7);
  if ((temp_v2 != 0) ||
     (temp_v2 = FUN_002f6d5c(temp_v4,temp_v3,temp_v6 + 4), piVar3 = temp_v6, temp_v2 != 0)) {
    piVar3 = *(int **)(param_1 + 0x14);
  }
  if (piVar3 != *(int **)(param_1 + 0x14)) {
    temp_v3 = *(int **)(*(int *)(param_1 + 0x30) + 8);
    while( 1 ) {
      temp_v4 = *(int *)(param_1 + 0x30);
      temp_v2 = wordRefsDiffer_002f6d4c(&temp_v3,&temp_v4);
      if (temp_v2 == 0) break;
      if (temp_v3[6] == temp_v14) {
        temp_v6 = temp_v3;
        FUN_002f6c70(temp_v5,&temp_v6);
        FUN_002f6c82(param_1 + 4,&temp_v14);
        FUN_002e7232(temp_v14);
        break;
      }
      FUN_002f6d1c(&temp_v3);
    }
  }
  FUN_0012fce0(&temp_v3,param_1 + 4,&temp_v14);
  temp_v6 = temp_v3;
  temp_v7[0] = romwright_piece_3_1((((unsigned int)(temp_v7[0]) >> 8) & 0xffffffU),(unsigned char)temp_v4);
  FUN_002f6c54(&temp_v8,*(unsigned int *)(temp_v14 + 0x118));
  temp_v10 = temp_v8;
  temp_v11 = temp_v9;
  temp_v12 = temp_v14;
  FUN_0012e494(&temp_v3,temp_v5,&temp_v10);
  FUN_002e6e5c(temp_v13);
  return;
}

} /* extern "C" */
