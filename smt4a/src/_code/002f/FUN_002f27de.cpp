/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f27de` (_code @ 0x2f27de, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7232(unsigned int);
int wordMoveOut_002f1324(unsigned char [4], int *, int);
int FUN_002f3ff0(int, unsigned char [4]);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: wordMoveOut_002f1324. */
extern int wordRefsDiffer_002f3e5a(int *, unsigned int *);
/* Supplied declaration required: FUN_002f3ff0. */


void FUN_002f27de(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  unsigned char temp_v3 [12];
  int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v3,temp_v0);
  temp_v4 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  while( 1 ) {
    temp_v5 = *(unsigned int *)(param_1 + 0x14);
    temp_v1 = wordRefsDiffer_002f3e5a(&temp_v4,(unsigned int *)&temp_v5);
    if (temp_v1 == 0) break;
    FUN_002e7232(*(unsigned int *)(temp_v4 + 0x18));
    wordMoveOut_002f1324(temp_v2,&temp_v4,0);
    FUN_002f3ff0(param_1 + 4,temp_v2);
  }
  *(unsigned short *)(param_1 + 0x30) = *(unsigned short *)(param_1 + 0x28);
  *(unsigned short *)(param_1 + 0x38) = *(unsigned short *)(param_1 + 0x28);
  *(unsigned int *)(param_1 + 0x3c) = 0;
  FUN_002e6e5c(temp_v3);
  return;
}

} /* extern "C" */
