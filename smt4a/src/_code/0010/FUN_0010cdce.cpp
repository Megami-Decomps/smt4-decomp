/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cdce` (_code @ 0x10cdce, 0xae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107630(unsigned int, int);
int FUN_0012430a(void);
int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7232(int);
int FUN_002ef790(void);
int FUN_002f143e(int **);
int FUN_002f1448(int **, int *);
int FUN_002f1486(int **);
int FUN_002f6c70(int, unsigned char [8]);
int FUN_002f6c82(int, int *);
int wordMoveOut_002f6d7c(unsigned char [8], int *, int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_00107630. */
/* Supplied declaration required: FUN_0012430a. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002ef790. */
/* Supplied declaration required: FUN_002f143e. */
/* Supplied declaration required: FUN_002f1448. */
/* Supplied declaration required: FUN_002f1486. */
/* Supplied declaration required: FUN_002f6c70. */
/* Supplied declaration required: FUN_002f6c82. */
extern int wordRefsDiffer_002f6d4c(int *, unsigned int *);
/* Supplied declaration required: wordMoveOut_002f6d7c. */


void FUN_0010cdce(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *temp_v4;
  int *temp_v5;
  unsigned char temp_v6 [12];
  int temp_v7;
  unsigned char temp_v8 [8];
  
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v6,temp_v0);
  FUN_002f143e(&temp_v4);
  temp_v2 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  while( 1 ) {
    temp_v7 = *(unsigned int *)(param_1 + 0x30);
    temp_v1 = wordRefsDiffer_002f6d4c(&temp_v2,(unsigned int *)&temp_v7);
    if (temp_v1 == 0) break;
    temp_v1 = *(int *)(*(int *)(temp_v2 + 0x18) + 0x118);
    FUN_0012430a();
    if (temp_v1 == 0) {
      temp_v1 = *(int *)(*(int *)(temp_v2 + 0x18) + 0x118);
      FUN_002ef790();
      if (temp_v1 == 0) break;
    }
    temp_v3 = *(unsigned int *)(temp_v2 + 0x18);
    wordMoveOut_002f6d7c(temp_v8,&temp_v2,0);
    FUN_002f6c70(param_1 + 0x20,temp_v8);
    FUN_002f6c82(param_1 + 4,&temp_v3);
    FUN_002f1448(&temp_v4,&temp_v3);
  }
  for (; temp_v5 != temp_v4; temp_v4 = temp_v4 + 1) {
    temp_v1 = *temp_v4;
    FUN_00107630(*(unsigned int *)(temp_v1 + 0x11c),temp_v1);
    FUN_002e7232(temp_v1);
  }
  FUN_002f1486(&temp_v4);
  FUN_002e6e5c(temp_v6);
  return;
}

} /* extern "C" */
