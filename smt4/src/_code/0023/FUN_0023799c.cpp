/* NON_MATCHING: typed rewrite; registers are allocated in a different order (retail keeps the index in ip, the list head in r2 and the node in r3). */
#include "common.h"

struct GraphNode;

struct ListLink {
    /* 0x00 */ ListLink *prev;
    /* 0x04 */ ListLink *next;
};

/* One edge of a node's circular edge list; `kind` 1 marks an edge that leads to `target`. */
struct GraphEdge {
    /* 0x00 */ ListLink link;
    /* 0x08 */ GraphNode *target;
    /* 0x0C */ u8 kind;
};

struct GraphNode {
    /* 0x00 */ u8 unk00[0x08];
    /* 0x08 */ ListLink edges;   /* the list's sentinel */
    /* 0x10 */ u8 unk10[0x04];
    /* 0x14 */ u32 index;
};

struct Graph {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 nodeCount;
    /* 0x14 */ GraphNode **nodes;
};

/* Marks every node reachable from the nodes already marked, following the edges of kind 1. */
extern "C" void FUN_0023799c(Graph *graph, u8 *marked)
{
restart:
    for (u32 i = 0; i < graph->nodeCount; ++i) {
        if (marked[i] != 0) {
            ListLink *head = &graph->nodes[i]->edges;
            for (ListLink *link = head->next; link != head; link = link->next) {
                GraphEdge *edge = reinterpret_cast<GraphEdge *>(link);
                if (edge->kind == 1) {
                    u32 target = edge->target->index;
                    if (marked[target] == 0) {
                        marked[target] = 1;
                        goto restart;
                    }
                }
            }
        }
    }
}
