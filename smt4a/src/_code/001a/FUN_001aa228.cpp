/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa228` (_code @ 0x1aa228, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001af27c(int *);
int FUN_001af330(int *, int);
int aeabi_uidivmod(unsigned int, int, int, unsigned int, int);
int hasExclusiveAccess(int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001af27c. */
/* Supplied declaration required: FUN_001af330. */
/* Supplied declaration required: aeabi_uidivmod. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_001aa228(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  piVar3 = param_1 + 0xc;
  do {
    temp_v1 = *piVar3 + 1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
  } while (!temp_v0);
  *piVar3 = temp_v1;
  while( 1 ) {
    piVar3 = param_1 + 5;
    nn_os_CriticalSection_Enter((unsigned int)piVar3);
    temp_v2 = param_1[10];
    if (temp_v2 < (unsigned int)param_1[8]) break;
    nn_os_CriticalSection_Leave((unsigned int)piVar3);
    FUN_001af27c(param_1 + 3);
  }
  aeabi_uidivmod(param_1[9] + temp_v2,param_1[8],param_1[9],temp_v2,temp_v1);
  *(unsigned int *)(*param_1 + temp_v3 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    FUN_001af330(param_1 + 1,1);
  }
  nn_os_CriticalSection_Leave((unsigned int)piVar3);
  param_1 = param_1 + 0xc;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = *param_1 - 1;
  return;
}

} /* extern "C" */
