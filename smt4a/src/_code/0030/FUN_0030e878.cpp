/* NON_MATCHING: awaiting size-optimized Thumb compiler settings. */
#include "shard/NetManager.h"

struct OnlineChainNode;
struct OnlineChainVtable {
    void (*unk00)();
    void (*unk04)();
    void (*unk08)();
    void (*unk0c)();
    void (*unk10)();
    OnlineChainNode *(*getNext)(OnlineChainNode *node); // 0x14
    void (*setNext)(OnlineChainNode *node, OnlineChainNode *next); // 0x18
};
struct OnlineChainNode {
    OnlineChainVtable *vtable;
};
struct OnlineChainManager : NetManager {
    u8 unk08[0x18];
    OnlineChainNode *first; // 0x20
    u32 count; // 0x24
};

// Append the node to the manager's singly linked object chain.
extern "C" void FUN_0030e878(void *, OnlineChainNode *node)
{
    OnlineChainManager *manager = static_cast<OnlineChainManager *>(&DAT_005949d8);
    OnlineChainNode *tail = manager->first;
    if (tail == NULL) {
        manager->first = node;
        manager->count = 1;
    } else {
        while (tail->vtable->getNext(tail) != NULL)
            tail = tail->vtable->getNext(tail);
        tail->vtable->setNext(tail, node);
        manager->count++;
    }
}
