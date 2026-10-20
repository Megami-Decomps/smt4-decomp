#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndHandleNode *DAT_0063e944; /* head of the registered sounds */
extern s32 DAT_0063e948;               /* how many */

/* Looks up the registered sound `id`; returns its value, or 0 when it is absent or has no handle. */
u8 asdSoundHandleListFind(s32 id)
{
    s32 i = 0;
    AsdSndHandleNode *node = DAT_0063e944;

    if (0 < DAT_0063e948) {
        while (node != NULL) {
            if (node->id == id) {
                if (node->handle == 0) {
                    return 0;
                }
                return (s8)node->value;
            }
            node = node->next;
            i++;
            if (DAT_0063e948 <= i) {
                return 0;
            }
        }
    }
    return 0;
}

} /* extern "C" */
