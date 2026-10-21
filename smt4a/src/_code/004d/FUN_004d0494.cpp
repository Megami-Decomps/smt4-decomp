#include "common.h"
extern "C" {
int FUN_002e1a18(u32 button);
int padButtonRepeat(u32 button);
/* Tests either of the two directional input conditions. */
int FUN_004d0494() {int active=0;if(FUN_002e1a18(6)!=0)active=1;if(padButtonRepeat(7)!=0)active=1;return active;}
}
