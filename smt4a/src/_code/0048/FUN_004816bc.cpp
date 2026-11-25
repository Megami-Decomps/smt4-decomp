/* NON_MATCHING: the hidden-case mask update is predicated and shares the first store block; retail branches to the final shared store. */
#include "game/GameStateA.h"
#include "map/FieldNpc.h"
#include "classes/Obj557b18.h"

/* Updates the marker's model flags for pause, loading and the marker's hidden state. */
extern "C" void FUN_004816bc(FieldNpc *npc)
{
    if (npc->controller == NULL) {
        return;
    }
    Obj557b18 *body = npc->controller->body;

    if (g_gameState.paused == 0) {
        if (npc->flags & NPC_FLAG_HIDDEN) {
            body->flags &= ~NPC_VISIBLE_BITS;
        }
        if (!(npc->flags & NPC_FLAG_NEAR)) {
            if (g_gameState.loading != 0) {
                body->flags |= NPC_VISIBLE_BITS;
                return;
            }
            if (npc->flags & NPC_FLAG_HIDDEN) {
                body->flags &= ~NPC_VISIBLE_BITS;
            }
            return;
        }
    }
    body->flags |= NPC_VISIBLE_BITS;
}
