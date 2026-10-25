/* NON_MATCHING: file-load argument scheduling and sprite-handle address reuse differ. */
#include "common.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

struct PartnerTopicDialog {
    u8 unk00[0x28];
    void *message;
    void *commonMessage;
    void *script;
    u8 unk34[0x10];
    u32 index;
    u32 count;
    u32 unk4C;
    u32 selection;
    u32 frame;
    u8 unk58[0x580];
    u32 sprite;
    u32 value;
    u8 unk5E0[4];
    u8 active;
    u8 pending;
    u16 entries[100];
    u8 unk6AE[2];
    u32 state;
    s32 slots[5];
    s32 handles[4];
};
extern "C" {
void rt_memclr(void *, u32);
void __aeabi_memset4(void *, u32, s32);
void asdTMTexTableLoadTmx(u32, u32);
void asdTMTexLoadMainHeap(u32, s32);
u32 spriteHandleCreate(u32);
void positionStateSet(u32, u32, u32, f32);
void FUN_003f84e8(PartnerTopicDialog *);
void dialogEnterState(PartnerTopicDialog *, s32, s32);
extern const char DAT_0052d3c4[]; // event/PartnerTopic/PartnerTopic.mbm
extern const char DAT_0052d398[]; // event/PartnerTopic/PartnerTopicCommon.mbm
extern const char DAT_0052d36c[]; // event/PartnerTopic/PartnerTopicCommon.bf
}

extern "C" void FUN_003f5598(PartnerTopicDialog *dialog)
{
    dialog->state = 0;
    rt_memclr(dialog->entries, sizeof(dialog->entries));
    dialog->index = 0;
    dialog->count = 0;
    dialog->selection = 0;
    dialog->value = 0;
    dialog->frame = 0;
    dialog->active = 0;
    dialog->pending = 0;
    asdLoadFileAsyncSimple(DAT_0052d3c4, reinterpret_cast<u32 *>(&dialog->message), 0);
    asdLoadFileAsyncSimple(DAT_0052d398, reinterpret_cast<u32 *>(&dialog->commonMessage), 0);
    asdLoadFileAsyncSimple(DAT_0052d36c, reinterpret_cast<u32 *>(&dialog->script), 0);
    __aeabi_memset4(dialog->slots, sizeof(dialog->slots), -1);
    __aeabi_memset4(dialog->handles, sizeof(dialog->handles), -1);
    asdTMTexTableLoadTmx(49, 0);
    for (s32 i = 0; i < 2; ++i) {
        asdTMTexLoadMainHeap(49, i);
    }
    dialog->sprite = spriteHandleCreate(0);
    FUN_001527d8(dialog->sprite, -1);
    positionStateSet(dialog->sprite, 0, 0x646464FF, 1.0f);
    FUN_003f84e8(dialog);
    dialogEnterState(dialog, 1, 0);
}
