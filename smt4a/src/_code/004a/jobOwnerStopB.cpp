/* NON_MATCHING: register allocation only: retail keeps the registry flag word in r1, built in r2. */
#include "common.h"

extern "C" {
int jobStop(int job, int arg);
int dataTableFree(int id);
int texSetRelease(void);
int FUN_004a6d5c(void *block);
}

typedef struct HandleRegistry {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} HandleRegistry;

/* The child object an owner releases when it stops. */
class OwnerChild {
public:
    virtual void unk00();
    virtual void release();
};

/* A job-driven object (vtable slot 10 finishes it). */
class JobOwner {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0C();
    virtual void unk10();
    virtual void unk14();
    virtual void unk18();
    virtual void unk1C();
    virtual void unk20();
    virtual void unk24();
    virtual void finish();

    /* 0x00: vtable pointer */
    /* 0x04 */ s32 job;
    /* 0x08 */ u8 unk08Data[0x8E];
    /* 0x96 */ u8 block[0x7B6];
    /* 0x84C */ OwnerChild *child;
    /* 0x850 */ u8 unk850[0x10];
    /* 0x860 */ s8 state;
};

extern "C" {

extern HandleRegistry *g_handleRegistry;

/* Releases the child, clears the registry flags 0-1, finishes the owner through its vtable and stops its job. */
void jobOwnerStopB(JobOwner *owner)
{
    OwnerChild *child = owner->child;

    if (child != NULL) {
        child->release();
        owner->child = NULL;
    }
    FUN_004a6d5c(owner->block);
    g_handleRegistry->flags &= ~3;
    if (owner->state == 1) {
        texSetRelease();
    }
    owner->finish();
    dataTableFree(0x22);
    jobStop(owner->job, 0);
}

} /* extern "C" */
