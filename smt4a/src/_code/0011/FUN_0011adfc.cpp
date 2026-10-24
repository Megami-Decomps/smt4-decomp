/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011adfc` (_code @ 0x11adfc, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(unsigned char [12], int);
int FUN_00306ef8(int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char *_ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea41e. */
extern int _ZNK18OnlineResultRecord7isValidEv(void);
/* Supplied declaration required: FUN_00306ef8. */


void FUN_0011adfc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  unsigned char temp_v1 [12];
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned int temp_v4 [2];
  
  puVar3 = temp_v1;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      FUN_002ea41e(temp_v3,param_1 + 0x90);
      puVar2 = temp_v3;
      FUN_00306ef8(param_1,puVar2);
      return;
    }
    puVar2 = (unsigned char *)(param_1 + 0x178);
    temp_v0 = _ZNK18OnlineResultRecord7isValidEv();
    if (temp_v0 == 0) {
      FUN_00306ef8(param_1,puVar2);
      return;
    }
    puVar4 = (unsigned int *)&temp_v2;
    temp_v2 = 0x10001;
  }
  else {
    puVar4 = temp_v4;
    temp_v4[0] = 0x80010004;
    puVar3 = temp_v3;
  }
  puVar2 = (unsigned char *)_ZN12OnlineResultC1ERKj(puVar3,puVar4);
  FUN_00306ef8(param_1,puVar2);
  return;
}

} /* extern "C" */
