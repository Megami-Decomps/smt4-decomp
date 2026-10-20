#include "common.h"

extern "C" {
int jobStop(int job, int arg);
int countdownTimerUpdate(void);
int FUN_003ad390(void);
}

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
    /* 0x08 */ u8 unk08Data[0x588];
    /* 0x590 */ OwnerChild *child;
};

extern "C" {

/* Releases the child, updates the countdown timer, lets the owner finish and stops its job. */
void jobOwnerStop(JobOwner *owner)
{
    OwnerChild *child = owner->child;

    if (child != NULL) {
        child->release();
        owner->child = NULL;
    }
    countdownTimerUpdate();
    FUN_003ad390();
    owner->finish();
    jobStop(owner->job, 0);
}

} /* extern "C" */
