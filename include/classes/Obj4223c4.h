#ifndef CLASSES_OBJ4223C4_H
#define CLASSES_OBJ4223C4_H

#include "classes/Obj42247c.h"

/* IV's mode-specific compendium menu, following the shared selection base. */
class Obj4223c4 : public Obj42247c {
public:
    Obj4223c4(u32 mode);
    virtual ~Obj4223c4();
    virtual void start();
    virtual void unk0c();
    virtual void stop();
    virtual void unk14();
    virtual void render();
    void resetHandlers();

    typedef void (Obj4223c4::*Handler)();
    typedef s32 (Obj4223c4::*EnterHandler)();
    typedef void (Obj42247c::*LeaveHandler)();
    void FUN_003a76b8();
    void FUN_003a7834();
    void devilListUpdatePreviewAndVisibility();
    void FUN_003a8240();
    void shopPurchaseConfirmSelected();
    void FUN_003a7f98();
    void FUN_003a836c();
    void bibleApplyConfirmedSelection();
    void partyRefreshCompleteAndUpdateSummaries();
    void FUN_003a6e68();
    void FUN_003a7b54();
    void enableKindThirteen();
    /* 0x5A4 */ u8 mode;
    /* 0x5A5 */ u8 unk5A5[0xA5B8 - 0x5A5];
    /* 0xA5B8 */ Handler handlers[14];
    /* 0xA628 */ EnterHandler enterHandlers[14];
    /* 0xA698 */ LeaveHandler leaveHandlers[14];   /* the object is 0xA708 bytes */
};

/* Full state-handler view used by resetHandlers and the vtable's update hook.
 * Each of the three handler tables has fourteen ARM C++ member pointers. */
struct Obj4223c4HandlerView {
    typedef void (Obj4223c4HandlerView::*Handler)();
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 state;
    /* 0x0018 */ u8 unk0018[0xA610];
    /* 0xA628 */ Handler handlers[14];
};

#endif
