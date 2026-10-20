/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a6a50` (_code @ 0x4a6a50, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b3f7c(void);
int FUN_0049277c(int, int, int *, int *, int *, int *);
int FUN_004d091c(...);
int FUN_004d09b8(unsigned int, int, int, int, int);
int FUN_004d0a98(unsigned int, int, int, int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_001b3f7c. */
/* Supplied declaration required: FUN_0049277c. */
/* Supplied declaration required: FUN_004d091c. */
/* Supplied declaration required: FUN_004d09b8. */
/* Supplied declaration required: FUN_004d0a98. */


void FUN_004a6a50(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_18;
  int temp_v2;
  
  FUN_001b3f7c();
  FUN_0049277c(0x14,0x573,&temp_v1,&uStack_18,&temp_v0,&temp_v2);
  FUN_004d09b8(param_1,temp_v1,uStack_18,temp_v0,temp_v2);
  FUN_0049277c(0x14,0x574,&temp_v1,&uStack_18,&temp_v0,&temp_v2);
  FUN_004d0a98(param_1,temp_v1,uStack_18,temp_v0,temp_v2);
  FUN_0049277c(0x14,0x575,&temp_v1,&uStack_18,&temp_v0,&temp_v2);
  FUN_004d091c(param_1,temp_v1,uStack_18,temp_v0,temp_v2);
  return;
}

} /* extern "C" */
