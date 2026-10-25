/* NON_MATCHING: list/self/source pointer allocation and the panel-flag writeback addressing differ; the name ID argument and weak debug hook now match. */
#include "classes/Obj422448.h"
#include "AsdSDK/AsdDebugHooks.h"
#include <stddef.h>

/* One unlocked list entry as the list collects it (0x20 bytes). */
struct Obj422448Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[2];
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u8 unk10[0xC];
    /* 0x1C */ u32 unk1C;
};

/* The source record of an entry. */
struct Obj422448Source {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[2];
    /* 0x24 */ u16 unk24;
    /* 0x26 */ u16 nameId;
    /* 0x28 */ u32 unk28;
};
typedef char Obj422448SourceLayoutCheck[
    offsetof(Obj422448Source, nameId) == 0x26 &&
    offsetof(Obj422448Source, unk28) == 0x28 &&
    sizeof(Obj422448Source) == 0x2C ? 1 : -1];

/* The view's layout past the shared base, as this state handler sees it (Shin Megami Tensei IV). */
struct Obj422448Layout {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 holder[0xD];
    /* 0x02D */ u8 unk02D;
    /* 0x02E */ u8 unk02E[0x94 - 0x2E];
    /* 0x094 */ u8 gauge;
    /* 0x095 */ u8 unk095[0x590 - 0x95];
    /* 0x590 */ class BibleListPanel *panel;
    /* 0x594 */ u8 unk594[0x5A8 - 0x594];
    /* 0x5A8 */ u16 listCount;
    /* 0x5AA */ u8 unk5AA[0xA5AE - 0x5AA];
    /* 0xA5AE */ s16 scanned;
};

/* The panel the view owns; slot +8 rebinds it to the holder. */
class BibleListPanel {
public:
    virtual ~BibleListPanel();
    virtual void rebind(const void *holder);   /* +0x08 */

    /* 0x04 */ u16 flags;
};

/* The byte record whose low seven bits select the list's help line. */
struct Obj422448Mode {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 kind;
};

extern "C" {
void entryTableClear(void *list);
u32 unlockFlagTest(u32 id);
Obj422448Source *FUN_002498ec(u32 id);
u32 aocIndexValueOrDefault(u32 index);
void recordAppendFloatEntry(void *list, Obj422448Entry *entry);
Obj422448Mode *FUN_002a0d0c(void);
void FUN_0022e0fc(void *list, s32 line);
void FUN_00233730(void *holder, s32 a, s32 count, s32 b, s32 c, s32 d);
u8 gaugePercent(void *list);
u32 jyoucyuGetTableEntry(s32 index);
}

/* Collects the unlocked entries into the list, picks the help line for the current mode and opens
 * the panel on them. */
void Obj422448::buildList()
{
    Obj422448Layout *self = reinterpret_cast<Obj422448Layout *>(this);

    void *list = &self->listCount;

    entryTableClear(list);
    u16 id = 0x79F;
    s32 scanned = 0;
    do {
        scanned++;
        if (unlockFlagTest(id) != 0) {
            Obj422448Source *source = FUN_002498ec(id);
            if (source->nameId != 0) {
                Obj422448Entry entry;
                entry.id = source->id;
                entry.unk1C = aocIndexValueOrDefault(source->nameId);
                entry.unk08 = source->unk28;
                entry.unk0E = source->unk24;
                recordAppendFloatEntry(list, &entry);
            }
        }
        id++;
    } while (id <= 0x802);
    self->scanned = scanned;
    if (self->listCount != 0) {
        u8 *kind = &FUN_002a0d0c()->kind;
        s8 line;
        switch (*kind & 0x7F) {
        case 11:
            line = 28;
            break;
        case 3:
            line = 26;
            break;
        case 7:
            line = 24;
            break;
        case 15:
            line = 30;
            break;
        case 17:
            line = 32;
            break;
        default:
            line = 28;
            *kind = (*kind & ~0x7F) | 11;
            break;
        }
        if ((*kind & 0x80) != 0) {
            line = line + 1;
        }
        FUN_0022e0fc(list, line);
    }
    FUN_00233730(self->holder, 10, (s16)self->listCount, 0, 1, 1);
    asdDebugHookPtrInt(self->holder, 1);
    self->unk02D = 1;
    BibleListPanel *&panel = self->panel;
    panel->rebind(self->holder);
    panel->flags |= 0x1000;
    self->gauge = gaugePercent(list);
    jyoucyuGetTableEntry(0);
    jyoucyuGetTableEntry(0);
}
