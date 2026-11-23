/* NON_MATCHING: 28 lines: retail hoists 0xFA8 into a saved register where the build hoists 0xFA7, passes the
 * hoisted animation id to the header sprite too (built: `mov r1, #12`), and orders the temporaries of the row-id fill
 * and of the unk243C/unk2438 stores differently. */
#include "battle/BtlStatusPanelA.h"
#include "battle/BattleContextCommandsA.h"
#include "common.h"

extern "C" {

/* Reset the party panel's rows and set each row's sprites for the current display variant. */
void statusPanelResetRows(StatusPanel *panel, s32 variant, s32 rowCount, s32 selected)
{
    panel->rowCount = rowCount;
    panel->selected = selected;
    panel->variant = variant;
    for (s32 i = 0; i < 10; i++)
        panel->rowIds[i] = -1;
    panel->timer.state = 2;
    panel->timer.frame = 0;
    for (s32 i = 0; i < 66; i++)
        uiSpriteSetUpdated(&panel->sprites[i], 0);
    for (s32 i = 0; i < panel->rowCount; i++) {
        if (panel->variant != 0) {
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + i], 1);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + i], 8);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + i], 3);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HP + i], 0xFA7);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + i], 0xFA1);
            statusPanelSetTabImages(panel, i, 0xBD);
        } else if (btlIsDefeatSuppressed() != 0) {
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + i], 0xA3);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + i], 0xA5);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + i], 0xA4);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HP + i], 0xFA8);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + i], 0xFB0);
            statusPanelSetTabImages(panel, i, 0xC2);
        } else {
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_FACE + i], 0);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_GAUGE + i], 7);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_NAME + i], 2);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_HP + i], 0xFA6);
            pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_MP + i], 4000);
            statusPanelSetTabImages(panel, i, 0xB8);
        }
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_FACE + i], 2);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_GAUGE + i], 5);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_NAME + i], 3);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_HP + i], 10);
        statusPanelSelectTabAnims(panel, i, 12);
        pairSetFirstResetSecond(&panel->sprites[STATUS_PANEL_BACK + i], 6);
        uiSpriteSelectAnim(&panel->sprites[STATUS_PANEL_BACK + i], 1);
    }
}

} /* extern "C" */
