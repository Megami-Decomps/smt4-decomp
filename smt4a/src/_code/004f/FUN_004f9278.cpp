/* NON_MATCHING: reserved-name field references materialize separate addresses instead of retaining the global base; table-offset and path-buffer registers differ. */
#include "battle/btlEffect.h"

extern "C" {
extern BtlEffectGlobals g_btlEffect;
extern const char DAT_00528544[];
extern const char DAT_0052853c[]; // NOT_EFT sentinel.
extern const char DAT_005284c0[]; // Battle effect path format.
u32 libc_strlen(const char *text);
s32 libc_strcmp(const char *first, const char *second);
s32 libc_strncmp(const char *first, const char *second, u32 length);
char *libc_strcpy(char *destination, const char *source);
void sysMemClear(void *memory, u32 bytes);
void textFormatBuffer(char *destination, const char *format, ...);
u32 keyedRecordRegisterName(const char *name);
u32 FUN_003478dc(u32 id, const char *version);
}

static inline bool effectNameHasPrefix(const char *name, const char *const &prefix)
{
    return name != NULL && libc_strncmp(name, prefix, libc_strlen(prefix)) == 0;
}
static inline bool effectNameEquals(const char *name, const char *const &reserved)
{
    return name != NULL && libc_strcmp(name, reserved) == 0;
}

extern "C" void FUN_004f9278(BtlEffectOwnerA *owner)
{
    // Both the Apocalypse table origin and registrations extend beyond published prefixes.
    struct EffectTableView { u8 prefix[0xB0]; BtlEffectSlot entries[4]; };
    struct EffectRegistration {
        u8 id;
        u8 unk01[3];
        const char *version;
        char keyName[0x84];
    };
    struct EffectOwnerView {
        BtlEffectOwnerA owner;
        u8 unk1F58[0x464];
        EffectRegistration registrations[4];
    };
    typedef char EffectRegistrationStride[sizeof(EffectRegistration) == 0x8C ? 1 : -1];
    typedef char EffectOwnerRegistrationOffset[offsetof(EffectOwnerView, registrations) == 0x23BC ? 1 : -1];
    EffectOwnerView *work = reinterpret_cast<EffectOwnerView *>(owner);
    char path[128];
    char formatted[128];
    if (owner->slots == NULL)
        return;
    for (s32 index = 0; index < 4; ++index) {
        const EffectTableView *table = reinterpret_cast<const EffectTableView *>(owner->slots);
        const char *name = table->entries[index].name;
        if (libc_strlen(name) == 0 || libc_strcmp(name, DAT_00528544) == 0 || libc_strcmp(DAT_0052853c, name) == 0)
            continue;
        if (effectNameHasPrefix(name, g_btlEffect.prefix) ||
            effectNameEquals(name, g_btlEffect.reserved.name) ||
            effectNameHasPrefix(name, g_btlEffect.otherPrefix) ||
            effectNameEquals(name, g_btlEffect.reserved.otherName))
            continue;
        sysMemClear(path, sizeof(path));
        sysMemClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_005284c0, name);
        libc_strcpy(path, formatted);
        if (libc_strlen(path) == 0)
            continue;
        EffectRegistration *registration = &work->registrations[index];
        const char *version = registration->version;
        if (version[0] == 'V' && version[1] == 'E' && version[2] == 'R') {
            u32 id = keyedRecordRegisterName(registration->keyName);
            registration->id = static_cast<u8>(id);
            registration->id = static_cast<u8>(FUN_003478dc(id, version));
        }
    }
}
