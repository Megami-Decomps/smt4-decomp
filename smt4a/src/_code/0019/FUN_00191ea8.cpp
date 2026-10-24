#include "common.h"

struct RecordNode {
    u32 unk00;
    u32 *child; // 0x04
};

struct RecordList {
    u32 unk00;
    RecordNode ***first; // 0x04
};

struct Request {
    u8 data[60];
};

extern "C" {

RecordList *FUN_001b2ca4(u32 id, u32 kind, u32 variant);
void FUN_001ab8e0(Request *request, s32 mode, u32 a, u32 b, u32 value);
void FUN_0019b770(u32 target, Request *request, void *source, s32 flags);

// Build a request from the list's first node and submit it to that node's child.
void FUN_00191ea8(u32 id, u32 variant, u32 a, u32 b, u32 value)
{
    Request request;
    RecordList *list = FUN_001b2ca4(id, 0x1a, variant);
    RecordNode ***first = (RecordNode ***)list;
    if (list != NULL) {
        first = list->first;
    }
    RecordNode *node = **first;
    FUN_001ab8e0(&request, 2, a, b, value);
    FUN_0019b770(*node->child, &request, node, 0);
}

} /* extern "C" */
