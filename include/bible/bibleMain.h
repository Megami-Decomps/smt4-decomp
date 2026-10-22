/* bible/bibleMain.c: the Bible (demon compendium) screen's controller. */
#ifndef BIBLE_BIBLEMAIN_H
#define BIBLE_BIBLEMAIN_H

#include "common.h"

/* Shared virtual interface of the compendium's concrete views. */
class BibleView {
public:
    virtual ~BibleView() {}
    virtual void start() = 0;
    virtual void unk0c() = 0;
    virtual void stop() = 0;
    virtual void unk14() = 0;
    virtual void render() = 0;
    virtual s32 isReady() = 0;
    virtual void openScreen() = 0;
    virtual s32 isScreenReady() const = 0;
    virtual void closeScreen() = 0;
};

/* The bible (demon compendium) screen's work area. */
typedef struct BibleWork {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u32 drawTaskA;
    /* 0x08 */ u32 drawTaskB;
    /* 0x0C */ u8 done;                    /* the screen has finished */
    /* 0x0D */ u8 unk0d;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u16 unk16;
    /* 0x18 */ BibleView *view;           /* closed and destroyed on shutdown */
} BibleWork;

typedef struct BibleGlobals {
    /* 0x00 */ BibleWork *work;           /* NULL while closed */
    /* 0x04 */ s32 mode;                   /* which bible page to open */
} BibleGlobals;

#endif
