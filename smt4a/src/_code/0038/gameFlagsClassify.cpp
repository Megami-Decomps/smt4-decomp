#include "shard/Shard0038.h"

extern "C" {

extern Flags0C0C *FUN_00162e8c(void);

u32 gameFlagsClassify(s32 id)
{
    Flags0C0C *first = FUN_00162e8c();
    Flags0C0C *second = FUN_00162e8c();

    if (second->unk03 != 1) {
        if (id == 0x18) {
            return 2;
        }
    } else if (first->unkE71 != 3) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
