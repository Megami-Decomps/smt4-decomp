/* NON_MATCHING: retail addresses the label table from a second anchor (the area names at DAT_00447580, the fixed labels at -0x30 from it): the original defined these tables in the same file, so this build loads one base and the string/array addressing differs */
#include "common.h"

/* The map block (only the fields the label formatter reads). */
struct LabelMapBlock {
    /* 0x000 */ u8 unk000[3];
    /* 0x003 */ u8 area;
    /* 0x004 */ u8 unk004[0xe10];
    /* 0xe14 */ u8 visited[0x29];     /* by place kind, 3 = fully visited */
    /* 0xe3d */ u8 unk0e3d;
    /* 0xe3e */ u8 unk0e3e[0x2b4];
    /* 0x0f2 */ s8 unk0f2;
};

struct LabelMapBlockTail {
    /* 0x000 */ u8 unk000[0x792];
    /* 0x792 */ s8 secondArea;
};

extern "C" {
/* Place-name strings: fixed labels, then the area names. */
struct PlaceLabels {
    const char *special[12];
    const char *area[1];
};
extern PlaceLabels DAT_00447550;
s32 gameFlagIsSet(u32 flag);
LabelMapBlock *gameGetMapBlock(void);
const char *dataTableFindRecordById(s32 kind);
const char *FUN_001b43f0(s32 kind, s32 id);
char *libc_strcpy(char *destination, const char *source);
void textFormatBuffer(char *output, const char *format, ...);

/* Writes the display text for a place (kind, id) into `output`: area labels, locked places as
   "???", and otherwise the data table's name, joined to the sub-name when there is one. */
void FUN_0025090c(s32 kind, s32 id, s32 mode, char *output)
{
    const PlaceLabels *labels = &DAT_00447550;
    char name[64];
    char subName[68];

    if (mode == 2) {
        if (kind > 1000) {
            textFormatBuffer(output, labels->area[kind - 1000]);
            return;
        }
        if (kind == 1000) {
            textFormatBuffer(output, "\x81\x48\x81\x48\x81\x48");
            return;
        }
        if (kind == 24) {
            textFormatBuffer(output, labels->special[id]);
            return;
        }
        if (kind == 101) {
            libc_strcpy(name, dataTableFindRecordById(kind));
            textFormatBuffer(output, "%s", name);
            libc_strcpy(subName, FUN_001b43f0(kind, id));
            textFormatBuffer(output, "%s\x81\x40%s", name, subName);
            return;
        }
    } else {
        LabelMapBlock *block = gameGetMapBlock();
        if ((((u32)(kind - 25) <= 5 || kind == 102) && !gameFlagIsSet(0x144)) ||
            (((u32)(kind - 31) <= 4 || kind == 103) && !gameFlagIsSet(0x15a))) {
            textFormatBuffer(output, "\x81\x48\x81\x48\x81\x48");
            return;
        }
        s32 place = 0;
        if (gameGetMapBlock()->area != 1) {
            if (kind == 24) {
                place = 2;
            } else if (kind < 64) {
                if (block->visited[kind] != 3) {
                    place = 1;
                }
            }
        } else if (block->unk0e3d != 3) {
            place = 1;
        }
        if (mode == 0) {
            u8 area = gameGetMapBlock()->area;
            if (area != 0) {
                textFormatBuffer(output, labels->special[area]);
                return;
            }
        }
        if (place == 2) {
            s8 second = reinterpret_cast<LabelMapBlockTail *>(gameGetMapBlock())->secondArea;
            if (second == 0) {
                textFormatBuffer(output, "\x82\x63\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e");
                return;
            }
            textFormatBuffer(output, labels->area[second]);
            return;
        }
    }

    if (kind == 10) {
        if (id == 11) {
            textFormatBuffer(output, labels->special[1]);
            return;
        }
    } else if (kind == 4) {
        if (id == 6) {
            textFormatBuffer(output, labels->special[2]);
            return;
        }
        if (id == 7) {
            textFormatBuffer(output, labels->special[4]);
            return;
        }
    } else if (kind == 1) {
        if (id == 15) {
            textFormatBuffer(output, labels->special[3]);
            return;
        }
    } else if (kind == 19) {
        if (id == 14) {
            textFormatBuffer(output, labels->special[5]);
            return;
        }
    } else if (kind == 27) {
        if (id == 3) {
            textFormatBuffer(output, labels->special[6]);
            return;
        }
    } else if (kind == 28) {
        if (id == 3) {
            textFormatBuffer(output, labels->special[7]);
            return;
        }
    } else if (kind == 32) {
        if (id == 4) {
            textFormatBuffer(output, labels->special[8]);
            return;
        }
    } else if (kind == 33) {
        if (id == 4) {
            textFormatBuffer(output, labels->special[9]);
            return;
        }
    } else if (kind == 34) {
        if (id == 3) {
            textFormatBuffer(output, labels->special[10]);
            return;
        }
    } else if (kind == 203 || (kind != 101 && kind >= 102)) {
        libc_strcpy(name, dataTableFindRecordById(kind));
        textFormatBuffer(output, "%s", name);
        return;
    }
    libc_strcpy(name, dataTableFindRecordById(kind));
    libc_strcpy(subName, FUN_001b43f0(kind, id));
    textFormatBuffer(output, "%s\x81\x40%s", name, subName);
}

} /* extern "C" */
