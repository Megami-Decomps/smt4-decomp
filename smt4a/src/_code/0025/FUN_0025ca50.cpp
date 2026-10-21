/* NON_MATCHING: five hard-float inputs were lost by the draft; retail tail branches to 0x19e4a8 without a symbol/relocation, so the required callee boundary is unavailable. */
#include "romwright_types.h"

extern "C" {

int FUN_0019e5e0(unsigned int, unsigned int, unsigned int);
int FUN_0019ea00(void);
int FUN_001b4120(unsigned long long *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0019e5e0. */
/* Supplied declaration required: FUN_0019ea00. */
/* Supplied declaration required: FUN_001b4120. */


void FUN_0025ca50(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  unsigned long long uStack_10;
  
  FUN_0019ea00();
  FUN_0019e5e0(0xffffffff,0xffffffff,0xffffffff);
  uStack_20 = 0x1024500000001;
  uStack_18 = 0xf023100000001;
  uStack_10 = 0x1025300000000;
  FUN_001b4120(&uStack_20,0x18);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
