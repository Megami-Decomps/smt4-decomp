/* Small container and handle types shared by the helper functions in code shard 0031. */
#ifndef SHARD_SHARD0031_H
#define SHARD_SHARD0031_H

#include "common.h"
#include <stddef.h>
#include "ui/MessageMain.h"
#include "status/StatusDown.h"
#include "ui/PartyPanelState.h"
#include "ui/ButtonHelp.h"
#include "shard/NaviMain.h"
#include "shard/W6_W6Match3_ChunkPool.h"

/* Doubly linked list node; the list keeps a sentinel node whose `prev` is the last element. */
typedef struct ListNode {
    /* 0x00 */ struct ListNode *next;
    /* 0x04 */ struct ListNode *prev;
    /* 0x08 */ u32 value;
} ListNode;

typedef struct List {
    /* 0x00 */ ListNode *sentinel;
    /* 0x04 */ u32 size;
} List;

/* A pointer to an object whose vtable slot 1 releases it. */
typedef struct Object Object;

typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(Object *self);
} ObjectVtbl;

struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

typedef struct OwnedPtr {
    /* 0x00 */ Object *object;
} OwnedPtr;

/* Fixed-size slot (0xD8 bytes). */
typedef struct Slot {
    /* 0x00 */ u8 data[0xD8];
} Slot;

/* Slot 0 lives inline; the others are in a separately allocated array. */
typedef struct SlotSet {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Slot *others;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ Slot first;
} SlotSet;

typedef struct HandleSource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 index;
    /* 0x05 */ u8 unk05[0xAB];
    /* 0xB0 */ void *handle;
} HandleSource;

typedef struct HandleWatcher {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 pending;       /* cleared once the source's handle reports ready */
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ HandleSource *source;
} HandleWatcher;

/* An object guarded by a critical section at +8. */
typedef struct Locked {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 lock[0xC];    /* nn::os::CriticalSection */
} Locked;

/* Container with a linked list header at +0x10. */
typedef struct ListOwner {
    union {
        /* 0x00 */ u8 unk00[0x10];
        /* 0x00 */ ChunkPool pool;
    };
    /* 0x10 */ List list;
} ListOwner;

typedef struct ListHolder {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ ListNode *sentinel;
    /* 0x30 */ u32 size;
} ListHolder;

typedef struct ListHolderOwner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ ListHolder holder;
} ListHolderOwner;

/* Pointer-pair vector (begin, end). */
typedef struct Vector {
    /* 0x00 */ u32 begin;
    /* 0x04 */ u32 end;
} Vector;

typedef struct VectorOwner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Vector vector;
} VectorOwner;

/* Object with a state byte at +0x34 (2 = finished). */
typedef struct StateObject {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 state;
} StateObject;

/* A range [used, total) style counter pair at +0x14/+0x18. */
typedef struct RangeObject {
    union {
        /* 0x00 */ u8 unk00[0x14];
        struct {
            u8 prefix[0xc];
            u8 *base;
            u32 length;
        } payload;
    };
    /* 0x14 */ s32 end;
    /* 0x18 */ s32 pos;
} RangeObject;
typedef char RangeObjectPayloadOffsets[
    offsetof(RangeObject, payload.base) == 0xc &&
    offsetof(RangeObject, payload.length) == 0x10 &&
    sizeof(RangeObject) == 0x1c ? 1 : -1];

typedef struct Child22 {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 mode;           /* 5 = inactive */
} Child22;

typedef struct ChildOwner {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ Child22 *child;
} ChildOwner;

/* Two-field record copied by value: a 16-bit key and a 32-bit value. */
typedef struct KeyValue {
    /* 0x00 */ u16 key;
    /* 0x04 */ u32 value;
} KeyValue;

/* Reference-counted handle: the handle at +4 is acquired, and held while `locked` is set. */
typedef struct HandleLock {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 *handle;
    /* 0x08 */ u8 unk08[0x34];
    /* 0x3C */ u8 locked;
} HandleLock;

/* Three words copied as a unit. */
typedef struct Word3 {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u32 w1;
    /* 0x08 */ u32 w2;
} Word3;

/* online::ObjectThreadRoot (OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp). */
typedef struct ObjectThreadRoot {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
} ObjectThreadRoot;

/* An object holding a sub-object at +0x68. */


/* The work area of a list box process; overlays AsdListBox. */
typedef struct ListBoxWork {
    /* 0x00 */ u8 unk00[0x3D];
    /* 0x3D */ u8 unk3D;
    /* 0x3E */ u8 unk3E[2];
    /* 0x40 */ u32 unk40;
} ListBoxWork;

/* A pointer whose bit 0 flags that sysFatalBreak must run before the object is released. */
typedef struct TaggedOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 tagged;
} TaggedOwner;

/* Globals holding a pointer to an object at +4. */




/* Object at g_buttonHelp+4. */
/* Object at g_buttonHelp+4. */
/* Object at g_buttonHelp+4. */
/* Object at g_buttonHelp+4. */
/* Object at g_buttonHelp+4. */
/* Object at g_buttonHelp+4. */






typedef struct CecEntry {
    /* 0x00 */ u8 data[100];
} CecEntry;

typedef struct CecProcess {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 handle;
    /* 0x08 */ u8 unk08[0x90];
    /* 0x98 */ CecEntry entries[0x20];
} CecProcess;

/* Four lists of up to 16 handles, released by different callees. */
typedef struct HandleSet {
    /* 0x00 */ u32 *flag;       /* cleared on reset */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ s32 countA;
    /* 0x10 */ s32 countB;
    /* 0x14 */ s32 countC;
    /* 0x18 */ s32 countD;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u8 unk20[0x30];
    /* 0x50 */ u32 listA[16];
    /* 0x90 */ u32 listB[16];
    /* 0xD0 */ u32 listC[16];
    /* 0x110 */ u32 listD[16];
} HandleSet;

/* A status-screen scene: owns an object released through its vtable. */
typedef struct StatusScene {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Object *object;
    /* 0x20 */ u8 unk20[0xC];
    /* 0x2C */ u8 unk2C;
} StatusScene;

/* A scene waiting on a job (+0xF4); `unk144` is set once the job finishes. */
typedef struct JobScene {
    /* 0x000 */ u8 unk000[0xF4];
    /* 0x0F4 */ u32 job;
    /* 0x0F8 */ u8 unk0F8[0x4C];
    /* 0x144 */ u32 unk144;
} JobScene;

typedef struct Entry98 {
    /* 0x00 */ u8 unk00[0xD8];
    /* 0xD8 */ s32 unkD8;
} Entry98;

typedef struct JobWorkC {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
} JobWorkC;







typedef struct ObjectE0 {
    /* 0x00 */ u8 unk00[0xFA4];
    /* 0xFA4 */ u8 unkFA4;
    /* 0xFA5 */ u8 unkFA5[0x4F];
    /* 0xFF4 */ u8 unkFF4;
    /* 0xFF5 */ u8 unkFF5[0x4B];
    /* 0x1040 */ u8 unk1040;
    /* 0x1041 */ u8 unk1041[0x2];
    /* 0x1043 */ u8 unk1043;
    /* 0x1044 */ u8 unk1044;
    /* 0x1045 */ u8 unk1045;
    /* 0x1046 */ u8 unk1046[0x408];
    /* 0x144E */ u8 unk144E;
    /* 0x144F */ u8 unk144F[0x1];
    /* 0x1450 */ u8 unk1450;
    /* 0x1451 */ u8 unk1451;
    /* 0x1452 */ u8 unk1452;
    /* 0x1453 */ u8 unk1453[0x31];
    /* 0x1484 */ u32 unk1484;
    /* 0x1488 */ u32 unk1488;
} ObjectE0;

typedef struct GameDataBlock {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[0x2D60];
    /* 0x2D68 */ u8 unk2D68[4];
    /* 0x2D6C */ u8 unk2D6C[0x1F0A8];
    /* 0x21E14 */ u32 unk21E14;
    /* 0x21E18 */ u8 unk21E18[0x6074];
    /* 0x27E8C */ u32 unk27E8C;
    /* 0x27E90 */ u32 unk27E90;
    /* 0x27E94 */ u8 unk27E94[0x230];
    /* 0x280C4 */ u16 unk280C4[1];
    /* 0x280C6 */ u8 unk280C6[0x28A];
    /* 0x28350 */ u8 unk28350[4];
} GameDataBlock;

typedef struct GameDataBlocks {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ GameDataBlock *block;
    /* 0x08 */ GameDataBlock *block2;
} GameDataBlocks;

/* Entry with two cached values; the setters do nothing once `inactive` is set and raise the
 * dirty byte next to the value when it changes. */
typedef struct FlaggedEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 unk24[0x24];
    /* 0x48 */ s32 unk48;
    /* 0x4C */ u8 unk4C[0x14];
    /* 0x60 */ u8 dirty20;
    /* 0x61 */ u8 dirty48;
    /* 0x62 */ u8 inactive;
} FlaggedEntry;

typedef struct Lookup62 {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
} Lookup62;

typedef struct Player1C {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 value;
} Player1C;

/* One demon record in the slot table. */
typedef struct SlotTableEntry {
    /* 0x000 */ u8 unk000[0x66];
    /* 0x066 */ u8 slotId;
    /* 0x067 */ u8 unk067[0xC5];
} SlotTableEntry;
typedef char SlotTableEntrySizeCheck[sizeof(SlotTableEntry) == 0x12C ? 1 : -1];

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x68];
    /* 0x0068 */ SlotTableEntry entries[0x18];
    /* 0x1C88 */ s8 slots[0x18];      /* -1 = empty */
} SlotTable;
typedef char SlotTableSlotsOffsetCheck[sizeof(SlotTable) == 0x1CA0 ? 1 : -1];

struct PartyStatusSlots {
    /* 0x0000 */ SlotTable active;
    /* 0x1CA0 */ s8 reserve[3];
};
typedef char PartyStatusSlotsSizeCheck[sizeof(PartyStatusSlots) == 0x1CA3 ? 1 : -1];

typedef struct JobRef {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x1];
    /* 0x05 */ u8 unk05;
} JobRef;

typedef struct ByteTableA {
    /* 0x00 */ u8 unk00[0x2];
    /* 0x02 */ s8 value;
    /* 0x03 */ s8 value3;
} ByteTableA;





/* Appends pairs of halfwords (up to 4) to two parallel arrays. */
typedef struct PairLog {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x8];
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 first[4];
    /* 0x16 */ u16 second[4];
    /* 0x1E */ u16 count;
    /* 0x20 */ u8 unk20;
} PairLog;

typedef struct Region9100 {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ u8 flag;
} Region9100;

typedef struct HolderOf9100 {
    /* 0x0000 */ u8 unk0000[0x9100];
    /* 0x9100 */ Region9100 region;
} HolderOf9100;

/* The singleton at g_campCec+4 (status screen state). */
typedef struct OverlayObj {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x3C];
    /* 0x40 */ u8 block40[0x50];
    /* 0x90 */ u8 block90[0x20];
    /* 0xB0 */ StatusScene scene;
    /* 0xE0 */ u8 unkE0[0x4];
    /* 0xE4 */ void *buffer0;
    /* 0xE8 */ void *buffer1;
    /* 0xEC */ u8 unkEC[0x8];
    /* 0xF4 */ u32 scriptProcess;
    /* 0x0F8 */ u8 unk0F8[0x54];
    /* 0x14C */ u32 unk14C;
    /* 0x150 */ u8 unk150[0x18];
    /* 0x168 */ u32 unk168;
    /* 0x16C */ u8 unk16C;
    /* 0x16D */ u8 unk16D[0x7];
    /* 0x174 */ u32 unk174;
    /* 0x178 */ u8 unk178[0x28];
    /* 0x1A0 */ u32 unk1A0;
    /* 0x1A4 */ u8 unk1A4;
} OverlayObj;

typedef struct OverlayRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ OverlayObj *instance;
} OverlayRef;

typedef char CampCecOverlayLayoutCheck[sizeof(OverlayObj) == 0x1A8 ? 1 : -1];

typedef char CampCecOverlayOffsets[offsetof(OverlayObj, scriptProcess) == 0xF4 && offsetof(OverlayObj, unk14C) == 0x14C ? 1 : -1];

#endif
