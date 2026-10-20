/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004940a8` (_code @ 0x4940a8, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b3f7c(void);
int FUN_0049277c(...);
int FUN_004d091c(...);
int FUN_004d09b8(...);
int FUN_004d0a98(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_001b3f7c. */
/* Supplied declaration required: FUN_0049277c. */
/* Supplied declaration required: FUN_004d091c. */
/* Supplied declaration required: FUN_004d09b8. */
/* Supplied declaration required: FUN_004d0a98. */


void FUN_004940a8(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int uStack_20;
  unsigned int temp_v3 [2];
  
  temp_v0 = *(int *)(param_2 + 4);
  FUN_001b3f7c();
  if (temp_v0 != 9) {
    FUN_0049277c(0x20,0xfa,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    FUN_004d09b8(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    FUN_0049277c(0x20,0xfb,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    FUN_004d0a98(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    FUN_0049277c(0x20,0xfc,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    FUN_004d091c(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    return;
  }
  FUN_0049277c(0x20,0xfd,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  FUN_004d09b8(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  FUN_0049277c(0x20,0xfe,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  FUN_004d0a98(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  FUN_0049277c(0x20,0xff,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  FUN_004d091c(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  return;
}

} /* extern "C" */
