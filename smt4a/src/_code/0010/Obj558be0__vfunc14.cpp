/* NON_MATCHING: The setup result and ready-state writes are correct, but result normalization and child-call argument scheduling differ from retail. */
#include "classes/Obj558be0.h"

struct InputSource {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0c */ u8 *data;
    /* 0x10 */ u32 size;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ u32 offset;
};
struct SourceChild {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ InputSource *source;
};
extern "C" void sharedRefAddRef(void *);
extern "C" int FUN_002f2978(Obj558be0 *, u8 *, u32, u32, SourceChild *);

bool Obj558be0::vfunc14(void *input, u32 mode)
{
    InputSource *source = (InputSource *)input;
    s32 result = 0;
    if (source != NULL && source->size != 0) {
        ((SourceChild *)childB)->source = source;
        sharedRefAddRef(source);
        result = FUN_002f2978(this, source->data + source->offset,
                             source->size, mode, (SourceChild *)childB);
        if (unk040[1] == 0) {
            state = 3;
        }
        ready = 1;
    }
    return result != 0;
}
