#ifndef TITLE_SEQUENCE_SELECTOR_H
#define TITLE_SEQUENCE_SELECTOR_H

#include "common.h"
#include <stddef.h>

/* Sequence choices displayed by the StartMenu process. */
struct SequenceSelectionEntry {
    /* 0x00 */ const char *name;
    /* 0x04 */ u32 sequence;
};

struct SequenceSelectionState {
    /* 0x00 */ s32 processGroup;
    /* 0x04 */ const SequenceSelectionEntry *entries;
    /* 0x08 */ u32 count;
    /* 0x0C */ u32 selection;
};

typedef char SequenceSelectionLayoutCheck[sizeof(SequenceSelectionEntry) == 8 &&
    offsetof(SequenceSelectionEntry, sequence) == 4 && sizeof(SequenceSelectionState) == 0x10 &&
    offsetof(SequenceSelectionState, entries) == 4 && offsetof(SequenceSelectionState, count) == 8 &&
    offsetof(SequenceSelectionState, selection) == 0xc ? 1 : -1];

enum {
    SEQUENCE_SELECTOR_CONFIRM = 0,
    SEQUENCE_SELECTOR_PAGE_FORWARD = 3,
    SEQUENCE_SELECTOR_PAGE_BACK = 4,
    SEQUENCE_SELECTOR_PREVIOUS = 5,
    SEQUENCE_SELECTOR_NEXT = 6,
    SEQUENCE_SELECTOR_PAGE_SIZE = 25
};

extern "C" {
extern SequenceSelectionState g_startMenuProcessGroup;
void paramTripleSet(s32 processGroup, const SequenceSelectionEntry *entries, u32 count);
s32 sequenceSelectorHandleInput(u32 handle);
} /* extern "C" */

#endif
