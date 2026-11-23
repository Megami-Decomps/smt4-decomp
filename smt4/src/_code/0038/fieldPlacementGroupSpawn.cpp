/* NON_MATCHING: written as smt4a's fieldPlacementGroupSpawn (its twin); only the callee-saved registers of `c` and `d` are
 * swapped (retail: d in sl, c in fp). */
#include "common.h"

extern "C" {

typedef struct EventRecord {
    /* 0x00 */ s32 seconds;
    /* 0x04 */ s32 a;
    /* 0x08 */ s32 b;
    /* 0x0C */ s32 c;
    /* 0x10 */ s32 d;
} EventRecord;

typedef struct EventNode {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 recordCount;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ EventRecord *records;
    /* 0x10 */ struct EventNode *next;
} EventNode;

typedef struct EventList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EventNode *head;
} EventList;

typedef struct EventSource {
    /* 0x00 */ u32 owner;
    /* 0x04 */ EventList *list;
} EventSource;

typedef struct EventEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EventSource *source;
} EventEntry;

extern EventEntry *packageFindFileRefByName(u32 a, s32 kind, u32 b);
extern void FUN_003933d4(u32 owner, u32 a, s32 kind, u32 b, s32 seconds, s32 x, s32 y, s32 z);

/* Returns the list's node with the id, or NULL (fieldPlacementGroupSpawn's helper in Apocalypse). */
static EventNode *eventListFindNode(EventList *list, s32 id)
{
    EventNode *node;

    for (node = list->head; node != NULL; node = node->next) {
        if (node->id == id) {
            return node;
        }
    }
    return NULL;
}

/* Replays the records of event `id` from the entry's list, offset by x/y/z; returns 1 when the event exists. */
u32 fieldPlacementGroupSpawn(u32 a, u32 b, u32 c, u32 d, s32 id, s32 x, s32 y, s32 z)
{
    EventEntry *entry = packageFindFileRefByName(a, 0x17, d);
    EventSource *source;
    EventNode *node;

    if (entry == NULL || (source = entry->source) == NULL) {
        return 0;
    }
    if (source->list == NULL) {
        return 0;
    }
    node = eventListFindNode(source->list, id);
    if (node == NULL) {
        return 0;
    }
    for (s32 i = 0; i < node->recordCount; i++) {
        EventRecord *record = &node->records[i];
        FUN_003933d4(source->owner, c, 0x17, d, record->a + record->seconds * 1000, record->b + x, record->c + y,
                     record->d + z);
    }
    return 1;
}

} /* extern "C" */
