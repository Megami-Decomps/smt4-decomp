/* NON_MATCHING: retail unrolls the 0xFFFF fill by two and keeps panel+0x2400 bases (r7/r8) in registers; the build's loop, constants and register use differ. */
#include "common.h"
#include "util/pairSetFirstResetSecond.h"

/* A sprite widget (0x8C bytes). */
struct SpriteWidget {
    u8 data[0x8C];
};

/* The party status panel work (accessed fields). */
struct StatusPanel {
    u8 unk0000[0x20];
    SpriteWidget faces[0x42];       // 0x20 (stride 0x8C; other rows interleave at +0x598, +0xB10, ...)
};

#define WIDGET(panel, offset, i) (reinterpret_cast<SpriteWidget *>(reinterpret_cast<u8 *>(panel) + (offset) + (i) * 0x8C))
#define PANEL_HALF(panel, offset) (*reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(panel) + (offset)))
#define PANEL_WORD(panel, offset) (*reinterpret_cast<s32 *>(reinterpret_cast<u8 *>(panel) + (offset)))

extern "C" {
void uiSpriteSelectAnim(SpriteWidget *widget, s32 animation);
s32 FUN_00291e14(void);

/* Reset the party panel's rows and set each row's sprites for the current display variant. */
void FUN_002cd118(StatusPanel *panel, s32 variant, u16 rowCount, u16 selected)
{
    PANEL_HALF(panel, 0x2448) = rowCount;
    PANEL_HALF(panel, 0x244A) = selected;
    PANEL_WORD(panel, 0x2440) = variant;
    for (s32 i = 0; i < 10; i++)
        PANEL_HALF(panel, 0x24A0 + i * 2) = 0xFFFF;
    PANEL_WORD(panel, 0x243C) = 2;
    PANEL_WORD(panel, 0x2438) = 0;
    for (s32 i = 0; i < 0x42; i++)
        reinterpret_cast<u8 *>(panel)[0xA5 + i * 0x8C] = 0;
    SpriteWidget *header = reinterpret_cast<SpriteWidget *>(reinterpret_cast<u8 *>(panel) + 0x217C);
    for (s32 i = 0; i < static_cast<s16>(PANEL_HALF(panel, 0x2448)); i++) {
        if (PANEL_WORD(panel, 0x2440) != 0) {
            pairSetFirstResetSecond(WIDGET(panel, 0x20, i), 1);
            pairSetFirstResetSecond(WIDGET(panel, 0xB10, i), 8);
            pairSetFirstResetSecond(WIDGET(panel, 0x1088, i), 3);
            pairSetFirstResetSecond(WIDGET(panel, 0x1B78, i), 0xFA7);
            pairSetFirstResetSecond(WIDGET(panel, 0x1600, i), 0xFA1);
            if (i < 4) {
                if (i == 0)
                    pairSetFirstResetSecond(header, 0xBD);
                pairSetFirstResetSecond(WIDGET(panel, 0x2208, i), 0xBC - i);
            }
        } else if (FUN_00291e14() != 0) {
            pairSetFirstResetSecond(WIDGET(panel, 0x20, i), 0xA3);
            pairSetFirstResetSecond(WIDGET(panel, 0xB10, i), 0xA5);
            pairSetFirstResetSecond(WIDGET(panel, 0x1088, i), 0xA4);
            pairSetFirstResetSecond(WIDGET(panel, 0x1B78, i), 0xFA8);
            pairSetFirstResetSecond(WIDGET(panel, 0x1600, i), 0xFB0);
            if (i < 4) {
                if (i == 0)
                    pairSetFirstResetSecond(header, 0xC2);
                pairSetFirstResetSecond(WIDGET(panel, 0x2208, i), 0xC1 - i);
            }
        } else {
            pairSetFirstResetSecond(WIDGET(panel, 0x20, i), 0);
            pairSetFirstResetSecond(WIDGET(panel, 0xB10, i), 7);
            pairSetFirstResetSecond(WIDGET(panel, 0x1088, i), 2);
            pairSetFirstResetSecond(WIDGET(panel, 0x1B78, i), 0xFA6);
            pairSetFirstResetSecond(WIDGET(panel, 0x1600, i), 4000);
            if (i < 4) {
                if (i == 0)
                    pairSetFirstResetSecond(header, 0xB8);
                pairSetFirstResetSecond(WIDGET(panel, 0x2208, i), 0xB7 - i);
            }
        }
        uiSpriteSelectAnim(WIDGET(panel, 0x20, i), 2);
        uiSpriteSelectAnim(WIDGET(panel, 0xB10, i), 5);
        uiSpriteSelectAnim(WIDGET(panel, 0x1088, i), 3);
        uiSpriteSelectAnim(WIDGET(panel, 0x1B78, i), 10);
        if (i < 4) {
            if (i == 0)
                uiSpriteSelectAnim(header, 0xC);
            uiSpriteSelectAnim(WIDGET(panel, 0x2208, i), 0xC);
        }
        pairSetFirstResetSecond(WIDGET(panel, 0x598, i), 6);
        uiSpriteSelectAnim(WIDGET(panel, 0x598, i), 1);
    }
}
}
