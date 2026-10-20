#include "classes/Obj55afc4.h"

/* Told when an object lets go of its child. */
class ChildListener {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void onRelease(Obj55afc4Child *child);
};

typedef struct {
    u8 unk00[0x48];
    ChildListener *listener;  /* 0x48 */
} ListenerTable;

extern ListenerTable g_listenerTable;

/* Stops the child and tells the global listener (if any) that it is released. */
Obj55afc4::~Obj55afc4()
{
    stop();
    if (g_listenerTable.listener != NULL) {
        g_listenerTable.listener->onRelease(child);
    }
}
