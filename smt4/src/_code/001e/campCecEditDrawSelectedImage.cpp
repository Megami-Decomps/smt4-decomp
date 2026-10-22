#include "camp/CampCec/CampCecEdit.h"

extern "C" {

int messageDrawSelectedImagePair(u32 a, void *b);
extern int FUN_001ed80c(void);

extern CampCecEdit *g_campCecEdit;

u32 campCecEditDrawSelectedImage(void)
{
    CampCecEdit *obj = g_campCecEdit;

    if (FUN_001ed80c() == 0) {
        messageDrawSelectedImagePair(obj->requestHandle, obj->selectedImage);
    }
    return 0;
}

} /* extern "C" */
