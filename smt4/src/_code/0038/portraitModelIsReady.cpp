/* NON_MATCHING: retail computes the model index (`add r2, r4, #1`) after the owner and kind moves for the package lookup; the build computes it first. */
#include "gamedata/DevilModel.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"
#include "shard/W6_W6Match3_NameFormState.h"

extern "C" {
s32 btlTalkBustUpGetValue(void);
s32 objGetFlagBit16(AocMain *main);

/* Returns the load completion of the kind-22 package file `index`, or 0 when it is missing (the same
   lookup as aocResourceStateValueKind12/16, inlined here). */
static __inline s32 aocResourceStateValueKind22(AocSystem *system, u32 index)
{
    AocPackageFile *file = packageFindFileRefByName(system, 22, index);
    return file ? file->completion : 0;
}

/* Reports whether the portrait mode or requested add-on model is ready. */
u32 portraitModelIsReady(AocSystem *system, u32 id)
{
    s16 model = nkmEnemyFindById((u16)id)->portraitId;
    if (btlTalkBustUpGetValue()) {
        if (objGetFlagBit16(g_aocMain))
            return 1;
    } else {
        if (aocJobIsValid())
            return 1;
        if (aocResourceStateValueKind22(system, model + 1))
            return 1;
    }
    return 0;
}
}
