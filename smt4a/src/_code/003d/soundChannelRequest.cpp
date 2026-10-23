/* NON_MATCHING: channel pointer registers and fade/arbitration branch layout differ. */
#include "shard/W6_W6Match1_BgmRequestChannel.h"

extern "C" {
extern BgmRequestChannel DAT_0061951c[2];
extern BgmChannelSelection g_resourceSharedFlag;
const void *jyoucyuGetTableEntry(u32);
s32 FUN_00162ea4();
void bgmStop(u32, s32, s32);

/* Start or queue a track on the two BGM channels while preserving their fade state. */
u32 soundChannelRequest(u32 track, s32 parameter)
{
    bool sameTrack = false;
    bool fading = false;
    u32 result = 0;
    if (jyoucyuGetTableEntry(1) != NULL || track == 0)
        return 0;
    if (FUN_00162ea4())
        bgmStop(-1, 0, 1);

    BgmRequestChannel *active = NULL;
    BgmRequestChannel *other = &DAT_0061951c[1];
    if (g_resourceSharedFlag.selected == 0) {
        active = &DAT_0061951c[0];
    } else if (g_resourceSharedFlag.selected == 1) {
        active = &DAT_0061951c[1];
        other = &DAT_0061951c[0];
    }
    u32 flags = active->flags;
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
    if (flags != 0 || sameTrack) {
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
                g_resourceSharedFlag.selected = active->play.unk00;
            }
        }
    } else {
        flags |= 5;
        other->flags = flags;
        other->track.currentId = track;
        other->play.param = parameter;
        g_resourceSharedFlag.selected = other->play.unk00;
        if (fading)
            other->flags = flags | 0x800;
        result = 1;
    }
    return result;
}
}
