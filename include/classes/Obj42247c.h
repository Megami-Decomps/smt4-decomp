#ifndef CLASSES_OBJ42247C_H
#define CLASSES_OBJ42247C_H

#include "classes/SelectionState.h"
#include "bible/bibleMain.h"
#include "classes/Obj55ca08.h"

/* IV selection-view base, whose touch interface precedes three state words. */
class Obj42247c : public BibleView {
public:
    Obj42247c();
    virtual ~Obj42247c();
    virtual void start() = 0;
    virtual void unk0c() = 0;
    virtual void stop() = 0;
    virtual void unk14() = 0;
    virtual void render() = 0;
    virtual s32 isReady();
    virtual void openScreen();
    virtual s32 isScreenReady() const;
    virtual void closeScreen();

    /* 0x004 */ u8 unk004[0x18];
    /* 0x01C */ u8 active;
    /* 0x01D */ u8 visible;
    /* 0x01E */ u8 selected;
    /* 0x01F */ u8 unk01f;
    /* 0x020 */ SelectionFlags flags;
    /* 0x02F */ u8 unk02f[0x99];
    /* 0x0C8 */ SelectionRectangle rectangle;
    /* 0x0DC */ u8 unk0dc[0x480];
    /* 0x55C */ Obj55ca08 touchSelection;
    /* 0x598 */ u32 unk598;
    /* 0x59C */ u32 unk59c;
    /* 0x5A0 */ u32 unk5a0;
};

#endif
