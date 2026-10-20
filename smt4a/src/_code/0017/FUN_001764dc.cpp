/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001764dc` (_code @ 0x1764dc, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00161a10(void);
int FUN_0018c740(unsigned char [4]);
int FUN_0018c7b0(unsigned char [20], unsigned char [4]);
int FUN_0018c840(void);
int FUN_0018c870(void);
int FUN_001a1f5c(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00161a10. */
/* Supplied declaration required: FUN_0018c740. */
/* Supplied declaration required: FUN_0018c7b0. */
/* Supplied declaration required: FUN_0018c840. */
/* Supplied declaration required: FUN_0018c870. */
/* Supplied declaration required: FUN_001a1f5c. */


void FUN_001764dc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int uStack_f9c;
  unsigned char uStack_bc;
  unsigned char temp_v1 [20];
  
  FUN_00161a10();
  FUN_0018c740(temp_v0);
  uStack_bc = 0;
  uStack_f9c = param_2;
  FUN_001a1f5c();
  FUN_0018c840();
  FUN_0018c870();
  FUN_0018c7b0(temp_v1,temp_v0);
  return;
}

} /* extern "C" */
