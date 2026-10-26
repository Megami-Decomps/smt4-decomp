#include "shard/Shard0031.h"
#include "classes/Obj55c89c.h"
#include "code/Code002a.h"

struct PreviewMenuWindow { u8 kind; u8 unk01[3]; s32 minimum, maximum; u32 unk0c; FlaggedEntry entry; };
struct PreviewMenuEntry { s16 previewState; u16 unk02, option; u8 unk06[0x1a]; };
struct PreviewMenuWork {
    u8 unk000[0x14];
    u32 state, phase, unk01c;
    PreviewMenuWindow window;
    u8 unk094[0x7c8];
    u32 script;
    u8 unk860[4];
    PreviewMenuEntry entries[1];
};
struct AnimatedPreviewSelection { u32 unk00, selected; };
extern "C" {
extern AnimatedPreviewSelection g_animatedPageSelection;
s32 scrRunOpcodesStub(u32 script);
s32 messageGetChoiceResult();
u32 flaggedValueHolderGetTotal(const PreviewMenuWindow *window);
void demonRefreshSavedSnapshot(PreviewMenuWork *work, u16 option);
s32 FUN_0031d174(PreviewMenuWindow *window);
void FUN_004a1958(PreviewMenuWork *work);
void setListWindow(PreviewMenuWindow *window, s32 first, s32 second);
u32 buttonHelpGetValue();
void sysPlaySe(u32 id);
void FUN_003343f0(s32 mode);
void screen4AEnter(PreviewMenuWork *work);
void uniteCreatePreviewModel();

// Apply a confirmed preview option, repair the list window and return to the appropriate menu phase.
}

void Obj55c89c::FUN_004a38bc()
{
    PreviewMenuWork * work = reinterpret_cast<PreviewMenuWork *>(this);
    if (scrRunOpcodesStub(work->script) != 2)
        return;
    if (messageGetChoiceResult() == 0) {
        PreviewMenuEntry *entries = work->entries;
        u32 index = flaggedValueHolderGetTotal(&work->window);
        demonRefreshSavedSnapshot(work, entries[index].option);
        g_animatedPageSelection.selected = 0xffffffff;
        s32 count = FUN_0031d174(&work->window);
        s32 first = FUN_002a482c(&work->window);
        FUN_004a1958(work);
        if (first > 0)
            --first;
        else if (count != 0 && work->window.maximum <= count + first)
            --count;
        setListWindow(&work->window, first, count);
    }
    sysPlaySe(buttonHelpGetValue());
    FUN_003343f0(0);
    if (work->entries[0].previewState <= 0) {
        screen4AEnter(work);
        uniteCreatePreviewModel();
    } else {
        work->state = 2;
        work->phase = 0;
    }
}
