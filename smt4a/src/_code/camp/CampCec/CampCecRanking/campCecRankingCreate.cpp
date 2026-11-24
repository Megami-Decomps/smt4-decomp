/* NON_MATCHING: 191 lines (81 by shape), all in rankingLoadEntries' two copy loops; every other instruction,
 * the frame and the literal pool are retail's. Retail runs each loop on three induction variables: a down-counter
 * (`mov r2, #20 ... subs r2, r2, #1; bne`), the index, and a pointer it reads the saved id through
 * (`ldrh r8, [r0], #4`), while the packed score/rank halfword (loaded twice) and the three stores are addressed by
 * the index from the save and work bases. The build keeps the index alone (`cmp r0, #20; bcc`) and reads the id
 * through it too. A helper taking the two arrays and a count gives the down-counter and the id pointer but walks
 * the other four addresses as well (174/62); a bitfield record gives retail's double load only inside such a helper. */
#include <stdio.h>
#include "camp/CampCec/CampCecRanking.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/asdTextFormatStream.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "code/Code0015_Smt4a.h"
#include "code/Code0019.h"
#include "code/Code0031_Smt4a.h"
#include "addon/LookupRecord.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "text/TextDraw.h"
#include "ui/ParamsClearPacket.h"
#include "ui/UiSpriteApi.h"

extern "C" {
u32 spriteHandleCreate(u32 argument);
s32 FUN_002c0240();
void rt_aeabi_memclr(void *memory, u32 size);
}

/* The screen sprite's animation tables; the original file defined them statically. */
static const UiSpritePositionKey sRankingPositionKeys[] = {
    {0, 0, 0, 0, 0, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {-320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {0, 0, 320, 0, 4, 0, 0},
    {0, 0, 0, -3, 6, 0, 0},
    {0, -3, 0, 0, 9, 0, 0},
    {320, 0, 320, 0, 12, 0, 0},
    {300, 0, -60, 0, 40, 1, 0},
    {30, 0, 0, 0, 4, 0, 0},
    {-30, 0, 0, 0, 4, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {0, 0, 30, 0, 3, 0, 0},
    {30, 0, 0, 0, 5, 0, 0},
    {-30, 0, 0, 0, 5, 0, 0},
};
static const UiSpriteScalarKey sRankingAlphaKeys[] = {
    {0.0f, 0.8f, 20, 0, 0},
    {0.8f, 0.0f, 40, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
    {0.5f, 1.0f, 40, 0, 0},
    {0.0f, 1.0f, 30, 0, 0},
    {1.0f, 0.0f, 30, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.0f, 1.0f, 15, 0, 0},
    {1.0f, 0.0f, 15, 0, 0},
    {0.0f, 1.0f, 6, 0, 0},
    {1.0f, 0.0f, 19, 0, 0},
    {0.0f, 0.5f, 1, 0, 0},
    {0.5f, 0.0f, 18, 0, 0},
    {0.0f, 0.4f, 8, 0, 0},
    {0.4f, 0.0f, 25, 0, 0},
    {0.0f, 0.0f, 5, 0, 0},
    {0.5f, 1.0f, 10, 0, 0},
    {1.0f, 0.5f, 20, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 1.0f, 1, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {0.0f, 0.5f, 15, 0, 0},
    {0.5f, 0.0f, 9, 0, 0},
    {0.0f, 0.0f, 10, 0, 0},
};
static const UiSpriteScalarKey sRankingScaleKeys[] = {
    {1.0f, 1.5f, 19, 0, 0},
    {0.8f, 1.0f, 8, 0, 0},
    {1.0f, 1.4f, 25, 0, 0},
    {1.4f, 1.4f, 5, 0, 0},
};
static const SpriteAnimationCommand sRankingCommands[] = {
    {1, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {5, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {6, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {3, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 10, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 11, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 12, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 13, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 8, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 9, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 14, 0, {0, 0, 0}, 1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 15, 0, {0, 0, 0}, 2, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 16, 0, {0, 0, 0}, 3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -2, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 17, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 18, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 17, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 18, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 4, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 5, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 25, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 26, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 27, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

/* The text colour of a ranking row: gold and silver for the first two, plain below. */
static __inline s32 rankingRowColor(s32 row)
{
    s32 color = 2;
    if (row == 0) {
        color = 4;
    } else if (row == 1) {
        color = 3;
    }
    return color;
}

/* Loads the saved ranking into the work area, splitting each packed score and rank. Retail inlines it: it reads
 * g_campCecRanking again and tests it for NULL although the creator has just filled the block. */
static __inline void rankingLoadEntries(void)
{
    CampCecRanking *ranking = g_campCecRanking;
    if (ranking != NULL) {
        GameSaveBodyA *save = (GameSaveBodyA *)gameDataBlocksGetSaveData();
        rt_aeabi_memclr(ranking->players, sizeof(ranking->players));
        rt_aeabi_memclr(ranking->categories, sizeof(ranking->categories));
        for (u32 i = 0; i < RANK_PLAYERS; i++) {
            ranking->players[i].id = save->cecRanking.players[i].id;
            ranking->players[i].score = save->cecRanking.players[i].score;
            ranking->players[i].rank = save->cecRanking.players[i].rank;
        }
        for (u32 i = 0; i < RANK_CATEGORIES; i++) {
            ranking->categories[i].id = save->cecRanking.categories[i].id;
            ranking->categories[i].score = save->cecRanking.categories[i].score;
            ranking->categories[i].rank = save->cecRanking.categories[i].rank;
        }
    }
}

/* Sets each row's text object to the name of its demon (players) or of its category's demon. Inlined like
 * rankingLoadEntries, with its own read and NULL test of g_campCecRanking. */
static __inline void rankingBuildTexts(void)
{
    CampCecRanking *ranking = g_campCecRanking;
    if (ranking != NULL) {
        char name[128];
        rt_aeabi_memclr(name, sizeof(name));
        for (s32 i = 0; i < RANK_PLAYERS; i++) {
            if (ranking->players[i].id == 0) {
                rt_aeabi_memclr(name, sizeof(name));
            } else {
                sprintf(name, "%s", (const char *)dataTable01GetRecordWithAocOverride(ranking->players[i].id));
            }
            s32 color = rankingRowColor(i);
            asdTextFormatStream(ranking->playerText[i], color, 0xFFFFFFFF, 0, 0, textExpandGlyphsToBuffer(name, NULL, 0));
        }
        for (s32 i = 0; i < RANK_CATEGORIES; i++) {
            u16 kind = ranking->categories[i].id;
            u16 id;
            if (kind < 1 || kind >= 9 || (id = dataTable10FindValue((u16)FUN_0036fcd0(kind, 0))) == 0) {
                rt_aeabi_memclr(name, sizeof(name));
            } else {
                sprintf(name, "%s", (const char *)dataTable01GetRecordWithAocOverride(id));
            }
            s32 color = rankingRowColor(i);
            asdTextFormatStream(ranking->categoryText[i], color, 0xFFFFFFFF, 0, 0, textExpandGlyphsToBuffer(name, NULL, 0));
        }
    }
}

extern "C" {

/* Opens the StreetPass ranking screen: allocates and clears its work area, creates its calc and three draw
 * tasks, sets up the screen sprite and the 27 row text objects, requests the Cec script and message files,
 * then loads the saved ranking and builds the row texts. */
void campCecRankingCreate(void)
{
    if (g_campCecRanking == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecRanking.cpp", 215);
        g_campCecRanking = (CampCecRanking *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(CampCecRanking), 1);
    }
    CampCecRanking *ranking = g_campCecRanking;
    sysMemClear(ranking, sizeof(CampCecRanking));
    ranking->task = asdProcessCreateSimple((const s8 *)"CampCecRanking Calc", 3, 0, 0, (AsdProcUpdateFunc)FUN_002c0240, 0, 0);
    taskCreateDraw((const s8 *)"CampCecRanking DrawUpLeft", 126, 0, 0, (AsdProcUpdateFunc)campCecRankingDrawPlayers, 0, 0,
                   (void *)ranking->task);
    taskCreateDraw((const s8 *)"CampCecRanking DrawUpRight", 218, 0, 0, (AsdProcUpdateFunc)campCecRankingDrawPlayers, 0, 0,
                   (void *)ranking->task);
    taskCreateDraw((const s8 *)"CampCecRanking DrawDown", 234, 0, 0, (AsdProcUpdateFunc)campCecRankingDrawCategories, 0, 0,
                   (void *)ranking->task);
    ranking->state = 0;

    asdTMTexLoadMainHeap(0x2E, 1);
    paramsClearPacket(&ranking->parameters);
    paramsInit(&ranking->parameters, sRankingPositionKeys, sizeof(sRankingPositionKeys), sRankingAlphaKeys,
               sizeof(sRankingAlphaKeys), sRankingScaleKeys, sizeof(sRankingScaleKeys), NULL, 0, sRankingCommands,
               sizeof(sRankingCommands));
    uiSpriteStateInitFromSource(&ranking->sprite, 0x2E, 1000, &ranking->parameters, 101, 1.0f);
    for (s32 i = 0; i < RANK_PLAYERS; i++) {
        ranking->playerText[i] = spriteHandleCreate(0);
    }
    for (s32 i = 0; i < RANK_CATEGORIES; i++) {
        ranking->categoryText[i] = spriteHandleCreate(0);
    }
    asdLoadFileAsyncSimple("camp/CecMain_scr.bf", (u32 *)&ranking->heapA, 0);
    asdLoadFileAsyncSimple("camp/CecMain_msg.mbm", (u32 *)&ranking->heapB, 0);

    rankingLoadEntries();
    rankingBuildTexts();
    FUN_00319aec(0);
    gameFlagSetValue(0x4C7, 0, 1);
}

} /* extern "C" */
