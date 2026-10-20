/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00176480` (_code @ 0x176480, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00185b20(unsigned int, unsigned char [3800], int);
int FUN_0018c740(unsigned int [3]);
int FUN_0018c7b0(unsigned char [16], unsigned int [3]);
int FUN_0018c840(void);
int FUN_0018c870(void);
int FUN_001a1f5c(void);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spBC; /* 0xbc: local_bc */
    unsigned int spFA0; /* 0xfa0: local_fa0 */
} param_1_stack;

/* Supplied declaration required: FUN_00185b20. */
/* Supplied declaration required: FUN_0018c740. */
/* Supplied declaration required: FUN_0018c7b0. */
/* Supplied declaration required: FUN_0018c840. */
/* Supplied declaration required: FUN_0018c870. */
/* Supplied declaration required: FUN_001a1f5c. */


void FUN_00176480(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0 [3];
  unsigned char temp_v1 [3800];
  unsigned char temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_0018c740(temp_v0);
  FUN_00185b20(param_1,temp_v1,0x76c);
  temp_v0[0] = 1;
  temp_v2 = 0;
  FUN_001a1f5c();
  FUN_0018c840();
  FUN_0018c870();
  FUN_0018c7b0(temp_v3,temp_v0);
  return;
}

} /* extern "C" */
