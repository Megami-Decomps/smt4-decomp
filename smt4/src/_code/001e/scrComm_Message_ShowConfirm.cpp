/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowConfirm` (_code @ 0x1ecc90, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventTexRequestStopAll(void);
int bustupCutAnimRequestStopSlots(void);
int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */

/* Supplied declaration required: eventTexRequestStopAll. */
/* Supplied declaration required: bustupCutAnimRequestStopSlots. */
extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
extern unsigned int scrGetArg(unsigned int);


void scrComm_Message_ShowConfirm(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  bustupCutAnimRequestStopSlots();
  eventTexRequestStopAll();
  if ((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x4)) + 0xa11) = 0x14;
  }
  temp_v0 = FUN_002865f8();
  temp_v1 = scrGetArg(0);
  temp_v2 = FUN_002893d8();
  FUN_002866b4(temp_v0,temp_v1,temp_v2,6,0,0);
  return;
}

} /* extern "C" */
