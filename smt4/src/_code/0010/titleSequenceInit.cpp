#include "shard/W5_W5Match1_RecordKeys.h"
#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"

extern "C" {

extern AsdSeqState DAT_00446e00[];
extern u8 DAT_00446f2c;
void asdSequenceStart(s32 group, AsdSeqState *states, u32 stateCount);
void paramTripleSet(u32 first, u32 second, u32 third);
void setCallbackBinding(CallbackBinding binding);
u8 FUN_002c2a04(s32 index);
void FUN_002c29d8(u32 index, u32 value, u32 extra);
void FUN_00118170(void);
void titleDbgBgStopThunk(void);

/* Starts the sequence, installs the title background callback and resets the two pads' pending state. */
void titleSequenceInit(void)
{
    CallbackBinding binding;
    asdSequenceStart(1, DAT_00446e00, 0x19);
    paramTripleSet(0xc9, (u32)&DAT_00446f2c, 0x14);
    binding.context = (void *)titleDbgBgStopThunk;
    binding.callback = (void (*)(void *))FUN_00118170;
    setCallbackBinding(binding);
    if (FUN_002c2a04(0) == 3) {
        FUN_002c29d8(0, 10, 0xff);
    }
    if (FUN_002c2a04(1) == 3) {
        FUN_002c29d8(1, 10, 0xff);
    }
}

} /* extern "C" */
