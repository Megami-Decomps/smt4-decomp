#include "classes/Obj420990.h"

/* Releases the two handle entries, then everything the base filter holds. */
Obj420990::~Obj420990()
{
    if (handles != NULL) {
        for (int i = 0; i < 2; i++) {
            obj420794ReleaseTexture(handles[i].handle);
            handles[i].handle = 0;
        }
        asdMemFree(handles);
        handles = NULL;
    }
}
