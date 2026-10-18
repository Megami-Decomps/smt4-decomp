/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011af98` (_code @ 0x11af98, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_00307020. */


void FUN_0011af98(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned char *puVar3;
  
  puVar3 = temp_v2;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    puVar4 = (unsigned int *)&temp_v3;
    temp_v3 = 0x10001;
  }
  else {
    puVar4 = (unsigned int *)&temp_v5;
    temp_v5 = 0x80010004;
    puVar3 = temp_v4;
  }
  temp_v1 = FUN_002e7908(puVar3,puVar4);
  FUN_00307020(param_1,temp_v1);
  return;
}
