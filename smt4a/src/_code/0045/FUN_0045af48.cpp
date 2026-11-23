/* NON_MATCHING: register allocation only: retail keeps commands/extra in r8/r7 (built r7/r8) and materialises the zero for unk05 and for each block's zero command word separately, where the build shares one zero register (r9). */
#include "common.h"
#include "gfx/TexSetup.h"

extern "C" {


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
    /* Only kinds 2-4 of a source with more than one block keep their mode. */
    setup->mode = (source->simple == 0 && source->kind != 0)
                      ? (source->kind == 2 ? 2 : source->kind == 3 ? 3 : source->kind == 4 ? 4 : 0)
                      : 0;
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
    FUN_001b14dc(&writer, setup->lists[0]);
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
        FUN_001b14dc(&writer, setup->lists[1]);
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
            FUN_001b14dc(&writer, setup->lists[2]);
        }
    }
}

} /* extern "C" */
