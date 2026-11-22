/* NON_MATCHING: 34 lines, written as Apocalypse's twin soundChannelRequest (the same 34 lines remain there): retail
 * zeroes `active` first, sets bgmStop's fade before its force argument, branches for the channel choice where this
 * build predicates it, and stores the fading arm's flags after its fade frames (sharing the store with the reset
 * arm). */
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern BgmRequestChannel g_bgmRequestChannels[2];
extern BgmChannelSelection g_titleConfigModeFlag;
s32 eventIsSkipping();

/* Start or queue a track on the two BGM channels while preserving their fade state. */
u32 soundChannelRequest(u32 track, s32 parameter)
{
    bool sameTrack = false;
    bool fading = false;
    u32 result = 0;
    BgmRequestChannel *active = NULL;
    BgmRequestChannel *other;
    u32 flags;

    if (jyoucyuGetTableEntry(1) == 0 && track != 0) {
        if (eventIsSkipping())
            bgmStop(-1, 0, 1);

        if (g_titleConfigModeFlag.selected == 0) {
            active = &g_bgmRequestChannels[0];
            other = &g_bgmRequestChannels[1];
        } else if (g_titleConfigModeFlag.selected == 1) {
            active = &g_bgmRequestChannels[1];
            other = &g_bgmRequestChannels[0];
        } else {
            other = &g_bgmRequestChannels[1];
        }
        flags = active->flags;
        if ((flags & 2) && !(flags & 0x3C)) {
            sameTrack = active->track.currentId == track;
            if (!sameTrack) {
                if (flags & 0x70) {
                    active->flags = flags | 0x800;
                    fading = true;
                    active->fadeFrames = 45;
                } else if (flags & 0x800) {
                    active->track.currentId = 0;
                    active->play.param = 0;
                    active->fadeFrames = 0;
                    active->track.nextId = 0;
                    active->track.nextParam = 0;
                    active->track.unk14 = 0;
                    active->flags = 0;
                } else {
                    active->flags = flags | 8;
                    fading = true;
                    active->fadeFrames = 45;
                }
            }
        }
        flags = other->flags;
        if (flags == 0 && !sameTrack) {
            flags |= 5;
            other->flags = flags;
            other->track.currentId = track;
            other->play.param = parameter;
            g_titleConfigModeFlag.selected = other->play.index;
            if (fading)
                other->flags = flags | 0x800;
            result = 1;
        } else {
            if (flags & 0x20) {
                if (!(active->flags & 0x20)) {
                    active->track.nextId = track;
                    active->track.nextParam = parameter;
                    result = 1;
                    active->flags |= 0x100;
                }
            } else if (flags & 8) {
                if (active->flags & 0x238) {
                    other->track.nextId = track;
                    other->track.nextParam = parameter;
                    result = 1;
                    other->flags = flags | 0x100;
                } else if (active->flags == 0) {
                    active->flags = 5;
                    active->track.currentId = track;
                    active->play.param = parameter;
                    g_titleConfigModeFlag.selected = active->play.index;
                }
            }
        }
    }
    return result;
}
}
