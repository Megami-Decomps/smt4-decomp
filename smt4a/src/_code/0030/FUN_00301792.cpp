/* NON_MATCHING: Thumb compiler rotates the iterator-equality loop and spills/caches different iterator addresses; retail shares one equality-call block. Candidate O2/Ospace. */
#include "shard/W6_W6Match2_ReferenceList.h"

struct ReferenceListOwner {
    u8 unk00[0x20];       // 0x00
    ReferenceList references; // 0x20
};

extern "C" {
u32 wordRefsEqual_00301734(ReferenceListNode* const* first, ReferenceListNode* const* second);
u32 wordRefsDiffer_00301744(ReferenceListNode* const* first, ReferenceListNode* const* second);
void FUN_00301754(ReferenceListIterator* result, ReferenceList* list, ReferenceListNode** node);
void sharedRefRelease(SharedReference* reference);

// Remove the first matching reference from the list and release its shared ownership.
bool FUN_00301792(ReferenceListOwner* owner, SharedReference* value)
{
    ReferenceListNode* end = owner->references.end;
    ReferenceListNode* node = end->next;
    while (!wordRefsEqual_00301734(&node, &end)) {
        if (node->value == value) {
            break;
        }
        node = node->next;
    }
    ReferenceListNode* found = node;
    ReferenceListNode* currentEnd = owner->references.end;
    if (wordRefsDiffer_00301744(&found, &currentEnd)) {
        ReferenceListNode* eraseNode = found;
        ReferenceListIterator next;
        FUN_00301754(&next, &owner->references, &eraseNode);
        sharedRefRelease(value);
        return true;
    }
    return false;
}
}
