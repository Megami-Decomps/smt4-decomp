/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowTimed` (_code @ 0x1ecbc4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, unsigned int);
int FUN_0028dc98(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc98. */
extern unsigned int scrGetArg(unsigned int);


void scrComm_Message_ShowTimed(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_0028dc98(0);
  temp_v0 = FUN_002865f8();
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v3 = FUN_002893d8();
  FUN_002866b4(temp_v0,temp_v1,temp_v3,0xe,0,temp_v2);
  return;
}

} /* extern "C" */
