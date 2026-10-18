/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001318f4` (_code @ 0x1318f4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spBC; /* 0xbc: local_bc */
    unsigned int spFA0; /* 0xfa0: local_fa0 */
} param_1_stack;

/* Supplied declaration required: FUN_00138ac4. */
/* Supplied declaration required: FUN_0013bef4. */
/* Supplied declaration required: FUN_0013bf64. */
/* Supplied declaration required: FUN_0013bff4. */
/* Supplied declaration required: FUN_0013c024. */
/* Supplied declaration required: FUN_001472a8. */


void FUN_001318f4(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0 [3];
  unsigned char temp_v1 [3800];
  unsigned char temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_0013bef4(temp_v0);
  FUN_00138ac4(param_1,temp_v1,0x76c);
  temp_v0[0] = 1;
  temp_v2 = 0;
  FUN_001472a8();
  FUN_0013bff4();
  FUN_0013c024();
  FUN_0013bf64(temp_v3,temp_v0);
  return;
}
