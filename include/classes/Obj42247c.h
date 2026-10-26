#ifndef CLASSES_OBJ42247C_H
#define CLASSES_OBJ42247C_H

#include "classes/SelectionState.h"
#include "bible/bibleMain.h"
#include "classes/Obj55ca08.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

#include "AsdSDK/AsdMemUtil.h"

/* IV selection-view base, whose touch interface precedes three state words. */
class Obj42247c : public BibleView {
public:
    Obj42247c();
    virtual ~Obj42247c() {}
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    static void operator delete(void *block) { asdMemFreeNonNull(block); }
    virtual void start() = 0;
    virtual void unk0c() = 0;
    virtual void stop() = 0;
    virtual void unk14() = 0;
    virtual void render() = 0;
    virtual s32 isReady();
    virtual void openScreen();
    virtual s32 isScreenReady() const;
    virtual void closeScreen();
    void finishUseCounterMotion();
    void drawList();
    void FUN_003ab3dc();
    void FUN_003abd84();
    void FUN_003ab3d8();
    void FUN_0022cba4();
    void FUN_003a8308();
    void FUN_003a830c();
    void FUN_003a8310();

    /* 0x004 */ u8 unk004[0x10];
    /* 0x014 */ u32 step;              /* index into the derived class's state handler tables */
    /* 0x018 */ u8 unk018[4];
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
