/* NON_MATCHING: near (213 rows against 209, same 92-byte frame): same calls, layout ids and float arguments; retail keeps the entry/index in sl/r9 and the x offset in fp where ours uses fp/sl (fp/sl swapped), loads the layout bank id after the parameter spills and reads the rectangle x/y pair in the other order */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

#define LAYOUT_BANK 0x31

/* Layout rectangle record (observed fields only). */
struct LayoutPart {
    u8 pad00[8];
    s16 x;            /* 0x08 */
    s16 y;            /* 0x0A */
};

/* Header word pair at the entry: type in the high byte of the second halfword. */
struct CardEntry {
    u16 pad00;
    u16 typeWord;     /* 0x02: type = typeWord >> 8 (10 = none) */
};

struct IconRecord {
    u8 pad00[0x9C];
    s16 iconLayout;   /* 0x9C */
};

LayoutPart *FUN_001834a4(s32 bank, s32 id);
void FUN_001835b4(s32 layer, s32 bank, s32 id, s32 x, s32 y, s32 depth);
void efctSetSpeed(f32 speed);
IconRecord *FUN_0019e52c(s32 id);
void FUN_00184310(void);
void FUN_00169a1c(s32 layout, s32 x, s32 y, s32 depth);
s32 FUN_003f74a8(u32 id, CardEntry *entry, s32 x, s32 y);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void FUN_00162790(s32 layer, u32 color, const char *text, f32 x, f32 y, f32 alpha, f32 a, f32 b);
void FUN_003f533c(u32 id, s32 x, s32 y, s32 depth, u32 arg, s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, f32 speed);

/* Draws one card of the list: frame parts, the type icon, the formatted label and the stat widget,
 * offset by (offsetX, offsetY) and fading with `depth`. */
void FUN_003f7164(u32 id, CardEntry *entry, s32 index, u32 arg, s32 offsetX, s32 offsetY, s32 depth, f32 speed)
{
    char label[0x40];

    LayoutPart *base = FUN_001834a4(LAYOUT_BANK, index + 0x88);
    s32 x = base->x + offsetX;
    s32 y = base->y + offsetY;
    efctSetSpeed(speed);
    FUN_001835b4(2, LAYOUT_BANK, 0x7B, x, y, depth);
    FUN_001835b4(2, LAYOUT_BANK, 0x7C, x, y, depth);
    LayoutPart *part = FUN_001834a4(LAYOUT_BANK, index + 0x91);
    FUN_001835b4(2, LAYOUT_BANK, 0x90, part->x + offsetX, part->y + offsetY, depth);

    part = FUN_001834a4(LAYOUT_BANK, 0x7D);
    s32 iconY = part->y + base->y + offsetY;
    s32 iconX = part->x + base->x + offsetX;
    s32 type = entry->typeWord >> 8;
    if (type != 10) {
        s32 iconId;
        switch (type) {
        case 0: iconId = 0xAE; break;
        case 1: iconId = 0xB2; break;
        case 2: iconId = 0xB0; break;
        case 3: iconId = 0xB1; break;
        case 4: iconId = 0xB3; break;
        case 5: iconId = 5; break;
        case 6: iconId = 0xBA; break;
        case 7: iconId = 0xB9; break;
        case 8: iconId = 0xAF; break;
        case 9: iconId = 0xBB; break;
        default: iconId = -1; break;
        }
        IconRecord *record;
        if (iconId < 0) {
            record = 0;
        } else if (type == 9) {
            record = (IconRecord *)0x29D;
        } else {
            record = FUN_0019e52c(iconId);
        }
        FUN_00184310();
        s16 layout = 0;
        if (record != 0) {
            layout = record->iconLayout;
        }
        if (record != 0 && layout != 0) {
            FUN_00169a1c(layout, iconX, iconY, depth + 5);
        } else {
            FUN_001835b4(2, LAYOUT_BANK, 4, iconX, iconY, depth + 5);
        }
    } else {
        FUN_001835b4(2, LAYOUT_BANK, 4, iconX, iconY, depth + 5);
    }

    part = FUN_001834a4(LAYOUT_BANK, 0x7E);
    s16 labelX = base->x + part->x;
    s16 labelY = base->y + part->y;
    FUN_003f74a8(id, entry, base->x, part->y);
    textFormatBuffer(label, "%s", id);
    FUN_00162790(2, 0xFFFFFFFF, label, (f32)(labelX + offsetX), (f32)(labelY + offsetY), (f32)(0xFB - depth) * 0.00390625f, 0.0f, speed);

    part = FUN_001834a4(LAYOUT_BANK, 0x83);
    FUN_00162790(2, 0xFF, (const char *)(entry + 2), (f32)(part->x + base->x + offsetX), (f32)(part->y + base->y + offsetY),
                 (f32)(0xFB - depth) * 0.00390625f, 0.0f, speed);
    FUN_003f533c(id, base->x + offsetX, base->y + offsetY, depth + 5, arg, 0x84, 0x85, 0x86, 0xFF, 0, speed);
}

} /* extern "C" */
