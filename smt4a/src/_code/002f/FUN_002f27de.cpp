/* NON_MATCHING: scoped-lock construction still uses an unmigrated constructor entry; local guard/iterator layout and loop entry differ, and the final zero store is not forwarded from comparison. */
#include "classes/Obj55b28c.h"

struct SharedListNode {
    u8 unk00[8]; // 0x00
    SharedListNode* next; // 0x08
    u8 unk0c[0x0c]; // 0x0c
    void* reference; // 0x18
};
struct SharedListIterator {
    SharedListNode* node;
};
struct SharedList {
    u8 unk00[0x10]; // 0x00
    SharedListNode* sentinel; // 0x10
};
struct SharedListOwner {
    u32 unk00;      // 0x00
    SharedList list; // 0x04
    u8 unk18[0x10]; // 0x18
    u16 capacity;    // 0x28
    u8 unk2a[6];    // 0x2a
    u16 firstLimit;  // 0x30
    u8 unk32[6];    // 0x32
    u16 secondLimit; // 0x38
    u8 unk3a[2];    // 0x3a
    u32 count;       // 0x3c
};

extern "C" {
void* onlineGetActiveLock(void);
void FUN_002e6e34(void* storage, void* mutex);
void sharedRefRelease(void* reference);
void wordMoveOut_002f1324(SharedListIterator* old, SharedListIterator* current, s32 postfix);
u32 wordRefsDiffer_002f3e5a(const SharedListIterator* first, const SharedListIterator* second);
void FUN_002f3ff0(SharedList* list, const SharedListIterator* item);

// Releases and erases every shared reference while holding the active online lock.
void FUN_002f27de(SharedListOwner* owner)
{
    u32 lockStorage[3];
    FUN_002e6e34(lockStorage, onlineGetActiveLock());
    SharedListIterator current = { owner->list.sentinel->next };
    for (;;) {
        SharedListIterator end = { owner->list.sentinel };
        if (!wordRefsDiffer_002f3e5a(&current, &end)) {
            break;
        }
        sharedRefRelease(current.node->reference);
        SharedListIterator old;
        wordMoveOut_002f1324(&old, &current, 0);
        FUN_002f3ff0(&owner->list, &old);
    }
    owner->firstLimit = owner->capacity;
    owner->secondLimit = owner->capacity;
    owner->count = 0;
    reinterpret_cast<Obj55b28c*>(lockStorage)->Obj55b28c::~Obj55b28c();
}
}
