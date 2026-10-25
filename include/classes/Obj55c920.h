#ifndef CLASSES_OBJ55C920_H
#define CLASSES_OBJ55C920_H

#include "classes/SelectionState.h"
#include "bible/bibleMain.h"
#include "classes/Obj55ca08.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


/* Base of the Bible's menu and flagged views. */
class Obj55c920 : public BibleView {
public:
    Obj55c920();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    virtual ~Obj55c920();
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
    /* 0x0DC */ u8 unk0dc[0x73c];
    /* 0x818 */ Obj55ca08 touchSelection;
    /* 0x854 */ u32 unk854;
    /* 0x858 */ u32 unk858;
    /* 0x85C */ u32 unk85c;
};

#endif
