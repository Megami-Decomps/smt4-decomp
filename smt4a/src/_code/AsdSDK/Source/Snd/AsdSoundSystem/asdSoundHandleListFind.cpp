#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
/* The registered list (g_asdSoundSystem+0x75C) reached through its own symbol. */
extern AsdSndHandleList g_soundHandleList;

/* The node registered with `id`, NULL when there is none: asdSoundRegisteredFind's walk over the
 * same list, reached through g_soundHandleList. */
static __inline AsdSndHandleNode *soundHandleListFindNode(s32 id)
{
    AsdSndHandleList *list = &g_soundHandleList;
    AsdSndHandleNode *node = list->handles;
    for (s32 i = 0; i < list->count; ++i) {
        if (node == NULL) {
            break;
        }
        if (node->id == id) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

/* The value byte registered with sound `id`, or 0 when it is not registered or has no handle. */
u8 asdSoundHandleListFind(s32 id)
{
    u8 result = 0;
    AsdSndHandleNode *node = soundHandleListFindNode(id);
    if (node != NULL && node->handle != 0) {
        result = node->value;
    }
    return result;
}
}
