/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b634` (_code @ 0x12b634, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char *FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002f4e86(void);
/* Supplied declaration required: FUN_0030c96e. */


void FUN_0012b634(int param_1)

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
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    puVar2 = (unsigned char *)(param_1 + 0x1d0);
    temp_v0 = FUN_002f4e86();
    if (temp_v0 == 0) {
      FUN_0030c96e(param_1,puVar2);
      return;
    }
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      FUN_002ea41e(temp_v3,param_1 + 0x90);
      puVar2 = temp_v3;
      FUN_0030c96e(param_1,puVar2);
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
  puVar2 = (unsigned char *)FUN_002e7908(puVar3,puVar4);
  FUN_0030c96e(param_1,puVar2);
  return;
}
