/* NON_MATCHING: the callback is now a real class (Obj55cac4, vtable via its constructor) and the guarded construction matches retail; the dialog/callback registers (r5/r6), the settings-store order and the pool order differ. */
#include "classes/Obj5597fc.h"
#include <stddef.h>
#include <new>

class DialogOwner {
public:
    void removeMatchingEntry();
    u8 unk00[4];
    u8 slot[0xd8]; // 0x04
    u8 context[0x1c]; // 0xdc
};

struct DialogSettings;
extern "C" void _ZN9Obj5597fcC1Ev(DialogSettings *settings);

// Layout view of the settings value; its vector-owning base performs cleanup.
// Obj5597fc's shared declaration is abstract, so invoke its retail constructor explicitly.
struct DialogSettings {
    DialogSettings() { _ZN9Obj5597fcC1Ev(this); }
    ~DialogSettings() { reinterpret_cast<Obj55a5a8 *>(this)->Obj55a5a8::~Obj55a5a8(); }
    u32 vtable;
    u8 state;
    u8 enabled; // 0x05
    u8 unk06[0x1e];
    u16 kind; // 0x24
    u8 unk26[0x26];
    u32 elements[3]; // 0x4c
    u8 unk58[4];
    u8 text[0x10]; // 0x5c: SmallTextString
    u8 ready; // 0x6c
    u8 unk6d[0xb];
};
typedef void (DialogOwner::*DialogCallbackMethod)();
/* The callback object the holder invokes: a member function of the dialog's owner. Slot 0 is the
 * destructor; the other virtual methods are defined with the holder code. */
class Obj55cac4 {
public:
    Obj55cac4(DialogOwner *owner, const DialogCallbackMethod &method)
    {
        this->method = method;
        this->owner = owner;
    }
    virtual ~Obj55cac4();
    virtual void slot2();
    virtual void slot3();

    DialogOwner *owner;         // 0x04
    DialogCallbackMethod method; // 0x08
    void *dialog;               // 0x10
};
typedef char CheckSettingsSize[sizeof(DialogSettings) == 0x78 ? 1 : -1];
typedef char CheckCallbackSize[sizeof(Obj55cac4) == 0x14 ? 1 : -1];

extern "C" {
extern const DialogCallbackMethod DAT_00532fc4;
void FUN_00110b28(u8 *text, const SmallTextString *source);
void *_Znwj(u32 size);
void *FUN_002fafd8(void *allocation, s32 mode);
void holderSetFlagBits(void *holder, u32 flags);
void FUN_00103f54(void *holder, Obj55cac4 *callback, s32 index, s32 enabled);
void FUN_0011b63e(void *slot, void *dialog, DialogSettings *settings, void *context);

/* Opens the dialog with default settings: an empty text, a 999 kind and a callback back into the owner. */
void FUN_004139ec(DialogOwner *owner)
{
    DialogSettings settings;
    settings.enabled = 1;
    settings.kind = 999;
    settings.ready = 5;
    SmallTextString source;
    source.size = (u32)-1;
    FUN_00110b28(settings.text, &source);

    void *dialog = _Znwj(0x78);
    dialog = dialog != NULL ? FUN_002fafd8(dialog, 0) : NULL;
    void *memory = _Znwj(sizeof(Obj55cac4));
    if (memory) {
        Obj55cac4 *callback = new (memory) Obj55cac4(owner, DAT_00532fc4);
        callback->dialog = dialog;
        holderSetFlagBits(dialog, 2);
        FUN_00103f54(dialog, callback, 0, 1);
    }
    FUN_0011b63e(owner->slot, dialog, &settings, owner->context);
}
}
