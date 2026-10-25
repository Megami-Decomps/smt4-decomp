/* NON_MATCHING: register allocation and the order of the pool loads differ in the scene setup block and the command dump loop; the call sequence is the same. */
#include "gfx/DrawCallbackRecord.h"

/* The two words the draw dispatch functor carries (context, state). */
struct DrawDispatchArgs {
    u32 context;
    u32 state;
};

/* A scene draw job: its renderer, and the record list drawn at 0x14 with a state word at 0x18. */
struct SceneDrawRecords {
    u8 unk00[0xC];
    DrawCallbackRecord *begin;
    DrawCallbackRecord *end;
};
struct SceneDrawJob {
    u8 unk00[4];
    u32 renderer;
    u8 unk08[0xC];
    SceneDrawRecords *records;
    u32 state;
};

/* The command-list state the scene passes share. */
struct GfxPassState {
    u8 unk00[4];
    u8 enabled;
    u8 sceneBuilt;
    u8 unk06[2];
    u32 commandList;
    u8 unk0c[4];
    u32 *recorder;
};

/* A scene node pair the traversal starts from (nodes at 4 and 8). */
struct SceneRootPair {
    u8 unk00[4];
    u32 first;
    u32 second;
};

/* The transform builder: a virtual object whose slot 4 visits a scene node. */
class TransformBuilder {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void visit(u32 node);
};

extern "C" {

extern GfxPassState DAT_00544d24;
extern TransformBuilder *g_asdModelTransformBuilder;
extern u32 DAT_005b3c90;
extern u32 DAT_005b3c98;
extern SceneRootPair *g_effAsdLightHandle;
extern u32 *g_commandBufferCursor;

DrawDispatchArgs _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(DrawCallbackRecord *first,
                                                                                    DrawCallbackRecord *last,
                                                                                    DrawDispatchArgs functor);
void FUN_00197eb0(void *builder, u32 root);
void nw_gfx_SceneTraverser_Begin(u32 node, u32 other);
void FUN_0018d01c(u32 node);
void asdGxCommandListBegin(u32 list);
void asdGxCommandListEnd(u32 list, s32 arg);
void FUN_0018e9d8(TransformBuilder *builder, u32 root);
s32 asdGxIsReady(void);
void asdGxCommandListStartRecord(u32 *recorder);
s32 FUN_0018c8c8(char *buffer, s32 size, s32 limit, const char *format, u32 value);
void FUN_00186a64(u32 *recorder);
void FUN_0018cf00(u32 renderer, u32 state, s32 arg);
void nw_gfx_RenderContext_ResetState_2B7478(u32 renderer);
void FUN_0018622c(u32 *recorder);

/* Builds the scene graph passes on first use, then draws the job's callback records into the
 * command buffer (optionally dumping the recorded words as hex), and flushes the recorder. */
void FUN_0017721c(SceneDrawJob *job, u32 stateA, u32 stateB, s32 dumpCommands)
{
    u32 renderer = job->renderer;
    GfxPassState *pass = &DAT_00544d24;

    if (pass->enabled != 0 && pass->sceneBuilt == 0) {
        FUN_00197eb0((u8 *)g_asdModelTransformBuilder + 16, DAT_005b3c90);
        TransformBuilder *builder = g_asdModelTransformBuilder;
        SceneRootPair *roots = g_effAsdLightHandle;
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        FUN_0018d01c(roots->second);
        asdGxCommandListBegin(pass->commandList);
        DrawDispatchArgs first = {renderer, job->state};
        _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(job->records->begin, job->records->end, first);
        asdGxCommandListEnd(pass->commandList, 0);
        FUN_0018e9d8(g_asdModelTransformBuilder, DAT_005b3c90);
        FUN_00197eb0((u8 *)g_asdModelTransformBuilder + 16, DAT_005b3c98);
        builder = g_asdModelTransformBuilder;
        roots = g_effAsdLightHandle;
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        FUN_0018d01c(roots->second);
        pass->sceneBuilt = 1;
    }
    if (asdGxIsReady() == 0) {
        asdGxCommandListStartRecord(pass->recorder);
    }
    DrawDispatchArgs functor = {renderer, job->state};

    if (dumpCommands != 0) {
        u32 *cursor = g_commandBufferCursor;
        char line[260];

        _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(job->records->begin, job->records->end, functor);
        u32 *end = cursor != NULL ? g_commandBufferCursor : NULL;
        if (cursor != NULL && end != NULL && end != cursor) {
            s32 length = 0;
            s32 words = 0;

            for (; cursor < end; cursor++) {
                length += FUN_0018c8c8(line + length, 0x100 - length, 0xFF - length, "0x%08x, ", *cursor);
                if (++words == 4) {
                    words = 0;
                    length = 0;
                }
            }
        }
    } else {
        _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(job->records->begin, job->records->end, functor);
    }
    FUN_00186a64(pass->recorder);
    if (pass->enabled != 0 && pass->sceneBuilt != 0) {
        FUN_0018cf00(renderer, stateA, 1);
        FUN_00167eb0(reinterpret_cast<void *>(pass->commandList));
        nw_gfx_RenderContext_ResetState_2B7478(renderer);
    }
    FUN_0018cf00(renderer, stateA, 1);
    FUN_0018622c(pass->recorder);
}

}
