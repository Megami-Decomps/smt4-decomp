#include "common.h"
#include "map/PopupStateA.h"
#include "runtime/String.h"

extern "C" {


/* Clears the popup state: the leading words, the text buffer and the pending queue with the word after it. */
void popupStateClear(void)
{
    PopupStateA *popup;

    popup = g_popupState;
    g_popupState->state = 0;
    popup->timer = 0;
    popup->speakerId = 0;
    popup->unk20 = 0;
    popup->messageData = NULL;
    rt_memclr((u8 *)popup->text, sizeof(popup->text));
    popup = g_popupState;
    g_popupState->pending[0] = 0;
    popup->pending[1] = 0;
    popup->pending[2] = 0;
    popup->pending[3] = 0;
    popup->pending[4] = 0;
    popup->pending[5] = 0;
    popup->pending[6] = 0;
    popup->pending[7] = 0;
    popup->pending[8] = 0;
    popup->pending[9] = 0;
    popup->pending[10] = 0;
    popup->pending[11] = 0;
    popup->pending[12] = 0;
    popup->pending[13] = 0;
    popup->pending[14] = 0;
    popup->pending[15] = 0;
    popup->unkF0 = 0;
}

} /* extern "C" */
