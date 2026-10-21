/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void uiSpriteSetKeyframe(void *p, u32 a, u32 b);

void uiSpriteSetKeyframeThree(u8 *p)
{
    uiSpriteSetKeyframe(p + 732, 3, 0);
}

}
