#include "common.h"
#include "classes/Obj557e3c.h"
#include <new>

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
void saveLoadProcessUpdateSdCardDetection(void);
void *asdOperatorNew(u32);

// Construct the menu object, start the requested operation, and reset owner flags.
static __inline void saveLoadStartWindow(u32 mode, const u32 &argument)
{
    WindowOwner *owner = DAT_00588e2c;
    Obj557e3c *window = (Obj557e3c *)asdOperatorNew(sizeof(Obj557e3c));
    if (window != NULL)
        window = new (window) Obj557e3c;
    owner->window = window;
    window->slot2(mode, argument);
    owner->state = 0;
    owner->pending = 0;
}

void saveLoadStartDefaultWindow(void)
{
    FUN_002c75c0(0, 0);
    saveLoadProcessUpdateSdCardDetection();
    saveLoadStartWindow(0, 1);
}

void saveLoadStartWindowWithArgument(u32 argument)
{
    FUN_002c75c0(0, 0);
    saveLoadProcessUpdateSdCardDetection();
    saveLoadStartWindow(1, argument);
}
}
