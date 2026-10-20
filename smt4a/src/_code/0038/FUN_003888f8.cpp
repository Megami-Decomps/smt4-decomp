/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003888f8` (_code @ 0x3888f8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int shopGetResult(void);
int FUN_0021bdac(int, int, unsigned int, int, int, unsigned int);
int FUN_002c76c0(int);
int scrGetCommandFrame(void);
int FUN_003c1060(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: shopGetResult. */
/* Supplied declaration required: FUN_0021bdac. */
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: scrGetCommandFrame. */
/* Supplied declaration required: FUN_003c1060. */
extern unsigned int selector16038Pick(void);


void FUN_003888f8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = shopGetResult();
  temp_v1 = scrGetCommandFrame();
  if (temp_v1 == 0) {
    FUN_003c1060();
  }
  shopGetResult();
  temp_v2 = selector16038Pick();
  FUN_002c76c0(0);
  temp_v3 = scrGetCommandFrame();
  FUN_0021bdac(temp_v0 + 0x194,0,temp_v3,0x10,0,temp_v2);
  return;
}

} /* extern "C" */
