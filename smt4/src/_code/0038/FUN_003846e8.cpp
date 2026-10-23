/* NON_MATCHING: stack allocation precedes the initialized-byte load; all other instructions match. */
#include "ui/DummyAttachmentWork.h"

/* The renderer fields lie beyond the shared AsdMdlNode prefix. */
struct AttachmentRenderer {
    u8 unk00[0x1f6];
    u8 dirty;
};
struct AttachmentNodeView {
    u8 unk00[0x2c];
    AttachmentRenderer *renderer;
};

extern "C" {
void nodeSetTranslation(AsdMdlNode *, s32, const f32 *);
void FUN_00298d50(u32);
void FUN_002adde8(AsdMdlNode *, const char *, f32 *);
void textFormatBuffer(char *, const char *, ...);
void FUN_002c159c(f32, f32);
u32 FUN_002c501c(void);

// Place both sets of markers at the six named dummy points of the source model.
void FUN_003846e8(DummyAttachmentWork *work)
{
    char name[32];
    f32 position[4];
    if (work->initialized)
        return;
    if (work->mode == 1) {
        u32 camera = FUN_002c501c();
        FUN_002c159c(0.25f, 0.3f);
        FUN_00298d50(camera);
    }
    work->initialized = 1;
    for (u32 index = 0; index < 6; ++index) {
        textFormatBuffer(name, "dummy_npc%d", index + 1);
        if (work->mode != 2) {
            FUN_002adde8(work->source->model->node, name, position);
        } else {
            FUN_002adde8(work->alternate->node, name, position);
            AsdMdlObject *model = work->alternate;
            model->flags &= ~2;
            reinterpret_cast<AttachmentNodeView *>(model->node)->renderer->dirty = 1;
        }
        nodeSetTranslation(work->primary[index]->node, 0, position);
        nodeSetTranslation(work->secondary[index]->node, 0, position);
    }
}
}
