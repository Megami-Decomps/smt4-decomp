/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a548` (_code @ 0x11a548, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00117300(int, unsigned int);
int FUN_002e7232(void);
int FUN_002e9afe(int, unsigned int);
int FUN_002ea43c(int);
int FUN_00306e7a(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00117300. */
/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002ea43c. */
extern int FUN_002ea6fc(void);
/* Supplied declaration required: FUN_00306e7a. */


void FUN_0011a548(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned char temp_v2 [12];
  unsigned int temp_v3 [2];
  
  if (*(int *)(param_1 + 0x2b8) != 0) {
    FUN_002e7232();
    *(unsigned int *)(param_1 + 0x2b8) = 0;
  }
  temp_v0 = FUN_002ea6fc();
  if (temp_v0 != 0) {
    FUN_00306e7a(*(int *)(param_1 + 0xc0));
    temp_v0 = *(int *)(param_1 + 0xc0);
    FUN_00117300(temp_v0,*(unsigned int *)(param_1 + 0xc4));
    if (temp_v0 == 0) {
      temp_v3[0] = 0x8005000a;
      temp_v1 = FUN_002e7908(temp_v2,temp_v3);
      FUN_002e9afe(param_1 + 0x228,temp_v1);
    }
    piVar3 = *(int **)(param_1 + 0x1a0);
    if (piVar3 != (int *)0x0) {
      (**(romwright_code **)(*piVar3 + 0x8c))(piVar3,*(int *)(param_1 + 0xb8) + 0x34);
    }
  }
  *(unsigned char *)(param_1 + 0x3b) = 5;
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
