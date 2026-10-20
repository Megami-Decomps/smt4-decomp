/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a1a8` (_code @ 0x31a1a8, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_002ba85c(void);
extern unsigned int FUN_002deb84(void);


void FUN_0031a1a8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(unsigned char *)(*(int *)(param_1 + 4) + 0x19c5) = 0x15;
  }
  temp_v0 = FUN_002ba85c();
  temp_v1 = scrGetArg(0);
  temp_v2 = FUN_002deb84();
  FUN_0021bdac(temp_v0,temp_v1,temp_v2,8,0,0);
  return;
}

} /* extern "C" */
