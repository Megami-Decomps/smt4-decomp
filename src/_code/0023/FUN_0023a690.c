/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a690` (_code @ 0x23a690, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_0034f0a8. */
extern unsigned int *FUN_00351d48(void);


void FUN_0023a690(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int uStack_18;
  unsigned char temp_v3 [8];
  
  do {
    temp_v1 = param_1;
    FUN_0034f0a8();
    if (temp_v1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
      temp_v1 = 0;
      temp_v0 = 0;
      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
        do {
          temp_v2 = *(int *)(param_1 + 0x5c) + temp_v0;
          temp_v0 = temp_v0 + 1;
          if (*(char *)(param_1 + (temp_v2 & 3) * 0x14 + 0x18) == '\x01') {
            temp_v1 = temp_v1 + 1;
          }
        } while (temp_v0 < (unsigned int)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c)));
      }
      if (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c) == temp_v1) {
        return;
      }
    }
    puVar2 = (unsigned int *)FUN_00351d48();
    uStack_18 = *puVar2;
    puVar3 = temp_v3;
    FUN_002c42fc(puVar3,&uStack_18,1,0,0xffffffff,0xffffffff);
    if ((int)puVar3 < 0) {
      FUN_002c5468();
    }
  } while( 1 );
}
