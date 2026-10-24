/* NON_MATCHING: scheduling only: retail loads the new content pointer into r1 and reads its handle after computing the &state->base address; the build loads it into r0 earlier. */
#include "common.h"
#include "Model/MoriModelContent.h"

/* The part of the map state this function rebuilds (0x4ef4..0x4efc). */
struct LmapModelState {
    /* 0x0000 */ u8 unk0000[0x4ef4];
    /* 0x4ef4 */ u32 pending;            /* request handed to the new content, cleared afterwards */
    /* 0x4ef8 */ MoriModelContent *content;
    /* 0x4efc */ MoriModelContent *base; /* the content the new one is linked to */
};

extern "C" {

extern LmapModelState *g_lmapMainState;
extern char DAT_00531310[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp" */

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */
MoriModelContent *modelListInit(void *mem);                 /* content constructor */
void FUN_0040a908(MoriModelContent *content, u32 flags);
void FUN_0040a918(MoriModelContent *content, u32 flags);
void FUN_0040a9a0(MoriModelContent *content, u32 request);
void FUN_0040ab9c(MoriModelContent *base, u32 handle);
void FUN_00416168(u32 first, u32 second);
void moriModelContentCreateBinding(MoriModelContent *content);
void FUN_003ca5a4(void);

// Rebuilds the map's model content from the pending request and links it to the base content.
void FUN_003a3b88(void)
{
    LmapModelState *state = g_lmapMainState;
    if (state != NULL) {
        u32 pending = state->pending;
        void *mem = FUN_00178b04(0x20, DAT_00531310, 0x265d);
        if (mem != NULL) {
            mem = modelListInit(mem);
        }
        state->content = (MoriModelContent *)mem;
        FUN_0040a908(state->content, 0x10000);
        FUN_0040a918(state->content, 0x20000);
        FUN_0040a9a0(state->content, pending);
        FUN_0040ab9c(state->base, state->content->unk0C);
        FUN_00416168(state->content->unk0C, state->base->unk0C);
        moriModelContentCreateBinding(state->content);
        state->pending = 0;
        FUN_003ca5a4();
    }
}

}
