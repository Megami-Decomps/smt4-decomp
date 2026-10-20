/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowMode14` (_code @ 0x1ecb70, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_0028dc98(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc98. */
extern unsigned int FUN_00296cc8(unsigned int);


void scrComm_Message_ShowMode14(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_0028dc98(0);
  temp_v0 = FUN_002865f8();
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_002893d8();
  FUN_002866b4(temp_v0,temp_v1,temp_v2,0xe,0,0);
  return;
}

} /* extern "C" */
