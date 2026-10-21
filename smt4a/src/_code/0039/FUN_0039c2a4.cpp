/* NON_MATCHING: compiler rematerializes the virtual-call mode constant instead of retaining retail's saved r6 value. */
#include "common.h"

// The constructed object's vtable address point is 0x557e44.
class Obj557e3c {
public:
    virtual ~Obj557e3c();
    virtual void initialize(u32 mode, u32 argument);
private:
    u8 unk004[0x72c];
};
struct WindowOwner {
    u32 unk00;
    u8 state; // 0x04
    u8 unk05[3];
    Obj557e3c *window; // 0x08
    u8 pending; // 0x0c
};

extern "C" {
extern WindowOwner *DAT_00588e2c;
void FUN_002c75c0(u32, u32);
void FUN_0038b330(void);
void *asdOperatorNew(u32);
Obj557e3c *FUN_00420d08(Obj557e3c *);

// Construct the menu object, start its mode-one request, and reset owner flags.
void FUN_0039c2a4(u32 argument)
{
    FUN_002c75c0(0, 0);
    FUN_0038b330();
    WindowOwner *owner = DAT_00588e2c;
    Obj557e3c *window = (Obj557e3c *)asdOperatorNew(sizeof(Obj557e3c));
    if (window != NULL)
        window = FUN_00420d08(window);
    owner->window = window;
    window->initialize(1, argument);
    owner->state = 0;
    owner->pending = 0;
}
}
