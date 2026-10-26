#ifndef CLASSES_FILE_SLOT_H
#define CLASSES_FILE_SLOT_H

#include "common.h"

/* One entry of the g_fileSlots table of loaded files. */
struct FileSlot {
    const char *path; // 0x00
    void *data; // 0x04
    u32 size; // 0x08
    u8 busy; // 0x0c
    u8 unk0d[3];
};

#define FILE_SLOT_COUNT 67

extern "C" {
extern FileSlot g_fileSlots[FILE_SLOT_COUNT];
}

#endif
