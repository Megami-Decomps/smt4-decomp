/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282a08` (_code @ 0x282a08, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_002c76c0(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002c76c0. */
extern unsigned int FUN_002deb84(void);


void FUN_00282a08(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_002c76c0(0);
  temp_v0 = FUN_002ba85c();
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_002deb84();
  FUN_0021bdac(temp_v0,temp_v1,temp_v2,5,1,0);
  return;
}

} /* extern "C" */
