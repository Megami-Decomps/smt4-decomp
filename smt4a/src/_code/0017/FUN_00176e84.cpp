/* NON_MATCHING: the records are drawn through the same inline as FUN_001326b4 (one ldrd for the list and state words) and the dump format is the image's DAT_00544d24 string; remaining: retail loads the record range with ldm into r0 and moves begin to r1 at each draw, tests the dumped range with subs/bls where the build divides the byte difference, and lays out the pass-0 record start differently. The pass-state array is labelled g_asdLightCount in the symbol table. */
#include "shard/S1GfxModel.h"
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
extern u32 DAT_005b3c90[2];
extern u32 DAT_005b3c98[2];
extern SceneRootPair *g_effAsdLightHandle[2];
extern u32 *g_commandBufferCursor;
extern const char DAT_00544d24[]; /* "0x%08x, " */

DrawDispatchArgs _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(DrawCallbackRecord *first,
                                                                                    DrawCallbackRecord *last,
                                                                                    DrawDispatchArgs functor);
void nw_gfx_SceneTraverser_Begin(u32 node, u32 other);
void nw_gfx_SceneTraverser_End(u32 node);
void asdGxCommandListBegin(u32 list);
void asdGxCommandListEnd(u32 list, s32 arg);
void nw_gfx_SceneNode_AttachChild(TransformBuilder *builder, u32 root);
void asdGxCommandListStartRecord(u32 *recorder);
s32 FUN_0018c8c8(char *buffer, s32 size, s32 limit, const char *format, u32 value);
void FUN_00186a64(u32 *recorder);
void gfxUploadShaderMatricesIfChanged(u32 renderer, u32 state, s32 arg);
void nw_gfx_RenderContext_ResetState_2B7478(u32 renderer);
void gfxDispatchBufferIfNonEmpty(u32 *recorder);

/* Draws the job's callback records with the renderer. */
static __inline void sceneDrawJobRecords(SceneDrawJob *job, u32 renderer)
{
    SceneDrawRecords *records = job->records;
    DrawDispatchArgs functor = {renderer, job->state};
    _ZSt8for_eachIP18DrawCallbackRecord20DrawCallbackDispatchET0_T_S4_S3_(records->begin, records->end, functor);
}

/* The two-pass variant of the scene draw: `which` (1 or not) picks the pass; the pass builds its scene graph
 * on first use, then draws the job's callback records into the command buffer (optionally dumping the
 * recorded words as hex), and flushes its recorder. */
void FUN_00176e84(SceneDrawJob *job, u32 stateA, s32 which, s32 dumpCommands)
{
    u32 pass = which != 1;
    u32 renderer = job->renderer;
    GfxPassState *state = &g_asdLightCount[pass];

    if (state->enabled != 0 && state->sceneBuilt == 0) {
        FUN_00197eb0(&((ModelSlotListA *)g_asdModelTransformBuilder[pass])->slots, (s32)DAT_005b3c90[pass]);
        TransformBuilder *builder = g_asdModelTransformBuilder[pass];
        SceneRootPair *roots = g_effAsdLightHandle[pass];
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        nw_gfx_SceneTraverser_End(roots->second);
        asdGxCommandListBegin(state->commandList);
        sceneDrawJobRecords(job, renderer);
        asdGxCommandListEnd(state->commandList, 0);
        nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[pass], DAT_005b3c90[pass]);
        FUN_00197eb0(&((ModelSlotListA *)g_asdModelTransformBuilder[pass])->slots, (s32)DAT_005b3c98[pass]);
        builder = g_asdModelTransformBuilder[pass];
        roots = g_effAsdLightHandle[pass];
        nw_gfx_SceneTraverser_Begin(roots->second, roots->first);
        builder->visit(roots->second);
        nw_gfx_SceneTraverser_End(roots->second);
        state->sceneBuilt = 1;
    }
    if (state->recorded == 0) {
        if (pass == 0) {
            asdGxCommandListStartRecord(state->recorder);
        } else {
            gfxUploadShaderMatricesIfChanged(renderer, stateA, 0);
        }
        if (dumpCommands != 0) {
            u32 *cursor = g_commandBufferCursor;
            sceneDrawJobRecords(job, renderer);
            u32 *end = cursor != NULL ? g_commandBufferCursor : NULL;
            if (cursor != NULL && end != NULL && end - cursor > 0) {
                char line[0x100];
                s32 length = 0;
                s32 words = 0;

                for (; cursor < end; cursor++) {
                    length += FUN_0018c8c8(line + length, 0x100 - length, 0xFF - length, DAT_00544d24, *cursor);
                    if (++words == 4) {
                        words = length = 0;
                    }
                }
            }
        } else {
            sceneDrawJobRecords(job, renderer);
        }
        if (pass == 0) {
            FUN_00186a64(state->recorder);
        }
    }
    if (state->enabled != 0 && state->sceneBuilt != 0) {
        gfxUploadShaderMatricesIfChanged(renderer, stateA, 0);
        asdGxCommandListReplayCopy(reinterpret_cast<void *>(state->commandList));
        nw_gfx_RenderContext_ResetState_2B7478(renderer);
    }
    if (pass == 0) {
        gfxUploadShaderMatricesIfChanged(renderer, stateA, 0);
        gfxDispatchBufferIfNonEmpty(state->recorder);
    }
}

} /* extern "C" */
