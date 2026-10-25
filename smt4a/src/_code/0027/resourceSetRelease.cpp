#include "common.h"

extern "C" {

/* A reference-owned resource: slot 1 releases it. */
class OwnedResource {
public:
    virtual void unk00();
    virtual void release();
};

struct ResourceSet {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ OwnedResource *first;
    /* 0x20 */ OwnedResource *second;
    /* 0x24 */ OwnedResource *third;
};

struct ResourceContext {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ ResourceSet set;
};

extern ResourceContext *g_mapTrap;

/* Releases and clears the three resources held by the map trap's set. */
void resourceSetRelease(void)
{
    ResourceSet *set = &g_mapTrap->set;

    if (set->first != NULL) {
        set->first->release();
        set->first = NULL;
    }
    if (set->second != NULL) {
        set->second->release();
        set->second = NULL;
    }
    if (set->third != NULL) {
        set->third->release();
        set->third = NULL;
    }
}

} /* extern "C" */
