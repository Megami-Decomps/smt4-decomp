/* NON_MATCHING: only register allocation of the bit temporaries differs */
#include "common.h"
#include "status/StatusCamera.h"

struct IdRecord {
    u16 id;  // 0x00
};

struct BitFlags {
    u8 unk00[0x35];  // 0x00
    u8 bits[1];      // 0x35
};

extern "C" {

u32 dataTable05Sub9GetCount(void);
IdRecord *FUN_00248620(u16 index);

/* Sets the flag bit of the entry whose record id is `id`. */
void FUN_002e3378(u16 id)
{
    u32 count = dataTable05Sub9GetCount();

    for (s32 i = 0; i < count; i++) {
        IdRecord *record = FUN_00248620(i);

        if (record != NULL && record->id == id) {
            u8 *byte = &reinterpret_cast<BitFlags *>(FUN_002a0d0c())->bits[i / 8];
            s32 current = *byte;
            s32 mask = 1 << (i % 8);

            if ((current & mask) == 0) {
                *byte = current | mask;
            }
            return;
        }
    }
}

} /* extern "C" */
