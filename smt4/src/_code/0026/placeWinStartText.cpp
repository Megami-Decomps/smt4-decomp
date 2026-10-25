#include "font/PlaceWin.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int spriteStartAnimationByIndex(void *block, int arg);
int rt_memcpy(void *dst, const u8 *src, int size);

extern PlaceWindow *g_placeWin;

/* Start a text entry, copying its encoded bytes into the fixed 0x80-byte text buffer. */
void placeWinStartText(const u8 *text)
{
    PlaceWindow *obj = g_placeWin;
    int length;

    obj->state = 1;
    obj->visible = 1;
    spriteStartAnimationByIndex(obj->animation, 0);
    reinterpret_cast<int>(memClear(obj->text, 0x80));
    length = 0;
    do {
        if (text[length] == 0) break;
        if (text[length + 1] == 0) {
            length = length + 1;
            break;
        }
        length = length + 2;
    } while (length < 0x80);
    rt_memcpy(obj->text, text, length);
}

} /* extern "C" */
