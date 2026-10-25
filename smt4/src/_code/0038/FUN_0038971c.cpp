/* NON_MATCHING: the compiler places the shared successful return after the model query instead of before it and schedules the model-query arguments differently. */
#include "gamedata/DevilModel.h"
#include "addon/aocMain.h"
#include "shard/aocJobIsValid.h"

struct AocModelStatus {
    /* 0x00 */ u8 unk00[0x0D];
    /* 0x0D */ u8 ready;
};

extern "C" {
extern AocMain *g_aocMain;
DevilModelOverride *dataTable00FindById(u16 id);
s32 btlTalkBustUpGetValue(void);
s32 objGetFlagBit16(AocMain *main);
AocModelStatus *packageFindFileRefByName(void *owner, s32 category, s32 model);

// Report whether the portrait mode or requested add-on model is ready.
u32 FUN_0038971c(void *owner, u32 id)
{
    s16 model = dataTable00FindById((u16)id)->model;
    if (btlTalkBustUpGetValue()) {
        if (objGetFlagBit16(g_aocMain))
            return 1;
    } else {
        if (aocJobIsValid())
            return 1;
        AocModelStatus *status = packageFindFileRefByName(owner, 22, model + 1);
        if (status != NULL && status->ready != 0)
            return 1;
    }
    return 0;
}
}
