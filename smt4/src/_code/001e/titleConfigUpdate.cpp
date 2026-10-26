/* NON_MATCHING: ARMCC merges input/navigation tails and retains the configuration work in r4 rather than retail's r5. */
#include "title/titleConfig.h"
#include "font/SearchWin/RunWin.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
extern TitleConfigCallbackView *g_titleConfig;
extern TitleConfigValues g_titleConfigValues;
s32 FUN_002bf818(const void *window);
u16 FUN_002b8584(u32 group, u32 item);
s32 FUN_0029efc0(const void *cursor);
s32 FUN_0029efa8(const void *cursor);
const void *dataTableGet(u32 table, u32 group);
const TitleConfigHelpEntry *dataTableGetEntries(const void *table);
void FUN_0029ee6c(const char *text, u32 color);
void FUN_00259e98(void);
void *FUN_00297060(void *dataA, void *dataB);
s32 ifTouchGetSelectionModeForRegion(s32 button);
s32 FUN_002c1658(u32 action, u32 repeat);
s32 bgmVolumeToStep(u32 value);
s32 classifyValueByThreshold(u32 value);
s32 calcByteThresholdRank(u32 value);
void eventQueueAddUnique(u32 event);
void eventQueueAddUniqueIfValid(u32 event);
s32 ifTouchGetActiveCounter(void);

s32 FUN_001c3688(void);
s32 ifTouchGetRegionX(s32 widget);
u8 indexedByteLookup(u32 step);
u8 thresholdGetPrimary(u32 step);
u8 thresholdGetSecondary(u32 step);
u8 digitGlyphLookup(u32 step);
void titleConfigApplyAudio(void);
void *titleConfigGetModeFlag(void);
void audioApplyChannelVolume(u32 index, void *touch, u32 enabled);
void workCommandRefreshActiveSlots(void);
u32 FUN_002bfdc4(void);
void FUN_002bfc24(u32 player, u32 sound, u32 bank, u32 priority);
s32 FUN_0029efd8(void *cursor, u32 enabled);
void scrScriptProcessStartEntry(void *process, u32 entry);
void timerStart(void *window, s32 period, s32 value);
void FUN_002ad8b4(TitleConfigValues *values, const void *saved);
s32 scrRunOpcodesStub(void *process);
s32 messageMainGetChoiceResult(void);

/* Update the title configuration controls, previews, confirmation, and cancellation. */
u32 titleConfigUpdate(void)
{
    TitleConfigCallbackView *work = g_titleConfig;
    switch (work->state) {
    case 0: {
        if (!asdTMTexTableNodeIsLoaded(0x2F, 0) || !FUN_002bf818(work->window) ||
            work->dataA == NULL || work->dataB == NULL) {
            return 0;
        }
        work->buttons[0] = FUN_002b8584(0x2F, 0x1F);
        ++work->countA;
        work->buttons[1] = FUN_002b8584(0x2F, 0x20);
        ++work->countA;
        work->buttons[2] = FUN_002b8584(0x2F, 0x21);
        ++work->countA;
        s32 selected = FUN_0029efc0(g_titleConfig->cursor);
        selected += FUN_0029efa8(g_titleConfig->cursor);
        const TitleConfigHelpEntry *help = dataTableGetEntries(dataTableGet(0x3A, 1));
        FUN_0029ee6c(help[selected].text, 0x323232FF);
        FUN_00259e98();
        work->process = FUN_00297060(work->dataA, work->dataB);
        work->state = 1;
        return 0;
    }
    case 1: {
        s32 selected = FUN_0029efc0(g_titleConfig->cursor);
        selected += FUN_0029efa8(work->cursor);
        dataTableGetEntries(dataTableGet(0x3A, 1));
        s32 &value = work->settings[selected];
        s32 previous = value;
        if (work->resetButton >= 0 &&
            (ifTouchGetSelectionModeForRegion(work->resetButton) == 6 || FUN_002c1658(9, 1))) {
            switch (selected) {
            case 0:
                g_titleConfigValues.music = 50;
                work->settings[0] = bgmVolumeToStep(50);
                break;
            case 1:
                g_titleConfigValues.sound = 80;
                g_titleConfigValues.auxiliary = 48;
                work->settings[1] = classifyValueByThreshold(80);
                break;
            case 2:
                g_titleConfigValues.voice = 80;
                work->settings[2] = calcByteThresholdRank(80);
                break;
            }
            eventQueueAddUnique(0x100016D);
        }
        s32 button = ifTouchGetSelectionModeForRegion(work->leftButton);
        bool left = button == 2 || (button == 1 && ifTouchGetActiveCounter() < 1);
        button = ifTouchGetSelectionModeForRegion(work->rightButton);
        bool right = button == 2 || (button == 1 && ifTouchGetActiveCounter() < 1);
        if (left || FUN_002c1658(4, 0)) {
            --value;
            if (value < 1) {
                value = 0;
            }
            FUN_002c1658(4, 0);
        } else if (right || FUN_002c1658(3, 0)) {
            ++value;
            if (value > 10) {
                value = 10;
            }
            FUN_002c1658(3, 0);
        } else {
            button = ifTouchGetSelectionModeForRegion(work->slider);
            if (button == 1 || button == 2) {
                const MessageDrawItem *slider = reinterpret_cast<const MessageDrawItem *>(asdTMTexTableEntryAt(0x2F, 0x33));
                s32 position = FUN_001c3688() - ifTouchGetRegionX(work->slider);
                value = position * 10 / slider->size->width;
            }
        }
        g_titleConfigValues.music = indexedByteLookup(work->settings[0]);
        g_titleConfigValues.sound = thresholdGetPrimary(work->settings[1]);
        g_titleConfigValues.voice = thresholdGetSecondary(work->settings[2]);
        g_titleConfigValues.auxiliary = digitGlyphLookup(work->settings[1]);
        if (value != previous) {
            titleConfigApplyAudio();
            audioApplyChannelVolume(0, titleConfigGetModeFlag(), 1);
            audioApplyChannelVolume(1, titleConfigGetModeFlag(), 1);
            if (selected < 2) {
                eventQueueAddUnique(0x100016D);
            } else if (selected == 2) {
                workCommandRefreshActiveSlots();
                u32 bank = FUN_002bfdc4();
                FUN_002bfc24(0, 0x2712, bank, 2);
            }
            return 0;
        }
        if (FUN_0029efd8(work->cursor, 1)) {
            selected = FUN_0029efc0(g_titleConfig->cursor);
            selected += FUN_0029efa8(g_titleConfig->cursor);
            const TitleConfigHelpEntry *help = dataTableGetEntries(dataTableGet(0x3A, 1));
            FUN_0029ee6c(help[selected].text, 0x323232FF);
            FUN_00259e98();
            return 0;
        }
        s32 current = FUN_0029efa8(g_titleConfig->cursor);
        for (s32 index = 0; index < 3; ++index) {
            if (index != current && ifTouchGetSelectionModeForRegion(work->buttons[index]) == 6) {
                eventQueueAddUnique(0x100016C);
                FUN_0029eb5c(reinterpret_cast<ScrollSelection *>(work->cursor), index);
                selected = FUN_0029efc0(g_titleConfig->cursor);
                selected += FUN_0029efa8(g_titleConfig->cursor);
                const TitleConfigHelpEntry *help = dataTableGetEntries(dataTableGet(0x3A, 1));
                FUN_0029ee6c(help[selected].text, 0x323232FF);
                FUN_00259e98();
                return 0;
            }
        }
        if (FUN_002c1658(0, 1)) {
            eventQueueAddUniqueIfValid(0x100016D);
            scrScriptProcessStartEntry(work->process, 2);
            work->state = 2;
        } else if (FUN_002c1658(1, 1)) {
            eventQueueAddUniqueIfValid(0x100016E);
            timerStart(work->window, 1, 0);
            FUN_002ad8b4(&g_titleConfigValues, work->saved);
            titleConfigApplyAudio();
            audioApplyChannelVolume(0, titleConfigGetModeFlag(), 1);
            audioApplyChannelVolume(1, titleConfigGetModeFlag(), 1);
            work->state = 3;
        }
        return 0;
    }
    case 2:
        if (scrRunOpcodesStub(work->process) != 2) {
            return 0;
        }
        switch (messageMainGetChoiceResult()) {
        case 1:
            work->state = 1;
            return 0;
        case 0:
            timerStart(work->window, 1, 0);
            work->state = 3;
            g_titleConfigValues.changed = 1;
            return 0;
        default:
            return 0;
        }
    case 3:
        if (FUN_002bf818(work->window)) {
            work->state = 4;
        }
        return 0;
    case 4:
        return ~0u;
    default:
        return 0;
    }
}
}
