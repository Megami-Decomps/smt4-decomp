#include "code/Code002c_Smt4.h"
#include "code/Code0013.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "AsdSDK/Source/Sys/Kernel/AsdSequence.h"
#include "title/SequenceSelector.h"

extern "C" {

extern AsdSeqState DAT_00446e00[];
extern const SequenceSelectionEntry DAT_00446f2c[];
void asdSequenceStart(s32 group, AsdSeqState *states, u32 stateCount);
void setCallbackBinding(CallbackBinding binding);
void titleDbgBgCreateDefault(void);
void titleDbgBgStopThunk(void);

/* Starts the sequence, installs the title background callback and resets the two pads' pending state. */
void titleSequenceInit(void)
{
    CallbackBinding binding;
    asdSequenceStart(1, DAT_00446e00, 0x19);
    paramTripleSet(0xc9, DAT_00446f2c, 0x14);
    binding.context = (void *)titleDbgBgStopThunk;
    binding.callback = (void (*)(void *))titleDbgBgCreateDefault;
    setCallbackBinding(binding);
    if (pairedAvailabilityGetState(0) == 3) {
        screenFadeStartIn(0, 10, 0xff);
    }
    if (pairedAvailabilityGetState(1) == 3) {
        screenFadeStartIn(1, 10, 0xff);
    }
}

} /* extern "C" */
