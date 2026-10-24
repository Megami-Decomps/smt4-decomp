#include "classes/Obj558cbc.h"

extern "C" void FUN_002f4364();

/* Close the active session, release its children, then destroy the common base. */
Obj558cbc::~Obj558cbc()
{
    if (child10 != NULL) {
        delete child10;
        child10 = NULL;
    }
    if (active) {
        session->finish();
        listener->notify(token);
        active = 0;
    }
    if (session != NULL) {
        session->close();
        if (session != NULL) {
            delete session;
        }
        session = NULL;
    }
    if (child18 != NULL) {
        delete child18;
    }
    if (child14 != NULL) {
        delete child14;
    }
    FUN_002f4364();
}
