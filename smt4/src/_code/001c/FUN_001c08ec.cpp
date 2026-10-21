/* NON_MATCHING: five hard-float inputs were lost by the draft; retail tail branches to 0x2b7d94 without a symbol/relocation, so the required callee boundary is unavailable. */
#include "romwright_types.h"

extern "C" {

int FUN_002adba8(unsigned long long *, int, int);
int FUN_002b7dc4(unsigned int, unsigned int, unsigned int);
int gpuSubmitDefaultPacket(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002b7dc4. */
/* Supplied declaration required: gpuSubmitDefaultPacket. */


void FUN_001c08ec(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long uStack_20;
  unsigned long long uStack_18;
  unsigned long long uStack_10;
  
  gpuSubmitDefaultPacket();
  FUN_002b7dc4(0xffffffff,0xffffffff,0xffffffff);
  uStack_20 = 0x1024500000001;
  uStack_18 = 0xf023100000001;
  uStack_10 = 0x1025300000000;
  FUN_002adba8(&uStack_20,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
