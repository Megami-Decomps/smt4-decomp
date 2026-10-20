/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b8a8` (_code @ 0x10b8a8, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int vectorCopyHeader(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: vectorCopyHeader. */
extern int FUN_002ea704(void);


void FUN_0010b8a8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  int *piVar4;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [12];
  int temp_v4;
  
  temp_v0 = FUN_002ea704();
  piVar4 = (int *)(temp_v0 + ((int)*(unsigned int *)(param_1 + 0xb8) >> 1));
  if ((*(unsigned int *)(param_1 + 0xb8) & 1) != 0) {
    pcVar3 = *(romwright_code **)(*piVar4 + *(int *)(param_1 + 0xb4));
  }
  else {
    pcVar3 = *(romwright_code **)(param_1 + 0xb4);
  }
  temp_v0 = (*pcVar3)(piVar4);
  FUN_002e6e34(temp_v2,param_1 + 0x7c);
  if (temp_v0 == 0) {
    temp_v4 = 0x80050014;
  }
  else {
    temp_v4 = 0x10001;
  }
  temp_v1 = FUN_002e7908(temp_v3,(unsigned int *)&temp_v4);
  vectorCopyHeader(param_1 + 0x6c,temp_v1);
  FUN_002e6e5c(temp_v2);
  return;
}

} /* extern "C" */
