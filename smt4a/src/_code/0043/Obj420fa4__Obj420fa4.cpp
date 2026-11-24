/* NON_MATCHING: vtable/enable stores are hoisted ahead of the zero-state stores, and the vptr register differs. */
#include "classes/Obj420fa4.h"

/* Starts with empty scanner state and enables scanning. */
Obj420fa4::Obj420fa4()
    : unk04Value(0), unk08Value(0), unk0c(0), unk10(0), unk14(0),
      registered(0), mounted(0), unk1a(0), workMemory(NULL), firstRegion(NULL), secondRegion(NULL),
      archiveWorkspace(NULL), archivePath(NULL), enabled(1)
{
}
