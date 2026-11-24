/* camp/PlayLog/PlayLog.cpp (Apocalypse): the helper its update and its page change share for the screen's sprites,
 * and the one its update and playLogBuildPages share for the play time row. */
#ifndef CAMP_PLAYLOG_PLAYLOGSPRITES_H
#define CAMP_PLAYLOG_PLAYLOGSPRITES_H

#include "camp/PlayLog/PlayLog.h"
#include "gamedata/GameDataAccess.h"
#include "ui/UiSpriteApi.h"

enum {
    PLAY_LOG_COUNTER_PLAY_TIME = 46     /* PlayLogRecord::counter of the row that shows the play time */
};

/* Starts animation group `animation` on the screen's five sprites. Retail narrows the group to s16 once, before
 * the loop (`mov r0, #N; sxth r6, r0`), at each of its four sites. */
static __inline void playLogSelectAnimation(PlayLogWorkA *work, s32 animation)
{
    for (s32 i = 0; i < 5; i++)
        uiSpriteSelectAnim(&work->sprites[i], animation);
}

/* Fills the play time row of both pages: the save's play seconds less counter B's share on the first page, all of
 * them on the second. playLogBuildPages does this when it builds the pages, the screen's update every frame. */
static __inline void playLogSetPlayTime(PlayLogWorkA *work, s32 row)
{
    u32 total = saveBlockGetPlaySeconds();

    work->pages[0].values[row] = total - countersGetB(PLAY_LOG_COUNTER_PLAY_TIME);
    work->pages[1].values[row] = total;
}

#endif
