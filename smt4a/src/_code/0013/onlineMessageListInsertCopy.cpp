/* NON_MATCHING: native message-value copy construction still has instruction scheduling differences. */
#include "classes/Obj55951c.h"

inline void *operator new(u32, void *storage) { return storage; }

struct OnlineMessageNode {
    /* 0x00 */ OnlineMessageNode *next;
    /* 0x04 */ OnlineMessageNode *previous;
    /* 0x08 */ Obj55951c value;
};
struct OnlineMessageListRoot {
    /* 0x00 */ OnlineMessageNode *sentinel;
};
struct OnlineMessageList {
    /* 0x00 */ u8 pool[0x10];
    /* 0x10 */ OnlineMessageListRoot *root;
    /* 0x14 */ u32 count;
};

extern "C" OnlineMessageNode *onlineMessageAllocateNode(OnlineMessageList *list, u32 option);

/* Copies a message into a new node and appends it before the list sentinel. */
extern "C" void onlineMessageListInsertCopy(OnlineMessageList *list, const Obj55951c *value)
{
    OnlineMessageNode *sentinel = list->root->sentinel;
    OnlineMessageNode *node = onlineMessageAllocateNode(list, 0);
    new (&node->value) Obj55951c(*value);
    node->next = sentinel;
    node->previous = sentinel->previous;
    sentinel->previous->next = node;
    sentinel->previous = node;
    ++list->count;
}
