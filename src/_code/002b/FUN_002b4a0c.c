/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4a0c` (_code @ 0x2b4a0c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spBC; /* 0xbc: local_bc */
    unsigned int spF9C; /* 0xf9c: local_f9c */
} param_1_stack;

/* Supplied declaration required: FUN_0013bef4. */
/* Supplied declaration required: FUN_0013bf64. */
/* Supplied declaration required: FUN_0013bff4. */
/* Supplied declaration required: FUN_0013c024. */
/* Supplied declaration required: FUN_001472a8. */


void FUN_002b4a0c(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_0013bef4(temp_v0);
  temp_v2 = 0;
  temp_v1 = param_1;
  FUN_001472a8();
  FUN_0013bff4();
  FUN_0013c024();
  FUN_0013bf64(temp_v3,temp_v0);
  return;
}
