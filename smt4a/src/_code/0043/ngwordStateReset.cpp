#include "classes/Obj420fa4.h"

extern "C" {
extern const char g_ngwordMountName[]; /* "ngword:" */
void fsUnmountByName(const char *text);

/* Unmounts the NG-word archive and releases the scanner's registered buffer. */
void ngwordStateReset(Obj420fa4 *state)
{
    if (state->mounted != 0) {
        fsUnmountByName(g_ngwordMountName);
    }
    if (state->registered != 0) {
        registerObj8Holder(&state->unk04Value);
    }
    state->registered = 0;
    state->mounted = 0;
    state->unk1a = 0;
    state->workMemory = NULL;
    state->firstRegion = NULL;
    state->secondRegion = NULL;
    state->archiveWorkspace = NULL;
    state->archivePath = NULL;
    state->enabled = 1;
}

} /* extern "C" */
