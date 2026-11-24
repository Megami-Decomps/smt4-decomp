#ifndef CLASSES_OBJ422214_OWNER_H
#define CLASSES_OBJ422214_OWNER_H

#include "classes/Obj422214.h"
#include "nn/fnd/DateTime.h"
#include <stddef.h>

#include "addon/AocRequestMemory.h"

/* Nonpolymorphic owner of the concrete buffer window at offset 0x9bc. */
struct Obj422214Owner {
    Obj422214Owner();
    ~Obj422214Owner();
    /* The record arrays come from the engine's allocator (smt4a aocCatalogBuildItemRecords, smt4 aocCatalogBuildContentRecords). */
    static void *operator new[](u32 bytes) throw() { return aocRecordMemoryAlloc(bytes); }
    /* 0x000 */ u8 header[0x80];
    /* 0x080 */ u8 directory[0x100];
    /* 0x180 */ u8 contents[0x800];
    /* 0x980 */ char valueText[0x20];   /* a numeric attribute (or the sale's text) as text; 0 sets flags[5] */
    /* 0x9A0 */ nn::fnd::DateTime modified;
    /* 0x9A8 */ u16 iconId;          /* the content icon archiveReadIcon reads, 0xFFFF for none */
    /* 0x9AA */ u16 contentId;  /* the id the AOC menu passes to its purchase and license requests */
    /* 0x9AC */ u8 flags[8];
    /* 0x9B4 */ u8 unk9B4[4];
    /* 0x9B8 */ u32 blocks;          /* the content's size in blocks */
    /* 0x9BC */ Obj422214 buffers;
};

typedef char Obj422214Owner_buffers_offset[
    offsetof(Obj422214Owner, buffers) == 0x9bc ? 1 : -1];
typedef char Obj422214Owner_size[sizeof(Obj422214Owner) == 0x9c8 ? 1 : -1];

#endif
