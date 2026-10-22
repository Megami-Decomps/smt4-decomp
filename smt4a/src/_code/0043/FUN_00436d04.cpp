/* NON_MATCHING: Retail add r2, r2, #8 differs from recovered add r3, r2, #8. */
#include "common.h"

namespace {

struct LinkView {
    LinkView* unk00; // 0x00
    LinkView* next;  // 0x04
};

struct TargetView {
    u8 unk00[0x14]; // 0x00
    u32 index;      // 0x14
};

struct EdgeView {
    LinkView link;       // 0x00
    TargetView* target;  // 0x08
    u8 unk0C;           // 0x0C
};

struct VertexView {
    u8 unk00[8];        // 0x00
    LinkView edges;     // 0x08: circular-list sentinel
};

struct GraphView {
    u8 unk00[0x10];     // 0x00
    u32 vertexCount;    // 0x10
    VertexView** vertices; // 0x14
};

} // namespace

// Propagate marked vertices along type-1 edges, restarting after each new mark.
extern "C" void FUN_00436d04(GraphView* graph, u8* marked)
{
    bool changed;
    do {
        changed = false;
        const u32 vertexCount = graph->vertexCount;
        for (u32 index = 0; index < vertexCount; ++index) {
            if (marked[index] == 0)
                continue;

            LinkView* sentinel = &graph->vertices[index]->edges;
            for (LinkView* link = sentinel->next;
                 link != sentinel;
                 link = link->next) {
                EdgeView* edge = reinterpret_cast<EdgeView*>(link);
                if (edge->unk0C == 1) {
                    const u32 targetIndex = edge->target->index;
                    if (marked[targetIndex] == 0) {
                        marked[targetIndex] = 1;
                        changed = true;
                        break;
                    }
                }
            }
            if (changed)
                break;
        }
    } while (changed);
}
