/* NON_MATCHING: shared base destructor calls IV's bufferHandleRelease/asdMemFreeNonNull rather than Apocalypse's textureOwnerReset/asdOperatorDelete. */
#include "classes/Obj420990.h"

/* Releases the two handle entries, then everything the base filter holds. */
Obj420990::~Obj420990()
{
    if (handles != NULL) {
        for (int i = 0; i < 2; i++) {
            bufferHandleRelease(handles[i].handle);
            handles[i].handle = 0;
        }
        asdMemFree(handles);
        handles = NULL;
    }
}
