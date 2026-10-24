/* NON_MATCHING: readable rewrite of the pattern-group copy (clones a group node and its member list into the graph, recursing for members not in it yet); retail constructs the group's sub-list sentinel and the link payload with placement-new null checks (adds/beq, strne) that this plain-struct version does not have, and orders the saves and stack temporaries differently. */
#include "sys/FlagBlockPool.h"

struct PatternGroup;

// The graph's group list head: a circular list whose head also names the pool the groups come from.
struct PatternGroupList {
    /* 0x00 */ PatternGroupList *next;
    /* 0x04 */ PatternGroupList *previous;
    /* 0x08 */ FlagBlockPool *pool;
};

// A group of the graph; it owns a sub-list of member values (sentinel at +8, circular, next/prev reversed in storage).
struct PatternGroup {
    /* 0x00 */ PatternGroup *next;
    /* 0x04 */ PatternGroup *previous;
    /* 0x08 */ u32 *memberFirst;       // sub-list sentinel: points at itself when empty
    /* 0x0C */ u32 *memberLast;
    /* 0x10 */ FlagBlockPool *memberPool;
    /* 0x14 */ u32 unk14;
};

// A link of the graph's token list: the source token it stands for and the group that was made for it.
struct PatternLink {
    /* 0x00 */ PatternLink *next;
    /* 0x04 */ PatternLink *previous;
    /* 0x08 */ void *source;
    /* 0x0C */ PatternGroup *group;
};

// The token list of the graph being built.
struct PatternGraph {
    /* 0x00 */ PatternLink *first;
    /* 0x04 */ PatternLink *last;
    /* 0x08 */ FlagBlockPool *linkPool;
    /* 0x0C */ PatternGroupList *groups;    // group list sentinel
    /* 0x10 */ FlagBlockPool *memberPool;
};

// A source token whose member list is the circular list at +8.
struct PatternSource {
    /* 0x00 */ PatternSource *next;
    /* 0x04 */ PatternSource *previous;
    /* 0x08 */ PatternLink *members;    // list sentinel; members run from +0xC backwards
    /* 0x0C */ PatternLink *memberLast;
};

extern "C" {
FlagPoolBlock *FUN_004387f0(FlagBlockPool *pool, s32 count);
void FUN_00515598(void *value);
s32 FUN_005153f0(void *value, void *source, u32 *token, FlagBlockPool *pool);

s32 FUN_00438434(PatternGraph *graph, PatternGroup **out, PatternSource **source, PatternSource **end);

// Allocates a two-block node from `pool` and links it in after `sentinel`; NULL when the pool is exhausted.
static inline PatternGroup *patternGroupInsertAfter(FlagBlockPool *pool, PatternGroup *sentinel)
{
    PatternGroup *node = reinterpret_cast<PatternGroup *>(FUN_004387f0(pool, 2));
    if (node == NULL) {
        return NULL;
    }
    if (reinterpret_cast<s32>(node) != -8) {
        FUN_00515598(node + 0);
    }
    node->next = sentinel->next;
    node->previous = sentinel;
    sentinel->next = node;
    node->next->previous = node;
    return node;
}

// Copies the group of `*source` (and its members) into the graph: returns 1 and stores the new group in `*out`, or 0
// when an allocation or a member copy fails.
s32 FUN_00438434(PatternGraph *graph, PatternGroup **out, PatternSource **source, PatternSource **end)
{
    PatternGroupList *sentinel = graph->groups;
    PatternGroup *group = reinterpret_cast<PatternGroup *>(FUN_004387f0(sentinel->pool, 2));
    if (group == NULL) {
        return 0;
    }
    group->memberFirst = NULL;
    group->memberLast = NULL;
    group->next = reinterpret_cast<PatternGroup *>(sentinel->next);
    group->previous = reinterpret_cast<PatternGroup *>(sentinel);
    sentinel->next = reinterpret_cast<PatternGroupList *>(group);
    group->next->previous = group;
    group->memberPool = graph->memberPool;

    PatternLink *link = reinterpret_cast<PatternLink *>(FUN_004387f0(graph->linkPool, 1));
    if (link == NULL) {
        return 0;
    }
    link->next = graph->first;
    link->previous = reinterpret_cast<PatternLink *>(graph);
    graph->first = link;
    link->next->previous = link;
    link->source = *source;
    link->group = group;

    if (*source != *end) {
        PatternLink *sentinelLink = reinterpret_cast<PatternLink *>(reinterpret_cast<u8 *>(*source) + 8);
        for (PatternLink *member = (*source)->members; member != sentinelLink; member = member->previous) {
            PatternLink *known = reinterpret_cast<PatternLink *>(graph->last);
            while (known != reinterpret_cast<PatternLink *>(graph) && known->source != member->source) {
                known = known->previous;
            }
            PatternGroup *child;
            u32 token;
            if (known != reinterpret_cast<PatternLink *>(graph)) {
                child = patternGroupInsertAfter(group->memberPool, reinterpret_cast<PatternGroup *>(&group->memberFirst));
                if (child == NULL) {
                    return 0;
                }
                token = reinterpret_cast<u32>(known->group);
            } else {
                PatternGroup *created = NULL;
                PatternSource *memberSource = static_cast<PatternSource *>(member->source);
                PatternSource *memberEnd = *end;
                if (FUN_00438434(graph, &created, &memberSource, &memberEnd) == 0) {
                    return 0;
                }
                child = patternGroupInsertAfter(group->memberPool, reinterpret_cast<PatternGroup *>(&group->memberFirst));
                if (child == NULL) {
                    return 0;
                }
                token = reinterpret_cast<u32>(created);
            }
            if (FUN_005153f0(&child->memberFirst, &member->source, &token, graph->memberPool) == 0) {
                return 0;
            }
        }
    }
    *out = group;
    return 1;
}
}
