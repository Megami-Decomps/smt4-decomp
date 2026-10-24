/* NON_MATCHING: control flow merges differently: retail tests the header result (r3 >= 0) after the header block; built jumps straight on. */
#include "common.h"

struct PacketFields {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 type;
    /* 0x18 */ u8 flag;
    /* 0x19 */ u8 unk19;
    /* 0x1a */ u16 left;
    /* 0x1c */ u16 top;
    /* 0x1e */ u16 right;
    /* 0x20 */ u16 bottom;
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ u8 low;
    /* 0x25 */ u8 high;
    /* 0x26 */ u16 offsetX;
    /* 0x28 */ u16 offsetY;
    /* 0x2a */ u16 width;
    /* 0x2c */ u16 height;
};

/* Reads a big-endian halfword. */
static u16 readBigEndian16(const u8 *bytes)
{
    u32 value = *(const u16 *)bytes;
    return ((value >> 8) & 0xff) | ((value & 0xff) << 8);
}

// Parse a packet from the buffer into the object's fields; returns the bytes consumed or -1.
extern "C" s32 _ZN9Obj55c9c05parseEPKhj(PacketFields *packet, const u8 *data, u32 size)
{
    const u8 *end = data + size;
    s32 offset = -1;

    if (size != 0) {
        packet->type = data[0];
        if (size - 1 != 0) {
            packet->flag = data[1];
            if (size - 2 >= 10) {
                packet->left = readBigEndian16(data + 2);
                packet->top = readBigEndian16(data + 4);
                packet->right = readBigEndian16(data + 6);
                packet->bottom = readBigEndian16(data + 8);
                packet->unk22 = data[10];
                packet->unk23 = data[11];
                offset = 12;
            }
        }
    }
    if (offset < 0)
        return offset;

    const u8 *cursor = data + offset;
    if (cursor >= end)
        return -1;
    packet->low = *cursor & 0xf;
    packet->high = *cursor++ >> 4;
    if (cursor + 4 <= end) {
        packet->offsetX = *cursor++;
        packet->offsetY = *cursor++;
    }
    if (cursor + 2 <= end) {
        u32 insetX = *cursor++;
        u32 insetY = *cursor++;
        packet->width = packet->right - (packet->offsetX + insetX);
        packet->height = packet->bottom - (insetY + packet->offsetY);
    }
    return cursor - data;
}
