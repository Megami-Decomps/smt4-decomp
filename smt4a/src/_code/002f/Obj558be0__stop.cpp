#include "common.h"

/* The object whose vtable is at 0x558be0 (named after it until its real name is known). Its
 * destructor (FUN_002f3084) calls stop() first, then destroys three members and its base. */
class Child {
public:
    virtual void unk00();
    virtual void stop();
};

class Obj558be0 {
public:
    virtual ~Obj558be0();
    void stop();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 state;    /* 3 once stopped */
    /* 0x05 */ u8 unk05[0x37];
    /* 0x3C */ Child *child;
};

/* Stops the child object once: nothing to do if already stopped or there is no child. */
void Obj558be0::stop()
{
    if (state != 3 && child != NULL) {
        child->stop();
        state = 3;
    }
}
