#include "common.h"

struct PayloadRecord {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ u32 payload[5];
};

extern "C" {

/* Virtual slot: loads the 20-byte payload from the buffer; returns -1 when it is too short, else 20. */
s32 _ZN9Obj4225646decodeEPKhj(PayloadRecord *self, const u32 *buffer, u32 size)
{
    if (size < 20) {
        return -1;
    }
    self->payload[0] = buffer[0];
    self->payload[1] = buffer[1];
    self->payload[2] = buffer[2];
    self->payload[3] = buffer[3];
    self->payload[4] = buffer[4];
    return 20;
}

} /* extern "C" */
