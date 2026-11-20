#include "common.h"
#include "code/Code0014.h"
#include "code/Code0015.h"

/* The 28 effect names (7 characters and a terminator each) played without flag 4. */
struct EffectNameTable {
    char names[28][8];
};

extern "C" {
extern const EffectNameTable DAT_00530b5c; /* "F003002", ... */
s32 rt_memcmp(const void *a, const void *b, u32 size);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_001628c0(const char *name, u32 handle, s32 a, s32 b, f32 x, f32 y);

static __inline bool effectNameHasPrefix(s8 kind)
{
    return kind == 'D' || kind == 'I' || kind == 'F' || (u32)(kind - '0') <= 9;
}

/* Plays the effect `name`; names starting with D, I, F or a digit get flag 4 unless they are an
 * F name from the table. */
u32 FUN_0013edc8(const char *name)
{
    EffectNameTable table;

    __aeabi_memcpy4(&table, &DAT_00530b5c, sizeof(table));
    u32 flags = messageVoiceFlagsGet();
    s8 kind = name[0];

    if (effectNameHasPrefix(kind)) {
        s32 listed = 0;
        if (kind == 'F') {
            for (s32 i = 0; i < 28; i++) {
                if (rt_memcmp(name, table.names[i], 7) == 0) {
                    listed = 1;
                    break;
                }
            }
        }
        if (listed == 0) {
            flags |= 4;
        }
    }
    FUN_001628c0(name, messageVoiceBankGet(), flags, 1, 0.707f, 0.707f);
    return 1;
}

} /* extern "C" */
