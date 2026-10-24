/* NON_MATCHING: prologue/frame only (retail push {r1-r7, lr} for the 12-byte result temp; build push {r4-r6, lr} + sub sp, #16) and the list pointer lands in r5/r4 instead of r4/r6 */
/* Asks the session for its result and appends it to the list of registered sessions. */
#include "classes/Obj558cbc.h"

extern "C" SessionNode *FUN_002eba3c(SessionList *list, s32 singleElement);

/* Links a node for `session` in front of the sentinel. */
static inline void appendSession(SessionList *list, Obj558650 *session)
{
    SessionNode *sentinel = list->sentinel;
    SessionNode *node = FUN_002eba3c(list, 0);

    node->next = sentinel;
    node->session = session;
    node->prev = sentinel->prev;
    sentinel->prev->next = node;
    sentinel->prev = node;
    list->count++;
}

void Obj5594d4::registerSession(Obj558650 *session, s32 flag)
{
    session->registerWith(this);
    appendSession(&sessions, session);
}
