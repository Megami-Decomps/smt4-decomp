/* NON_MATCHING: flag-block/name-table saved registers and incoming level/selector load scheduling differ; branch layout matches. */
#include "common.h"

extern "C" {
u8 *gameFlagsGetBlock(void);
void FUN_0032725c(u32 index, char *output, s32 level);
const char *nameTableFind(s32 kind, s32 index);
const char *dataTableEntryNameById(s32 id, s32 kind);
void libc_strcpy(char *destination, const char *source);
s32 textFormatBuffer(char *destination, const char *format, ...);

/* Writes the display name of entry `index` of name table `kind` into `buffer`. Kinds 0x18 and 1001+ use the field names
 * (Shift-JIS, full width); indexes of 100 and up are looked up through FUN_0032725c. */
void FUN_003849cc(s32 kind, s32 index, s32 mode, char *buffer, s32 level)
{
    u8 *flags = gameFlagsGetBlock();
    const char *places[12] = {
        "\202c\202\217\202\215\202\201\202\211\202\216", /* Domain */
        "\202m\202\201\202\222\202\201\202\213\202\225\201\100\202c\202\217\202\215\202\201\202\211\202\216", /* Naraku Domain */
        "\202r\202\225\202\216\202\223\202\210\202\211\202\216\202\205\201\100\202U\202O", /* Sunshine 60 */
        "\202c\202\217\202\215\202\201\202\211\202\216", /* Domain */
        "\202i\202\225\202\222\202\201\202\213\202\225\201\100\202a\202\217\202\217\202\213\202\223\202\224\202\217\202\222\202\205", /* Juraku Bookstore */
        "\202q\202\211\202\216\202\207\201\100\202\217\202\206\201\100\202f\202\201\202\205\202\201", /* Ring of Gaea */
        "\202r\202\210\202\205\202\214\202\224\202\205\202\222\201\100\202c\202\217\202\215\202\201\202\211\202\216", /* Shelter Domain */
        "\202r\202\210\202\205\202\214\202\224\202\205\202\222\201\100\202c\202\217\202\215\202\201\202\211\202\216", /* Shelter Domain */
        "\202t\202\216\202\204\202\205\202\222\202\207\202\222\202\217\202\225\202\216\202\204\201\100\202c\202\211\202\223\202\224\202\222\202\211\202\203\202\224\201\100\202c\202\217\202\215\202\201\202\211\202\216", /* Underground District Domain */
        "\202t\202\216\202\204\202\205\202\222\202\207\202\222\202\217\202\225\202\216\202\204\201\100\202c\202\211\202\223\202\224\202\222\202\211\202\203\202\224\201\100\202c\202\217\202\215\202\201\202\211\202\216", /* Underground District Domain */
        "\202t\202\216\202\204\202\205\202\222\202\207\202\222\202\217\202\225\202\216\202\204\201\100\202c\202\211\202\223\202\224\202\222\202\211\202\203\202\224\201\100\202c\202\217\202\215\202\201\202\211\202\216", /* Underground District Domain */
        "\202c\202\217\202\215\202\201\202\211\202\216", /* Domain */
    };
    const char *sites[14] = {
        "\202c\202\217\202\215\202\201\202\211\202\216", /* Domain */
        "\202\140\202\223\202\201\202\213\202\225\202\223\202\201\201\100\202k\202\201\202\216\202\204", /* Asakusa Land */
        "\202m\202\211\202\213\202\217\202\223\202\210\202\211\201\100\202c\202\205\202\220\202\201\202\222\202\224\202\215\202\205\202\216\202\224\201\100\202r\202\224\202\217\202\222\202\205", /* Nikoshi Department Store */
        "\202m\202\201\202\224\202\211\202\217\202\216\202\201\202\214\201\100\202c\202\211\202\205\202\224\201\100\202a\202\225\202\211\202\214\202\204\202\211\202\216\202\207", /* National Diet Building */
        "\202s\202\217\202\223\202\210\202\217\201\100\202c\202\205\202\220\202\201\202\222\202\224\202\215\202\205\202\216\202\224\201\100\202r\202\224\202\217\202\222\202\205", /* Tosho Department Store */
        "\202\140\202\217\202\231\202\201\202\215\202\201\201\100\202b\202\205\202\215\202\205\202\224\202\205\202\222\202\231", /* Aoyama Cemetery */
        "\202n\202\207\202\225\202\216\202\217\202\210\202\201\202\222\202\201\201\100\202o\202\201\202\222\202\213\201\100\202q\202\225\202\211\202\216\202\223", /* Ogunohara Park Ruins */
        "\202f\202\201\202\213\202\225\202\223\202\210\202\225\202\211\202\216\201\100\202t\202\216\202\211\202\226\202\205\202\222\202\223\202\211\202\224\202\231", /* Gakushuin University */
        "\202s\202\217\202\225\202\207\202\225\201\100\202f\202\217\202\223\202\210\202\217", /* Tougu Gosho */
        "\202b\202\201\202\215\202\220\201\100\202l\202\205\202\207\202\225\202\222\202\217", /* Camp Meguro */
        "\202e\202\222\202\205\202\211\202\207\202\210\202\224\201\100\202b\202\217\202\215\202\220\202\201\202\216\202\231\201\100\202a\202\225\202\211\202\214\202\204\202\211\202\216\202\207", /* Freight Company Building */
        "\202j\202\211\202\202\202\201\201\100\202r\202\224\202\217\202\222\202\201\202\207\202\205", /* Kiba Storage */
        "\202r\202\224\201D\201\100\202i\202\217\202\210\202\216\201f\202\223\201\100\202g\202\217\202\223\202\220\202\211\202\224\202\201\202\214", /* St. John’s Hospital */
        "\202j\202\201\202\202\202\225\202\224\202\217\201\100\202r\202\210\202\222\202\211\202\216\202\205", /* Kabuto Shrine */
    };
    char name[0x40];
    char reading[0x3C];
    if (mode == 2) {
        if (kind == 1000) {
            textFormatBuffer(buffer, "\201H\201H\201H");
            return;
        }
        if (kind > 1000) {
            if (index >= 100) {
                FUN_0032725c(index - 100, buffer, level);
                return;
            }
            textFormatBuffer(buffer, sites[kind - 1000]);
            return;
        }
        if (kind == 0x18) {
            if (index >= 100) {
                FUN_0032725c(index - 100, buffer, level);
                return;
            }
            textFormatBuffer(buffer, places[index]);
            return;
        }
        if (kind == 0x65) {
            libc_strcpy(name, dataTableEntryNameById(kind, index));
            textFormatBuffer(buffer, "%s", name);
            libc_strcpy(reading, nameTableFind(kind, index));
            textFormatBuffer(buffer, "%s\201@%s", name, reading);
            return;
        }
    } else {
        u8 *first = gameFlagsGetBlock();
        s32 selector = 0;
        if (gameFlagsGetBlock()[3] != 1) {
            if (kind == 0x18) {
                selector = 2;
            }
        } else if (first[0xE71] != 3) {
            selector = 1;
        }
        if (mode == 0) {
            s32 current = gameFlagsGetBlock()[3];
            if (current >= 100) {
                FUN_0032725c(index - 100, buffer, -1);
                return;
            }
            if (current != 0) {
                textFormatBuffer(buffer, places[current]);
                return;
            }
        }
        if (selector == 2) {
            s8 site = (s8)flags[0x7C6];
            if (site != 0) {
                if (index >= 100) {
                    FUN_0032725c(index - 100, buffer, -1);
                    return;
                }
                textFormatBuffer(buffer, sites[site]);
                return;
            }
            textFormatBuffer(buffer, "\202c\202\217\202\215\202\201\202\211\202\216");
            return;
        }
    }
    if (kind == 0xcb || (kind != 0x65 && kind >= 0x66)) {
        libc_strcpy(name, dataTableEntryNameById(kind, index));
        textFormatBuffer(buffer, "%s", name);
        return;
    }
    libc_strcpy(name, dataTableEntryNameById(kind, index));
    libc_strcpy(reading, nameTableFind(kind, index));
    textFormatBuffer(buffer, "%s\201@%s", name, reading);
}
}
