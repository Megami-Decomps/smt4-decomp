#include "ui/UiSpriteApi.h"
#include "font/InfoWin.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


int asdTextDrawFormatted(void *textObject, int arg1, u32 arg2, int arg3, int arg4, void *text);
void *__aeabi_memcpy(void *dst, const void *src, u32 size); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Sets the dialog text (NUL-terminated, at most 0x5a bytes): copies it, sizes the window around it and starts the message. */
void dialogSetText(const char *text)
{
    InfoWindow *dialog = g_infoWin;
    int length;

    dialog->hasText = 0;
    if (text == NULL) {
        return;
    }
    reinterpret_cast<int>(memClear(dialog->message, sizeof(dialog->message)));
    length = 0;
    do {
        if (text[length] == '\0') {
            __aeabi_memcpy(dialog->message, text, length + 1);
            dialog->hasText = 1;
            if (length <= 0x5b) {
                dialog->wideText = 0;
            } else {
                dialog->wideText = 1;
                dialog->textWidth = (length / 2) * 14;
            }
            uiSpriteSetKeyframe(&dialog->content, 2, 0);
            dialog->labelX = vec2GetXInt(&dialog->content);
            dialog->textRight = dialog->labelX + dialog->textWidth + 42;
            if (dialog->state == 3) {
                dialog->state = 2;
            }
            break;
        }
        length++;
    } while (length < (int)sizeof(dialog->message));
    asdTextDrawFormatted(dialog->text, 3, 0xffffffff, 0, 3, dialog->message);
    dialog->timer = 30;
}

} /* extern "C" */
