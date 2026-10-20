/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001764f4` (_code @ 0x1764f4, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018c740(unsigned char [4]);
int FUN_0018c7b0(unsigned char [16], unsigned char [4]);
int FUN_0018c840(void);
int FUN_0018c870(void);
int FUN_001a1f5c(void);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spBC; /* 0xbc: local_bc */
    unsigned int spF9C; /* 0xf9c: local_f9c */
} param_1_stack;

/* Supplied declaration required: FUN_0018c740. */
/* Supplied declaration required: FUN_0018c7b0. */
/* Supplied declaration required: FUN_0018c840. */
/* Supplied declaration required: FUN_0018c870. */
/* Supplied declaration required: FUN_001a1f5c. */


void FUN_001764f4(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_0018c740(temp_v0);
  temp_v2 = 0;
  temp_v1 = param_1;
  FUN_001a1f5c();
  FUN_0018c840();
  FUN_0018c870();
  FUN_0018c7b0(temp_v3,temp_v0);
  return;
}

} /* extern "C" */
