/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a4f8` (_code @ 0x23a4f8, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c526c(void);
int FUN_0034ee98(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_0034ee98. */
extern unsigned int *FUN_00351b38(void);


void FUN_0023a4f8(int param_1)

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
    FUN_0034ee98();
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
    puVar2 = (unsigned int *)FUN_00351b38();
    uStack_18 = *puVar2;
    puVar3 = temp_v3;
    FUN_002c40f8(puVar3,&uStack_18,1,0,0xffffffff,0xffffffff);
    if ((int)puVar3 < 0) {
      FUN_002c526c();
    }
  } while( 1 );
}

} /* extern "C" */
