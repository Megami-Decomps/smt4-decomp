/* NON_MATCHING: the three states, their calls and the stores agree. Retail keeps one register (r9) for both the
 * hoisted zero and the looked-up record of all three table lookups (`addcc r9, ...; mov r0, r9`), where this
 * builds the help record in r0 and copies the zero into r8 for the option record; that one register shifts the
 * touch-mode temporaries (retail: first on the stack twice, second in r8). In state 2 retail has one copy of the
 * "setting 1" arm, reached from both the two-unlock and the second-unlock branch, and one of the "setting 0" arm;
 * here each branch keeps its own. */
#include "camp/Config/Config.h"
#include "camp/CampMenuEntry.h"
#include "code/Code0019_Smt4.h"
#include "code/Code0029_VariantB.h"
#include "gamedata/DataTable.h"
#include "script/scrScriptProcess.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
extern ConfigWork *g_config;

u32 resourceRunOperationIfUnblocked(const GridNavigation *cursor);
s32 gridNavigationHandleConfirm(GridNavigation *cursor, s32 mode);
s32 inputQueryButtonState(s32 button, s32 mode);
u8 ifTouchGetSelectionModeForRegion(int region);
s32 ifTouchRegionAddRequested(u32 file, s32 index);
void buttonHelpSetText(const char *text, u32 color);
void messageMainSetEnabled(u8 enabled);
void messageMainFinishWindow(void);
u32 messageMainGetChoiceResult(void);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void FUN_001d15fc(void);
}

/* The choice of the first row that shows the stored setting; configOpen (the same source file) picks its
 * initial selection with the same statements. */
static __inline u32 configInitialSelection(void)
{
    s32 mode = FUN_002973ec();
    u32 selection = 1;
    if (gameFlagIsSet(0x555) != 0 && gameFlagIsSet(0x557) != 0) {
        switch (mode) {
        case 0:
            break;
        case 1:
            selection = 0;
            break;
        case 2:
            selection = 2;
            break;
        }
    } else if (gameFlagIsSet(0x557) != 0) {
        switch (mode) {
        case 0:
            break;
        case 1:
            selection = 0;
            break;
        }
    } else if (gameFlagIsSet(0x555) != 0 && mode == 0) {
        selection = 0;
    }
    return selection;
}

/* Shows the help text of the first option's choice `selection`. */
static __inline void configShowChoiceHelp(u32 selection)
{
    // With only the first unlock the two choices use the second and third help texts.
    if (gameFlagIsSet(0x555) != 0 && gameFlagIsSet(0x557) == 0)
        selection++;
    void *section = dataTableGet(0x36, 1);
    const ConfigHelpRecord *records = static_cast<const ConfigHelpRecord *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    const ConfigHelpRecord *help;
    if (selection < count)
        help = &records[selection];
    else
        help = NULL;
    buttonHelpSetText(help->text, 0x323232FF);
}

/* Stores the setting, counting each change to setting 1. */
static __inline void configApplySetting(u32 setting)
{
    u8 previous = FUN_002973ec();
    FUN_00195510(setting);
    if (setting == 1 && previous != 1)
        gameCounterAddSaturating(0x29, 1);
}

/* Whether a touch region is held or released on. */
static __inline bool configRegionTouched(u32 mode)
{
    return mode == 1 || mode == 2;
}

/* The Config screen's update: state 0 starts the script and picks the stored choice, state 1 handles
 * the choice buttons, the cursor and confirm/cancel, state 2 applies the choice once the script's
 * question has been answered. */
extern "C" void configUpdate(void)
{
    const ConfigurationChoices *option = NULL;
    ConfigWork *config = g_config;
    switch (config->state) {
    case 0: {
        if (config->heapA == NULL)
            return;
        if (config->heapB == NULL)
            return;
        config->touchGroupImage = ifTouchRegionAddRequested(0x2F, 0x20);
        config->resource = NULL;
        config->countA++;
        config->resource = scrScriptProcessCreate(config->heapA, config->heapB);
        messageMainSetEnabled(0);
        scrScriptProcessStartEntry(config->resource, 0);
        u32 selection = configInitialSelection();
        config->selectedChoice[0] = selection;
        configShowChoiceHelp(selection);
        FUN_001d15fc();
        config->state = 1;
        break;
    }
    case 1: {
        asdTMTexTableEntryAt(0x2F, 0x59);
        scrRunOpcodesStub(config->resource);
        ConfigWork *menu = g_config;
        u32 row = resourceRunOperationIfUnblocked(&menu->cursor) + listCursorGetRowIfUnblocked(&menu->cursor);
        void *section = dataTableGet(0x36, 0);
        dataTableGetEntries(section);
        dataTableGetCount(section);
        bool stepped = false;
        u32 previous = menu->selectedChoice[row];
        if (menu->flag == 0) {
            u32 first = ifTouchGetSelectionModeForRegion(menu->choiceRegions[0]);
            u32 second = ifTouchGetSelectionModeForRegion(menu->choiceRegions[1]);
            if (configRegionTouched(first)) {
                menu->selectedChoice[row] = 0;
            } else if (configRegionTouched(second)) {
                menu->selectedChoice[row] = 1;
            } else if (inputQueryButtonState(4, 0) != 0 || inputQueryButtonState(3, 0) != 0) {
                menu->selectedChoice[row] ^= 1;
                stepped = true;
            }
        } else {
            u32 first = ifTouchGetSelectionModeForRegion(menu->choiceRegions[0]);
            u32 second = ifTouchGetSelectionModeForRegion(menu->choiceRegions[1]);
            u32 third = ifTouchGetSelectionModeForRegion(menu->choiceRegions[2]);
            if (configRegionTouched(first)) {
                menu->selectedChoice[row] = 0;
            } else if (configRegionTouched(second)) {
                menu->selectedChoice[row] = 1;
            } else if (configRegionTouched(third)) {
                menu->selectedChoice[row] = 2;
            } else if (inputQueryButtonState(4, 0) != 0) {
                if (--menu->selectedChoice[row] < 0)
                    menu->selectedChoice[row] = 2;
                stepped = true;
            } else if (inputQueryButtonState(3, 0) != 0) {
                if (++menu->selectedChoice[row] > 2)
                    menu->selectedChoice[row] = 0;
                stepped = true;
            }
        }
        u32 selection = menu->selectedChoice[row];
        if (selection != previous) {
            configShowChoiceHelp(selection);
            if (stepped)
                eventQueueAddUnique(0x100016C);
            return;
        }
        if (gridNavigationHandleConfirm(&config->cursor, 1) != 0) {
            // The cursor moved to another option.
            menu = g_config;
            row = resourceRunOperationIfUnblocked(&menu->cursor) + listCursorGetRowIfUnblocked(&menu->cursor);
            section = dataTableGet(0x36, 0);
            const ConfigurationChoices *rows = static_cast<const ConfigurationChoices *>(dataTableGetEntries(section));
            u32 count = dataTableGetCount(section);
            if (row < count)
                option = &rows[row];
            buttonHelpSetText(option->help, 0x323232FF);
            FUN_001d15fc();
            return;
        }
        bool confirmed = false;
        if (inputQueryButtonState(0, 1) != 0) {
            confirmed = true;
        } else {
            menu = g_config;
            if (menu->flag == 1) {
                if (ifTouchGetSelectionModeForRegion(menu->choiceRegions[0]) == 6 ||
                    ifTouchGetSelectionModeForRegion(menu->choiceRegions[1]) == 6 ||
                    ifTouchGetSelectionModeForRegion(menu->choiceRegions[2]) == 6)
                    confirmed = true;
            } else {
                if (ifTouchGetSelectionModeForRegion(menu->choiceRegions[0]) == 6 ||
                    ifTouchGetSelectionModeForRegion(menu->choiceRegions[1]) == 6)
                    confirmed = true;
            }
        }
        if (confirmed) {
            // Ask whether to apply the choice.
            menu = g_config;
            eventQueueAddUnique(0x100016D);
            messageMainFinishWindow();
            messageMainSetEnabled(1);
            scrScriptProcessStartEntry(menu->resource, 1);
            menu->unkB8 = 0;
            menu->state = 2;
        } else if (inputQueryButtonState(1, 1) != 0) {
            eventQueueAddUniqueIfValid(0x100016E);
            messageMainSetEnabled(1);
            config->state = 3;
        }
        break;
    }
    case 2: {
        if (scrRunOpcodesStub(config->resource) != 2)
            return;
        u32 answer = messageMainGetChoiceResult();
        ConfigWork *menu = g_config;
        if (answer == 0) {
            if (gameFlagIsSet(0x555) != 0 && gameFlagIsSet(0x557) != 0) {
                if (menu->selectedChoice[0] == 0)
                    configApplySetting(1);
                else if (menu->selectedChoice[0] == 1)
                    configApplySetting(0);
                else if (menu->selectedChoice[0] == 2)
                    configApplySetting(2);
                else
                    configApplySetting(0);
            } else if (gameFlagIsSet(0x557) != 0) {
                if (menu->selectedChoice[0] == 0)
                    configApplySetting(1);
                else
                    configApplySetting(0);
            } else if (gameFlagIsSet(0x555) != 0) {
                if (menu->selectedChoice[0] == 0)
                    configApplySetting(0);
                else if (menu->selectedChoice[0] == 1)
                    configApplySetting(2);
                else
                    configApplySetting(0);
            } else {
                configApplySetting(0);
            }
        }
        scrScriptProcessStartEntry(config->resource, 0);
        messageMainSetEnabled(0);
        config->state = 1;
        break;
    }
    }
}
