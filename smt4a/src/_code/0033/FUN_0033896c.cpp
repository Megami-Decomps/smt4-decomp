#include "common.h"

struct VariantRecord {
    u8 unk00[0x36];
    s8 variant;
};

extern "C" {
u32 flagSelectVariant(void);
const VariantRecord *dataTable04FindById(u32 id);

// Find the first table-four record for the currently selected flag variant.
u32 FUN_0033896c(void)
{
    u32 found = 0;
    s32 variant = 0;
    switch (flagSelectVariant()) {
    case 1:
        variant = 1;
        break;
    case 2:
        variant = 2;
        break;
    }
    for (u32 id = 1; id <= 400; ++id) {
        const VariantRecord *record = dataTable04FindById(id);
        if (record != NULL && record->variant == variant) {
            found = id;
            break;
        }
    }
    return found;
}
}
