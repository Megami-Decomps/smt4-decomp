#include "common.h"

extern "C" {

typedef struct Child Child;

typedef struct ChildVtable {
    /* 0x00 */ void (*unk00)(Child *child);
    /* 0x04 */ void (*release)(Child *child);
} ChildVtable;

struct Child {
    /* 0x0 */ ChildVtable *vtable;
};

typedef struct MapIfPanel {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x1B];
    /* 0x1C */ Child *child;
} MapIfPanel;

typedef struct MapIf {
    /* 0x0000 */ u8 unk0000[0xCC1C];
    /* 0xCC1C */ MapIfPanel panel;
} MapIf;

extern MapIf *g_mapIf;

/* Releases the map interface panel's child object and clears its active flag. */
void mapIfReleasePanel(void)
{
    MapIfPanel *panel = &g_mapIf->panel;
    Child *child = panel->child;

    if (child != NULL) {
        child->vtable->release(child);
        panel->child = NULL;
    }
    panel->active = 0;
}

} /* extern "C" */
