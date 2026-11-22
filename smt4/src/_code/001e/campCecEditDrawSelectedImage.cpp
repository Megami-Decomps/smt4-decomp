#include "camp/CampCec/CampCecEdit.h"

extern "C" {

int messageDrawSelectedImagePair(u32 a, void *b);
extern int partyPanelAcceptsAction(void);

extern CampCecEdit *g_campCecEdit;

u32 campCecEditDrawSelectedImage(void)
{
    CampCecEdit *obj = g_campCecEdit;

    if (partyPanelAcceptsAction() == 0) {
        messageDrawSelectedImagePair(obj->requestHandle, &obj->upperSlides[1]);
    }
    return 0;
}

} /* extern "C" */
