/* Loads an add-on package's text file of a given kind into a buffer (smt4a). */
#ifndef ADDON_AOCDRAWTEXT_H
#define ADDON_AOCDRAWTEXT_H

#include "addon/aocMain.h"

extern "C" {

/* The kind 7 text (script) of package `id`; NULL when the package has none. */
void *aocDrawText7(AocSystemA *system, u32 id, s32 flags);

/* The kind 8 text (messages) of package `id`; NULL when the package has none. */
void *aocDrawText8(AocSystemA *system, u32 id, s32 flags);

} /* extern "C" */

#endif
