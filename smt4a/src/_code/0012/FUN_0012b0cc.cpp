/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b0cc` (_code @ 0x12b0cc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(unsigned int [3], int);
int FUN_0030ca30(int, unsigned int *);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int *_ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_0030ca30. */


void FUN_0012b0cc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1 [3];
  unsigned int temp_v2 [3];
  int temp_v3;
  unsigned int temp_v4 [3];
  unsigned int temp_v5 [2];
  unsigned int *puVar3;
  
  puVar3 = temp_v1;
  puVar2 = temp_v1;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xa8) != '\x02') {
      if (*(char *)(param_1 + 0x1cc) != '\0') {
        temp_v5[0] = 0x80050017;
      }
      else {
        if (*(char *)(param_1 + 0x1cd) == '\0') {
          FUN_002ea41e(temp_v1,param_1 + 0x98);
          FUN_0030ca30(param_1,puVar2);
          return;
        }
        temp_v5[0] = 0x80690001;
      }
      puVar2 = temp_v5;
      puVar3 = temp_v4;
    }
    else {
      if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 0x16c)) {
        temp_v4[0] = 0x80690001;
        puVar2 = temp_v4;
        puVar2 = (unsigned int *)_ZN12OnlineResultC1ERKj(puVar3,puVar2);
        FUN_0030ca30(param_1,puVar2);
        return;
      }
      puVar2 = (unsigned int *)&temp_v3;
      temp_v3 = 0x10001;
      puVar3 = temp_v2;
    }
  }
  else {
    temp_v4[0] = 0x80010004;
    puVar2 = temp_v4;
  }
  puVar2 = (unsigned int *)_ZN12OnlineResultC1ERKj(puVar3,puVar2);
  FUN_0030ca30(param_1,puVar2);
  return;
}

} /* extern "C" */
