/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowNamedFromBattle` (_code @ 0x24b8e0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e194; /* 0x43e194 */

extern unsigned int FUN_0024b96c(void);
extern int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);


void scrComm_Message_ShowNamedFromBattle(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002939f4();
  temp_v0 = *(int *)(temp_v0 + 0x2234);
  temp_v1 = FUN_0024b96c();
  if (temp_v0 == 0) {
    temp_v0 = FUN_002865f8();
  }
  *(unsigned int *)(DAT_0043e194 + 0x24) = temp_v1;
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_002893d8();
  FUN_002866b4(temp_v0,temp_v1,temp_v2,0xc,0,0);
  return;
}
