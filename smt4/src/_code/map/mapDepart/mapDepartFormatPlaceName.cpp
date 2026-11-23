/* NON_MATCHING: 208 lines (shape 120), 248 vs 250 rows. The two label tables are defined here, as in the
 * original file (retail anchors both on the area names at 0x447580 and reaches the fixed labels at -0x30,
 * which armcc only does for objects of its own unit; relink has to place them at 0x447550 and 0x447580).
 * The (kind, id) chain is written pair by pair in label order: retail keeps the second `kind == 4` test
 * that form leaves behind. Remaining: three registers rotate (retail: area names sl, fixed labels r9,
 * output fp; build: fp, sl, r9); retail sets the place kind from a register holding 1 (`mov r0, #1` before
 * the departure test, `mov r6, r0` shared by both arms) where the build writes `mov r6, #1`; and the
 * redundant `kind == 4` compare sits after the `kind == 1` one in retail, before it in the build. */
#include <stdio.h>
#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"

extern "C" {
/* Place-name strings (mapDepart's file statics): the fixed labels, then the area names. */
static const char *s_fixedPlaceLabels[12] = {
    /*  0: Domain */
    "\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /*  1: Naraku Domain */
    "\x82m\x82\x81\x82\x92\x82\x81\x82\x8b\x82\x95\x81@\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /*  2: Sunshine 60 */
    "\x82r\x82\x95\x82\x8e\x82\x93\x82\x88\x82\x89\x82\x8e\x82\x85\x81@\x82U\x82O",
    /*  3: Domain */
    "\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /*  4: Juraku Bookstore */
    "\x82i\x82\x95\x82\x92\x82\x81\x82\x8b\x82\x95\x81@\x82" "a\x82\x8f\x82\x8f\x82\x8b\x82\x93\x82\x94\x82\x8f\x82\x92\x82\x85",
    /*  5: Ring of Gaea */
    "\x82q\x82\x89\x82\x8e\x82\x87\x81@\x82\x8f\x82\x86\x81@\x82" "f\x82\x81\x82\x85\x82\x81",
    /*  6: Shelter Domain */
    "\x82r\x82\x88\x82\x85\x82\x8c\x82\x94\x82\x85\x82\x92\x81@\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /*  7: Shelter Domain */
    "\x82r\x82\x88\x82\x85\x82\x8c\x82\x94\x82\x85\x82\x92\x81@\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /*  8: Underground District Domain */
    "\x82t\x82\x8e\x82\x84\x82\x85\x82\x92\x82\x87\x82\x92\x82\x8f\x82\x95\x82\x8e\x82\x84\x81@\x82" "c\x82\x89\x82\x93\x82\x94\x82\x92\x82\x89\x82\x83\x82\x94\x81@\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /*  9: Underground District Domain */
    "\x82t\x82\x8e\x82\x84\x82\x85\x82\x92\x82\x87\x82\x92\x82\x8f\x82\x95\x82\x8e\x82\x84\x81@\x82" "c\x82\x89\x82\x93\x82\x94\x82\x92\x82\x89\x82\x83\x82\x94\x81@\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /* 10: Underground District Domain */
    "\x82t\x82\x8e\x82\x84\x82\x85\x82\x92\x82\x87\x82\x92\x82\x8f\x82\x95\x82\x8e\x82\x84\x81@\x82" "c\x82\x89\x82\x93\x82\x94\x82\x92\x82\x89\x82\x83\x82\x94\x81@\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /* 11: Domain */
    "\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
};

static const char *s_areaNames[14] = {
    /*  0: Domain */
    "\x82" "c\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e",
    /*  1: Usetan */
    "\x82t\x82\x93\x82\x85\x82\x94\x82\x81\x82\x8e",
    /*  2: Bikkuri Camera */
    "\x82" "a\x82\x89\x82\x8b\x82\x8b\x82\x95\x82\x92\x82\x89\x81@\x82" "b\x82\x81\x82\x8d\x82\x85\x82\x92\x82\x81",
    /*  3: Yodogawa Camera */
    "\x82x\x82\x8f\x82\x84\x82\x8f\x82\x87\x82\x81\x82\x97\x82\x81\x81@\x82" "b\x82\x81\x82\x8d\x82\x85\x82\x92\x82\x81",
    /*  4: Jujo Base */
    "\x82i\x82\x95\x82\x8a\x82\x8f\x81@\x82" "a\x82\x81\x82\x93\x82\x85",
    /*  5: Cameron Building */
    "\x82" "b\x82\x81\x82\x8d\x82\x85\x82\x92\x82\x8f\x82\x8e\x81@\x82" "a\x82\x95\x82\x89\x82\x8c\x82\x84\x82\x89\x82\x8e\x82\x87",
    /*  6: Yoroi Shrine */
    "\x82x\x82\x8f\x82\x92\x82\x8f\x82\x89\x81@\x82r\x82\x88\x82\x92\x82\x89\x82\x8e\x82\x85",
    /*  7: Kiou Shrine */
    "\x82j\x82\x89\x82\x8f\x82\x95\x81@\x82r\x82\x88\x82\x92\x82\x89\x82\x8e\x82\x85",
    /*  8: Harajuku Police Station */
    "\x82g\x82\x81\x82\x92\x82\x81\x82\x8a\x82\x95\x82\x8b\x82\x95\x81@\x82o\x82\x8f\x82\x8c\x82\x89\x82\x83\x82\x85\x81@\x82r\x82\x94\x82\x81\x82\x94\x82\x89\x82\x8f\x82\x8e",
    /*  9: Camp Meguro */
    "\x82" "b\x82\x81\x82\x8d\x82\x90\x81@\x82l\x82\x85\x82\x87\x82\x95\x82\x92\x82\x8f",
    /* 10: Freight Company Building */
    "\x82" "e\x82\x92\x82\x85\x82\x89\x82\x87\x82\x88\x82\x94\x81@\x82" "b\x82\x8f\x82\x8d\x82\x90\x82\x81\x82\x8e\x82\x99\x81@\x82" "a\x82\x95\x82\x89\x82\x8c\x82\x84\x82\x89\x82\x8e\x82\x87",
    /* 11: Kiba Storage */
    "\x82j\x82\x89\x82\x82\x82\x81\x81@\x82r\x82\x94\x82\x8f\x82\x92\x82\x81\x82\x87\x82\x85",
    /* 12: St. John's Hospital */
    "\x82r\x82\x94\x81" "D\x81@\x82i\x82\x8f\x82\x88\x82\x8e\x81" "f\x82\x93\x81@\x82g\x82\x8f\x82\x93\x82\x90\x82\x89\x82\x94\x82\x81\x82\x8c",
    /* 13: Kabuto Shrine */
    "\x82j\x82\x81\x82\x82\x82\x95\x82\x94\x82\x8f\x81@\x82r\x82\x88\x82\x92\x82\x89\x82\x8e\x82\x85",
};

s32 gameFlagIsSet(u32 flag);
const char *dataTableFindRecordById(s32 kind);
char *libc_strcpy(char *destination, const char *source);

/* Writes the display text for a place (kind, id) into `output`: area labels, locked places as
   "???", and otherwise the data table's name, joined to the sub-name when there is one. */
void mapDepartFormatPlaceName(s32 kind, s32 id, s32 mode, char *output)
{
    char name[64];
    char subName[68];

    if (mode == 2) {
        if (kind == 1000) {
            sprintf(output, "\x81\x48\x81\x48\x81\x48");
            return;
        }
        if (kind > 1000) {
            sprintf(output, s_areaNames[kind - 1000]);
            return;
        }
        if (kind == 24) {
            sprintf(output, s_fixedPlaceLabels[id]);
            return;
        }
        if (kind == 101) {
            libc_strcpy(name, dataTableFindRecordById(kind));
            sprintf(output, "%s", name);
            libc_strcpy(subName, FUN_001b43f0(kind, id));
            sprintf(output, "%s\x81\x40%s", name, subName);
            return;
        }
    } else {
        MapSaveBlock *block = gameGetMapBlock();
        if ((((u32)(kind - 25) <= 5 || kind == 102) && !gameFlagIsSet(0x144)) ||
            (((u32)(kind - 31) <= 4 || kind == 103) && !gameFlagIsSet(0x15a))) {
            sprintf(output, "\x81\x48\x81\x48\x81\x48");
            return;
        }
        s32 place = 0;
        if (gameGetMapBlock()->departureIndex == 1) {
            if (block->placeStates[0x29] != 3) {
                place = 1;
            }
        } else if (kind == 24) {
            place = 2;
        } else if (kind < 64 && block->placeStates[kind] != 3) {
            place = 1;
        }
        if (mode == 0) {
            u8 area = gameGetMapBlock()->departureIndex;
            if (area != 0) {
                sprintf(output, s_fixedPlaceLabels[area]);
                return;
            }
        }
        if (place == 2) {
            s8 second = gameGetMapBlock()->option;
            if (second == 0) {
                sprintf(output, "\x82\x63\x82\x8f\x82\x8d\x82\x81\x82\x89\x82\x8e");
                return;
            }
            sprintf(output, s_areaNames[second]);
            return;
        }
    }

    if (kind == 10 && id == 11) {
        sprintf(output, s_fixedPlaceLabels[1]);
        return;
    } else if (kind == 4 && id == 6) {
        sprintf(output, s_fixedPlaceLabels[2]);
        return;
    } else if (kind == 1 && id == 15) {
        sprintf(output, s_fixedPlaceLabels[3]);
        return;
    } else if (kind == 4 && id == 7) {
        sprintf(output, s_fixedPlaceLabels[4]);
        return;
    } else if (kind == 19 && id == 14) {
        sprintf(output, s_fixedPlaceLabels[5]);
        return;
    } else if (kind == 27 && id == 3) {
        sprintf(output, s_fixedPlaceLabels[6]);
        return;
    } else if (kind == 28 && id == 3) {
        sprintf(output, s_fixedPlaceLabels[7]);
        return;
    } else if (kind == 32 && id == 4) {
        sprintf(output, s_fixedPlaceLabels[8]);
        return;
    } else if (kind == 33 && id == 4) {
        sprintf(output, s_fixedPlaceLabels[9]);
        return;
    } else if (kind == 34 && id == 3) {
        sprintf(output, s_fixedPlaceLabels[10]);
        return;
    } else if (kind == 203 || (kind != 101 && kind >= 102)) {
        libc_strcpy(name, dataTableFindRecordById(kind));
        sprintf(output, "%s", name);
        return;
    }
    libc_strcpy(name, dataTableFindRecordById(kind));
    libc_strcpy(subName, FUN_001b43f0(kind, id));
    sprintf(output, "%s\x81\x40%s", name, subName);
}

} /* extern "C" */
