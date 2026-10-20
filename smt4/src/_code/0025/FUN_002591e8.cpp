/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002591e8` (_code @ 0x2591e8, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001922e4(void);
int FUN_00259258(void);
int FUN_002866b4(int, int, unsigned int, int, int, unsigned int);
int FUN_002893d8(void);
int FUN_0028dc98(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001922e4. */
/* Supplied declaration required: FUN_00259258. */
/* Supplied declaration required: FUN_002866b4. */
/* Supplied declaration required: FUN_002893d8. */
/* Supplied declaration required: FUN_0028dc98. */
extern unsigned int FUN_003a1460(void);


void FUN_002591e8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_001922e4();
  temp_v1 = FUN_002893d8();
  if (temp_v1 == 0) {
    FUN_00259258();
  }
  FUN_001922e4();
  temp_v2 = FUN_003a1460();
  FUN_0028dc98(0);
  temp_v3 = FUN_002893d8();
  FUN_002866b4(temp_v0 + 0x170,0,temp_v3,0xf,0,temp_v2);
  return;
}

} /* extern "C" */
