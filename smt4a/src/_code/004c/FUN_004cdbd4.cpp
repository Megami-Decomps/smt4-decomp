/* NON_MATCHING: block layout: retail ends the top-entry path with the shared state store and return, and the no-healing path branches back to it; armcc places the store after both paths. */
#include "common.h"

struct FountainMenu {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u32 tableGroup;
    /* 0x014 */ u8 unk014[4];
    /* 0x018 */ u32 script;
    /* 0x01C */ u8 unk01C[0x57C];
    /* 0x598 */ s32 state;
};

extern "C" {
extern const char DAT_00530cdc[]; /* "fountian_top" */
extern const char DAT_00530cc8[]; /* "fountian_no_healing" */

s32 scrRunOpcodesStub(u32 script);
void messageBannerRestartOrClear(void);
s32 messageMainGetValue(void);
s32 FUN_0034919c(void);
void messageDismissNumericBanner(s32 mode);
s32 tableGroupFindEntryIndex(u32 group, const char *name);
void scrScriptProcessStartEntry(u32 script, s32 index);
s32 FUN_004ced50(FountainMenu *menu);
void FUN_004ce300(FountainMenu *menu);

/* Fountain menu step: once the script yields, either returns to the top entry (state 5) or, when healing
 * is not possible, runs the "no healing" entry (state 10); state 8 when FUN_004ced50 takes over. */
void FUN_004cdbd4(FountainMenu *menu)
{
    s32 index;
    s32 next;

    if (scrRunOpcodesStub(menu->script) == 2) {
        messageBannerRestartOrClear();
        if (messageMainGetValue() != 0) {
            if (FUN_0034919c() != 0) {
                messageDismissNumericBanner(0);
            }
            index = tableGroupFindEntryIndex(menu->tableGroup, DAT_00530cdc);
            if (index >= 0) {
                scrScriptProcessStartEntry(menu->script, index);
            }
            next = 5;
        } else {
            menu->state = 7;
            if (FUN_004ced50(menu) != 0) {
                menu->state = 8;
                FUN_004ce300(menu);
                return;
            }
            if (FUN_0034919c() != 0) {
                messageDismissNumericBanner(0);
            }
            index = tableGroupFindEntryIndex(menu->tableGroup, DAT_00530cc8);
            if (index >= 0) {
                scrScriptProcessStartEntry(menu->script, index);
            }
            next = 10;
        }
        menu->state = next;
    }
}

} /* extern "C" */
