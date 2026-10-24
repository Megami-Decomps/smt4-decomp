/* NON_MATCHING: load scheduling: retail loads both tail pointers before dereferencing either */
#include "common.h"

struct WordList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 *tail;
    /* 0x14 */ u32 unk14;
};

extern "C" {

void listInitEmpty(WordList *list, u32 mode);
void FUN_003101dc(WordList *list, u32 *first, u32 second);

/* Copy-constructs a list: starts it empty and appends the source's elements. */
WordList *FUN_0030ce60(WordList *self, const WordList *source)
{
    self->unk00 = 0;
    self->unk04 = 0;
    self->unk08 = 0;
    self->unk0C = 0;
    self->tail = 0;
    self->unk14 = 0;
    listInitEmpty(self, 0);

    u32 first = *self->tail;
    FUN_003101dc(self, &first, *source->tail);
    return self;
}

} /* extern "C" */
