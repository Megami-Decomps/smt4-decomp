/* The reset branch calls the default-volume getters (titleConfigDefaultMusic/Sound/Voice/Auxiliary in
 * title/titleConfig.h), which armlink inlined as `mov r0, #50/#80/#80/#48` and removed (smt4/config/inlined.txt). */
#include "ui/UiSpriteApi.h"
#include "title/titleConfig.h"
#include "script/scrScriptProcess.h"
#include "font/SearchWin/RunWin.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W6_W6Match3_ScrollSelection.h"

extern "C" {
extern TitleConfigCallbackView *g_titleConfig;
extern TitleConfigValues g_titleConfigValues;
u16 ifTouchRegionAddRequested(u32 group, u32 item);
s32 resourceRunOperationIfUnblocked(const void *cursor);
s32 listCursorGetRowIfUnblocked(const void *cursor);
const void *dataTableGet(u32 table, u32 group);
const TitleConfigHelpEntry *dataTableGetEntries(const void *table);
void buttonHelpSetText(const char *text, u32 color);
void FUN_00259e98(void);
s32 ifTouchGetSelectionModeForRegion(s32 button);
s32 inputQueryButtonState(u32 action, u32 repeat);
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
u32 titleConfigGetModeFlag(void);
void audioApplyChannelVolume(u32 slot, u32 value, s32 frames);
void workCommandRefreshActiveSlots(void);
u32 messageVoiceBankGet(void);
void voiceRequestPlayFile(u32 player, u32 sound, u32 bank, u32 priority, f32 left, f32 right);
s32 gridNavigationHandleConfirm(void *cursor, u32 enabled);
void scrScriptProcessStartEntry(void *process, u32 entry);
s32 messageMainGetChoiceResult(void);

/* Shows the help text of the setting the cursor is on. */
static __inline void titleConfigShowHelp(void)
{
    TitleConfigCallbackView *work = g_titleConfig;
    s32 selected = resourceRunOperationIfUnblocked(work->cursor) + listCursorGetRowIfUnblocked(work->cursor);
    const TitleConfigHelpEntry *help = dataTableGetEntries(dataTableGet(0x3A, 1));

    buttonHelpSetText(help[selected].text, 0x323232FF);
    FUN_00259e98();
}

/* Sends the edited volumes to the sound system. */
static __inline void titleConfigApplyVolumes(void)
{
    titleConfigApplyAudio();
    audioApplyChannelVolume(0, titleConfigGetModeFlag(), 1);
    audioApplyChannelVolume(1, titleConfigGetModeFlag(), 1);
}

/* Update the title configuration controls, previews, confirmation, and cancellation. */
u32 titleConfigUpdate(void)
{
    TitleConfigCallbackView *work = g_titleConfig;

    switch (work->state) {
    case 0:
        if (!asdTMTexTableNodeIsLoaded(0x2F, 0) || !uiSpriteAdvanceAnimation(&work->window) ||
            work->dataA == NULL || work->dataB == NULL) {
            break;
        }
        work->buttons[0] = ifTouchRegionAddRequested(0x2F, 0x1F);
        ++work->countA;
        work->buttons[1] = ifTouchRegionAddRequested(0x2F, 0x20);
        ++work->countA;
        work->buttons[2] = ifTouchRegionAddRequested(0x2F, 0x21);
        ++work->countA;
        titleConfigShowHelp();
        work->process = scrScriptProcessCreate(work->dataA, work->dataB);
        work->state = 1;
        break;
    case 1: {
        /* the setting under the cursor: retail reads the menu block again for this part */
        TitleConfigCallbackView *config = g_titleConfig;
        s32 selected = resourceRunOperationIfUnblocked(config->cursor) + listCursorGetRowIfUnblocked(config->cursor);
        dataTableGetEntries(dataTableGet(0x3A, 1));
        s32 previous = config->settings[selected];

        /* the reset button restores the selected setting's default */
        if (config->resetButton >= 0 &&
            (ifTouchGetSelectionModeForRegion(config->resetButton) == 6 || inputQueryButtonState(9, 1))) {
            switch (selected) {
            case 0:
                g_titleConfigValues.music = titleConfigDefaultMusic();
                config->settings[0] = bgmVolumeToStep(g_titleConfigValues.music);
                break;
            case 1:
                g_titleConfigValues.sound = titleConfigDefaultSound();
                g_titleConfigValues.auxiliary = titleConfigDefaultAuxiliary();
                config->settings[1] = classifyValueByThreshold(g_titleConfigValues.sound);
                break;
            case 2:
                g_titleConfigValues.voice = titleConfigDefaultVoice();
                config->settings[2] = calcByteThresholdRank(g_titleConfigValues.voice);
                break;
            }
            eventQueueAddUnique(0x100016D);
        }

        /* the arrows count when released, or while held without the stylus moving */
        bool left = false;
        bool right = false;
        s32 mode = ifTouchGetSelectionModeForRegion(config->leftButton);
        if (mode == 1) {
            if (ifTouchGetActiveCounter() < 1) {
                left = true;
            }
        } else if (mode == 2) {
            left = true;
        }
        mode = ifTouchGetSelectionModeForRegion(config->rightButton);
        if (mode == 1) {
            if (ifTouchGetActiveCounter() < 1) {
                right = true;
            }
        } else if (mode == 2) {
            right = true;
        }

        if (left || inputQueryButtonState(4, 0)) {
            --config->settings[selected];
            config->settings[selected] = config->settings[selected] > 0 ? config->settings[selected] : 0;
            inputQueryButtonState(4, 0);
        } else if (right || inputQueryButtonState(3, 0)) {
            ++config->settings[selected];
            config->settings[selected] = config->settings[selected] > 10 ? 10 : config->settings[selected];
            inputQueryButtonState(3, 0);
        } else {
            mode = ifTouchGetSelectionModeForRegion(config->slider);
            if (mode == 1 || mode == 2) {
                const TextureTableEntryIV *bar = asdTMTexTableEntryAt(0x2F, 0x33);
                s32 offset = FUN_001c3688() - ifTouchGetRegionX(config->slider);
                config->settings[selected] = offset * 10 / bar->placement->width;
            }
        }

        g_titleConfigValues.music = indexedByteLookup(config->settings[0]);
        g_titleConfigValues.sound = thresholdGetPrimary(config->settings[1]);
        g_titleConfigValues.voice = thresholdGetSecondary(config->settings[2]);
        g_titleConfigValues.auxiliary = digitGlyphLookup(config->settings[1]);
        if (config->settings[selected] != previous) {
            /* previews the changed volume */
            titleConfigApplyVolumes();
            switch (selected) {
            case 0:
            case 1:
                eventQueueAddUnique(0x100016D);
                break;
            case 2:
                workCommandRefreshActiveSlots();
                voiceRequestPlayFile(0, 0x2712, messageVoiceBankGet(), 2, 0.707f, 0.707f);
                break;
            }
            break;
        }

        if (gridNavigationHandleConfirm(work->cursor, 1)) {
            titleConfigShowHelp();
            break;
        }

        /* a touched row other than the cursor's takes the cursor */
        {
            TitleConfigCallbackView *list = g_titleConfig;
            s32 current = listCursorGetRowIfUnblocked(list->cursor);
            bool picked = false;
            for (s32 row = 0; row < 3; ++row) {
                if (row != current && ifTouchGetSelectionModeForRegion(list->buttons[row]) == 6) {
                    eventQueueAddUnique(0x100016C);
                    scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(list->cursor), row);
                    picked = true;
                    break;
                }
            }
            if (picked) {
                titleConfigShowHelp();
                break;
            }
        }

        if (inputQueryButtonState(0, 1)) {
            eventQueueAddUniqueIfValid(0x100016D);
            scrScriptProcessStartEntry(work->process, 2);
            work->state = 2;
        } else if (inputQueryButtonState(1, 1)) {
            eventQueueAddUniqueIfValid(0x100016E);
            uiSpriteSetKeyframe(&work->window, 1, 0);
            g_titleConfigValues = work->saved;
            titleConfigApplyVolumes();
            work->state = 3;
        }
        break;
    }
    case 2:
        if (scrRunOpcodesStub(work->process) != 2) {
            break;
        }
        switch (messageMainGetChoiceResult()) {
        case 0:
            uiSpriteSetKeyframe(&work->window, 1, 0);
            g_titleConfigValues.changed = 1;
            work->state = 3;
            break;
        case 1:
            work->state = 1;
            break;
        }
        break;
    case 3:
        if (uiSpriteAdvanceAnimation(&work->window)) {
            work->state = 4;
        }
        break;
    case 4:
        return ~0u;
    }
    return 0;
}
}
