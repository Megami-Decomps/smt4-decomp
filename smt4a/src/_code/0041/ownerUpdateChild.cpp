#include "common.h"

/* A child task the owner drives: slot 3 updates it, slot 4 stops it. */
class OwnedChild004188ec {
public:
    /* Slots 0/1: the complete and deleting destructors. */
    virtual ~OwnedChild004188ec();
    virtual void unk08();
    virtual void update();
    virtual void stop();
    /* 0x04 */ u8 complete;
};

struct Owner004188ec {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 done;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ OwnedChild004188ec *child;
};

extern "C" {

/* Updates the child and deletes it once its completion flag is set. Marks the owner done unless a child is still pending. */
void ownerUpdateChild(Owner004188ec *owner)
{
    if (owner->child == NULL) {
        owner->done = 1;
        return;
    }
    owner->child->update();
    if (owner->child != NULL) {
        if (owner->child->complete == 0) {
            return;
        }
        owner->child->stop();
        delete owner->child;
        owner->child = NULL;
    }
    owner->done = 1;
}

} /* extern "C" */
