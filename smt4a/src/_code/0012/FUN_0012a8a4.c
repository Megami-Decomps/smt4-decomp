/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a8a4` (_code @ 0x12a8a4, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int *FUN_002e7908(unsigned int *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_0030cae0. */


void FUN_0012a8a4(int param_1)

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
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xa8) != '\x02') {
      if (*(char *)(param_1 + 400) != '\0') {
        temp_v5[0] = 0x80050017;
      }
      else {
        if (*(char *)(param_1 + 0x191) == '\0') {
          FUN_002ea41e(temp_v1,param_1 + 0x98);
          FUN_0030cae0(param_1,puVar2);
          return;
        }
        temp_v5[0] = 0x80690001;
      }
      puVar2 = temp_v5;
      puVar3 = temp_v4;
    }
    else {
      if (*(int *)(param_1 + 0x18c) != *(int *)(param_1 + 0x13c)) {
        temp_v4[0] = 0x80690001;
        puVar2 = temp_v4;
        puVar2 = (unsigned int *)FUN_002e7908(puVar3,puVar2);
        FUN_0030cae0(param_1,puVar2);
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
  puVar2 = (unsigned int *)FUN_002e7908(puVar3,puVar2);
  FUN_0030cae0(param_1,puVar2);
  return;
}
