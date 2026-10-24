/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f91c` (_code @ 0x10f91c, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN18OnlineResultRecordaSERKS_(int, unsigned char *);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(unsigned char [12], int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern unsigned char LAB_0010f57d; /* 0x10f57d */
extern unsigned char LAB_0010f9a0; /* 0x10f9a0 */

extern unsigned char *_ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
/* Supplied declaration required: _ZN18OnlineResultRecordaSERKS_. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern int _ZNK18OnlineResultRecord7isValidEv(void);


void FUN_0010f91c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  unsigned char temp_v3 [12];
  int temp_v4;
  
  if (*(char *)(param_1 + 0x168) != '\x02') {
    FUN_002ea41e(temp_v3,param_1 + 0x158);
    puVar1 = temp_v3;
    _ZN18OnlineResultRecordaSERKS_(param_1 + 200,puVar1);
  }
  else if (*(char *)(param_1 + 0x98) == '\0') {
    puVar1 = (unsigned char *)(param_1 + 0xbc);
    temp_v0 = _ZNK18OnlineResultRecord7isValidEv();
    if (temp_v0 != 0) {
      temp_v4 = 0x10001;
      puVar1 = (unsigned char *)_ZN12OnlineResultC1ERKj(temp_v3,(unsigned int *)&temp_v4);
    }
    _ZN18OnlineResultRecordaSERKS_(param_1 + 200,puVar1);
  }
  if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0xd8) + 4))();
  }
  *(unsigned int *)(param_1 + 0xd8) = 0;
  temp_v1 = FUN_002ea3c0(temp_v2,&LAB_0010f57d,0,&LAB_0010f9a0);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}

} /* extern "C" */
