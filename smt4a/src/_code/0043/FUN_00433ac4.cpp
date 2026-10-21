#include "common.h"
struct FlagBlock {u8 unk00[2];u8 initialized;};
extern "C" {
extern FlagBlock g_flagBlock;extern u8 DAT_0062db8c;
void FUN_002f6650();void FUN_001223ac();void randFloatScaled(void *object,f32 value);
/* Initializes the subsystem before forwarding the scalar update. */
void FUN_00433ac4(f32 value){if(g_flagBlock.initialized==0){FUN_002f6650();FUN_001223ac();}randFloatScaled(&DAT_0062db8c,value);}
}
