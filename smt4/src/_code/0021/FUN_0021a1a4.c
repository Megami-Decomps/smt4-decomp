/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a1a4` (_code @ 0x21a1a4, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

/* Supplied declaration required: FUN_0024fcdc. */
/* Supplied declaration required: FUN_0024fd70. */
/* Supplied declaration required: FUN_0024febc. */
/* Supplied declaration required: FUN_0025009c. */
/* Supplied declaration required: FUN_002569fc. */


void FUN_0021a1a4(int param_1,int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  int in_s0;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [72];
  
  if (param_3 != 0) {
    FUN_0025009c();
  }
  else {
    FUN_002569fc(temp_v3);
  }
  if (in_s0 != 0x3f800000) {
    temp_v0 = in_s0;
    temp_v1 = in_s0;
    temp_v2 = in_s0;
    FUN_0024febc(temp_v3,&temp_v0,2);
  }
  if (param_2 != (int *)0x0) {
    temp_v0 = *param_2;
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    FUN_0024fd70(temp_v3,&temp_v0,2);
  }
  FUN_0024fcdc(param_1 + 0x10,temp_v3,0);
  return;
}
