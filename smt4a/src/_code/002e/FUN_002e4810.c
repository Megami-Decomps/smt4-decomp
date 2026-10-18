/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4810` (_code @ 0x2e4810, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002deb84(void);


void FUN_002e4810(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = *(unsigned int *)(temp_v0 + 0x226c);
  temp_v2 = FUN_00236038(0);
  temp_v3 = FUN_002deb84();
  FUN_0021bdac(temp_v1,temp_v2,temp_v3,7,0,0);
  return;
}
