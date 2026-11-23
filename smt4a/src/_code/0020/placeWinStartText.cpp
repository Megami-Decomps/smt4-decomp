#include "ui/UiSpriteApi.h"
#include "font/PlaceWin.h"

extern "C" {

void sysMemClear(void *block, s32 size);
void __aeabi_memcpy(void *dest, const u8 *source, s32 size);

extern PlaceWindow *g_placeWin;

/* Resets the object and stores a copy of the 16-bit-character string `name` (up to 0x80 bytes, ending at its first zero character) in it. */
void placeWinStartText(const u8 *name)
{
    PlaceWindow *object;
    s32 length;

    object = g_placeWin;
    g_placeWin->state = 1;
    object->visible = 1;
    uiSpriteSelectAnim(&object->animation, 0);
    sysMemClear(object->text, 0x80);
    length = 0;
    do {
        if (name[length] == 0) {
            break;
        }
        if (name[length + 1] == 0) {
            length = length + 1;
            break;
        }
        length = length + 2;
    } while (length < 0x80);
    __aeabi_memcpy(object->text, name, length);
}

} /* extern "C" */
