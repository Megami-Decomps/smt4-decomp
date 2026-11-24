#ifndef CLASSES_OBJ55C89C_H
#define CLASSES_OBJ55C89C_H

#include "classes/Obj55c920.h"

/* One row of the Bible's roster list (the status panel reads present and id). */
struct BibleRosterRow {
    /* 0x00 */ u16 present;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
    u16 getId() const { return id; }
};

/* Mode-specific Bible menu, allocated as a 0xa9f8-byte object. */
class Obj55c89c : public Obj55c920 {
public:
    Obj55c89c(u32 mode);
    virtual ~Obj55c89c();
    virtual void start();
    virtual void unk0c();
    virtual void stop();
    virtual void unk14();
    virtual void render();
    void resetHandlers();

    typedef void (Obj55c89c::*Handler)();
    typedef s32 (Obj55c89c::*EnterHandler)();
    typedef void (Obj55c920::*LeaveHandler)();
    void confirm();
    void FUN_004a2404();
    void FUN_004a2064();
    void FUN_004a39bc();
    void shopPurchaseConfirmSelected();
    void itemMenuDispatchSelectedEntry();
    void screen4AFinish();
    void FUN_004a40f4();
    void FUN_004a38bc();
    void demonScreenConfirmSaveRefresh();
    void uiAnimatedPageToggleStep();
    void FUN_004a15a0();
    void uiCursorEnterModeNine();
    void FUN_004a321c();

    /* 0x0860 */ s8 mode;
    /* 0x0861 */ s8 recordPage; /* 1: shows the active party member's record */
    /* 0x0862 */ u8 unk862[2];
    /* 0x0864 */ BibleRosterRow rosterRows[0x500];
    /* 0xA864 */ u8 unkA864[0x10];
    /* 0xA874 */ s16 track;
    /* 0xA876 */ s8 alternate;
    /* 0xA877 */ u8 unkA877;
    /* 0xA878 */ Handler handlers[16];
    /* 0xA8F8 */ EnterHandler enterHandlers[16];
    /* 0xA978 */ LeaveHandler leaveHandlers[16];
};

typedef char Obj55c89cPageOffsets[offsetof(Obj55c89c, track) == 0xA874 &&
    offsetof(Obj55c89c, alternate) == 0xA876 && offsetof(Obj55c89c, handlers) == 0xA878 ? 1 : -1];
typedef char Obj55c89cRosterOffsets[offsetof(Obj55c89c, mode) == 0x860 &&
    offsetof(Obj55c89c, recordPage) == 0x861 && offsetof(Obj55c89c, rosterRows) == 0x864 &&
    sizeof(BibleRosterRow) == 0x20 && sizeof(Obj55c89c) == 0xA9F8 ? 1 : -1];

/* Callback-table view shared by the menu's state-dispatch implementation. */
struct BibleMenuHandlerView {
    typedef void (BibleMenuHandlerView::*Handler)();
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u32 state;
    /* 0x0018 */ u8 unk0018[0xA860];
    /* 0xA878 */ Handler handlers[48];
};
typedef char BibleMenuHandlerSizeCheck[sizeof(BibleMenuHandlerView::Handler) == 8 ? 1 : -1];
typedef char BibleMenuHandlerViewSizeCheck[sizeof(BibleMenuHandlerView) == 0xA9F8 ? 1 : -1];

#endif
