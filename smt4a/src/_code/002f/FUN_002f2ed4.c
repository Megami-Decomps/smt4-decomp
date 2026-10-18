/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2ed4` (_code @ 0x2f2ed4, 0xae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

/* Supplied declaration required: FUN_002e9538. */
/* Supplied declaration required: FUN_002e995c. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f8264. */
/* Supplied declaration required: FUN_002f8272. */
/* Supplied declaration required: FUN_002f84b0. */
extern int FUN_002f84c4(int, unsigned char *);
/* Supplied declaration required: FUN_00514cb0. */


unsigned int FUN_002f2ed4(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [36];
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [40];
  unsigned char temp_v9 [12];
  
  FUN_002e995c(temp_v8);
  temp_v3 = param_1 + 0x30;
  temp_v2 = param_1 + 8;
  while( 1 ) {
    FUN_002eb588(temp_v6);
    temp_v0 = FUN_002f84c4(temp_v2,temp_v6);
    if (temp_v0 == 0) break;
    FUN_002eb588(temp_v7);
    FUN_002eb588(temp_v9);
    FUN_002f8272(&temp_v4,temp_v2,temp_v9);
    FUN_00514cb0(temp_v3,&temp_v4,temp_v7);
    FUN_002f8264(&temp_v4);
    FUN_002eb588(temp_v7);
    FUN_002f8272(&temp_v4,temp_v2,temp_v7);
    FUN_002f84b0(param_1 + 0xc);
    FUN_002f8264(&temp_v4);
  }
  FUN_002eb588(temp_v6);
  temp_v2 = FUN_002f84c4(temp_v3,temp_v6);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    FUN_002eb588(temp_v7);
    FUN_002f8272(&temp_v4,temp_v3,temp_v7);
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = temp_v4;
    }
    if (param_3 != 0) {
      FUN_002e9538(param_3,temp_v5);
    }
    FUN_002f8264(&temp_v4);
    temp_v1 = 1;
  }
  return temp_v1;
}
