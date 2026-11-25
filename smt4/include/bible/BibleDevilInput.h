#ifndef SMT4_BIBLE_BIBLEDEVILINPUT_H
#define SMT4_BIBLE_BIBLEDEVILINPUT_H

#include "bible/BibleDevilList.h"

/* The compendium's draw callbacks share one work pointer and a cached selected row (-1 forces a refresh). */
struct BibleDevilCallbackContext {
    /* 0x00 */ void *work;
    /* 0x04 */ s32 selected;
};

typedef char BibleDevilCallbackContextLayoutCheck[offsetof(BibleDevilCallbackContext, selected) == 4 &&
    sizeof(BibleDevilCallbackContext) == 8 ? 1 : -1];

#endif
