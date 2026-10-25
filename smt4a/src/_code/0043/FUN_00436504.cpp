/* NON_MATCHING: the retail unit inlines std::list node linking and its scratch-list cleanup separately at each exit (three copies of the free loop and a different register assignment); this version shares one helper, so the instruction count and scheduling differ. The list/node layouts are inferred from the stores. */
#include "common.h"
#include "gfx/MaskWork.h"
#include <new>

namespace {

/* A node of the doubly linked value list: links, then the value. */
struct ValueNode {
    /* 0x00 */ ValueNode *prev;
    /* 0x04 */ ValueNode *next;
    /* 0x08 */ u8 value[8];              /* a Variant */
};

/* A list of values: the allocator it frees nodes through and a sentinel node (prev at +8, next at +0xc). */
struct ValueList {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ValueNode *last;          /* sentinel->prev */
    /* 0x0c */ ValueNode *first;         /* sentinel->next */
    /* 0x10 */ void *allocator;
};

/* The sentinel as a node: its own address is what first/last point to when the list is empty. */
static inline ValueNode *sentinelOf(ValueList *list)
{
    return reinterpret_cast<ValueNode *>(reinterpret_cast<u8 *>(list) + 8);
}

/* A parsed token record: how many items it carries and the record that follows. */
struct TokenRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TokenRecord *next;
    /* 0x08 */ u8 unk08[2];
    /* 0x0a */ u16 itemCount;
};

/* The reader: the current record and the buffer it parses from. */
struct TokenReader {
    /* 0x00 */ TokenRecord *record;
    /* 0x04 */ s32 buffer[4];
    /* 0x14 */ s32 length;
};

/* A scratch list the parse step builds (sentinel-based, with its allocator). */
struct ScratchList {
    /* 0x00 */ ValueNode *last;
    /* 0x04 */ ValueNode *first;
    /* 0x08 */ void *allocator;
    /* 0x0c */ s32 unk0c;
    /* 0x10 */ u8 unk10[0x10];
};

extern "C" void FUN_004387bc(void *allocator, void *block, u32 count);

/* Frees every node of the scratch list (the list's own sentinel ends the walk). */
static inline void releaseScratch(ScratchList *scratch)
{
    ValueNode *sentinel = reinterpret_cast<ValueNode *>(scratch);
    if (scratch->allocator != NULL) {
        for (ValueNode *item = scratch->first; item != sentinel;) {
            ValueNode *following = item->next;
            FUN_004387bc(scratch->allocator, item, 1);
            item = following;
        }
    }
}
}

extern "C" {
void FUN_004386a4(ScratchList *scratch, s32 *buffer, s32 length);
s32 FUN_00438434(ScratchList *scratch, s32 *zero, s32 *first, s32 *second);
void FUN_0043865c(ValueList **result, ScratchList *scratch, s32 *key);
ValueNode *FUN_004387f0(void *allocator, u32 count);
void FUN_005155bc(void *value);
void FUN_00515618(ValueNode **result, ValueNode *sentinel);
void variantSetPlain(void *variant, s32 *source);

/* Reads the record's items into the value list: with items, each is parsed through a scratch list and
   appended to the output list; without, the list is emptied and one fresh value is stored. Returns 0, or 2 when
   an allocation or the parse failed. The reader advances to the next record. */
u32 FUN_00436504(TokenReader *reader, ValueList **result, ValueList **target, ValueList **owner)
{
    if (reader->record->itemCount != 0) {
        ValueList *current = *owner;
        for (s32 index = 1; index < reader->record->itemCount; index++) {
            ScratchList scratch;
            FUN_004386a4(&scratch, reader->buffer, reader->length);
            s32 zero = 0;
            s32 first = reinterpret_cast<s32>(*target);
            s32 second = reinterpret_cast<s32>(*owner);
            if (FUN_00438434(&scratch, &zero, &first, &second) == 0) {
                releaseScratch(&scratch);
                return 2;
            }
            ValueNode *sentinel = sentinelOf(current);
            ValueNode *node = FUN_004387f0(current->allocator, 2);
            if (node == NULL) {
                releaseScratch(&scratch);
                return 2;
            }
            new (&reinterpret_cast<MaskWorkNode *>(node)->payload) Variant;
            node->prev = sentinel->prev;
            node->next = sentinel;
            sentinel->prev = node;
            node->prev->next = node;
            s32 value = zero;
            variantSetPlain(node->value, &value);
            s32 key = reinterpret_cast<s32>(*owner);
            ValueList *found;
            FUN_0043865c(&found, &scratch, &key);
            current = *reinterpret_cast<ValueList **>(reinterpret_cast<u8 *>(found) + 0xc);
            if (scratch.allocator != NULL) {
                releaseScratch(&scratch);
                ValueNode *scratchSentinel = reinterpret_cast<ValueNode *>(&scratch);
                scratch.last = scratchSentinel;
                scratch.first = scratchSentinel;
                scratch.unk0c = 0;
            }
        }
        *result = current;
    } else {
        ValueList *list = *target;
        ValueNode *sentinel = sentinelOf(list);
        while (list->first != sentinel) {
            ValueNode *node = list->first;
            node->next->prev = node->prev;
            node->prev->next = node->next;
            FUN_005155bc(node->value);
            FUN_004387bc(list->allocator, node, 2);
        }
        ValueNode *fresh;
        FUN_00515618(&fresh, sentinel);
        if (fresh == NULL) {
            return 2;
        }
        s32 value = reinterpret_cast<s32>(*owner);
        variantSetPlain(fresh->value, &value);
        *result = *owner;
    }
    reader->record = reader->record->next;
    return 0;
}

} /* extern "C" */
