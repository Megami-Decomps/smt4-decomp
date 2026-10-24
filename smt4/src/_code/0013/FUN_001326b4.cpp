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

extern GfxPassState DAT_0041065c;
extern TransformBuilder *g_asdModelTransformBuilder;
extern u32 sceneGroup1Root;
extern u32 sceneGroup2Root;
extern SceneRootPair *DAT_00464b7c;
extern u32 *g_commandBufferCursor;

DrawDispatchArgs _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(DrawCallbackRecord *first,
                                                                                    DrawCallbackRecord *last,
                                                                                    DrawDispatchArgs functor);
void FUN_002abbe8(void *builder, u32 root);
void nw_gfx_SceneTraverser_Begin(u32 node, u32 other);
void FUN_002abb5c(u32 node);
void asdGxCommandListBegin(u32 list);
void asdGxCommandListEnd(u32 list, s32 arg);
void nw_gfx_SceneNode_AttachChild(TransformBuilder *builder, u32 root);
s32 asdGxIsReady(void);
void asdGxCommandListStartRecord(u32 *recorder);
s32 FUN_0013c6c0(char *buffer, s32 size, s32 limit, const char *format, u32 value);
void FUN_00138c94(u32 *recorder);
void FUN_002ab92c(u32 renderer, u32 state, s32 arg);
void FUN_002c4e98(u32 list);
void nw_gfx_RenderContext_ResetState_2B7478(u32 renderer);
void FUN_002ab8c4(u32 *recorder);

/* Builds the scene graph passes on first use, then draws the job's callback records into the
 * command buffer (optionally dumping the recorded words as hex), and flushes the recorder. */
void FUN_001326b4(SceneDrawJob *job, u32 stateA, u32 stateB, s32 dumpCommands)
{
    u32 renderer = job->renderer;
    GfxPassState *pass = &DAT_0041065c;

    if (pass->enabled != 0 && pass->sceneBuilt == 0) {
        FUN_002abbe8((u8 *)g_asdModelTransformBuilder + 16, sceneGroup1Root);
        TransformBuilder *builder = g_asdModelTransformBuilder;
        SceneRootPair *roots = DAT_00464b7c;
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        FUN_002abb5c(roots->second);
        asdGxCommandListBegin(pass->commandList);
        DrawDispatchArgs first = {renderer, job->state};
        _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(job->records->begin, job->records->end, first);
        asdGxCommandListEnd(pass->commandList, 0);
        nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder, sceneGroup1Root);
        FUN_002abbe8((u8 *)g_asdModelTransformBuilder + 16, sceneGroup2Root);
        builder = g_asdModelTransformBuilder;
        roots = DAT_00464b7c;
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        FUN_002abb5c(roots->second);
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
                length += FUN_0013c6c0(line + length, 0x100 - length, 0xFF - length, "0x%08x, ", *cursor);
                if (++words == 4) {
                    words = 0;
                    length = 0;
                }
            }
        }
    } else {
        _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(job->records->begin, job->records->end, functor);
    }
    FUN_00138c94(pass->recorder);
    if (pass->enabled != 0 && pass->sceneBuilt != 0) {
        FUN_002ab92c(renderer, stateA, 1);
        FUN_002c4e98(pass->commandList);
        nw_gfx_RenderContext_ResetState_2B7478(renderer);
    }
    FUN_002ab92c(renderer, stateA, 1);
    FUN_002ab8c4(pass->recorder);
}

}
