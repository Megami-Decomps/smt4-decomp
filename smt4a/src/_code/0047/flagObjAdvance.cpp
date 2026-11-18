#include "addon/AocBoard.h"
#include "ui/UiSpriteApi.h"

extern "C" {


/* When both flag bits 0x10 and 0x20 are set: enters state 3, clears 0x20 and resets two sub-blocks. */
void flagObjAdvance(AocBoardWork *board)
{
    u32 flags = board->owner.control.flags;

    if ((flags & 0x10) != 0 && (flags & 0x20) != 0) {
        board->owner.control.frame = 3;
        board->owner.control.flags = flags & ~0x20u;
        uiSpriteSetImageKeyframe(&board->sprites[0], 2, 0);
        uiSpriteSetImageKeyframe(&board->sprites[2], 2, 0);
    }
}

} /* extern "C" */
