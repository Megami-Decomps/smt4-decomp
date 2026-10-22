/* NON_MATCHING: register allocation only: retail keeps d/c in sl/fp and the event id/node in r4/r5 (built swaps both pairs). */
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

/* Replays the records of event `id` from the entry's list, offset by x/y/z; returns 1 when the event exists. */
u32 FUN_00389ddc(u32 a, u32 b, u32 c, u32 d, s32 id, s32 x, s32 y, s32 z)
{
    EventEntry *entry = packageFindFileRefByName(a, 0x17, d);
    EventSource *source;
    EventNode *node;
    s32 i;

    if (entry != NULL) {
        source = entry->source;
    }
    if (entry != NULL && source != NULL) {
        if (source->list == NULL) {
            return 0;
        }
        for (node = source->list->head; node != NULL; node = node->next) {
            if (node->id == id) {
                if (node == NULL) {
                    return 0;
                }
                for (i = 0; i < node->recordCount; i++) {
                    EventRecord *record = &node->records[i];

                    FUN_003933d4(source->owner, c, 0x17, d, record->a + record->seconds * 1000,
                                 record->b + x, record->c + y, record->d + z);
                }
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
