/* NON_MATCHING: argument/temporary register allocation (commands/extra/address in r8/r7/r6 in retail), the kind 2/3/4 mode chain is compiled as a cmpne chain here but as separate moveq arms in retail, and the command writer's cursor is reloaded from the stack for the first block */
#include "common.h"

extern "C" {

typedef struct TexSource {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 height;
    /* 0x08 */ u32 width;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 format;
    /* 0x21 */ u8 simple;
    /* 0x22 */ u8 kind;
    /* 0x23 */ u8 flag;
} TexSource;

typedef struct TexSetup {
    /* 0x00 */ u32 address;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 height;
    /* 0x0C */ u32 width;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 extra;
    /* 0x28 */ u8 flag;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ u32 height2;
    /* 0x30 */ u32 width2;
    /* 0x34 */ u32 value;
    /* 0x38 */ u8 format;
    /* 0x39 */ u8 unk39[7];
    /* 0x40 */ u32 height3;
    /* 0x44 */ u32 width3;
    /* 0x48 */ u32 list0[2];
    /* 0x50 */ u32 list1[2];
    /* 0x58 */ u32 list2[2];
    /* 0x60 */ u8 mode;
    /* 0x61 */ u8 enabled;
    /* 0x62 */ u8 unk62[2];
    /* 0x64 */ u32 sourceAddress;
} TexSetup;

u32 asdGxGetPhysicalAddress(u32 address);
typedef struct CommandWriter {
    u32 *start;
    u32 *cursor;
} CommandWriter;

void FUN_001b14dc(CommandWriter *writer, u32 *out);

/* Fills the texture setup from its source and writes up to three command blocks into the command buffer. */
void FUN_0045af48(TexSetup *setup, u32 *commands, u32 address, u32 extra, TexSource *source)
{
    u32 physical = asdGxGetPhysicalAddress(address);
    setup->address = address;
    setup->kind = source->kind;
    setup->unk05 = 0;
    setup->height = source->height;
    setup->width = source->width;
    setup->unk10 = source->unk0C;
    setup->unk14 = source->unk10;
    setup->unk18 = source->unk14;
    setup->unk1C = source->unk18;
    setup->extra = extra;
    setup->flag = source->flag;
    setup->height2 = source->height;
    setup->width2 = source->width;
    setup->value = source->unk1C;
    setup->format = source->format;
    setup->height3 = source->height;
    setup->width3 = source->width;
    u8 mode;
    if (source->simple == 0 && source->kind != 0) {
        if (source->kind == 2) {
            mode = 2;
        } else if (source->kind == 3) {
            mode = 3;
        } else if (source->kind == 4) {
            mode = 4;
        } else {
            mode = 0;
        }
    } else {
        mode = 0;
    }
    setup->mode = mode;
    setup->enabled = 1;
    setup->sourceAddress = source->address;
    u32 shifted = physical >> 3;
    CommandWriter writer;
    writer.cursor = commands;
    writer.start = commands;
    u32 *cursor = writer.cursor;
    *cursor++ = source->width | (source->height << 16);
    *cursor++ = 0xF0082;
    *cursor++ = 0;
    *cursor++ = 0x40084;
    *cursor++ = shifted;
    *cursor++ = 0xF0085;
    *cursor++ = setup->mode;
    *cursor++ = 0xF008E;
    writer.cursor = cursor;
    FUN_001b14dc(&writer, setup->list0);
    if (source->simple == 0) {
        cursor = writer.cursor;
        *cursor++ = source->width | (source->height << 16);
        *cursor++ = 0xF0092;
        *cursor++ = 0;
        *cursor++ = 0x40094;
        *cursor++ = shifted;
        *cursor++ = 0xF0095;
        *cursor++ = setup->mode;
        *cursor++ = 0xF0096;
        writer.cursor = cursor;
        FUN_001b14dc(&writer, setup->list1);
        if (source->simple == 0) {
            cursor = writer.cursor;
            *cursor++ = source->width | (source->height << 16);
            *cursor++ = 0xF009A;
            *cursor++ = 0;
            *cursor++ = 0x4009C;
            *cursor++ = shifted;
            *cursor++ = 0xF009D;
            *cursor++ = setup->mode;
            *cursor++ = 0xF009E;
            writer.cursor = cursor;
            FUN_001b14dc(&writer, setup->list2);
        }
    }
}

} /* extern "C" */
