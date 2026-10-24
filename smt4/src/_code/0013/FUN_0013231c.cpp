/* NON_MATCHING: stack layout of the dump line buffer and the load order of the job's record list (retail uses one ldrd for the list and state words) differ; the call sequence is the same. The pass-state array is labelled g_asdLightCount in the symbol table. */
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

/* The command-list state of one scene pass (0x18 bytes, one per pass). */
struct GfxPassState {
    u8 unk00[4];
    u8 enabled;
    u8 sceneBuilt;
    u8 unk06[2];
    u32 commandList;
    u8 unk0c[4];
    u32 *recorder;
    u8 recorded;                     /* the pass has been recorded already */
    u8 unk15[3];
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

extern GfxPassState g_asdLightCount[2];
extern TransformBuilder *g_asdModelTransformBuilder[2];
extern u32 sceneGroup1Root[2];
extern u32 sceneGroup2Root[2];
extern SceneRootPair *DAT_00464b7c[2];
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
void asdGxCommandListStartRecord(u32 *recorder);
s32 FUN_0013c6c0(char *buffer, s32 size, s32 limit, const char *format, u32 value);
void FUN_00138c94(u32 *recorder);
void FUN_002ab92c(u32 renderer, u32 state, s32 arg);
void FUN_002c4e98(u32 list);
void nw_gfx_RenderContext_ResetState_2B7478(u32 renderer);
void FUN_002ab8c4(u32 *recorder);

/* The two-pass variant of the scene draw: `which` (1 or not) picks the pass; the pass builds its scene graph
 * on first use, then draws the job's callback records into the command buffer (optionally dumping the
 * recorded words as hex), and flushes its recorder. */
void FUN_0013231c(SceneDrawJob *job, u32 stateA, s32 which, s32 dumpCommands)
{
    u32 pass = which != 1;
    u32 renderer = job->renderer;
    GfxPassState *state = &g_asdLightCount[pass];

    if (state->enabled != 0 && state->sceneBuilt == 0) {
        FUN_002abbe8((u8 *)g_asdModelTransformBuilder[pass] + 16, sceneGroup1Root[pass]);
        TransformBuilder *builder = g_asdModelTransformBuilder[pass];
        SceneRootPair *roots = DAT_00464b7c[pass];
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        FUN_002abb5c(roots->second);
        asdGxCommandListBegin(state->commandList);
        DrawDispatchArgs first = {renderer, job->state};
        _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(job->records->begin, job->records->end, first);
        asdGxCommandListEnd(state->commandList, 0);
        nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[pass], sceneGroup1Root[pass]);
        FUN_002abbe8((u8 *)g_asdModelTransformBuilder[pass] + 16, sceneGroup2Root[pass]);
        builder = g_asdModelTransformBuilder[pass];
        roots = DAT_00464b7c[pass];
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        FUN_002abb5c(roots->second);
        state->sceneBuilt = 1;
    }
    if (state->recorded == 0) {
        if (pass != 0) {
            FUN_002ab92c(renderer, stateA, 0);
        } else {
            asdGxCommandListStartRecord(state->recorder);
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
        if (pass == 0) {
            FUN_00138c94(state->recorder);
        }
    }
    if (state->enabled != 0 && state->sceneBuilt != 0) {
        FUN_002ab92c(renderer, stateA, 0);
        FUN_002c4e98(state->commandList);
        nw_gfx_RenderContext_ResetState_2B7478(renderer);
    }
    if (pass == 0) {
        FUN_002ab92c(renderer, stateA, 0);
        FUN_002ab8c4(state->recorder);
    }
}

} /* extern "C" */
