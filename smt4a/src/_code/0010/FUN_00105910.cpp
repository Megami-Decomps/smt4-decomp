/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105910` (_code @ 0x105910, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7614(unsigned char [16], unsigned int);
int FUN_002ea446(int, int);
int FUN_002ec75c(int *);
int FUN_002ec774(int, unsigned int, int, int *);
int FUN_002ec864(int, int *);
int FUN_002ec890(int *);
int FUN_002ec8a8(int, unsigned char [16]);
int FUN_002ec8f8(void);
int FUN_002ec934(int *, int, unsigned int);
int FUN_002ec964(int, unsigned int, int, int *);
int strDestroy(unsigned char [16]);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: FUN_002ea446. */
/* Supplied declaration required: FUN_002ec75c. */
/* Supplied declaration required: FUN_002ec774. */
/* Supplied declaration required: FUN_002ec864. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: FUN_002ec8f8. */
/* Supplied declaration required: FUN_002ec934. */
/* Supplied declaration required: FUN_002ec964. */
/* Supplied declaration required: strDestroy. */


void FUN_00105910(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2 [16];
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  if ((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x90) != 0)) {
    FUN_002ec75c(&temp_v5);
    temp_v0 = *(int *)(param_1 + 0x90);
    FUN_002ec774(temp_v0,*(unsigned int *)(param_1 + 0x68),param_1 + 0x70,&temp_v5);
    if (temp_v0 != 0) {
      FUN_002ec864(param_1,&temp_v5);
      FUN_002ec890(&temp_v5);
      return;
    }
    FUN_002ec890(&temp_v5);
  }
  temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x40) + 0x1c))();
  FUN_002e7614(temp_v2,temp_v1);
  while (*(unsigned int *)(param_1 + 100) < *(unsigned int *)(param_1 + 0x68)) {
    temp_v3 = 0;
    temp_v4 = 0;
    (**(romwright_code **)(**(int **)(param_1 + 0x40) + 8))
              (*(int **)(param_1 + 0x40),param_1 + 0x44,temp_v2);
    FUN_002ec8a8(param_1 + 0x44,temp_v2);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    temp_v5 = *(unsigned int *)(param_1 + 0x30);
    temp_v6 = *(unsigned int *)(param_1 + 0x34);
    puVar3 = (unsigned int *)&temp_v5;
    FUN_002ec8f8();
    if ((puVar3 == (unsigned int *)0x0) || ((*(unsigned int *)(param_1 + 100) & 0x3f) == 0)) break;
  }
  if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68)) {
    FUN_002ec934(&temp_v5,*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x5c),
                 *(unsigned int *)(param_1 + 0x54));
    FUN_002ec864(param_1,&temp_v5);
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_002ec964(*(int *)(param_1 + 0x90),*(unsigned int *)(param_1 + 0x68),param_1 + 0x70,&temp_v5
                  );
    }
    FUN_002ec890(&temp_v5);
  }
  else {
    FUN_002ea446(param_1,0);
  }
  strDestroy(temp_v2);
  return;
}

} /* extern "C" */
