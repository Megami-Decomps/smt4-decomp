/* NON_MATCHING: armcc folds (s32)0.33f - 56 to a constant; retail loads 0.33f and converts it with VCVT at run time. */
#include "npc_room/NpcRoom.h"

extern "C" {

void FUN_00285584(u32 job, s32 a, s32 b);
void FUN_002ae9ec(s32 a, s32 b, u32 c, s32 d, s32 e, s32 f);
void renderCtxCalculateStereoParallax(u32 scene);

extern NpcRoom *g_npcRoom;
extern u32 g_titleScene;

/* Draws the NPC room: sets up its view, then refreshes the job of every occupied display cell, skipping row unkFC in state 4 once unkEC exceeds 2. */
u32 FUN_001aba44(void)
{
    NpcRoom *room = g_npcRoom;

    renderCtxCalculateStereoParallax(g_titleScene);
    FUN_002ae9ec(2, 2, room->unk102 * 1000, (s32)0.33f - 56, -8, 1);
    for (s32 row = 0; row < room->displayCount; row++) {
        for (s32 column = 0; column < NPC_ROOM_JOBS; column++) {
            s32 model = room->displayModels[row][column];
            if (model >= 0 && (room->state != 4 || room->unkFC != row || room->unkEC <= 2)) {
                FUN_00285584(room->jobs[model], 0, 0);
            }
        }
    }
    return 0;
}

} /* extern "C" */
