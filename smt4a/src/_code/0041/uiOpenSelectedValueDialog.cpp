/* NON_MATCHING: retail retains empty-vector insertion branches; temporary settings, string, and callback code generation still differs. */
#include "shard/W6_W6Match1_Obj55a5a8.h"
#include <stddef.h>

struct DialogOwner {
    u8 unk00[4];
    u8 slot[0xd8]; // 0x04
    u8 context[0x1c]; // 0xdc
    u32 selectedValue; // 0xf8
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
    u32 elements[3]; // 0x4c: Obj55aff4Vector initialized by the retail constructor
    u8 unk58[0x20];
};
struct DialogCallbackMethod {
    u32 function;
    s32 adjustment;
};
struct DialogCallback {
    const void *vtable;
    DialogOwner *owner;
    DialogCallbackMethod method;
    void *dialog;
};
typedef char CheckSettingsSize[sizeof(DialogSettings) == 0x78 ? 1 : -1];
typedef char CheckSettingsElements[offsetof(DialogSettings, elements) == 0x4c ? 1 : -1];
typedef char CheckCallbackSize[sizeof(DialogCallback) == 0x14 ? 1 : -1];

extern "C" {
extern const DialogCallbackMethod DAT_00532fcc;
extern const u8 DAT_0055cacc[];
s32 textFormatBuffer(char *buffer, const char *format, ...);
u64 FUN_004311c0(u32 id);
Obj55aff4 _ZN9Obj55aff4C1EPKc(const char *text);
void FUN_00522a48(Obj55aff4Vector *vector, const Obj55aff4 &text);
void *_Znwj(u32 size);
void *FUN_002fafd8(void *allocation, s32 mode);
void holderSetFlagBits(void *holder, u32 flags);
void FUN_00103f54(void *holder, DialogCallback *callback, s32 index, s32 enabled);
void FUN_0011b63e(void *slot, void *dialog, DialogSettings *settings, void *context);
}

extern "C" void uiOpenSelectedValueDialog(DialogOwner *owner)
{
    Obj55a5a8RawArray selectedValues(32);
    if (selectedValues.end)
        *selectedValues.end = owner->selectedValue;
    ++selectedValues.end;

    DialogSettings settings;
    settings.kind = 999;
    settings.enabled = 1;
    Obj55aff4Vector lines;
    char text[24] = {0};
    textFormatBuffer(text, "%llu", FUN_004311c0(0x19a2));
    FUN_00522a48(&lines, _ZN9Obj55aff4C1EPKc(text));
    reinterpret_cast<Obj55aff4Vector &>(settings.elements) = lines;

    void *dialog = _Znwj(0x78);
    if (dialog)
        dialog = FUN_002fafd8(dialog, 0);
    DialogCallback *callback = static_cast<DialogCallback *>(_Znwj(sizeof(DialogCallback)));
    if (callback) {
        callback->owner = owner;
        callback->method = DAT_00532fcc;
        callback->vtable = DAT_0055cacc;
        callback->dialog = dialog;
        holderSetFlagBits(dialog, 2);
        FUN_00103f54(dialog, callback, 0, 1);
    }
    FUN_0011b63e(owner->slot, dialog, &settings, owner->context);
}
