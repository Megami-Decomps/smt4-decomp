#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"
#include "shard/W6_W6Match6_PartyPanel.h"

extern "C" {
void slotPlacementGetPosition(SlotPlacement *placement, s32 *x, s32 *y);

/* Advances the party widget's ailment carousel, slot movement and temporary tint. */
void partyPanelTickWidget(PartyPanelWidget *widget)
{
    enum {
        PLACEMENT_IDLE = 0,
        PLACEMENT_MOVING = 1,
        SLOT_TRAVEL_FRAMES = 8,
        SLOT_POSITION_FRACTION_BITS = 12,
        AILMENT_DISPLAY_FRAMES = 24,
        TINT_DURATION = 13
    };

    switch (widget->motion.state) {
    case PLACEMENT_IDLE: {
        u16 ailments;
        s32 count = 0;
        s32 slot = widget->slot;
        if (slot < 0)
            ailments = gameGetPlayerData()->ailments;
        else
            ailments = gameGetUnitRecord(slot)->ailments;
        for (s32 bit = 1; bit <= 10; ++bit) {
            if (ailments & (1 << bit))
                ++count;
        }
        if (count > 1 && ++widget->ailmentScroll >= AILMENT_DISPLAY_FRAMES) {
            widget->ailmentCursor = (widget->ailmentCursor + 1) % count;
            widget->ailmentScroll = 0;
        }
        break;
    }
    case PLACEMENT_MOVING:
        widget->motion.currentX += widget->motion.stepX;
        widget->motion.currentY += widget->motion.stepY;
        widget->origin.x = widget->motion.currentX >> SLOT_POSITION_FRACTION_BITS;
        widget->origin.y = widget->motion.currentY >> SLOT_POSITION_FRACTION_BITS;
        if (widget->motion.frame >= SLOT_TRAVEL_FRAMES) {
            ScreenPoint destination = {0, 0};
            slotPlacementGetPosition((SlotPlacement *)widget, &destination.x, &destination.y);
            widget->origin.x = destination.x;
            widget->origin.y = destination.y;
            widget->motion.state = PLACEMENT_IDLE;
        }
        break;
    }
    if (widget->tinted && ++widget->tintLevel > TINT_DURATION)
        widget->tinted = 0;
    ++widget->motion.frame;
}

} /* extern "C" */
