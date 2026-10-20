/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b9fe4` (_code @ 0x1b9fe4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b3428(...);
int FUN_002e3140(...);
int FUN_002fb0d4(...);
int software_interrupt(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_001c3864(...); /* 0x1c3864 */
extern unsigned char LAB_001c45ec; /* 0x1c45ec */
extern unsigned char LAB_001c45fc; /* 0x1c45fc */
extern unsigned char LAB_001c4608; /* 0x1c4608 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001b3428. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


void FUN_001b9fe4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  int temp_v5;
  
  puVar2 = (unsigned int *)(param_1 + 0x4510);
  temp_v0 = *puVar2;
  if (temp_v0 != 0) {
    software_interrupt(0x24);
    if ((int)temp_v0 < 0) {
      FUN_002e3140();
    }
    if ((temp_v0 & 0x3ff) == 0x3fe) {
      return;
    }
  }
  FUN_001b3428(puVar2);
  temp_v1 = 4;
  temp_v2 = &LAB_001c45ec;
  temp_v3 = &LAB_001c4608;
  temp_v4 = &LAB_001c45fc;
  temp_v5 = param_1;
  FUN_002fb0d4(puVar2,&temp_v1,FUN_001c3864,&temp_v5,
               *(int *)(*(int *)(param_1 + 0x451c) + 0xc) + *(int *)(*(int *)(param_1 + 0x451c) + 8)
               ,0x11,0xfffffffe,0);
  if (((unsigned int)puVar2 & 0x7e00000) != 0x600000 && (int)puVar2 < 0) {
    FUN_002e3140();
  }
  return;
}

} /* extern "C" */
