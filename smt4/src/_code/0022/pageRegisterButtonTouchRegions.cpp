/* NON_MATCHING: the expanded regions use different registers and arithmetic scheduling after the
 * decrement button lookup, although the texture loads and touch-region calls match. */
#include "shard/W6_W6Match7_NumericStepper.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* unit-local: pre-narrowing geometry for the stepper's two regions. */
struct TouchBounds { s32 x, y, width, height; };

/* Doubles the button's dimensions, starting a half-button above and to its left. */
static __inline TouchBounds expandTouchBounds(const TouchBounds &button)
{
    TouchBounds area = {button.x - button.width / 2, button.y - button.height / 2,
                        button.width * 2, button.height * 2};
    return area;
}

extern "C" {
u32 ifTouchRegionAdd(s16 x, s16 y, s16 width, s16 height); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Builds the increment and decrement regions on the stepper's current row. */
void pageRegisterButtonTouchRegions(NumericStepper *stepper)
{
    const TextureTableEntryIV *rect = asdTMTexTableEntryAt(43, stepper->row + 79);
    s32 x = rect->x;
    s32 y = rect->y;
    rect = asdTMTexTableEntryAt(43, 200);
    x += rect->x;
    y += rect->y;
    rect = asdTMTexTableEntryAt(43, 194);
    TouchBounds firstButton = {x + rect->x, y + rect->y, rect->width & 0x7FFF, rect->height & 0x7FFF};
    rect = asdTMTexTableEntryAt(43, 195);
    TouchBounds secondButton = {x + rect->x, y + rect->y, rect->width & 0x7FFF, rect->height & 0x7FFF};
    TouchBounds firstArea = expandTouchBounds(firstButton);
    TouchBounds secondArea = expandTouchBounds(secondButton);
    stepper->incrementKey = (s16)ifTouchRegionAdd((s16)firstArea.x, (s16)firstArea.y,
                                                 (s16)firstArea.width, (s16)firstArea.height);
    stepper->decrementKey = (s16)ifTouchRegionAdd((s16)secondArea.x, (s16)secondArea.y,
                                                 (s16)secondArea.width, (s16)secondArea.height);
}
} /* extern "C" */
