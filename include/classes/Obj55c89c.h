#ifndef CLASSES_OBJ55C89C_H
#define CLASSES_OBJ55C89C_H

#include "classes/Obj55c920.h"

/* Mode-specific Bible menu, allocated as a 0xa9f8-byte object. */
class Obj55c89c : public Obj55c920 {
public:
    Obj55c89c(u32 mode);
    virtual void start();
    virtual void unk0c();
    virtual void stop();
    virtual void unk14();
    virtual void render();
    void resetHandlers();

    /* 0x0860 */ u8 mode;
    /* 0x0861 */ u8 unk861[0xa197];
};

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
