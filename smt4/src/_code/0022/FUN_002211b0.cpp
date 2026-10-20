/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002211b0` (_code @ 0x2211b0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
extern unsigned int scrGetArg(unsigned int);


void FUN_002211b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(unsigned char *)(*(int *)(param_1 + 4) + 0xa11) = 0x14;
  }
  temp_v0 = FUN_002865f8();
  temp_v1 = scrGetArg(0);
  temp_v2 = FUN_002893d8();
  FUN_002866b4(temp_v0,temp_v1,temp_v2,8,0,0);
  return;
}

} /* extern "C" */
