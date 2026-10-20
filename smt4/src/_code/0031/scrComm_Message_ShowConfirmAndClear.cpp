/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowConfirmAndClear` (_code @ 0x31e76c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventTexRequestStopAll(void);
int bustupCutAnimRequestStopSlots(void);
int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);
int scrGetCommandFrame(void);
int msgBoxFlagsSetBit7(unsigned int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_messageMain; /* 0x43e188 */

/* Supplied declaration required: eventTexRequestStopAll. */
/* Supplied declaration required: bustupCutAnimRequestStopSlots. */
extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
/* Supplied declaration required: scrGetCommandFrame. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: msgBoxFlagsSetBit7. */


unsigned int scrComm_Message_ShowConfirmAndClear(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = (*(int *)((unsigned char *)&g_messageMain + 0x4));
  bustupCutAnimRequestStopSlots();
  eventTexRequestStopAll();
  if ((*(int *)((unsigned char *)&g_messageMain + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x4)) + 0xa11) = 0x14;
  }
  temp_v1 = FUN_002865f8();
  temp_v2 = scrGetArg(0);
  temp_v3 = scrGetCommandFrame();
  FUN_002866b4(temp_v1,temp_v2,temp_v3,6,0,0);
  temp_v4 = scrGetCommandFrame();
  if (temp_v4 == 0) {
    msgBoxFlagsSetBit7(*(unsigned int *)(temp_v0 + 4));
    *(unsigned char *)(temp_v0 + 0xa10) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v0 + 0xc) | 0x20;
  }
  return temp_v1;
}

} /* extern "C" */
