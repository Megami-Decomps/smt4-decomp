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
    /* 0x5A4 */ u8 mode;
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
