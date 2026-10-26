#include "shard/W6_W6Match3_IdList.h"

/* A node in the chain being matched: its id at 0x0A, the next node at 0x04. */
struct IdChainNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ IdChainNode *next;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 id;
};

struct IdChainCursor {
    /* 0x00 */ IdChainNode *node;
};

struct IdSequence {
    /* 0x00 */ u16 *ids;
};

extern "C" {

IdList *idListFind(u32 id);

/* Walks `count` ids of the sequence from `start` against the chain, advancing the cursor; an id
 * matches a node when it equals the node's id or one of the aliases listed for it. */
bool idChainMatchSequence(IdSequence *sequence, IdChainCursor *cursor, u32 start, u32 count)
{
    u32 end = start + count;
    u32 i;

    for (i = start; i < end; i++) {
        u16 nodeId = cursor->node->id;
        if (sequence->ids[i] != nodeId) {
            IdList *aliases = idListFind(nodeId);
            if (aliases == NULL) {
                return false;
            }
            if (aliases->ids[0] == 0) {
                return false;
            }
            if (sequence->ids[i] != aliases->ids[0]) {
                if (aliases->ids[1] == 0) {
                    return false;
                }
                if (sequence->ids[i] != aliases->ids[1]) {
                    if (aliases->ids[2] == 0 || sequence->ids[i] != aliases->ids[2]) {
                        return false;
                    }
                }
            }
        }
        cursor->node = cursor->node->next;
    }
    return true;
}

} /* extern "C" */
