/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246c68` (_code @ 0x246c68, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
} param_4_stack;

/* Supplied declaration required: FUN_0024ff28. */
/* Supplied declaration required: FUN_0024ffbc. */
/* Supplied declaration required: FUN_00250108. */
/* Supplied declaration required: FUN_002502e8. */
/* Supplied declaration required: FUN_00256c3c. */
/* Supplied declaration required: FUN_00259b70. */
/* Supplied declaration required: FUN_00259d6c. */


void FUN_00246c68(int param_1,unsigned int *param_2,int param_3,unsigned int *param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [64];
  unsigned char temp_v5 [76];
  
  if (param_4 != (unsigned int *)0x0) {
    temp_v0 = *param_4;
    temp_v1 = param_4[1];
    temp_v2 = param_4[2];
    FUN_00250108(temp_v3,&temp_v0,0);
  }
  else {
    FUN_00256c3c(temp_v3);
  }
  if (param_3 != 0) {
    FUN_002502e8(temp_v5,param_3);
    FUN_00259b70(temp_v4,temp_v3,temp_v5);
  }
  else {
    FUN_00259d6c(temp_v4,temp_v3);
  }
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = *param_2;
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    FUN_0024ffbc(temp_v4,&temp_v0,2);
  }
  FUN_0024ff28(param_1 + 0x10,temp_v4,0);
  return;
}
