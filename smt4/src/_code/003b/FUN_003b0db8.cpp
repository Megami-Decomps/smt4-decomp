/* NON_MATCHING: frame/serial address registers, 64-bit increment loads and cursor scheduling differ. */
#include "common.h"
#include <stddef.h>

namespace {
struct ModelSequenceHeaderWork {
    u64 position;
    u64 increment;
    u8 unk0010[0x1468];
    u32 frame;
    u32 sequence;
    u8 unk1480[5];
    u8 started;
    u8 modified;
    u8 active;
    u8 type;
    s8 hasSequence;
};
typedef char ModelSequenceHeaderWorkOffsetsCheck[
    offsetof(ModelSequenceHeaderWork, frame) == 0x1478 &&
    offsetof(ModelSequenceHeaderWork, sequence) == 0x147C &&
    offsetof(ModelSequenceHeaderWork, started) == 0x1485 &&
    offsetof(ModelSequenceHeaderWork, active) == 0x1487 &&
    offsetof(ModelSequenceHeaderWork, hasSequence) == 0x1489 ? 1 : -1];

inline void clearModelSequenceHeader(ModelSequenceHeaderWork *work)
{
    work->position = 0;
    work->increment = 0;
    work->frame = 0x40;
    work->sequence = 0x10000;
    work->active = 0;
    work->hasSequence = 0;
}
}

extern "C" {
u32 FUN_003b0964(ModelSequenceHeaderWork *work);
bool FUN_003b214c(ModelSequenceHeaderWork *work);

u32 FUN_003b0db8(ModelSequenceHeaderWork *work, const u8 *source, u32 *cursor, u32 size)
{
    if (*cursor >= size) {
        clearModelSequenceHeader(work);
        return 0x43;
    }
    u32 offset = (*cursor)++;
    u8 header = source[offset];
    work->hasSequence = (header & 2) >> 1;
    work->started = header & 1;
    u32 previousFrame = work->frame;
    u32 frame = header >> 2;
    if (previousFrame == 0x40) {
        work->frame = frame;
    } else if (previousFrame != frame) {
        if (work->increment == 0) {
            clearModelSequenceHeader(work);
            return 0x46;
        }
        work->position += (u64)(frame - previousFrame) * work->increment;
        work->frame = frame;
        if (!FUN_003b0964(work)) {
            return 0x44;
        }
    }
    if (work->hasSequence) {
        u16 encoded = *reinterpret_cast<const u16 *>(source + *cursor);
        *cursor += 2;
        u32 sequence = ((encoded & 0xFF) << 8) | (encoded >> 8);
        if (*cursor > size) {
            clearModelSequenceHeader(work);
            return 0x43;
        }
        u32 expected = work->sequence == 0x10000 ? sequence : (u16)(work->sequence + 1);
        if (expected != sequence) {
            work->sequence = 0x10000;
            return FUN_003b214c(work) ? 0x50 : 0x44;
        }
        work->sequence = sequence;
    }
    return 0;
}
}
