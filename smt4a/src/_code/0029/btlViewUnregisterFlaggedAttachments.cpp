#include "battle/btlView.h"
#include "map/MapSelection.h"

extern "C" {
extern BattleViewState g_battleViewState;
extern void *g_handleRegistry;
s32 gameFlagIsSet(u32 flag);
void ptrListRemoveClearOwner(void *registry, BattleViewObject *object);
}

static inline void unregisterAttachment(BattleViewOwner *owner)
{
    if (owner != 0 && owner->object != 0) {
        ptrListRemoveClearOwner(g_handleRegistry, owner->object);
    }
}

extern "C" void btlViewUnregisterFlaggedAttachments()
{
    if (g_mapSelection.id == 0x20 && g_mapSelection.kind == 2) {
        if (gameFlagIsSet(0x4c9)) {
            return;
        }
    } else if (!gameFlagIsSet(0x4d0)) {
        return;
    }
    BattleViewState *state = &g_battleViewState;
    unregisterAttachment(state->attachments.primary[0]);
    unregisterAttachment(state->attachments.primary[1]);
    unregisterAttachment(state->attachments.primary[2]);
    unregisterAttachment(state->children[0]);
    unregisterAttachment(state->children[1]);
    unregisterAttachment(state->children[2]);
    state->attachments.state = 2;
}
