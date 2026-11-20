#include "script/ScriptCallbackDispatch.h"

extern "C" {
extern ScriptCallbackFunction g_textControlCallbacks[8]; /* NULL = free slot */
extern u16 g_textControlCallbackCodes[8];
extern u32 g_textControlCallbackArgumentCounts[8];

/* Registers the callback for text control code `code`, taking `argumentCount` arguments, in the
 * first free slot of the eight; does nothing when all are taken. */
void asdTextRegisterSlot(u16 code, u32 argumentCount, ScriptCallbackFunction callback)
{
    for (s32 index = 0; index < 8; ++index) {
        if (g_textControlCallbacks[index].one == NULL) {
            g_textControlCallbacks[index] = callback;
            g_textControlCallbackCodes[index] = code;
            g_textControlCallbackArgumentCounts[index] = argumentCount;
            return;
        }
    }
}

} /* extern "C" */
