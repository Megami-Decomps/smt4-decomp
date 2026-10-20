/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330524` (_code @ 0x330524, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(int, unsigned int, unsigned int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f594; /* 0x57f594 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_0027099c(void);
extern int FUN_002ba85c(void);
extern unsigned int scrGetCommandFrame(void);


void FUN_00330524(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = btlGetMainState();
  temp_v0 = *(int *)(temp_v0 + 0x226c);
  temp_v1 = FUN_0027099c();
  if (temp_v0 == 0) {
    temp_v0 = FUN_002ba85c();
  }
  *(unsigned int *)(DAT_0057f594 + 0x24) = temp_v1;
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetCommandFrame();
  FUN_0021bdac(temp_v0,temp_v1,temp_v2,0xc,0,0);
  return;
}

} /* extern "C" */
