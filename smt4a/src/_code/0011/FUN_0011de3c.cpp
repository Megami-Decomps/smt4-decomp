/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011de3c` (_code @ 0x11de3c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strInit(unsigned char [32]);
int _ZN18OnlineResultRecordaSERKS_(unsigned int, unsigned int);
int FUN_002ea41e(unsigned char [32], int);
int strDestroy(unsigned char [32]);
int FUN_00301e66(unsigned int, int);
int FUN_00310d9c(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern signed char DAT_00594967; /* 0x594967 */

/* Supplied declaration required: strInit. */
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
/* Supplied declaration required: _ZN18OnlineResultRecordaSERKS_. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_00301e66. */
extern int FUN_00301e8c(unsigned int, int, unsigned char *);
/* Supplied declaration required: FUN_00310d9c. */


void FUN_0011de3c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned char temp_v6 [12];
  unsigned int temp_v7 [2];
  
  if ((*(char *)(param_1 + 0x88) == '\x02') || (DAT_00594967 != '\0')) {
    FUN_00301e66(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),param_1 + 0xd8);
    strInit(temp_v3);
    temp_v0 = FUN_00301e8c(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),
                         param_1 + 0x178,temp_v3);
    if (temp_v0 != 0) {
      temp_v7[0] = 0x10001;
      temp_v1 = _ZN12OnlineResultC1ERKj(temp_v6,temp_v7);
      temp_v2 = *(unsigned char *)(param_1 + 0x110);
    }
    else {
      temp_v5 = 0x80030065;
      temp_v1 = _ZN12OnlineResultC1ERKj(temp_v4,(unsigned int *)&temp_v5);
      _ZN18OnlineResultRecordaSERKS_(*(unsigned int *)(param_1 + 0x198),temp_v1);
      temp_v5 = 0x8003006a;
      temp_v1 = _ZN12OnlineResultC1ERKj(temp_v4,(unsigned int *)&temp_v5);
      temp_v2 = 2;
    }
    FUN_00310d9c(param_1,temp_v2,temp_v1);
    strDestroy(temp_v3);
  }
  else {
    FUN_002ea41e(temp_v3,param_1 + 0x78);
    FUN_00310d9c(param_1,*(unsigned char *)(param_1 + 0x88),temp_v3);
  }
  return;
}

} /* extern "C" */
