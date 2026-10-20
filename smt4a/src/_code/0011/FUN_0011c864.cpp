/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c864` (_code @ 0x11c864, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strInit(...);
int FUN_002eb588(int *);
int FUN_002ec890(unsigned char [28]);
int FUN_002ec934(unsigned char [28], int, unsigned int);
int strDestroy(...);
int FUN_002ee524(unsigned char [24], unsigned char [40]);
int FUN_002ee54c(unsigned char [24]);
int FUN_002f7ac4(unsigned int, unsigned char [28]);
int FUN_00311248(unsigned char [24], int *, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
} param_1_stack;

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: strInit. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ec934. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ee524. */
/* Supplied declaration required: FUN_002ee54c. */
extern unsigned int FUN_002f7a28(void);
/* Supplied declaration required: FUN_002f7ac4. */
/* Supplied declaration required: FUN_00311248. */


int FUN_0011c864(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [40];
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [24];
  unsigned char temp_v12 [28];
  
  *(unsigned int *)(param_1 + 4) = 0;
  temp_v0 = FUN_002e760a(0xb0);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002f7a28();
  }
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    (**(romwright_code **)(*piVar3 + 4))(piVar3);
  }
  *(unsigned int *)(param_1 + 4) = temp_v1;
  strInit(temp_v6);
  FUN_002ee524(temp_v11,temp_v6);
  FUN_002eb588(&temp_v9);
  temp_v8 = temp_v10;
  temp_v7 = temp_v9;
  FUN_00311248(temp_v11,&temp_v7,8,1);
  strInit(temp_v2);
  (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v6,temp_v2);
  FUN_002ec934(temp_v12,temp_v3 + temp_v5,temp_v4);
  FUN_002f7ac4(*(unsigned int *)(param_1 + 4),temp_v12);
  FUN_002ec890(temp_v12);
  strDestroy(temp_v2);
  FUN_002ee54c(temp_v11);
  strDestroy(temp_v6);
  return param_1;
}

} /* extern "C" */
