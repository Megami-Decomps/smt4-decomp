/* camp/PlayLog/PlayLog.cpp (Apocalypse): the helper its update and its page change share for the screen's sprites. */
#ifndef CAMP_PLAYLOG_PLAYLOGSPRITES_H
#define CAMP_PLAYLOG_PLAYLOGSPRITES_H

#include "camp/PlayLog/PlayLog.h"
#include "ui/UiSpriteApi.h"

/* Starts animation group `animation` on the screen's five sprites. Retail narrows the group to s16 once, before
 * the loop (`mov r0, #N; sxth r6, r0`), at each of its four sites. */
static __inline void playLogSelectAnimation(PlayLogWorkA *work, s32 animation)
{
    for (s32 i = 0; i < 5; i++)
        uiSpriteSelectAnim(&work->sprites[i], animation);
}

#endif
