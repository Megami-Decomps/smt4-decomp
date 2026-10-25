/* NON_MATCHING: register allocation and the channel scan differ - retail walks the six channel slots with two incrementing pointers and a down-counter and keeps different values in r5-r9; same stores and calls. */
#include "common.h"

namespace {
/* A sound scene record (dataTable0e): the six channel entries and a flag. */
struct SoundSceneEntry {
    /* 0x00 */ u16 channel[6];
    /* 0x0c */ u8 isLayered;
};

/* One of the six channel slots of the player: a kind and its value. */
struct SoundChannel {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 value;
};

/* The sound player's work block (only the fields this switch reads). */
struct SoundWork {
    /* 0x000 */ u8 unk000[0x5ac];
    /* 0x5ac */ SoundChannel channels[6];
    /* 0x5c4 */ u8 unk5c4[0x10];
    /* 0x5d4 */ u8 busy[6];              /* a channel is still fading */
    /* 0x5da */ u8 unk5da[7];
    /* 0x5e1 */ u8 sceneChanged;
    /* 0x5e2 */ u8 unk5e2[4];
    /* 0x5e6 */ u16 current;
    /* 0x5e8 */ u16 previous;
};

/* The ButtonHelp global (g_buttonHelp): its work block holds six help-kind slots (+0x5ac), their active flags,
   the selected entry id (+0x5e6) and a deferred selection (+0x10). */
struct SoundPlayer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SoundWork *work;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ s32 pending;              /* scene requested while a channel was busy, or -1 */
};

}

extern "C" {
extern SoundPlayer g_buttonHelp;
SoundSceneEntry *dataTableGetEntry0e(u32 id);
void buttonHelpBeginExit(s32 mode);
void FUN_00183e58(void);
void FUN_00183f58(u32 channel, u32 kind, u32 value, u32 arg);
void FUN_00183c0c(void);
void FUN_00182084(void);

/* Selects the ButtonHelp entry `id` (a dataTable0e record): pushes its six per-slot values, links paired slots
   and picks how the change is announced. Deferred while a slot is still active. (The sound-flavoured names in
   this file are provisional; the object is the ButtonHelp global.) */
void sysPlaySe(u32 id)
{
    SoundWork *work = g_buttonHelp.work;
    if (work->current == id) {
        return;
    }
    if (g_buttonHelp.pending < 0) {
        for (s32 i = 0; i < 6; i++) {
            if (work->busy[i] != 0) {
                g_buttonHelp.pending = id;
                return;
            }
        }
    }
    g_buttonHelp.pending = -1;
    SoundSceneEntry *from = dataTableGetEntry0e(work->current);
    SoundSceneEntry *to = dataTableGetEntry0e(id);
    if (from != NULL && to != NULL) {
        if (from->isLayered == 0 && to->isLayered != 0) {
            buttonHelpBeginExit(1);
        } else {
            FUN_00183e58();
        }
    }
    from = dataTableGetEntry0e(work->current);
    to = dataTableGetEntry0e(id);
    if (from == NULL || to == NULL) {
        return;
    }
    work->previous = work->current;
    work->current = id;
    u8 kinds[8] = { 5, 6, 4, 3, 2, 1, 0, 0 };   /* volume kind of each channel */
    for (s32 i = 0; i < 6; i++) {
        if (to->channel[i] != 0) {
            FUN_00183f58(i & 0xff, kinds[i], to->channel[i] & 0xff, 0);
        } else {
            FUN_00183f58(i & 0xff, 0x12, 0x51, 0);
        }
    }
    u32 pairA = 0;
    u32 pairB = 0;
    for (s32 i = 0; i < 6; i++) {
        SoundChannel *channel = &work->channels[i];
        if (channel->kind == 1) {
            pairA = (pairA & 0xffff0000) | channel->value;
        } else if (channel->kind == 2) {
            pairA = (pairA & 0xffff) | ((u32)channel->value << 16);
        } else if (channel->kind == 5) {
            pairB = (pairB & 0xffff0000) | channel->value;
        } else if (channel->kind == 6) {
            pairB = (pairB & 0xffff) | ((u32)channel->value << 16);
        }
    }
    u32 lowA = pairA & 0xffff;
    u32 highA = pairA >> 16;
    if (lowA != 0 && highA != 0 && lowA == highA) {
        FUN_00183f58(5, 0, 0, 0);
        FUN_00183f58(4, 0x14, highA & 0xff, 0);
    }
    u32 lowB = pairB & 0xffff;
    u32 highB = pairB >> 16;
    if (lowB != 0 && highB != 0 && lowB == highB) {
        FUN_00183f58(1, 0, 0, 0);
        FUN_00183f58(0, 0x15, lowB & 0xff, 0);
    }
    if (from->isLayered != 0) {
        if (to->isLayered == 0) {
            g_buttonHelp.work->sceneChanged = 1;
            FUN_00182084();
            return;
        }
        g_buttonHelp.work->sceneChanged = 0;
    } else {
        g_buttonHelp.work->sceneChanged = 1;
    }
    FUN_00183c0c();
}

} /* extern "C" */
