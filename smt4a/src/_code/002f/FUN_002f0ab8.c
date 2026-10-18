/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0ab8` (_code @ 0x2f0ab8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_002eb588. */
extern unsigned short FUN_002eb5c0(unsigned int);
/* Supplied declaration required: FUN_002eb5e8. */
extern int FUN_002ef00c(unsigned char *, int);
/* Supplied declaration required: FUN_002efb80. */


void FUN_002f0ab8(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [8];
  
  temp_v4 = param_1 + 0xe8;
  if (*(char *)(param_2 + 0x24) != '\0') {
    FUN_002eb5e8(temp_v6,0);
    temp_v2 = FUN_002efb80(temp_v4,temp_v6);
    if (temp_v2 != 0) {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0) {
    FUN_002eb588(temp_v5);
    temp_v1 = FUN_002eb5c0(0xffff);
    temp_v2 = FUN_002eb5e8(temp_v7,(temp_v5[0] & 0xffff) + (unsigned int)temp_v1);
    *(unsigned short *)(param_1 + 0xec) = *(unsigned short *)(temp_v2 + 4);
    temp_v3 = FUN_002eb5e8(temp_v8,0);
    temp_v2 = FUN_002efb80(temp_v4,temp_v3);
    if (temp_v2 != 0) {
      temp_v2 = FUN_002eb5e8(temp_v9,1);
      *(unsigned short *)(param_1 + 0xec) = *(unsigned short *)(temp_v2 + 4);
    }
    temp_v4 = FUN_002ef00c(temp_v7,temp_v4);
    *(unsigned short *)(param_2 + 0x4c) = *(unsigned short *)(temp_v4 + 4);
  }
  return;
}
