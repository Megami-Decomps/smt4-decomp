#include "common.h"
extern "C" {
int FUN_002e1a18(u32 button);int padButtonIsPressed(u32 button);
/* Tests either directional input condition. */
int FUN_004d04c4(){int active=0;if(FUN_002e1a18(6)!=0)active=1;if(padButtonIsPressed(7)!=0)active=1;return active;}
}
