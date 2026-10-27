/* NON_MATCHING: the enable tests now match retail's `bics` (hasStage); only the first call's `ldr r1, [r1]` / flag register (r2 in retail, r1 here) differ. */
#include "common.h"

struct StageSource {
    /* 0x00 */ u8 unk00[0x19];
    /* 0x19 */ u8 count;
};

struct StageNode {
    /* 0x00 */ u8 unk00[0x10];
};

struct StageChain {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ StageSource *sources[3];
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ StageNode *nodes;
};

struct StageOptions {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 enabled; /* bit n enables stage n */

    bool hasStage(u32 mask) const { if ((mask & ~enabled) == 0) return true; return false; }
};

extern "C" {

void *FUN_001a83f4(StageNode *node, void *input, bool enabled, u8 last);
void *FUN_001a8558(StageNode *node, void *input, bool enabled, u8 last);
void *FUN_001a86b4(StageNode *node, void *input, bool enabled, u8 last);

/* Returns the last index of a stage's source (its count minus one), or 1 without a source. */
static __inline u8 stageLastIndex(const StageSource *source)
{
    return source != NULL ? source->count - 1 : 1;
}

/* Links the three stage nodes in sequence, feeding `*io` into the first and storing the last
 * stage's output back into it. */
void FUN_00193b40(StageChain *chain, void **io, const StageOptions *options)
{
    void *output;

    output = FUN_001a83f4(&chain->nodes[0], *io, options->hasStage(1),
                          stageLastIndex(chain->sources[0]));
    output = FUN_001a8558(&chain->nodes[1], output, options->hasStage(2),
                          stageLastIndex(chain->sources[1]));
    *io = FUN_001a86b4(&chain->nodes[2], output, options->hasStage(4),
                       stageLastIndex(chain->sources[2]));
}

} /* extern "C" */
