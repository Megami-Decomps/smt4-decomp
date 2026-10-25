#include "ui/DummyAttachmentWork.h"

extern "C" {
void FUN_00234cd8(DummyAttachmentSource *, s32, s32);
void FUN_00341a3c(DummyAttachmentSource *);
void textFormatBuffer(char *, const char *, ...);
void FUN_002adde8(AsdMdlNode *, const char *, f32 *);
void nodeSetTranslation(AsdMdlNode *, s32, const f32 *);

/* Run the active member callback, update source playback and bind both sets of dummy markers. */
void dummyAttachmentUpdate(DummyAttachmentWork *work)
{
    typedef void (DummyAttachmentWork::*Callback)();
    /* The shared byte-aligned prefix cannot contain a pointer-aligned callback union. */
    struct CallbackView {
        u8 unk000[4];
        u32 state;
        u8 unk008[0x5C0];
        Callback callbacks[1];
    };
    typedef char CallbackOffsets[
        sizeof(Callback) == 8 && offsetof(CallbackView, state) == 4 &&
        offsetof(CallbackView, callbacks) == 0x5C8 ? 1 : -1];
    CallbackView *callbacks = (CallbackView *)work;
    if (callbacks->callbacks[callbacks->state] != NULL)
        (work->*callbacks->callbacks[callbacks->state])();
    if (work->mode == 0) {
        if (work->playback.applied != work->playback.requested) {
            work->playback.applied = work->playback.requested;
            FUN_00234cd8(work->source, work->playback.requested, 0);
        }
        FUN_00341a3c(work->source);
    }
    if (work->initialized == 0 && work->mode == 0) {
        char name[32];
        f32 position[4];
        work->initialized = 1;
        for (u32 index = 0; index < 6; ++index) {
            textFormatBuffer(name, "dummy_npc%d", index + 1);
            FUN_002adde8(work->source->model->node, name, position);
            nodeSetTranslation(work->primary[index]->node, 0, position);
            nodeSetTranslation(work->secondary[index]->node, 0, position);
        }
    }
}
}
