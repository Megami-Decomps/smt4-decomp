#include "romwright_types.h"

extern "C" {

int FUN_00282820(int, unsigned int, int, int, int, int, int, int);
int FUN_003ae06c(unsigned int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern unsigned int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_00282820. */
/* Supplied declaration required: FUN_003ae06c. */


void FUN_0033b0ac(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_003ae06c(DAT_00439ca8);
  temp_v0 = FUN_0027e928(DAT_0043427c);
  FUN_00282820(0,temp_v0,0,0,6,4,6,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
