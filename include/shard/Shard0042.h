/* Structs shared by the helper functions in code shard 0042. */
#ifndef SHARD_SHARD0042_H
#define SHARD_SHARD0042_H

#include "common.h"

#include "shard/Shard0041.h"

typedef struct State2C {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 state;
} State2C;

typedef struct CounterPair {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 unk06;
    /* 0x07 */ u8 unk07[0x51];
    /* 0x58 */ s32 unk58;
    /* 0x5C */ s32 unk5C;
} CounterPair;

typedef struct VObj VObj;

typedef struct VVtbl {
    /* 0x00 */ void (*slot0)(VObj *self);
    /* 0x04 */ void (*slot1)(VObj *self, VObj *other);
} VVtbl;

struct VObj {
    /* 0x00 */ const VVtbl *vtbl;
};

typedef struct Block158Owner {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ s32 unk0C;
    /* 0x010 */ u8 unk010[0x148];
    /* 0x158 */ u8 block158[4];
} Block158Owner;

typedef struct VtblHandle {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 handle;
} VtblHandle;

typedef struct HalfPair48 {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u16 unk48;
    /* 0x4A */ u16 unk4A;
} HalfPair48;

/* Small callback-owned state reset by the initialization hooks. */
typedef struct CallbackState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 count;
    /* 0x0C */ u32 pending;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 value;
} CallbackState;

typedef struct TouchRegionValue {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ s16 value;
    /* 0x04 */ u8 unk04[4];
} TouchRegionValue;

typedef struct TouchRegionValues {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ TouchRegionValue regions[200];
} TouchRegionValues;

typedef struct TouchRegionValuesOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TouchRegionValues *values;
} TouchRegionValuesOwner;

/* A callback-owning polymorphic object exposed through jobGetWork(). */
class JobPendingOwner {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void reset();
};

typedef struct JobPendingWork {
    /* 0x00 */ JobPendingOwner *owner;
} JobPendingWork;

#endif
