/* NON_MATCHING: native scoped-lock construction is integrated; Thumb stack allocation and global-marker setup still differ. */
#include "classes/Obj55a218.h"
#include "classes/Obj55b28c.h"

struct SystemHandleList;


struct SystemHandleLink {
    SystemHandleLink* previous; // 0x00
    SystemHandleLink* next;     // 0x04
};

extern "C" {
void* operatorNew(u32 size);
SystemHandleLink* FUN_00132f3c(SystemHandleList* list, u32 count);
extern u8 DAT_006306ac;
extern u8* DAT_005c4c18;
}

struct SystemHandleList {
    u32 unk00;              // 0x00
    u32 unk04;              // 0x04
    u32 unk08;              // 0x08
    u32 unk0c;              // 0x0c
    SystemHandleLink* head; // 0x10
    u32 unk14;              // 0x14

    static void* operator new(u32 size) throw() { return operatorNew(size); }

    SystemHandleList()
        : unk00(0), unk04(0), unk08(0), unk0c(0), head(NULL), unk14(0)
    {
        head = FUN_00132f3c(this, 1);
        head->previous = head;
        head->next = head;
    }
};

struct SystemRegistryView {
    u8 unk00[0x18];          // 0x00
    u32 references;          // 0x18
    SystemHandleList* lists; // 0x1c
    u8 marker;               // 0x20
};

// Acquire the mutex and lazily initialize the shared system handle list.
extern "C" void systemAcquireHandleList()
{
    Obj55b28c lock(&DAT_006306ac);
    SystemRegistryView* system = (SystemRegistryView*)&g_systemTable;
    if (system->references == 0) {
        system->lists = new SystemHandleList;
    }
    ++system->references;
    DAT_005c4c18 = &system->marker;
}
